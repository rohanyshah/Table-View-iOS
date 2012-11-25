//
//  ViewController.m
//  Example
//
//  Created by Rohan Shah on 7/18/12.
//  Copyright (c) 2012 Rohan Shah. All rights reserved.
//

#import "ViewController.h"

@implementation ViewController

-(void)configure {
    [self addSectionWithTitle:@"General" footer:@"Footer text."];
    [self addSwitch:@"Toggle switch" enabled:YES];
    [self addButton:@"This does nothing" type:IGFormButtonTypeDisclosure action:nil];
    [self addButton:@"Do something" action:^{
       UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Hello!" 
                                                       message:@"You pressed a button."
                                                      delegate:nil 
                                             cancelButtonTitle:@"OK" 
                                             otherButtonTitles:nil];
        [alert show];
    }];
}

@end
