//
//  Macro.h
//  Macros
//
//  Created by Saikiran Komirishetty (Ext) on 18/04/17.
//  Copyright © 2017 Saikiran Komirishetty. All rights reserved.
//

#ifndef Macro_h
#define Macro_h


#endif /* Macro_h */

/**
 * A debug mode alternative for NSLog.
 * This method must be used instead of NSLog such that once app is released to store the user device is not added up with huge logs
 * Also using this method shall prevent an additional step of removing NSLog statements from project source.
 * @param ... : first argument will be the format and consequitive arguments will follow the values to form string with.
 */
#ifdef DEBUG
#define DEBUGLog(fmt, ...) NSLog(fmt, ## __VA_ARGS__)
#else
#define DEBUGLog(...) (void)0
#endif

/**
 * A SINGLETON_FOR_CLASS alternative for sharedInstance method. Using single line, you can make a class as singleton class.
 */
#define SINGLETON_FOR_CLASS(classname)\
+ (id) sharedInstance {\
static dispatch_once_t pred = 0;\
static id _sharedObject = nil;\
dispatch_once(&pred, ^{\
_sharedObject = [[self alloc] init];\
});\
return _sharedObject;\
}
/**
 * A UA_runOnMainThread alternative for performing operation on main queue. Pass block of statments to perform operation on main queue.
 */

#define UA_runOnMainThread if (![NSThread isMainThread]) { dispatch_sync(dispatch_get_main_queue(), ^{ [self performSelector:_cmd]; }); return; };


#define tryCatchBlock @try {\
[self performSelector:_cmd];\
}\
@catch (NSException *exception) {\
NSLog(@"exception details function name %@ \n %@",METHODNAME,exception.description);\
} @finally {\
}

#define METHODNAME [NSString stringWithFormat : @ "function name %s  [Line %d] ", __PRETTY_FUNCTION__,__LINE__]

#define rgbColor(r,g,b) [UIColor colorWithRed:(r/255.0) green:(g/255.0) blue:(b/255.0) alpha:1]
