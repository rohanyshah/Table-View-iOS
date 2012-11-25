//
//  IGFormSwitch.m
//  Example
//
//  Created by Rohan Shah on 7/18/12.
//  Copyright (c) 2012 Rohan Shah. All rights reserved.
//

#import "IGFormSwitch.h"

@implementation IGFormSwitch
@synthesize switchControl;

-(id)initWithTitle:(NSString *)aTitle enabled:(BOOL)enabled {
    self = [super initWithTitle:aTitle];
    if(self) {
        self.switchControl = [[UISwitch alloc] initWithFrame:CGRectZero];
        self.switchControl.on = enabled;
    }
    return self;
}

@end
