<!doctype html>
<html lang="en">

	<head>
		<meta charset="utf-8">

		<title>OWC workshop vienna</title>

		<meta name="description" content="A framework for easily creating beautiful presentations using HTML">
		<meta name="author" content="Hakim El Hattab">

		<meta name="apple-mobile-web-app-capable" content="yes">
		<meta name="apple-mobile-web-app-status-bar-style" content="black-translucent">

		<meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no">

		<link rel="stylesheet" href="css/reveal.css">
		<link rel="stylesheet" href="css/theme/black.css" id="theme">

		<!-- Theme used for syntax highlighting of code -->
		<link rel="stylesheet" href="lib/css/zenburn.css">

		<!-- Printing and PDF exports -->
		<script>
			var link = document.createElement( 'link' );
			link.rel = 'stylesheet';
			link.type = 'text/css';
			link.href = window.location.search.match( /print-pdf/gi ) ? 'css/print/pdf.css' : 'css/print/paper.css';
			document.getElementsByTagName( 'head' )[0].appendChild( link );
		</script>

		<!--[if lt IE 9]>
		<script src="lib/js/html5shiv.js"></script>
		<![endif]-->
		<style>
			.navigate-left{
					display: none;
			}
			.navigate-right{
				display: none;
			}
			.navigate-up{
				display: none;
			}

			.navigate-down{
				display: none;
			}
			body {
				font-family: Gill Sans,Gill Sans MT,Calibri,sans-serif;
			}

			.fullscreen-bg {
			    position: fixed;
			    top: 0;
			    right: 0;
			    bottom: 0;
			    left: 0;
			    overflow: hidden;
			    z-index: -100;
					width: 100%;
					height: 100%;
					color: white;
			}

			.fullscreen-bg__video {
			    position: absolute;
			    top: 0;
			    left: 0;
			    width: 100%;
			    height: 100%;
			}

			.owc-mind-map{
				width: 600px !important;
				height: 400px !important;
				top: calc(50% - 300px) !important;
				left: calc(50% - 200px) !important;
				margin: 0px 0px !important;
 			  background: rgba(255, 255, 255, 0) !important;
 				border: none !important;
 				box-shadow: none !important;
			}

			.svg-image{
				background: rgba(255, 255, 255, 0) !important;
				border: none !important;
			  box-shadow: none !important;
			}

		</style>
	</head>

	<body>
		<div class="reveal">
			<div class="slides">

				<section>
					<h2 style="">Open Web Components</h2>
					<div>OWC Review</div>
					<p>
						<small> <span style="color:#59A9C2">Raffaele Bua</span> - <span style="color:#F24D16;">SERCO</span> - <span style="color:#59A9C2">2017</span></small>
					</p>
				</section>

				<section  >
				 <h2>AGENDA</h2>
				 <section >
					 <ul style="margin:50px;">
						 <li>OWC Principles</li>
						 <li>OWC Cross-browser solution</li>
						 <li>Search layout Proposal</li>
					 </ul>

				 </section>
			 </section>

				<section >

					<section id="fragments">
						<h2>Principles</h2>

					</section>
				</section>


				<section data-background="img/user-friendly.jpg">
					<h2>User friendly</h2>
					<p>The application isoriented to Earth Observation audience. Easy to use for scientific professionals</p>
					<!-- <img style="width:600px;border:none;background:none;box-shadow:none" src="img/user-friendly.jpg"></img> -->
				</section>

				<section data-background="img/customizable.jpg">
					<h2>Customizable & extendible</h2>
					<p>The application is composed of reusable, customizable and portable atomic components.</p>
					<!-- <img style="width:600px;border:none;background:none;box-shadow:none" src="img/customizable.jpg"></img> -->

				</section>

				<section data-background="img/cross-device.jpg">
					<h2>Cross-device</h2>
					<p>The application runs in every device.</p>
				</section>


				<section data-background="img/cross-browser.jpg">
					<h2>Cross-browser</h2>
					<p>Most popular browsers are supported.</p>
					<span style="display:inline-block;">
						<img style="display:inline-block;float:left;height:90px;border:none;background:none;box-shadow:none;margin-left:30px;" src="img/chrome.png"></img>
						<img style="display:inline-block;float:left;height:90px;border:none;background:none;box-shadow:none;margin-left:30px;" src="img/edge.png"></img>
						<img style="display:inline-block;float:left;height:90px;border:none;background:none;box-shadow:none;margin-left:30px;" src="img/firefox.png"></img>
						<img style="display:inline-block;float:left;height:90px;border:none;background:none;box-shadow:none;margin-left:30px;" src="img/safari.png"></img>
					</span>
				</section>

				<section data-background="img/cross-browser.jpg">
					<p>The cross-browser compatibility is not supported in the current version of OWC. A proposal of migration follows.</p>
				</section>

				<section data-background="#f6f2e7">
					<h2 style="">OWC Architecture</h2>
					 <img style="width:600px;border:none;background:none;box-shadow:none" src="img/owc-architecture.png"></img>
				</section>

				 <section data-background="#9D2933" >
					<h2>Framework - Services</h2>
					<section >
						<ul style="margin:50px;">
							<li>Networking</li>
							<li>Authentication</li>
							<li>Authorization</li>
							<li>Session</li>

						</ul>
						<ul style="margin:50px;">
							<li>i18n</li>
							<li>Messaging</li>
							<li>Semantic Model </li>
							<li>Plugin system</li>
						</ul>
					</section>
				</section>


				<section data-background="#9D2933" >
				 <h2>Framework - GUI Elements</h2>
				 <section >
					 <ul style="margin:50px;">
						 <li>App  layout</li>
						 <li>Popups</li>
						 <li>Alerts</li>


					 </ul>
					 <ul style="margin:50px;">

						 <li>Toasts</li>
						 <li>Spinner</li>
						 <li>Dynamic Menu</li>
					 </ul>
				 </section>
			 </section>


			 <section data-background="#006442" >
				<h2>EO features</h2>
				<section >
					<ul style="margin:50px;">
						<li>Products search</li>
						<li>Product details</li>
						<li>ADF list</li>
						<li>ADF search</li>


					</ul>
					<ul style="margin:50px;">

						<li>Saved search</li>
						<li>Products map</li>
						<li>WMS visualization</li>
					</ul>
				</section>
			</section>

			<section data-background="#757D75" >
			 <h2>Admin panels</h2>
			 <section >
				 <ul style="margin:50px;">
					 <li>Local archive</li>
					 <li>Email config</li>
					 <li>Restore DB</li>
					 <li>Root password</li>
					 <li>Users</li>
					 <li>File scanners</li>


				 </ul>
				 <ul style="margin:50px;">
					 <li>Events synch</li>
					 <li>Map config</li>
					 <li>Eviction</li>
					 <li>Theme</li>
					 <li>ODATA synch</li>
					 <li>WMS config</li>
				 </ul>
			 </section>
		 </section>

		 <section data-background="#264348" >
			<h2>Data visualization</h2>
			<section >
				<ul style="margin:50px;">
					<li>Calendar</li>
					<li>Cart</li>
					<li>List</li>
					<li>Events</li>
					<li>Info</li>
				</ul>
				<ul style="margin:50px;">
					<li>List components</li>
					<li>Map</li>
					<li>Date-picker</li>
					<li>Timeline</li>
				</ul>
			</section>
		</section>

		<section data-background="#f6f2e7">
			<h2 style="">OWC Migration plan</h2>
			 <img style="width:600px;border:none;background:none;box-shadow:none" src="img/owc-plan.png"></img>
		</section>



				<section>
					<h2 style="">=========</h2>
				</section>

				<section>
					<h2 style="">Open Web Components</h2>
					<div>Web Client for EO data dissemination </div>
					<p>
						<small> <span style="color:#59A9C2">Raffaele Bua</span> - <span style="color:#F24D16;">SERCO & GAEL</span> - <span style="color:#59A9C2">Vienna 2017</span></small>
					</p>
				</section>

				<section>
					<p>
						Open web Component is an <span style="font-size:65px; font-weight: bold;">open</span> source project
					</p>
				</section>

				<section data-background-color="#101010" >
					<p>
						<span>...using the lastest <span style="font-size:65px; font-weight: bold;">web</span> technologies</span>
					</p>
				</section>

				<section  data-background-color="#000000" data-background-opacity="0.5" data-color="#ffffff" style="color:#ffffff;">
					<div >
						<p>
							<span>...based on web <span style="font-size:65px; font-weight: bold;">components</span>
						</p>
					</div>
				</section>

				<section>
					<div style="background-color: #000000;position: fixed;width: 100%;height: 100%;padding: 0px;margin: 0px;opacity:0.3; "></div>
					<section data-background-video="video/ccc.mp4" data-background-color="#000000" >
						<div style=" padding: 20px; z-index:12;opacity:1 !important;font-size:40px;">
							<b>Web Client for EO data dissemination, modular, easy to extend and highly customizable</b>
						</div>
					</section>
				</section>

				<section data-background="#203040">
					<section id="fragments">
						<h2>Core Features</h2>
						<p class="fragment">Messaging among components</p>
						<p class="fragment">Authentication</p>
						<p class="fragment">Layout system</p>
						<p class="fragment">Object oriented web</p>
					</section>
				</section>

				<section data-background="#48393C">
					<h2>Modularity</h2>
				</section>

				<section data-background="#48393C">
					<h2>Web components</h2>
					<p> Every component follows the Object Oriented Programming exploiting Polymer library.</p><p> The web components are atomic and portable elements.</p>
					<p>Web components implementation is available on Chrome.</p>
					<br/>
				</section>

				<section data-background="#48393C">
					<img class="svg-image" width="60%"  data-src="img/web-components.svg" alt="search">
				</section>

				<section data-background="#48393C">
					<h2>Horizontal layout</h2>
					<p>Horizontal layout, the navigation system pushes the components in a horizontal stack.</p>
				</section>

				<section data-background="#48393C">
					<img class="svg-image"  width="100%"  data-src="img/013.png" alt="search">
				</section>



				<section data-background="#16432C">
					<h2>EO Features</h2>
				</section>

				<section data-background="#16432C">
					<h2>Search</h2>
					<p>
						Open search, free text and geographic filters.
						Sorting by ingestion or sensing time. Order by descending/ascending.
						Graphical time range selectors for sensing and ingestion time.
						A save search is possible.
						The results are shown in a list and in a map.
					</p>
				</section>

				<section data-background="#16432C">
					<img class="svg-image"  width="100%"  data-src="img/003.png" alt="search">
				</section>



				<section data-background="#16432C">
					<h2>List comparison </h2>
					<p>
						Presenting two search result lists, comparing search results is possible.
					</p>
				</section>

				<section data-background="#16432C">
					<img class="svg-image"  width="100%"  data-src="img/008.png" alt="search">
				</section>

				<section data-background="#16432C">
					<h2>Product details</h2>
					<p>
						Product details: Quicklook, metadata indexes and attributes.
					</p>
				</section>

				<section data-background="#16432C">
					<img class="svg-image"  width="100%"  data-src="img/006.png" alt="search">
				</section>

				<section data-background="#16432C">
					<h2>Auxiliary data file list</h2>
					<p>
						List of auxiliary data file exploited to process the product.
					</p>
				</section>

				<section data-background="#16432C">
					<img class="svg-image"  width="100%"  data-src="img/007.png" alt="search">
				</section>

				<section data-background="#2980B9">
					<h2>Customization</h2>
				</section>

				<section data-background="#2980B9">
					<h2>Main menu</h2>
					<img class="svg-image"  height="100%"  data-src="img/012.png" alt="search">
				</section>

				<section data-background="#2980B9">
					<img class="svg-image"  height="400px"  data-src="img/014.png" alt="search">
					<p>The main menu sections are customizable, via graphical user interface</p>
				</section>

				<section data-background="#2980B9">
					<h2>Language</h2>
					<p>The language settings are stored  locally in the browser.</p>
				</section>

				<section data-background="#2980B9">
					<img class="svg-image"  height="500px"  data-src="img/017.png" alt="search">
				</section>

				<!--- UNTIL HERE --->

				<section data-background="#2980B9">
					<h2>Theme</h2>
					<p>Theme properties: application title, logo, panels background color, application background image.</p>
				</section>

				<section data-background="#2980B9">
					<img class="svg-image"  height="500px"  data-src="img/018.png" alt="search">
				</section>

				<section data-background="#2980B9">
					<h2>List attributes</h2>
					<img class="svg-image"  height="500px"  data-src="img/019.png" alt="search">
				</section>

				<section data-background="#2980B9">
					<img class="svg-image"  height="150px"  data-src="img/020.png" alt="search">
					<p>Configuration of List Item model. Via the semantic schema, described in the user manual.</p>
				</section>

				<section data-background="#2980B9">
					<h2>Map settings</h2>
					<img class="svg-image"  height="500px"  data-src="img/022.png" alt="search">
				</section>

				<section data-background="#2980B9">
					<img class="svg-image"  height="400px"  data-src="img/021.png" alt="search">
					<p>Configuration of map layers via the definition of the WMS url.</p>
				</section>

				<!-- begin admin panels -->
				<section data-background="#D2D7D3">
					<h2>Admin panels</h2>
				</section>

				<section data-background="#D2D7D3">
					<h2>Upload Management</h2>
					<p>
						Products ingestion via file upload and file scanner.
					</p>
				</section>

				<section data-background="#D2D7D3">
					<img class="svg-image"  width="100%"  data-src="img/027.png" alt="search">
				</section>

				<section data-background="#D2D7D3">
					<h2>Synchronizer List</h2>
					<p>
						List of ODATA synchronizers, to synch products between DHuS instances.
					</p>

				</section>

				<section data-background="#D2D7D3">
					<img class="svg-image"  width="100%"  data-src="img/028.png" alt="search">
				</section>

				<section data-background="#D2D7D3">
					<h2>Synchronizer Editor</h2>
					<p>
						Editor of ODATA Synchronizers. A new version of this component is on-going, with a user friendly UI for beginners.
					</p>

				</section>

				<section data-background="#D2D7D3">
					<img class="svg-image"  width="100%"  data-src="img/029.png" alt="search">
				</section>

				<section data-background="#D2D7D3">
					<h2>Eviction</h2>
					<p>
						Settings of product eviction.
					</p>

				</section>

				<section data-background="#D2D7D3">
					<img class="svg-image"  width="100%"  data-src="img/030.png" alt="search">
				</section>

				<section data-background="#D2D7D3">
					<h2>Restore Database</h2>
					<p>
						Restore old database dumps.
					</p>

				</section>

				<section data-background="#D2D7D3">
					<img class="svg-image"  width="100%"  data-src="img/031.png" alt="search">
				</section>

				<section data-background="#D2D7D3">
					<h2>Local archive</h2>
					<p>
						Ingestion via local archive folder.
					</p>

				</section>

				<section data-background="#D2D7D3">
					<img class="svg-image"  width="100%"  data-src="img/032.png" alt="search">
				</section>

				<section data-background="#D2D7D3">
					<h2>Mail Configuration</h2>
					<p>
						Email notification system settings.
					</p>

				</section>

				<section data-background="#D2D7D3">
					<img class="svg-image"  width="100%"  data-src="img/033.png" alt="search">
				</section>

				<section data-background="#D2D7D3">
					<h2>Root Configuration</h2>
					<p>
						Root password configuration.
					</p>

				</section>

				<section data-background="#D2D7D3">
					<img class="svg-image"  width="100%"  data-src="img/034.png" alt="search">
				</section>

				<section data-background="#D2D7D3">
					<h2>Admin Users</h2>
					<p>
						User accounts list.
					</p>

				</section>

				<section data-background="#D2D7D3">
					<img class="svg-image"  width="100%"  data-src="img/035.png" alt="search">
				</section>
				<!-- end admin panels -->

				<section data-background="#E8FFFF">
					<h2>Future features</h2>
				</section>

				<section data-background="#E8FFFF">
					<h2>Timeline</h2>
					<p>Distribution of products by sensing time.</p>
				</section>

				<section data-background="#E8FFFF">
					<img class="svg-image"  height="500px"  data-src="img/036.png" alt="search">
				</section>

				<section data-background="#E8FFFF">
					<h2>Flex layout</h2>
					<p>Flex layout of components, customizable via graphical user interface.</p>

				</section>

				<section data-background="#E8FFFF">
					<img class="svg-image"  height="500px"  data-src="img/024.png" alt="search">
				</section>

				<section data-background="#E8FFFF">
					<h2>Events</h2>
					<ul>
						<li>Events in products density calendar.</li>
						<li>Events list</li>
						<li>Event detail</li>
					</ul>

				</section>

				<section data-background="#E8FFFF">
					<img class="svg-image"  height="500px"  data-src="img/025.png" alt="search">
				</section>

				<section data-background="#E8FFFF">
					<h2>Polar Maps</h2>
					<p>Polar maps in the map component.</p>

				</section>

				<section data-background="#E8FFFF">
					<img class="svg-image"  height="500px"  data-src="img/026.png" alt="search">
				</section>

				<section data-background="#E8FFFF">
					<h2>Metadata processing</h2>
					<p>OWC Metadata Processing system manages user's plugins to process metadata from searches, and to create automatic tasks client side.</p>
				</section>

				<section data-background="#E8FFFF">
					<img class="svg-image"  height="200px"  data-src="img/037.png" alt="search">
				</section>

				<section data-background="#FFE4D5" >
					<h2>Extendible</h2>
				</section>

				<section style="top: 45.5px;display: block;height: 500px;" data-background="#FFE4D5">
					<h2>New component creation</h2>
					<iframe src="http://sentineldatahub.github.io/DataHubSystem/owc.html#Chap4" style="border: 0; width: 100%; height: 100%">Your browser doesn't support iFrames.</iframe>
				</section>

				<section data-background="#FFE4D5">
					<p>The guide how to create a new component and how to integrate in the OWC application is present in the Open Source Portal.</p>
				</section>

				<section data-background="#D2D7D3">
					<h2>Documentation</h2>
					<ul>
						<li>User Guide: <a style="color:blue;font-size:30px;" href="https://github.com/buele/DataHubSystem/blob/gh-pages/OWC/USER_GUIDE.md">https://github.com/buele/DataHubSystem/blob/gh-pages/OWC/USER_GUIDE.md</a></li>
						<li>API reference: <a style="color:blue;font-size:30px;" href="http://buele.github.io/DataHubSystem/OWC/api-docs/app/docs.html">http://buele.github.io/DataHubSystem/OWC/api-docs/app/docs.html</a></li>
						<li>OWC SDD Issue: 1.0</li>
						<li>OWC ICD, Issue: 1.0</li>
					</ul>
				</section>

				<section data-background="#FF9F55" >
					<h2><a href="https://scihub.copernicus.eu/demohub/new/" style="color: black;" target="_blank">DEMO</a></h2>
				</section>

			</div>
		</div>

		<script src="lib/js/head.min.js"></script>
		<script src="js/reveal.js"></script>

		<script>
			Reveal.initialize({
				controls: true,
				progress: true,
				history: true,
				center: true,
				transition: 'slide',
				dependencies: [
					{ src: 'lib/js/classList.js', condition: function() { return !document.body.classList; } },
					{ src: 'plugin/markdown/marked.js', condition: function() { return !!document.querySelector( '[data-markdown]' ); } },
					{ src: 'plugin/markdown/markdown.js', condition: function() { return !!document.querySelector( '[data-markdown]' ); } },
					{ src: 'plugin/highlight/highlight.js', async: true, callback: function() { hljs.initHighlightingOnLoad(); } },
					{ src: 'plugin/zoom-js/zoom.js', async: true },
					{ src: 'plugin/notes/notes.js', async: true }
				]
			});

		</script>

	</body>
</html>
