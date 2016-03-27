# OpenCV_iOS_RGB2Greyscale
HOW TO : import openCV iOS and show the RGB image in black and white 
(rf [openCV](http://docs.opencv.org/3.1.0/))

![init_view](screenshots/init_view.PNG)

![lenna_rgb](screenshots/lenna_rgb.PNG)

## How do I import openCV iOS ?

1. Go to Project > Build Phases > Link Binary With Libraries
* AssetsLibrary.framework
* CoreGraphics framework
* Foundation.framework
* UIKit.framework

2. Drag and drop opencv2.framework in the directory frameworks :
* check Copy the items
* check create groups 
* check add to targets "project"

3. In ViewController.h add the line : #import <opencv2/opencv.hpp>
Don't forget to rename ViewController.m in ViewController.mm

![import_frameworks](screenshots/import_frameworks.PNG)
![lenna_greyscale](screenshots/lenna_greyscale.PNG)

### Versions

OS X : El Capitan 10.11.4

XCode : 7.3

OpenCV 3.1.0 
