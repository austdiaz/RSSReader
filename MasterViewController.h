//
//  MasterViewController.h
//  RSSReader
//
//  Created by Farhood Basiri on 2/25/14.
//  Copyright (c) 2014 Farhood Basiri. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MasterViewController : UITableViewController <NSXMLParserDelegate>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@end
