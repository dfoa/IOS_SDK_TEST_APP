//
//  Person.h
//  IntroMiKit
//
//  Created by Doron Foa on 5/11/15.
//  Copyright (c) 2015 IntroMi. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface Person: NSObject
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *company;
@property (strong, nonatomic) NSString *phone;
@property (strong, nonatomic) NSDate *registeredAt;
@property (strong, nonatomic) NSString *user_id;
@property (strong, nonatomic) NSString *uniqId;
@property (strong, nonatomic) NSString *address;
@property (strong, nonatomic) NSString *occupation;
@property (strong, nonatomic) NSString *url_1;
@property (strong, nonatomic) NSString *url_2;
@property (strong, nonatomic) NSString *url_3;
@property (strong, nonatomic) NSString *descriptionOf;


@end

