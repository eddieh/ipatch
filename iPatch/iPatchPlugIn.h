//
//  iPatchPlugIn.h
//  iPatch
//
//  Created by Eddie Hillenbrand on 3/17/15.
//
//

#import <Quartz/Quartz.h>

@interface iPatchPlugIn : QCPlugIn

@property(assign) NSString* inputString;
@property(assign) NSString* outputString;

@end
