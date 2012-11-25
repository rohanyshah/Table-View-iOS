//
//  IGFormSection.h
//  CramberryPad
//
//  Created by Rohan Shah on 4/3/10.
//  Copyright 2010 Rohan Shah. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface IGFormElement : NSObject {
	NSString *title;
}
@property(nonatomic,readonly) NSString *title;

-(id)initWithTitle:(NSString *)aTitle;

@end
