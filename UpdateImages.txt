/* 
	Open up "R:\gis\imageScraper\scrape.js"
	scrape is dependent on `npm install website-scraper`
	API: https://github.com/website-scraper/node-website-scraper
	Check the options parameters for senate/house photo scrape
	This script will scrape the senate/house members page and download the photos
	Run imagescraper node script:
*/

1. [root@ww2 imagescraper]# node scrape.js

/* 
	House photos will have the correct filenames
	Senate will not
	Open up R:\gis\imageScraper\TruncateNamesInDir.py"
	Run with appropriate renaming parameters
	(may have to copy images folder to desktop - permissions issues)
*/

2. [root@ww2 imagescraper]# python TruncateNamesInDir.py

/* 
	Open up Fotosizer to resize all images to 200x150 pixels
*/

3. Run Fotosizer

4. Copy photos to 
	R:\gis\iMaps\districts\images 
	W:\gis\iMaps\districts\images

	R:\gis\iMaps\precincts\images
	W:\gis\iMaps\precincts\images

	R:\gis\iMaps\schooldistricts\images
	R:\gis\iMaps\schooldistricts\images

	Q:\Geodata\Graphics\House-Senate Photos (photo maps)





