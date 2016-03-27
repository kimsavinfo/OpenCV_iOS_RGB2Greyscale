//
//  ViewController.m
//  OpenCV_iOS_RGB2Greyscale
//
//  Created by Kim SAVAROCHE on 27/03/2016.
//  Copyright (c) 2016 Kim SAVAROCHE. All rights reserved.
//


#import "ViewController.h"


@interface ViewController ()

@end

@implementation ViewController


- (void)viewDidLoad {
    [super viewDidLoad];
    imageRGB = [UIImage imageNamed:@"Lenna.png"];

    if(imageRGB != nil)
    {
        _imageView.image = imageRGB;
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end