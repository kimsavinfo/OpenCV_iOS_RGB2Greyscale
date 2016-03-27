# OpenCV_iOS_RGB2Greyscale
###HOW TO : import openCV iOS and show the RGB image in black and white 
(rf [openCV](http://docs.opencv.org/3.1.0/))

![init_view](screenshots/init_view.png)

![lenna_rgb](screenshots/lenna_rgb.png)

# How do I import openCV iOS ?

## Go to Project > Build Phases > Link Binary With Libraries
* AssetsLibrary.framework
* CoreGraphics framework
* Foundation.framework
* UIKit.framework

## Drag and drop opencv2.framework in the directory frameworks :
* check Copy the items
* check create groups 
* check add to targets "project"

## In ViewController.h add the line : #import <opencv2/opencv.hpp>
Don't forget to rename ViewController.m in ViewController.mm

![import_frameworks](screenshots/import_frameworks.png)
![lenna_greyscale](screenshots/lenna_greyscale.png)

### Versions

OS X : El Capitan 10.11.4

XCode : 7.3

OpenCV 3.1.0 
