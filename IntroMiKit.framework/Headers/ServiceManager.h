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


-(void)startScan:(void (^)(Person* person))founfUserCallback ;
-(void)manualScan:(void (^)(Person* person))founfUserCallback ;

-(void)stopScan;

-(void)startAdvertise;

-(void)stopAdvertise;

- (instancetype)initWith:(NSString*)token andErr:(void (^)(int result))errors ;
-(void)setLog:(BOOL*)set;

typedef  void (^errors)(int error);
typedef void (^founfUserCallback)(Person* person);

@end
