<!DOCTYPE html>
<html lang="en">
<head>
  <!-- Required meta tags always come first -->
  <meta charset="utf-8">
  <meta content="width=device-width, initial-scale=1, shrink-to-fit=no" name="viewport">
  <meta content="ie=edge" http-equiv="x-ua-compatible">
  <!-- ==================================================
  INSTRUCTIONS:


  ================================================== -->
    <meta name="Description" content="Minnesota Legislature | LCC-GIS" />
    <meta name="Keywords" content="state government, legislature, districts, who represents me" />
    <META name="DC.Language" content="English">
    <meta  HTTP-EQUIV="Cache-Control" content="public">

    <meta name="author" content="Leg. Coordinating Commission GIS">
    <!--Facebook Share customization open graph meta tags. https://developers.facebook.com/tools/debug/og/object/-->
    <meta property="fb:app_id" content="1837822423128844" />
    <meta property="og:url"                content="http://www.gis.leg.mn/iMaps/districts/" />
    <meta property="og:type"               content="website" />
    <meta property="og:title"              content="Who Represents Me?" />
    <meta property="og:description"        content="Interactive map of the Minnesota Legislature." />
    <meta property="og:image"              content="http://www.gis.leg.mn/iMaps/districts/images/Social/social3.png" />

    <meta name="twitter:card" content="summary_large_image">
    <meta name="twitter:site:id" content="@ChrisCantey">
    <meta name="twitter:creator" content="@ChrisCantey">
    <meta name="twitter:title" content="Who Represents Me?">
    <meta name="twitter:description" content="Interactive map of the Minnesota Legislature.">
    <meta name="twitter:image" content="https://www.gis.leg.mn/iMaps/districts/images/Social/social2.png">

  <link href="https://ww2.gis.leg.mn/assets/js/jquery-ui-1.12.1.custom/jquery-ui.min.css" rel="stylesheet">

  <!-- LNET compiled SASS -->
  <link href="https://ww2.gis.leg.mn/assets/styles/css/app.css" rel="stylesheet">
  <!-- jQuery needs to load before Bootstrap JS. -->
  <script src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
  <script src='https://ajax.googleapis.com/ajax/libs/jqueryui/1.12.1/jquery-ui.min.js'></script>

  <script src="https://ww2.gis.leg.mn/assets/js/getParameterByName.js"></script>
  <script src="https://ww2.gis.leg.mn/assets/js/calendar.js"></script>
  <script src="https://ww2.gis.leg.mn/assets/js/navbarhelper.js"></script>
  <script src="https://ww2.gis.leg.mn/assets/js/bootstrapWindowHelper.js"></script>
  <script defer src="https://use.fontawesome.com/releases/v5.2.0/js/all.js"></script>

    <!-- <link rel="stylesheet" href="https://unpkg.com/leaflet@1.3.4/dist/leaflet.css" /> -->
  <link href='https://api.mapbox.com/mapbox.js/v3.1.1/mapbox.css' rel='stylesheet' />
  <link rel="stylesheet" href="css/app.css" />
  <script src="js/app.js"></script>
  <script src="js/helper.js"></script>
  <!-- <script src="https://unpkg.com/leaflet@1.3.4/dist/leaflet.js"></script> -->
    <!--uses Google JS APi -not geocoding API -->
  <script src="https://maps.googleapis.com/maps/api/js?key=AIzaSyCAPiQ_pNX0vOYz5w04VSn0WUTS_5knWOg" > 
  </script>
  <script src='https://api.mapbox.com/mapbox.js/v3.1.1/mapbox.js'></script>
  <link rel="stylesheet" href="css/plugins/leaflet-gesture-handling.min.css" type="text/css">
