//
//  MasterViewController.h
//  SplitViewTest
//
//  Created by Mark Leonard on 10/13/14.
//  Copyright (c) 2014 Test User. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

