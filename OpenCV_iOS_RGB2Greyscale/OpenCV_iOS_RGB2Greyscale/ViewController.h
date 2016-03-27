//
//  ViewController.h
//  OpenCV_iOS_RGB2Greyscale
//
//  Created by Kim SAVAROCHE on 27/03/2016.
//  Copyright (c) 2016 Kim SAVAROCHE. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <opencv2/opencv.hpp>

@interface ViewController : UIViewController {
    UIImage *imageRGB;
}

@property (weak, nonatomic) IBOutlet UIImageView *imageView;

- (cv::Mat)cvMatFromUIImage:(UIImage *)image;
- (cv::Mat)cvMatGrayFromUIImage:(UIImage *)image;
- (UIImage *)UIImageFromCVMat:(cv::Mat)cvMat;

@end
