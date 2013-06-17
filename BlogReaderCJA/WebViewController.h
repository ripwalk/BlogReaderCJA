//
//  WebViewController.h
//  BlogReaderCJA
//
//  Created by Caleb Abraham on 6/16/13.
//  Copyright (c) 2013 Caleb Abraham. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController

@property (strong, nonatomic) NSURL *blogPostURL;
@property (strong, nonatomic) IBOutlet UIWebView *webView;


@end
