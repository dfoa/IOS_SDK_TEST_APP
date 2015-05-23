//
//  IntroMiTableViewController.h
//  Doron Foa
//
//  Created by Doron Foa on 5/7/14.
//  Copyright (c) 2014 IntroMi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <IntroMiKit/IntroMiKit.h>



@interface IntroMiTableViewController : UITableViewController
@property (weak, nonatomic) IBOutlet UINavigationItem *scanLabel;
- (IBAction)scanAction:(id)sender;
    @property (strong, nonatomic) ServiceManager    *serviceManager;
@end
