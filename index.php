
<?
	    define('INCLUDEPATH',"views/");
	    include(INCLUDEPATH."top2018.inc");
?>

<!-- Main Content -->
<div id="legContainerMain" class="container py-4 px-0 px-md-3"> <!--use overflow-hidden to hide content-->
	<div class="row">
		<div class="col py-md-1">
			<h1 class="leg-portal-header text-center mb-1"><span class="d-none d-sm-inline">Geographic Information Services |</span> <span class="text-secondary">Who Represents Me?</span></h1>
		</div>
	</div>
	<div class="row">
		<div class="col px-md-0">
			<!-- <div id='map_reset' class="float-right"><a class='noref'>Reset Map <i class="fas fa-sync-alt"></i></a></div> -->
			<button id='map_reset' type="button" class="btn btn-outline-primary btn-sm float-right mb-1">Reset Map <i class="fas fa-sync-alt"></i>
			</button>

		</div>

	</div>
	<div class="row">
		<nav class="col-md-6 col-lg-4 sidebar px-md-0">
			<div class="sidebar-sticky">
				<div class='search px-1 py-1'>
					<label for="geocode" class="mb-0">Enter Address, City, State, and Zipcode</label>
					<div class="input-group input-group-sm pt-2">
						<div class="input-group-prepend d-md-none">
							<button id="gpsButton" class="btn btn-primary"><i class="fa fa-location-arrow" alt="Zoom to GPS location"></i></button>
						</div>
						<input id ="geocodeAddress" type="text" class="form-control" name="geocode" aria-label="Enter Addresss" aria-describedby="searchButton">
						<div class="input-group-append">
							<button class="btn btn-primary" type="button" id="searchButton" class="searchButton" alt="Submit address"><i class="fa fa-search"></i></button>
						</div>
					</div>
					<p id="geocodeFeedback"></p>
				</div> 
				<!-- end search -->
				<div id="sidebar"> <!-- class="animate"-->
					<div id="toggleSidebar">Go to Map <i class="fa fa-chevron-right"></i></div>
					<div id="mask">		
					<div id="pull-in"  class="btn btn-primary">
					<i class="fa fa-chevron-left"> </i>
				</div>				
						<p><strong>Get Started: </strong></p>
						<ul class="p-0">
							<li>For best results, enter a complete Minnesota address.</li>
							<span class="text-center"> -- or -- </span>

							<li>Single-click or touch the map to select a search location. </li>
						</ul>
						<hr>
						<ul class="p-0">
							<li class="helpers">Please note the 
								<span style="color:#2b6dad; font-size:11px; padding:5px;">
									<i class="fa fa-info-circle"> </i>
									<i class="fa fa-exclamation-triangle"> </i>
									<i class="fas fa-sync-alt"> </i>
								</span> buttons placed around the map.
							</li>
						</ul>
					</div>

					<div id="officials">
						<div class='mnhouse'>
							<img id='housephoto' class='mnhouse_img img-fluid' src="data:image/gif;base64,R0lGODlhAQABAAD/ACwAAAAAAQABAAACADs=" width="0" height="0" alt=""/>

							<div class="contact-info float-right">
								<a id='mnhouselink' target="_blank" class="btn btn-outline-primary btn-sm" title><span class="contact">Contact </span><i class="fas fa-address-card"></i></a>
							</div>

							<div class="member-info">
								<div id='housemember' class='font-weight-bold'></div>
								<div id='housedistrict' class=""></div>
							</div>
							<div class="map-it float-right">
								<button id="mnhousemap" class="btn btn-outline-primary btn-sm"  title="View district"><span class="contact">District </span><i class="fas fa-map-marked-alt"></i></button>										
							</div>
							
							</div>
							<div class='mnsenate'>
								<img id='senatephoto' class='mnsenate_img img-fluid' src="data:image/gif;base64,R0lGODlhAQABAAD/ACwAAAAAAQABAAACADs=" width="0" height="0" alt=""/>

								<div class="contact-info float-right">
									<a id="mnsenlink" target="_blank" class="btn btn-outline-primary btn-sm" title><span class="contact">Contact </span><i class="fas fa-address-card"></i></a>									
								</div>
								<div class="member-info">
									<div id='senatemember' class='font-weight-bold'></div>
									<div id='senatedistrict' class=''></div>
								</div>
								<div class="map-it float-right">
									<button id="mnsenmap" class="btn btn-outline-primary btn-sm" title="View district"><span class="contact">District </span><i class="fas fa-map-marked-alt"></i></button>										
								</div>
							</div>

							<div class='ushouse'>
								<img id='ushousephoto' class='ushouse_img img-fluid' src="data:image/gif;base64,R0lGODlhAQABAAD/ACwAAAAAAQABAAACADs=" width="0" height="0" alt="" />

								<div class="contact-info float-right">
									<a id="ushouselink" target="_blank" class="btn btn-outline-primary btn-sm" title><span class="contact">Contact </span><i class="fas fa-address-card"></i></a>				
								</div>

								<div class="member-info">
									<div id='ushousemember'  class='font-weight-bold'></div>
									<div id='ushousedistrict' class=''></div>
								</div>

								<div class="map-it float-right">
									<button id="ushousemap" class="btn btn-outline-primary btn-sm" title="View district"><span class="contact">District </span><i class="fas fa-map-marked-alt"></i></button>
								</div>
								
							</div>
							<div class='ussenate1'>
								
									<img id='ussenatephoto' class='ussenate1_img img-fluid' src="data:image/gif;base64,R0lGODlhAQABAAD/ACwAAAAAAQABAAACADs=" width="0" height="0" alt=""/>

									<div class="contact-info float-right">
										<a id="ussenatelink" target="_blank" class="btn btn-outline-primary btn-sm"  title><span class="contact">Contact </span><i class="fas fa-address-card"></i></a>				
									</div>

									<div class="member-info">
										<div id='ussenatemember' class='font-weight-bold'></div>
										<div id='ussenatedistrict' class=''></div>
									</div>
									<div class="map-it float-right">
										<button id="ussenatemap" class="btn btn-outline-primary btn-sm" title="View district"><span class="contact">District </span><i class="fas fa-map-marked-alt"></i></button>
									</div>
							
								
							</div>
							<div class='ussenate2'>
									<img id='ussenatephoto2' class='ussenate2_img img-fluid' src="data:image/gif;base64,R0lGODlhAQABAAD/ACwAAAAAAQABAAACADs=" width="0" height="0" alt=""  />

									<div class="contact-info float-right">
										<a id="ussenate2link" target="_blank" class="btn btn-outline-primary btn-sm" title><span class="contact">Contact </span><i class="fas fa-address-card"></i></a>				
									</div>

									<div class="member-info">
										<div id='ussenatemember2' class='font-weight-bold'></div>
										<div id='ussenatedistrict2' class=''></div>
									</div>

									<div class="map-it float-right">
										<button id="ussenate2map" class="btn btn-outline-primary btn-sm" title="View district"><span class="contact">District </span><i class="fas fa-map-marked-alt"></i></button>
									</div>
								
							</div>
						</div>
					</div>
				</div>
				
				<div id="pull-out" class="btn btn-primary">
					<i class="fa fa-chevron-right"> </i>
				</div>
		</nav>
		<main role="main" class="col-md-6 col-lg-8  pl-md-2 pr-md-0">
				<a ><div id="triangle-topright"><i class="fa fa-map fa-lg"></i></div></a>
				<div id="map_layers">
					<div id="map_layers_content">
						<div id="map_layers_toggle" class="font-weight-light"> Hide Layers <i class="fa fa-map fa-sm"></i> <i class="fa fa-chevron-right fa-sm"></i></div>
						<div id="map_layers_content_title">Layers</div>
						<div id="map_layers_content_list">
							<div id="shdiv"class="onoffswitch">
								<input type="checkbox" name="onoffswitch" class="onoffswitch-checkbox" id="shonoffswitch" checked>
								<label class="onoffswitch-label" for="shonoffswitch">
									<span class="onoffswitch-inner"></span>
									<span class="onoffswitch-switch"></span>
								</label>
							</div>

							<div class='layersswitchLabel font-weight-light'>State House Districts</div>
							<div id="ssdiv"class="onoffswitch">
								<input type="checkbox" name="onoffswitch" class="onoffswitch-checkbox" id="ssonoffswitch" checked>
								<label class="onoffswitch-label" for="ssonoffswitch">
									<span class="onoffswitch-inner"></span>
									<span class="onoffswitch-switch"></span>
								</label>
							</div>

							<div class='layersswitchLabel font-weight-light'>State Senate Districts</div>
							<div id="congressdiv"class="onoffswitch">

								<input type="checkbox" name="onoffswitch" class="onoffswitch-checkbox" id="cononoffswitch" checked>
								<label class="onoffswitch-label" for="cononoffswitch">
									<span class="onoffswitch-inner"></span>
									<span class="onoffswitch-switch"></span>
								</label>

							</div>
							<div class='layersswitchLabel font-weight-light'>Congressional Districts</div>
							<!-- boudaries -->
							<div id="citydiv"class="onoffswitch">

								<input type="checkbox" name="onoffswitch" class="onoffswitch-checkbox" id="cityonoffswitch" checked>
								<label class="onoffswitch-label" for="cityonoffswitch">
									<span class="onoffswitch-inner"></span>
									<span class="onoffswitch-switch"></span>
								</label>

							</div>
							<div class='layersswitchLabel font-weight-light'>Municipal Boundaries</div>

							<div id="countydiv"class="onoffswitch">

								<input type="checkbox" name="onoffswitch" class="onoffswitch-checkbox" id="countyonoffswitch" checked>
								<label class="onoffswitch-label" for="countyonoffswitch">
									<span class="onoffswitch-inner"></span>
									<span class="onoffswitch-switch"></span>
								</label>

							</div>
							<div class='layersswitchLabel font-weight-light'>County Boundaries</div>
						</div>

						<div id="map_layers_basemap_title">Basemap Layers</div>
						<!-- <button id = "switchBasemap">Switch</button> -->
						<div id="satellitediv"class="onoffswitch">

							<input type="checkbox" name="onoffswitch" class="onoffswitch-checkbox" id="satellitonoffswitch" checked>
							<label class="onoffswitch-label" for="satellitonoffswitch">
								<span class="onoffswitch-inner"></span>
								<span class="onoffswitch-switch"></span>
							</label>

						</div>
						<div id='switchLabel'>Satelite Imagery</div>
					</div>
				</div>
				<div id='map'></div>
		</main>
	</div>

		<div class="row">
			<div class="col-md-4"></div>
			<div class="col-md-8 pl-md-2 pr-md-0 pt-2">

				<button id='map_help' type="button" class="btn btn-outline-primary btn-sm" data-toggle="modal" data-target="#help">Help <i class="fa fa-info-circle"></i>
				</button>

				<button id='map_disclaimer' type="button" class="btn btn-outline-primary btn-sm float-right" data-toggle="modal" data-target="#disclaimer">Disclaimer <i class="fa fa-exclamation-triangle"></i></button>
			</div>
		</div>	
	</div>


