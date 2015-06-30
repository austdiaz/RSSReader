//
//  DetailViewController.h
//  RSSReader
//
//  Created by Farhood Basiri on 2/25/14.
//  Copyright (c) 2014 Farhood Basiri. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (copy, nonatomic) NSString *url;
@property (strong, nonatomic) IBOutlet UIWebView *webView;
@end
