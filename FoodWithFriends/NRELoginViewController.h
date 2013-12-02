//
//  NRELoginViewController.h
//  FoodWithFriends
//
//  Created by Rachel Brown on 11/19/13.
//  Copyright (c) 2013 YUM. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NRELoginViewController : UIViewController

@property (nonatomic, strong) IBOutlet UIActivityIndicatorView *activityIndicator;

- (IBAction)loginButtonTouchHandler:(id)sender;

@end