$( document ).ready(function() {
	//kickoff map logic
    initialize();

    //map navigation, this could become as witch
    map.on('click', function(e){
    	addMarker(e);
		identifyDistrict(e);
		$('#geocodeFeedback').hide();
		$("#geocodeAddress").val('');
				
	});

    //mobile search form #RWD
  //   if ($(window).width() < 417){
  //   	$('.smallscreen').show();
  //   } else {
		// $('.smallscreen').hide();
  //   }
    // $("#searchButton").click(function(event){
    // 	event.preventDefault();
    // 	//ar address = $( this ).val();
    // 	geoCodeAddress(geocoder, map);
    // });
    $("#geocodeAddress").bind("keypress", {}, keypressInBox);
    //hide links - format is off until results come back
    $('.memberLink').hide();

	//Members UI click turn red with 'active' class
	$( ".mnhouse, .mnsenate, .ushouse" ).click(function() {
	  $(this).addClass('active').siblings().removeClass('active');
	  showDistrict($(this).attr('class'));

	});
	//get static minnesota geojson
	$( ".ussenate1, .ussenate2" ).click(function() {
	 	 $(this).addClass('active').siblings().removeClass('active');
	  	//console.log($(this).attr('class'));
	  	//getCongLayersGeoJson();
	  	if(typeof MinnesotaBoundaryLayer === 'undefined'){
			$.getJSON("./data/Minnesota2015.json", function(data) {
				var myStyle = {
    				"color": "#231f20",
    				"weight": 2,
    				"opacity": 0.65
				};
				MinnesotaBoundaryLayer = L.geoJson(data, {style:myStyle});
  			}).done(function(){
  				showSenateDistrict();
  			});
  		} else {
  			showSenateDistrict();
  		}	  	

	});

	//Open layers tab
	$('#triangle-topright').click(function(){
  		$(this).animate({right:'-100px'},250, function(){
    		$('#map_layers').animate({right:0},250);
  		});  
	});

    //Close layers tab
	$('#map_layers_toggle').click(function(){
  		$('#map_layers').animate({right:'-225px'},250, function(){
    		$('#triangle-topright').animate({right:0},250);
  		});  
	});
	
	//Toggle basemap
	$('#satellitonoffswitch').click(function(){

		if (map.hasLayer(vectorBasemap)){
			map.removeLayer(vectorBasemap);
			map.addLayer(streetsBasemap);
		} else {
			map.removeLayer(streetsBasemap);
			map.addLayer(vectorBasemap);
		}
	});

    //fetch overlay layers
	$('#countyonoffswitch, #cononoffswitch, #ssonoffswitch, #shonoffswitch, #cityonoffswitch').click(function(){
		//console.log(typeof($(this).attr('id')));
        getOverlayLayers($(this), $(this).attr('id'));
	});

	//map reset
	$('#map_reset').click(function(){
		map.setView(L.latLng(46.1706, -93.6678),6);
		$('#mask').show();
		$('#geocodeFeedback').hide();
		$("#geocodeAddress").val('');
		$( ".mnhouse, .mnsenate, .ushouse, .ussenate1, .ussenate2" ).removeClass('active');
		$('.memberLink').hide();
		$('#housemember, #senatemember, #ushousemember, #ussenatemember, #ussenatemember2').html('');
		$('#housedistrict, #senatedistrict, #ushousedistrict, #ussenatedistrict, #ussenatedistrict2').html('');
		$('#housephoto, #senatephoto, #ushousephoto, #ussenatephoto, #ussenatephoto2').removeAttr('src');

		//Toggle basemap when you reset -- LATER SET ALL CHECKBOXES THIS WAY!!!
		//verbose, should do this cleaner
		if($('#satellitonoffswitch').is(':checked')){
				//:checked = true -> leave it ... when I copied the switches I had initial states backwards
		} else {
			//:checked = false -> toggle map
			toggleBaseLayers($('#satellitonoffswitch'),streetsBasemap,vectorBasemap);
			$('#satellitonoffswitch').prop('checked', true);
		}
		// reset additional layers too
		if($('#countyonoffswitch').is(':checked')){
				//:checked = true -> leave it ... when I copied the switches I had initial states backwards
		} else {
			//:checked = false -> toggle map
			$('#countyonoffswitch').prop('checked', true);
		}
		if($('#cityonoffswitch').is(':checked')){
				//:checked = true -> leave it ... when I copied the switches I had initial states backwards
		} else {
			//:checked = false -> toggle map
			$('#cityonoffswitch').prop('checked', true);
		}
		if($('#cononoffswitch').is(':checked')){
				//:checked = true -> leave it ... when I copied the switches I had initial states backwards
		} else {
			//:checked = false -> toggle map
			$('#cononoffswitch').prop('checked', true);
		}
		if($('#ssonoffswitch').is(':checked')){
				//:checked = true -> leave it ... when I copied the switches I had initial states backwards
		} else {
			//:checked = false -> toggle map
			$('#ssonoffswitch').prop('checked', true);
		}
		if($('#shonoffswitch').is(':checked')){
				//:checked = true -> leave it ... when I copied the switches I had initial states backwards
		} else {
			//:checked = false -> toggle map
			$('#shonoffswitch').prop('checked', true);
		}
		//Remove all layers except the basemap -- down here because its an asychronous thead apparently
		map.eachLayer(function(layer){
			//Remove map layers
			if (typeof layer._url === "undefined"){
				map.removeLayer(layer);
			};	

		});
	   
	});


	//----- OPEN Modal
    $('[data-popup-open]').on('click', function(e)  {
        var targeted_popup_class = $(this).attr('data-popup-open');
        $('[data-popup="' + targeted_popup_class + '"]').fadeIn(350);
 
        e.preventDefault();
    });
 
    //----- CLOSE Modal
    $('[data-popup-close]').on('click', function(e)  {
        var targeted_popup_class = $(this).attr('data-popup-close');
        $('[data-popup="' + targeted_popup_class + '"]').fadeOut(350);
 
        e.preventDefault();
    });

    //attach a hover method to layers ribbon
    $('#triangle-topright').on('mouseenter', function(){
    	$('.fa-map').css('color', '#346f9a'); 
    }).on('mouseleave', function(){
    	$('.fa-map').css('color', '#8d8d8d');
    });

    

$('#loading').hide();
});//end ready()

