//
//  IGFormButton.h
//  Example
//
//  Created by Rohan Shah on 7/18/12.
//  Copyright (c) 2012 Rohan Shah. All rights reserved.
//

#import "IGFormElement.h"

@interface IGFormButton : IGFormElement
@property(nonatomic, strong) void(^action)(void);
@property(nonatomic, assign) IGFormButtonType type;

-(id)initWithTitle:(NSString *)aTitle action:(void(^)(void))anAction;

@end
