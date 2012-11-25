//
//  IGFormRadioOption.h
//  Programming
//
//  Created by Rohan Shah on 4/4/10.
//  Copyright 2010 Rohan Shah. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IGFormElement.h"

@interface IGFormRadioOption : IGFormElement {
	NSString *category;
	BOOL value;
}
@property(nonatomic,readonly) NSString *category;
@property(nonatomic) BOOL value;

-(id)initWithCategory:(NSString *)aCategory title:(NSString *)aTitle;

@end
