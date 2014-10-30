//
//  XYZPerson.h
//  AppleTutorial
//
//  Created by Michael Tseng MacBook on 10/30/14.
//  Copyright (c) 2014 Michael Tseng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZPerson : NSObject

@property (readonly) NSString *firstName;

@property (readonly) NSString *lastName;

- (void) sayHello;

@end