</div>
<!-- help modal -->
<div class="modal fade" id="help" tabindex="-1" role="dialog" aria-hidden="true">
	<div class="modal-dialog modal-dialog-centered" role="document">
		<div class="modal-content">
			<div class="modal-header">
				<h5 class="modal-title" id="popup-1">Help Section</h5>
				<button type="button" class="close" data-dismiss="modal" aria-label="Close">
					<span aria-hidden="true">&times;</span>
				</button>
			</div>
			<div class="modal-body">
				<ul style="list-style-type:disc">
					<li> Use the zoom control (+ -) in upper left or use your mouse wheel to zoom-in and zoom-out of the map. </li>
					<li> Click and drag the map to pan around the map. </li>
					<li> Click the map icon in upper right to view available layers. </li>
					<li> Toggle switches in layers tab to turn on/off layers. </li>
					<li> Select member in results tab to open the member's webpage</li>
					<li> Select <span class='contact'>Show District <i class="fa fa-external-link"></i></span> to view the member's district boundary.</li>
				</ul>
			</div>
		</div>
	</div>
</div>

<!-- dislaimer modal -->
<div class="modal fade" id="disclaimer" tabindex="-1" role="dialog" aria-hidden="true">
	<div class="modal-dialog modal-dialog-centered" role="document">
		<div class="modal-content">
			<div class="modal-header">
				<h5 class="modal-title" id="popup-2">Disclaimer</h5>
				<button type="button" class="close" data-dismiss="modal" aria-label="Close">
					<span aria-hidden="true">&times;</span>
				</button>
			</div>
			<div class="modal-body">
				<p>
					PLEASE NOTE: This Web application is intended to provide general information only.  Due to limitations in the data, the District Finder may incorrectly identify which district you live in, especially if the address is near the boundary of the district (where errors are more likely to occur).  Please examine the map to determine whether your address is near the boundary.  If it is, we recommend that you contact your county elections office.

				</p>
			</div>
		</div>
	</div>
</div>


<?
	    define('INCLUDEPATH',"views/");
	    include(INCLUDEPATH."footer2018.inc");
?>