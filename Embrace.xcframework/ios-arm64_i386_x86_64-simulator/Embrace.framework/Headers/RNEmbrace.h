//
//  Embrace+ReactNative.h
//  Embrace
//
//  Created by Juan Pablo on 01/10/2019.
//  Copyright © 2019 embrace.io. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Entry point for the Embrace ReactNative SDK.
 */
@interface RNEmbrace: NSObject

/**
 Returns the shared `RNEmbrace` singleton object.
 */
+ (nonnull instancetype)sharedInstance;

/**
 Logs a javascript unhandled exception.
 
 @param name name of the exception.
 @param message exception message.
 @param type error type.
 @param stackTrace exception stacktrace.
 */
- (void)logUnhandledJSException:(nullable NSString *)name
                        message:(nullable NSString *)message
                           type:(nullable NSString *)type
                     stackTrace:(nullable NSString *)stackTrace;

/**
 Sets the react native version number.
 
 @param version react native version number.
 */
- (void)setReactNativeVersion:(nullable NSString *)version;

/**
 Sets javascript patch number.
 
 @param number javascript patch number.
 */
- (void)setJavaScriptPatchNumber:(nullable NSString *)number;

/**
 Sets the path of the javascript bundle.
 
 @param url path of the javascript bundle.
 */
- (void)setJavaScriptBundleURL:(nullable NSString *)url;

/**
 Log a ReactNative exception through the native embrace sdk.
 
 @param name The name of the message, which is how it will show up on the dashboard
 @param severity Will flag the message as one of info, warning, or error for filtering on the dashboard
 @param properties An optional dictionary of up to 10 key/value pairs
 @param takeScreenshot A flag for whether the SDK should take a screenshot of the application window to display on the dashboard
 @param jsStackTrace javascript stack trace coming from the the ReactNative side
*/
- (void)logMessage:(nullable NSString *)name
      withSeverity:(EMBSeverity)severity
        properties:(nullable NSDictionary *)properties
    takeScreenshot:(BOOL)takeScreenshot
      jsStackTrace:(nullable NSString *)jsStackTrace;

/**
 Log a ReactNative exception through the native embrace sdk.
 
 @param name The name of the message, which is how it will show up on the dashboard
 @param severity Will flag the message as one of info, warning, or error for filtering on the dashboard
 @param properties An optional dictionary of up to 10 key/value pairs
 @param takeScreenshot A flag for whether the SDK should take a screenshot of the application window to display on the dashboard
 @param jsStackTrace javascript stack trace coming from the the ReactNative side
 @param wasHandled mark it as handled or not
*/
- (void)logMessage:(nullable NSString *)name
      withSeverity:(EMBSeverity)severity
        properties:(nullable NSDictionary *)properties
    takeScreenshot:(BOOL)takeScreenshot
      jsStackTrace:(nullable NSString *)jsStackTrace
        wasHandled:(BOOL)wasHandled;

@end
