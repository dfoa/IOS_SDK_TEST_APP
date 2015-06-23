//
//  RegisterViewController.m
//  Doron Foa
//
//  Created by Doron Foa  on 5/7/14.
//  Copyright (c) 2014 IntroMi. All rights reserved.
//

#import "RegisterViewController.h"
#import <IntroMiKit/IntroMiKit.h>




@interface RegisterViewController() {
    


    
    
}
@end

@implementation RegisterViewController





- (void)viewDidLoad
{
    [super viewDidLoad];
    NSLog(@"did load");
}




- (IBAction)nameAction:(id)sender {
    
   
}


-(void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    
    if ( _nameField.text.length!=0){
        
        self.reg  =  [[Register alloc] initWithUniqueId:@"123" andCompanyToken:@"testSdk" andName:_nameField.text];
        [self.reg doRegistration:^(int result) {
       
      //check results here
    }
                       andConnectionErrors:^(NSString *error) {
                           
                       } ];
       }

}
    
    
@end
