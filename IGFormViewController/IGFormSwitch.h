//
//  IGFormSwitch.h
//  Example
//
//  Created by Rohan Shah on 7/18/12.
//  Copyright (c) 2012 Rohan Shah. All rights reserved.
//

#import "IGFormElement.h"

@interface IGFormSwitch : IGFormElement
@property(nonatomic, strong) UISwitch *switchControl;

-(id)initWithTitle:(NSString *)aTitle enabled:(BOOL)enabled;

@end
