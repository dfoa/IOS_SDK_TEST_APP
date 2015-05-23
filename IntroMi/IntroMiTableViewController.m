// IntroMiTestApplication
// IntroMiTableViewController.m
//
// Doron Foa
//
//  Created by Doron Foa on 5/7/14.
//  Copyright (c) 2014 IntroMi. All rights reserved.


#import "IntroMiTableViewController.h"
#import "CustomTableCell.h"
#import   <IntroMiKit/IntroMiKit.h>







@interface IntroMiTableViewController () {
    
    __block  bool supported;
   
    NSMutableArray *personList;
}
@end

@implementation IntroMiTableViewController




- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
      [super viewDidLoad];

    personList = [[NSMutableArray alloc] init];
}


- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
 
}



#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    // Return the number of sections.
    
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    // Return the number of rows in the section.
    if (personList) {
        
        return [personList count];
    }

    return 1;
   
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    CustomTableCell *cell = [tableView dequeueReusableCellWithIdentifier:@"Cell" forIndexPath:indexPath];
    
    // Configure the cell...
   Person *person = [personList objectAtIndex:indexPath.row];

    cell.name.text = person.name;

    
    return cell;
}


- (IBAction)scanAction:(id)sender {
    
    NSLog(@"scan started");
    
    
 
    
    
    
    self.serviceManager =[[ServiceManager alloc] initWith:@"user_token" andErr:^(int result) {
        
        NSLog(@"got result %d", result);
        
        
      if (result == 2)
      {
          NSLog(@"BLE is not supported on this device");
          supported = false;
          
      }
      else {
          supported = true;
      }
        
                          } ];
      
    
   if(supported) [self startService];
 
}

    -(void) startService  {
        
        
        __weak typeof(self) weakSelf = self;
        [self.serviceManager startAdvertise];
        [self.serviceManager  manualScan:^(Person *person) {
            
            
            NSLog(@"found new user %@",person.name);
            if (person != nil) {
                [personList addObject:person];
                [weakSelf.tableView reloadData];
                //[self performSelectorOnMainThread:@selector(reloadData) withObject:nil waitUntilDone:NO];
                
            }
        } ];
        
    
    
    
    
}
@end
