//
//  NREMainViewController.h
//  FoodWithFriends
//
//  Created by Natalie Eisner on 11/18/13.
//  Copyright (c) 2013 YUM. All rights reserved.
//

#import <Parse/Parse.h>

@interface NREMainViewController : UITableViewController <NSURLConnectionDelegate>

// UITableView header view properties
@property (nonatomic, strong) IBOutlet UIView *headerView;
@property (nonatomic, strong) IBOutlet UILabel *headerNameLabel;
@property (nonatomic, strong) IBOutlet UIImageView *headerImageView;

// UITableView row data properties
@property (nonatomic, strong) NSArray *rowTitleArray;
@property (nonatomic, strong) NSMutableArray *rowDataArray;
@property (nonatomic, strong) NSMutableData *imageData;

// UINavigationBar button touch handler
- (void)logoutButtonTouchHandler:(id)sender;

//Log out
-(void)logoutButtonWasPressed:(id)sender;

@end
