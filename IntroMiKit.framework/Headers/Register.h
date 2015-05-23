//
//  Register.h
// IntroMikit
//
//  Created by Doron Foa on 4/21/15.
//  Copyright (c) 2015 IntroMi. All rights reserved.
//





#import <Foundation/Foundation.h>


@interface Register : NSObject

@property (nonatomic,strong)  NSString* userId;
@property (nonatomic,strong)  NSString* uniqueId;
@property (nonatomic)         double today;
@property (nonatomic,strong)  NSString *name;



- (instancetype)initWithUinqueId:(NSString *)uinqueId andCompanyToken:(NSString *)companyToken andName:(NSString*)name;
-(void)doRegistration:(void (^)(int result))completionHandler andConnectionErrors:(void(^)(NSString *error)) connectioErrors;


@end
