# iOSUserfulMacros
iOS commonly used macros
Macro file contain useful macros which are used commonly across iOS apps. 
DEBUGLog is used for logging messages only in debug mode of the app.

SINGLETON_FOR_CLASS: It's used for making class as Singleton class. Just add SINGLETON_FOR_CLASS(your_class_name) in the implementation file and also
expose + (instancetype) sharedInstance;

rgbaColor: used for creating UIColor object by simply passing r, g, b values.
eg: rgbaColor(100,100,100,1);
