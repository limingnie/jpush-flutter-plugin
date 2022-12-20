#import <Flutter/Flutter.h>

#if defined(__IPHONE_10_0) && __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_10_0
#define __FF_NOTIFICATIONS_SUPPORTED_PLATFORM
#endif

@interface JPushPlugin : NSObject<FlutterPlugin>
@property FlutterMethodChannel *channel;
@end