<script src="js/plugins/leaflet-gesture-handling.min.js"></script>

  <title>LCC-GIS</title>
  </head>
  <body class="joint"> <!-- closing tag in footer -->
    <script>
      window.fbAsyncInit = function() {
        FB.init({
          appId      : '1837822423128844',
          xfbml      : true,
          version    : 'v2.8'
        });
        FB.AppEvents.logPageView();
      };

      (function(d, s, id){
         var js, fjs = d.getElementsByTagName(s)[0];
         if (d.getElementById(id)) {return;}
         js = d.createElement(s); js.id = id;
         js.src = "//connect.facebook.net/en_US/sdk.js";
         fjs.parentNode.insertBefore(js, fjs);
       }(document, 'script', 'facebook-jssdk'));
    </script>

    <script>
      (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
      (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
      m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
      })(window,document,'script','https://www.google-analytics.com/analytics.js','ga');

      ga('create', 'UA-7370043-1', 'auto');
      ga('send', 'pageview');

    </script>

      <!--skip nav for accessibility-->
      <a href="#legContainerMain" class="skip-navigation">Skip to main content</a>
      <a href="#legSubNav" class="skip-navigation">Skip to office menu</a>
      <a href="#legFooter" class="skip-navigation">Skip to footer</a>

      <div class="container-fluid"> <!-- closing tag in footer -->

       <div class="leg-brand-container bg-darkgray py-1 pl-0">
           <div class="container  d-print-none">
            <img src="https://ww2.gis.leg.mn/assets/img/icons/capitol2.svg" height="24px" style="margin-top:-8px;opacity:0.95">
               <a id="ctl00_HyperLink1" class="leg-brand-text text-white pl-1" href="https://www.leg.state.mn.us/">Minnesota Legislature</a>


               <form class="form-inline float-right ml-auto d-none d-md-block p-0">
               <label class="sr-only" for="main-search">Search Legislature</label>                
                <input class="form-control form-control-sm align-top mr-2 js-search" id="main-search" name="search" placeholder="Search..." type="text">  
                <button class="js-search-btn btn btn-darkgray btn-sm"><i class="fas fa-search"></i><span class="p-1"> Search</span></button>
              </form> 

              <!-- <form class="form-inline float-sm-right ml-auto p-0 leg-search-form"> 
              <div class="input-group py-0 mr-2 js-search">
                <input type="text" class="form-control form-control-sm py-0" placeholder="Search" aria-label="Search" aria-describedby="basic-addon2">
                <div class="input-group-append">
                  <button class="btn btn-outline-secondary btn-sm js-search-btn" type="button"><i class="fas fa-search"></i></button>
                </div>
              </div>  
              </form>  -->  



           </div>           
       </div>                 

        <!-- We can change *-dark to *-house, *-senate, *-joint and add that color to variables -->
        <nav class="navbar navbar-dark bg-dark navbar-expand-lg px-0 py-1 d-block d-print-none">
          <div class="container">
            <div class="w-100 px-auto">
              <div class="col-12 position-static p-lg-0">
               <button aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation" class="navbar-toggler" data-target="#top-nav" data-toggle="collapse" type="button"><span class="navbar-toggler-icon"></span></button>
                <span class="d-lg-none pl-1 text-white leg-menu-text" data-toggle="collapse" data-target="#top-nav"> Menu</span>

                <div class="collapse navbar-collapse py-0" id="top-nav">
                  <ul class="navbar-nav mt-2 mt-lg-0 px-2 pl-lg-0">
                   <!--  <li class="nav-item mr-3">
                      <a  class="nav-link" data-parent="#top-nav"  href="https://www.leg.state.mn.us/">Legislature</a>
                    </li> -->

                    <li class="nav-item">
                      <a aria-controls="houseExternalContent" aria-expanded="false" class="nav-link dropdown-toggle pl-0" data-parent="#top-nav" data-toggle="collapse" href="#houseExternalContent">House</a>
                    </li>
                    <div class="dropdown collapse navbar-nav-collapse" id="houseExternalContent">
                      <div class="bg-dark">
                        <div class="container px-3">
                          <div class="row">
                            <div class="col nav-header  "><a href="https://www.house.leg.state.mn.us/">Minnesota House of Representatives</a></div>
                          </div>
                          <hr class="my-1 bg-secondary">
                          <div class="row">
                            <div class="col-12 col-sm-6 col-md-3 mt-1">
                              <!-- <h2 class="text-white">Minnesota House of Representatives</h2> -->
                              <dl>
                                <dt class="text-white pb-1">House Members and Staff</dt>
                                <dd><a href="http://www.house.leg.state.mn.us/members/hmem.asp">House Members</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/members/houseleaders.asp">Leadership</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/hinfo/staff.asp">Staff</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/has/employment.asp">Employment</a></dd>

                                <dd><a href="http://www.leg.state.mn.us/leg/districtfinder.aspx">Who Represents Me?</a></dd>
                              </dl>
                            </div>
                            <div class="col-12 col-sm-6 col-md-3 mt-1">
                              <dl>
                                <dt class="text-white pb-1">Committees</dt>
                                <dd><a href="http://www.house.leg.state.mn.us/comm/commemlist.asp">Committee List</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/hinfo/leginfo/comroster.pdf">Committee Roster</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/hinfo/scheduleall.asp">Upcoming Meetings</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/hinfo/11comgrid.pdf">Standing Committee Schedule</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/comm/commminutes.asp">Minutes</a></dd>
                                <dd><a href="http://www.leg.state.mn.us/leg/deadlines.aspx">Committee Deadlines</a></dd>
                              </dl>
                            </div>
                            <div class="col-12 col-sm-6 col-md-3 mt-1">
                              <dl>
                                <dt class="text-white pb-1">Offices</dt>
                                <dd><a href="http://www.house.leg.state.mn.us/cco/cco.asp">Chief Clerk</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/fiscal/fahome.asp">Fiscal Analysis</a></dd>         
                                <dd><a href="http://www.house.leg.state.mn.us/hrd/hrd.aspx">House Research</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/hinfo/hinfo.asp">Public Information</a></dd> 
                                <dd><a href="http://www.house.leg.state.mn.us/sergeant/sergeant.asp">Sergeant-at-Arms</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/caucuses.asp">Caucuses - DFL/GOP</a></dd>
                              </dl>
                            </div>
                            <div class="col-12 col-sm-6 col-md-3 mt-1">
                              <dl>
                                <dt class="text-white pb-1">Other Information</dt>
                                <dd><a href="http://www.house.leg.state.mn.us/cco/journals/journl.asp">House Journal</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/cco/rules/permrule/permrule.asp">House Rules</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/cco/rules/jtrule/jtrule.asp">Joint Rules</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/sergeant/education.asp">Educational Programs</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/members/pronunciation.asp">Pronunciation Guide</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/members/meminfo.xls">Address Spreadsheet</a></dd>
                              </dl>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>

                    <li class="nav-item">
                      <a aria-controls="senateExternalContent" aria-expanded="false" class="nav-link dropdown-toggle" data-parent="#top-nav" data-toggle="collapse" href="#senateExternalContent">Senate</a>
                    </li>
                    <div class="dropdown collapse navbar-nav-collapse" id="senateExternalContent">
                      <div class="bg-dark">
                        <div class="container px-3">
                          <div class="row">
                            <div class="col nav-header pb-1"><a href="http://www.senate.mn/">Minnesota Senate</a></div>
                          </div>
                          <hr class="my-1 bg-secondary">
                          <div class="row">
                            <div class="col-12 col-sm-6 col-md-3">
                              <!-- <h2 class="text-white">Minnesota House of Representatives</h2> -->
                              <dl>
                                <dt class="text-white pb-1">Senators and Staff</dt>
                                <dd class="text-white"><a href="http://www.senate.mn/members/index.php?ls=#header">Senators</a></dd>
                                <dd class="text-muted"><a href="http://www.senate.mn/members/index.php?ls=#leader">Leadership</a></dd>
                                <dd class="text-muted"><a href="http://www.senate.mn/employees/employee_list.php?ls=">Staff</a></dd>
                                <dd class="text-muted"><a href="http://www.senate.mn/jobs/index.php?office_id=1005&amp;div_id=1020#header">Employment</a></dd>
                                <dd><a href="http://www.leg.state.mn.us/leg/districtfinder.aspx">Who Represents Me?</a></dd>

                                <!-- <dd class="text-muted">Employment</dd> -->
                              </dl>
                            </div>
                            <div class="col-12 col-sm-6 col-md-3">
                              <dl>
                                <dt class="text-white pb-1">Committees</dt>
                                <dd><a href="http://www.senate.mn/committees">Committee List</a></dd>
                                <!--<li><a href="/committees/2017-2018/info/comlegal.pdf">Committee Roster</a></li>-->
                                <dd><a href="http://www.senate.mn/committees/display_pdf_cmte_roster.php">Committee Roster</a></dd>
                                <dd><a href="http://www.senate.mn/schedule/schedule.php?ls=&amp;cmte_id=&amp;cmte_type=&amp;type=upcoming">Upcoming Meetings</a></dd>
                                <dd><a href="http://www.senate.mn/committees/cmte_meeting_schedule.php?ls=">Standing Committee Schedule</a></dd>
                                <dd><a href="http://www.leg.state.mn.us/leg/deadlines.aspx">Committee Deadlines</a></dd>
                              </dl>
                            </div>
                            <div class="col-12 col-sm-6 col-md-3">
                              <dl>
                                <dt class="text-white pb-1">Offices</dt>
                                <dd><a href="http://www.senate.mn/departments/office_bio.php?office_id=1005&amp;ls=">Secretary of the Senate</a></dd>
                                <dd><a href="http://www.senate.mn/departments/office_bio.php?office_id=1007&amp;ls=">Senate Counsel, Research &amp; Fiscal Analysis</a></dd>                      
                                <dd><a href="http://www.senate.mn/caucus/index.php?ls=#header">Caucuses - DFL/GOP</a></dd>
                              </dl>
                            </div>
                            <div class="col-12 col-sm-6 col-md-3">
                              <dl>
                                <dt class="text-white pb-1">Other Information</dt>
                                <dd><a href="http://www.senate.mn/rules/index.php?ls=#rulesofthesenate">Senate Rules</a></dd>
                                <dd><a href="http://www.senate.mn/rules/index.php#jointrules">Joint Rules</a></dd>
                                <dd><a href="http://www.senate.mn/departments/secretary/info/interns/index.php#header">Educational Programs</a></dd>
                                <dd><a href="http://www.senate.mn/members/member_pronounce.php?ls=#header">Pronunciation Guide</a></dd>
                                <dd><a href="http://www.senate.mn/members/member_labels_page.php?ls=">Address Labels</a></dd>

                              </dl>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>

                    <li class="nav-item">
                      <a aria-controls="jointExternalContent" aria-expanded="false" class="nav-link dropdown-toggle" data-parent="#top-nav" data-toggle="collapse" href="#jointExternalContent">Joint</a>
                    </li>
                    <div class="dropdown collapse navbar-nav-collapse" id="jointExternalContent">
                      <div class="bg-dark">
                        <div class="container px-3">
                          <div class="row">
                            <div class="col nav-header pb-1"><a href="https://www.commissions.leg.state.mn.us/">Joint Departments, Offices, and Commissions</a></div>
                          </div>
                          <hr class="my-1 bg-secondary">
                          <div class="row">
                            <!-- <div class="col"></div> -->
                            <div class="col-12 col-sm-4">
                              <!-- <h2 class="text-white">Minnesota House of Representatives</h2> -->
                              <dl>
                                <dt class="text-white pb-1">Joint Legislative Offices</dt>
                                <dd><a href="https://www.revisor.mn.gov/">Revisor of Statutes</a></dd>
                                <dd><a href="http://www.leg.state.mn.us/lrl/lrl.aspx">Legislative Reference Library</a></dd> 
                                <dd><a href="http://www.auditor.leg.state.mn.us/">Office of the Legislative Auditor</a></dd>
                                <dd><a href="http://www.lbo.leg.mn/">Legislative Budget Office</a></dd>
                              </dl>
                            </div>
                            <div class="col-12 col-sm-4">
                              <dl  class="mb-0">
                                <dt class="text-white pb-1">Commissions</dt>
                                <dd><a href="http://www.lcc.leg.mn/">Legislative Coordinating Commission (LCC)</a></dd> 
                                <dd><a href="http://www.lccmr.leg.mn/">Legislative-Citizen Commission on MN Resources (LCCMR)</a></dd>

                              </dl>
                            </div>
                            <div class="col-12 col-sm-4">
                              <dl>

                                <dd class="mt-md-4"><a href="http://www.lcpr.leg.mn/">Legislative Commission on Pensions &amp; Retirement (LCPR)</a></dd>                    
                                <dd><a href="http://www.lsohc.leg.mn/">Lessard-Sams Outdoor Heritage Council</a></dd>
                                <dd><a href="http://www.legacy.mn.gov/">Legacy Amendment</a></dd>      
                                <dd><a href="http://www.commissions.leg.state.mn.us/">More...</a></dd>
                              </dl>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>

                    <li class="nav-item">
                      <a aria-controls="schedulesExternalContent" aria-expanded="false" class="nav-link dropdown-toggle" data-parent="#top-nav" data-toggle="collapse" href="#schedulesExternalContent">Schedules</a>
                    </li>
                    <div class="dropdown collapse navbar-nav-collapse" id="schedulesExternalContent">
                      <div class="bg-dark">
                        <div class="container px-3">
                          <div class="row">
                            <div class="col nav-header pb-1"><a href="https://www.leg.state.mn.us/leg/schedules">Schedules, Calendars, and Legislative Business</a></div>
                          </div>
                          <hr class="my-1 bg-secondary">
                          <div class="row">

                            <div class="col-12 col-sm-4">
                              <!-- <h2 class="text-white">Minnesota House of Representatives</h2> -->
                              <dl>
                                <dt class="text-white pb-1">House</dt>
                                <dd><a href="http://www.house.leg.state.mn.us/hinfo/hinfosched.asp">House Schedules</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/cco/orders/orders.htm">Order of Business</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/cco/calendar.asp">Calendar for the Day</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/cco/calendarsup.asp">Supplemental Calendar for the Day</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/cco/fiscal.asp">Fiscal Calendar</a></dd>
                              </dl>
                            </div>
                            <div class="col-12 col-sm-4">
                              <dl>
                                <dt class="text-white pb-1">Senate</dt>
                                <dd><a href="http://www.senate.leg.state.mn.us/schedule/schedule.php?ls=">Senate Schedules</a></dd>
                                <dd><a href="http://www.senate.mn/orders/index.php#header">Order of Business</a></dd>
                                <dd><a href="http://www.senate.mn/orders/calendar.html">Senate Calendar</a></dd>
                                <dd><a href="http://www.senate.mn/orders/go.html">General Orders of the Day</a></dd>
                              </dl>
                            </div>
                            <div class="col-12 col-sm-4">
                              <dl>
                                <dt class="text-white pb-1">Joint</dt>
                                <dd><a href="http://www.leg.state.mn.us/calendarday.aspx">Combined Upcoming Meetings</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/htv/htv.asp">Broadcast TV Schedule</a></dd>
                                <dd><a href="http://www.leg.state.mn.us/leg/deadlines.aspx">Committee Deadlines</a></dd>
                              </dl>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>

                    <li class="nav-item">
                      <a aria-controls="committeesExternalContent" aria-expanded="false" class="nav-link dropdown-toggle" data-parent="#top-nav" data-toggle="collapse" href="#committeesExternalContent">Committees</a>
                    </li>
                    <div class="dropdown collapse navbar-nav-collapse" id="committeesExternalContent">
                      <div class="bg-dark">
                        <div class="container px-3">
                          <div class="row">
                            <div class="col nav-header pb-1"><a href="https://www.leg.state.mn.us/leg/committees">Legislative Committees</a></div>
                          </div>
                          <hr class="my-1 bg-secondary">
                          <div class="row">
                            <div class="col-12 col-sm-4">
                              <!-- <h2 class="text-white">Minnesota House of Representatives</h2> -->
                              <dl>
                                <dt class="text-white pb-1">House</dt>
                                <dd>
                                  <a href="http://www.house.leg.state.mn.us/comm/commemlist.asp">Committee List</a>
                                </dd>
                                <dd>
                                  <a href="http://www.house.leg.state.mn.us/hinfo/leginfo/comroster.pdf">Committee Roster</a>
                                </dd>
                                <dd>
                                  <a href="http://www.house.leg.state.mn.us/hinfo/scheduleall.asp">Upcoming Meetings</a>
                                </dd>
                                <dd>
                                  <a href="http://www.house.leg.state.mn.us/hinfo/11comgrid.pdf">Standing Committee Schedule</a>
                                </dd>
                                <dd>
                                  <a href="http://www.house.leg.state.mn.us/comm/commminutes.asp">Minutes</a>
                                </dd>                  
                              </dl>
                            </div>
                            <div class="col-12 col-sm-4">
                              <dl>
                                <dt class="text-white pb-1">Senate</dt>
                                <dd>
                                  <a href="http://www.senate.mn/committees">Committee List</a>
                                </dd>
                                <dd>
                                  <a href="http://www.senate.leg.state.mn.us/committees/display_pdf_cmte_roster.php">Committee Roster</a>
                                </dd>
                                <dd>
                                  <a href="http://www.senate.mn/schedule/schedule.php?ls=&amp;cmte_id=&amp;cmte_type=&amp;type=upcoming">Upcoming Meetings</a>
                                </dd>
                                <dd>
                                  <a href="http://www.senate.mn/committees/cmte_meeting_schedule.php?ls=">Standing Committee Schedule</a>
                                </dd>
                              </dl>
                            </div>
                            <div class="col-12 col-sm-4">
                              <dl>
                                <dt class="text-white pb-1">Joint</dt>
                                <dd>
                                  <a href="http://www.commissions.leg.state.mn.us/">Joint Committees &amp; Task Forces</a>
                                </dd>
                                <dd>
                                  <a href="http://www.leg.state.mn.us/leg/deadlines.aspx">Committee Deadlines</a>
                                </dd>
                                <dd>
                                  <a href="http://www.house.leg.state.mn.us/bills/confcommactivity.asp">Bills In Conference Committee</a>
                                </dd>
                                <dd>
                                  <a href="https://www.revisor.mn.gov/bin/sbs.php">Side by Side Comparisons</a>
                                </dd>
                              </dl>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>

                    <li class="nav-item">
                      <a aria-controls="billsExternalContent" aria-expanded="false" class="nav-link dropdown-toggle" data-parent="#top-nav" data-toggle="collapse" href="#billsExternalContent">Bills</a>
                    </li>
                    <div class="dropdown collapse navbar-nav-collapse" id="billsExternalContent">
                      <div class="bg-dark">
                        <div class="container px-3">
                          <div class="row">
                            <div class="col nav-header pb-1"><a href="https://www.leg.state.mn.us/leg/legis">Bills</a></div>
                          </div>
                          <hr class="my-1 bg-secondary">
                          <div class="row">
                            <div class="col-12 col-sm-4">
                              <!-- <h2 class="text-white">Minnesota House of Representatives</h2> -->
                              <dl>
                                <dt class="text-white pb-1">House</dt>
                                <dd><a href="https://www.revisor.mn.gov/bills/status_search.php?body=House">Bill Search &amp; Status (House)</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/cco/introductions.asp">Bill Introductions</a></dd>
                                <dd class="text-white">Summaries: <a href="http://www.house.leg.state.mn.us/hrd/billsum.aspx">Bill</a> | <a href="http://www.house.leg.state.mn.us/hrd/actsum.aspx">Act</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/fiscal/tracking.asp">Fiscal Tracking Sheets</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/bills/hotlistarchives.asp">Hot List</a></dd>
                              </dl>
                            </div>
                            <div class="col-12 col-sm-4">
                              <dl>
                                <dt class="text-white pb-1">Senate</dt>
                                <dd><a href="https://www.revisor.mn.gov/bills/status_search.php?body=Senate">Bill Search &amp; Status (Senate)</a></dd>
                                <dd><a href="http://www.senate.mn/orders/intros/index.php#header">Bill Introductions</a></dd>
                                <dd class="text-white">Summaries: <a href="http://www.senate.leg.state.mn.us/departments/scr/billsumm/index.php?summary_type=bill#header">Bill</a> | 
                                  <a href="http://www.senate.leg.state.mn.us/departments/scr/billsumm/index.php?ls=&amp;sumtype=act#header">Act</a></dd>
                                  <dd><a href="http://www.senate.leg.state.mn.us/departments/fiscalpol/tracking/index.php?ls=#header">Fiscal Tracking Sheets</a></dd>
                                  <dd><a href="http://www.senate.mn/departments/secretary/info/publications/popularbills.pdf">Hot List</a>
                                </dd>
                              </dl>
                            </div>
                            <div class="col-12 col-sm-4">
                              <dl>
                                <dt class="text-white pb-1">Joint</dt>
                                <dd><a href="http://www.leg.state.mn.us/leg/legis.aspx">Bill Search &amp; Status</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/leg/billsublogin.asp">MyBills</a></dd>
                                <dd><a href="https://www.revisor.mn.gov/bin/sbs.php">Side by Side Comparisons</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/bills/confcommactivity.asp">Bills In Conference Committee</a></dd>
                                <dd><a href="http://www.leg.state.mn.us/lrl/vetoes/vetodetails.aspx">Vetoes</a></dd>
                                <dd><a href="https://www.revisor.mn.gov/laws/current/">Current Session Laws</a></dd>
                              </dl>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>

                    <li class="nav-item">
                      <a aria-controls="lawExternalContent" aria-expanded="false" class="nav-link dropdown-toggle" data-parent="#top-nav" data-toggle="collapse" href="#lawExternalContent">Law</a>
                    </li>
                    <div class="dropdown collapse navbar-nav-collapse" id="lawExternalContent">
                      <div class="bg-dark">
                        <div class="container px-3">
                          <div class="row">
                            <div class="col nav-header pb-1"><a href="https://www.revisor.mn.gov/pubs/">Statutes, Laws, and Rules</a></div>
                          </div>
                          <hr class="my-1 bg-secondary">
                          <div class="row">
                            <div class="col-12 col-sm-6 col-md-3">
                              <!-- <h2 class="text-white">Minnesota House of Representatives</h2> -->
                              <dl>
                                <dt class="text-white">Statutes</dt>
                                
                                <dd><a href="https://www.revisor.mn.gov/search/?search=all&amp;stat=1&amp;laws=1&amp;rule=1&amp;court=1">Keyword Search</a>
                                </dd>
                                <dd><a href="https://www.revisor.mn.gov/statutes/">Current Statutes</a>
                                </dd>
                                <dd><a href="https://www.revisor.mn.gov/statutes/?view=index">Statutes by Topic (Index)</a>
                                </dd>
                                <dd><a href="https://www.revisor.mn.gov/statutes/?view=archive">Statutes Archive</a>
                                </dd>
                              </dl>
                            </div>
                            <div class="col-12 col-sm-6 col-md-3">
                              <dl>
                                <dt class="text-white">Session Laws</dt>
                                <dd><a href="https://www.revisor.mn.gov/search/?search=all&amp;stat=0&amp;laws=1&amp;rule=0&amp;court=0">Keyword Search</a></dd>
                                <dd><a href="https://www.revisor.mn.gov/laws/current/">Current Session Laws</a></dd>
                                <dd><a href="https://www.revisor.mn.gov/topics/?type=laws">Session Laws by Topic (Index)</a></dd>
                                <dd><a href="https://www.revisor.mn.gov/laws/">Session Laws Archive</a></dd>
                                <dd><a href="https://www.revisor.mn.gov/laws/law_action.php">Session Laws Changed (Table 1)</a></dd>
                                <dd><a href="https://www.revisor.mn.gov/statutes/statute_action.php?full=0">Statutes Changed (Table 2)</a></dd>
                              </dl>
                            </div>
                            <div class="col-12 col-sm-6 col-md-3">
                              <dl>
                                <dt class="text-white">Administrative Rules</dt>
                                <dd><a href="https://www.revisor.mn.gov/search/?search=all&amp;stat=0&amp;laws=0&amp;rule=1&amp;court=0">Keyword Search</a></dd>
                                <dd><a href="https://www.revisor.mn.gov/rules/">Current Rules</a></dd>
                                <dd><a href="https://www.revisor.mn.gov/topics/?type=rule">Rules by Topic (Index)</a></dd>
                                <dd><a href="https://www.revisor.mn.gov/rules/?view=archive">Rules Archive</a></dd>
                                <dd><a href="https://www.revisor.mn.gov/rules/rule_search.php">Minnesota Rule Status</a></dd>
                                <dd><a href="https://www.revisor.mn.gov/state_register/">State Register</a></dd>
                              </dl>
                            </div>
                            <div class="col-12 col-sm-6 col-md-3">
                              <dl>
                                <dt class="text-white">Other Legal Materials</dt>
                                <dd><a href="https://www.revisor.mn.gov/constitution/">Minnesota Constitution</a></dd>
                                <dd><a href="http://www.leg.state.mn.us/lrl/mngov/constitutionalamendments.aspx">State Constitutional Amendments</a></dd>
                                <dd><a href="https://www.revisor.mn.gov/court_rules/">Court Rules</a></dd>
                              </dl>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>

                    <li class="nav-item">
                      <a aria-controls="multimediaExternalContent" aria-expanded="false" class="nav-link dropdown-toggle" data-parent="#top-nav" data-toggle="collapse" href="#multimediaExternalContent">Multimedia</a>
                    </li>
                    <div class="dropdown collapse navbar-nav-collapse" id="multimediaExternalContent">
                      <div class="bg-dark">
                        <div class="container px-3">
                          <div class="row">
                            <div class="col nav-header pb-1"><a href="https://www.leg.state.mn.us/leg/multimedia">Multimedia — Audio, Video, Broadcast TV, News, & Photos</a></div>
                          </div>
                          <hr class="my-1 bg-secondary">
                          <div class="row">
                            <div class="col-12 col-sm-4">
                              <!-- <h2 class="text-white">Minnesota House of Representatives</h2> -->
                              <dl>
                                <dt class="text-white">House</dt>
                                <dd><a href="http://www.house.leg.state.mn.us/htv/mnhouse.asx">Live Video</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/htv/schedule.asp">Webcast Schedule</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/audio/default.asp">Audio &amp; Video Archives</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/hinfo/sdaily.asp">Session Daily</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/hinfo/images.asp">Photos</a></dd>
                              </dl>
                            </div>
                            <div class="col-12 col-sm-4">
                              <dl>
                                <dt class="text-white">Senate</dt>
                                <dd>
                                  <a href="http://mnsenate.granicus.com/ViewPublisher.php?view_id=1">Live Video</a> 
                                </dd>
                                <dd><a href="http://www.senate.mn/media/media_coming_up.php?ls=">Webcast Schedule</a></dd>
                                <dd><a href="http://www.senate.mn/media/index.php?ls=&type=audio">Audio Archives</a></dd>
                                <dd><a href="http://www.senate.mn/media/index.php?ls=&type=video">Video Archives</a></dd>
                                <dd><a href="http://www.senate.mn/media/media_photos.php">Photos</a></dd>
                              </dl>
                            </div>
                            <div class="col-12 col-sm-4">
                              <dl>
                                <dt class="text-white">Joint</dt>
                                <dd><a href="http://www.house.leg.state.mn.us/htv/htv.asp">Broadcast TV Schedule</a></dd>
                                <dd><a href="http://www.lcc.leg.mn/meetings-all.htm">Commission Audio/Video</a></dd>
                              </dl>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>

                    <li class="nav-item">
                      <a aria-controls="publicationsExternalContent" aria-expanded="false" class="nav-link dropdown-toggle" data-parent="#top-nav" data-toggle="collapse" href="#publicationsExternalContent">Publications</a>
                    </li>
                    <div class="dropdown collapse navbar-nav-collapse" id="publicationsExternalContent">
                      <div class="bg-dark">
                        <div class="container px-3">
                          <div class="row">
                            <div class="col nav-header pb-1"><a href="https://www.leg.state.mn.us/leg/publicat">Legislative Research, Reports & Information</a></div>
                          </div>
                          <hr class="my-1 bg-secondary">
                          <div class="row">
                            <div class="col-12 col-sm-6 col-md-3">
                              <!-- <h2 class="text-white">Minnesota House of Representatives</h2> -->
                              <dl>
                                <dt class="text-white">Office Research &amp; Reports</dt>
                                <dd><a href="http://www.house.leg.state.mn.us/fiscal/fahome.asp">House Fiscal Analysis</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/hrd/publications.aspx">House Research</a></dd>
                                <dd><a href="http://www.auditor.leg.state.mn.us/ped/pedintro.htm">Legislative Auditor</a></dd>
                                <dd><a href="https://www.revisor.mn.gov/office/publications.php">Revisor Publications</a></dd>
                                <dd><a href="http://www.senate.leg.state.mn.us/publications">Senate Publications</a></dd>
                                <dd><a href="http://www.leg.state.mn.us/lrl/">Library</a></dd>
                              </dl>
                            </div>
                            <div class="col-12 col-sm-6 col-md-3">
                              <dl>
                                <dt class="text-white">News</dt>
                                <dd><a href="http://www.house.leg.state.mn.us/hinfo/sdaily.asp">House Session Daily</a></dd>
                                <dd><a href="http://www.senate.leg.state.mn.us/media/">Senate Media Services</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/hinfo/leginfo/memroster.pdf">Legislators Roster</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/hinfo/leginfo/elecdir10.pdf">Election Directory</a></dd>

                              </dl>
                            </div>
                            <div class="col-12 col-sm-6 col-md-3">
                              <dl>
                                <dt class="text-white">Legislative History</dt>
                                <dd><a href="http://www.leg.state.mn.us/leg/leghist/histstep.aspx">Legislative History Guide</a></dd>
                                <dd><a href="http://www.leg.state.mn.us/legdb/">Legislators Past &amp; Present</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/cco/journals/journl.asp">House Journal</a></dd>
                                <dd><a href="http://www.senate.leg.state.mn.us/journals/index.php#current">Senate Journal</a></dd>
                                <dd><a href="http://www.leg.state.mn.us/lrl/timecapsule/index.aspx">Legislative Time Capsule</a></dd>
                                <dd><a href="http://www.leg.state.mn.us/lrl/vetoes/vetoes.aspx">Vetoes</a></dd>
                              </dl>
                            </div>
                            <div class="col-12 col-sm-6 col-md-3">
                              <dl>
                                <dt class="text-white">Notable Documents</dt>
                                <dd><a href="http://www.senate.leg.state.mn.us/departments/scr/report/index.php#budgetsummaries">Fiscal Review</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/hrd/databook/datamain.aspx">MN Government in Brief</a></dd>
                                <dd><a href="http://www.leg.state.mn.us/lrl/issues/">Minnesota Issues Guides</a></dd>
                                <dd><a href="http://www.house.leg.state.mn.us/newlaws/">New Laws</a></dd>
                                <dd><a href="http://www.leg.state.mn.us/lrl/booksreports.aspx">Books &amp; reports</a></dd>
                              </dl>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>
                  </ul>
                  <form class="form-inline ml-auto d-block d-md-none p-2">
                    <label class="sr-only js-search-sm-label" for="sm-search">Search Legislature</label>
                    <div class="input-group mb-2 mr-sm-2">

                      <input class="form-control form-control-sm js-sm-search" id="sm-search" name="search" aria-label="Search Legislature" aria-describedby="searchButton" placeholder="Search..." type="text"> 

                      <div class="input-group-append">
                        <button class="js-search-sm-btn btn btn-darkgray btn-sm" type="button" id="searchButton"  alt="Search Button"><i class="fa fa-search"></i></button>
                      </div>

                    </div>
                  </form>

                </div>

              </div>
            </div>
          </div>
        </nav>
        <div class="leg-banner img-joint d-none d-sm-block d-print-none">
          <div class="position-relative h-100">
          <div class="leg-title-container pl-0">
            <div class="container">
              <!-- TWO TITLE LINES -->
              <a class="leg-title-text-2-lines text-white" href="https://ww2.gis.leg.mn/index.html" id="leg-title-text" style="">Legislative Coordinating Commission</a><br>
              <a class="leg-subtitle-text text-white" href="https://ww2.gis.leg.mn/index.html" id="leg-title-text" style="">Geospatial Information</a>

              <!-- <a class="leg-title-text text-white" href="index.html" id="leg-title-text" style="">Legislative Coordinating Commission</a><br> -->
            </div>
          </div>
          </div>
        </div>
        <h1 class="d-none d-print-block text-center" href="/" id="leg-title-text" style="">LCC-GIS Office</h1>
        <nav id="legSubNav" class="navbar navbar-expand-md navbar-joint bg-joint  d-print-none">
          <div class="container">
            <div class="d-block ml-0">
              <button aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation" class="navbar-toggler" data-target="#navbarNav" data-toggle="collapse" type="button"><span class="navbar-toggler-icon"></span></button>
              <span class="d-md-none pl-1 text-white" data-toggle="collapse" data-target="#navbarNav"> GIS Menu</span>
            </div>
            <div class="collapse navbar-collapse" id="navbarNav">
              <ul class="navbar-nav mt-2 mt-lg-0 px-2 pl-lg-0">
                <li class="nav-item">
                  <a class="nav-link pl-md-0" href="https://ww2.gis.leg.mn/index.html">Home</a>
                </li>
                <li class="nav-item dropdown">
                  <a aria-expanded="false" aria-haspopup="true" class="nav-link dropdown-toggle" data-toggle="dropdown" href="#" id="mapsDropdown">Maps and Data</a>
                  <div aria-labelledby="mapsDropdown" class="dropdown-menu">
                    <a class="dropdown-item" href="https://ww2.gis.leg.mn/html/maps.html">Maps Page</a>
                    <a class="dropdown-item" href="https://ww2.gis.leg.mn/hsemapdata.htm">House - Maps and Data</a>
                    <a class="dropdown-item" href="https://ww2.gis.leg.mn/senmapdata.htm">Senate - Maps and Data</a>
                    <a class="dropdown-item" href="https://ww2.gis.leg.mn/cngmapdata.htm">Congress - Maps and Data</a>   
                  </div>
                </li>
                <li class="nav-item dropdown">
                  <a aria-expanded="false" aria-haspopup="true" class="nav-link dropdown-toggle" data-toggle="dropdown" href="#" id="msDropdown">Map Services</a>
                  <div aria-labelledby="msDropdown" class="dropdown-menu">
                    <a class="dropdown-item" href="https://ww2.gis.leg.mn/iMaps/districts/">Who Represents Me</a>
                    <a class="dropdown-item" href="https://ww2.gis.leg.mn/iMaps/schooldistricts/">School District Finder</a>
                    <a class="dropdown-item" href="https://ww2.gis.leg.mn/iMaps/precincts/">Precinct Finder</a>
                    <a class="dropdown-item" href="https://ww2.gis.leg.mn/html/maps.html">More...</a>   
                  </div>
                </li>
                <li class="nav-item dropdown">
                  <a aria-expanded="false" aria-haspopup="true" class="nav-link dropdown-toggle" data-toggle="dropdown" href="#" id="redistrictDropdown">Redistricting</a>
                  <div aria-labelledby="redistrictDropdown" class="dropdown-menu">
                    <h4 class="dropdown-header">Redistricting Plans</h4>
                    <a class="dropdown-item" href="https://ww2.gis.leg.mn/redist2010/plans.php?plname=L2012&pltype=court">2012 Legislative Districts</a>
                    <a class="dropdown-item" href="https://ww2.gis.leg.mn/redist2010/cong10.php?name=C2012&pltype=court">2012 Congressional Districts</a>
                    <a class="dropdown-item" href="https://ww2.gis.leg.mn/html/mcplans2013.html">2013 Metropolitan Council</a>

                    <h4 class="dropdown-header">Redistricting Pages</h4>
                    <a class="dropdown-item" href="https://ww2.gis.leg.mn/html/redistricting.html">2020 Redistricting</a>
                    <a class="dropdown-item" href="https://ww2.gis.leg.mn/html/redistricting2010.html">2010 Redistricting</a>
                    <a class="dropdown-item" href="https://ww2.gis.leg.mn/html/redistricting2000.html">2000 Redistricting</a>
                    <a class="dropdown-item" href="https://ww2.gis.leg.mn/html/redistricting1990.html">1990 Redistricting</a>
                  </div>
                </li>
                <li class="nav-item dropdown">
                  <a aria-expanded="false" aria-haspopup="true" class="nav-link dropdown-toggle" data-toggle="dropdown" href="#" id="lccInfoDropdown">Information</a>
                  <div aria-labelledby="lccInfoDropdown" class="dropdown-menu">
                    <a class="dropdown-item" href="https://ww2.gis.leg.mn/html/about.html">About</a>
                    <a class="dropdown-item" href="http://ww2.gis.leg.mn/staff.html">Staff</a>
                    <a class="dropdown-item" href="http://www.lcc.leg.mn/">LCC Home Page</a>
                  </div>
                </li>
                
              </ul>
              <ul class="navbar-nav ml-auto d-flex flex-row">
                <li class="nav-item" data-toggle="tooltip" data-placement="bottom" title="Email">
                  <a aria-label="email staff" class="nav-link test" href="mailto:lcc@lcc.leg.mn">
                    <i class="far fa-lg fa-envelope"></i>
                  </a>
                </li>
                <li class="nav-item" data-toggle="tooltip" data-placement="bottom" title="Print">
                  <a aria-label="print page" class="nav-link pr-1" href="javascript:window.print();">
                    <i class="fas fa-lg fa-print"></i>
                  </a>
                </li>
              </ul>
            </div>
          </div>
        </nav>

      <!--End of top navigation. Footer needs to close div.container-fluid-->