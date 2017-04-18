# iOSUserfulMacros
This header file contains commonly used macros. 

DEBUGLog as the name indicates, its's used for logging messages in debug mode of the app.

SINGLETON_FOR_CLASS: It's used for making class as Singleton class. Just add SINGLETON_FOR_CLASS(your_class_name) in the implementation file and also
expose + (instancetype) sharedInstance;

rgbaColor: used for creating UIColor object by simply passing r, g, b values.
eg: rgbaColor(100,100,100,1);
