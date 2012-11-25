//
//  IGFormButton.m
//  Example
//
//  Created by Rohan Shah on 7/18/12.
//  Copyright (c) 2012 Rohan Shah. All rights reserved.
//

#import "IGFormButton.h"

@implementation IGFormButton
@synthesize action;

-(id)initWithTitle:(NSString *)aTitle action:(void(^)(void))anAction {
    self = [super initWithTitle:aTitle];
    if(self) {
        self.action = anAction;
    }
    return self;
}

@end
