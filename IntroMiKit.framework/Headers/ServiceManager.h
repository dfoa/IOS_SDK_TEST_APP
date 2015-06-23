//
//  ServiceManager.h
// IntoMikit
//
//  Created by Doron Foa on 4/23/15.
//  Copyright (c) 2015 IntroMi. All rights reserved.
//



#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "Person.h"

@interface ServiceManager : NSObject


-(void)startScan:(void (^)(Person* person))foundUserCallback ;
-(void)manualScan:(void (^)(Person* person))foundUserCallback ;

-(void)stopScan;

-(void)startAdvertise:(void (^)(Person* person))foundUserCallback;

-(void)stopAdvertise;

- (instancetype)initWith:(NSString*)token andErr:(void (^)(int result))errors ;
-(void)setLog:(BOOL*)set;

typedef  void (^errors)(int error);
typedef void (^foundUserCallback)(Person* person);

@end
