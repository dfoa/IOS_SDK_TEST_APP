//
//  RegisterViewController.h
//  Doron Foa
//
//  Created by Simon on 5/7/14.
//  Copyright (c) 2014 IntroMi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <IntroMiKit/IntroMiKit.h>


@interface RegisterViewController: UIViewController
@property (weak, nonatomic) IBOutlet UITextField *nameField;
- (IBAction)nameAction:(id)sender;

@property (strong,nonatomic) Register *reg;


@end
