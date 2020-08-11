//
//  EmbraceConfig.h
//  Embrace
//
//  Created by Juan Pablo on 23/10/2018.
//  Copyright © 2018 embrace.io. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 The Embrace sdk configurations. This is used to setup configurations.
 */
@interface EmbraceConfig : NSObject

/**
 Returns the default config. The first time this is called it synchronously reads
 Embrace-Info.plist from disk.
 Returns nil if a valid plist file is not find at default path.
 */
- (nullable instancetype)initWithDefaultConfig;

/**
 Initializes a customized instance of EmbraceConfig from the file at the given plist file path. This
 will read the file synchronously from disk.
 
 @param path Embrace info property list file path.
 
 @return nil if a valid plist file is not find at path.
 */
- (nullable instancetype)initWithContentsOfFile:(nonnull NSString *)path;

/**
 Initializes a customized instance of EmbraceConfig with required fields.
 
 @param apiKey The unique Embrace API key that identifies your application.

 @return nil if an invalid app ID is specified.
 */
- (nullable instancetype)initWithAPIKey:(nonnull NSString *)apiKey;

/**
 The Embrace app ID. This is used to identify the app within the database.
 
 @note Plist detail
    - Key: API_KEY
    - Type: String
    - Defult: N/A
 */
@property(atomic, strong, readonly, nonnull) NSString *APIKey;

// MARK: Represents the base URLs element specified in the Embrace config file.

/**
 Data base URL.
 
 @note Plist detail
    - Key: DATA_BASE_URL
    - Type: String
    - Defult: data.emb-api.com
 */
@property(atomic, strong, readonly, nullable) NSString *baseURL;

/**
 Data dev base URL.
 
 @note Plist detail
    - Key: DATA_DEV_BASE_URL
    - Type: String
    - Defult: data-dev.emb-api.com
 */
@property(atomic, strong, readonly, nullable) NSString *devBaseURL;

/**
 Config base URL
 
 @note Plist detail
    - Key: CONFIG_BASE_URL
    - Type: String
    - Defult: config.emb-api.com
 */
@property(atomic, strong, readonly, nullable) NSString *configBaseURL;

/**
 Images base URL.
 
 @note Plist detail
    - Key: IMAGES_BASE_URL
    - Type: String
    - Defult: images.emb-api.com
 */
@property(atomic, strong, readonly, nullable) NSString *imagesBaseURL;

// MARK: Represents the crash handler element specified in the Embrace config file.

/**
 Control whether the Embrace SDK automatically attaches to the uncaught exception handler.
 
 @note Plist detail
    - Key: CRASH_REPORT_ENABLED
    - Type: Boolean
    - Defult: false
 */
@property (atomic, strong, readonly, nullable) NSNumber *crashReportEnabled;

// MARK: Represents the startup moment configuration element specified in the Embrace config file.

/**
 Control whether the startup moment is automatically ended.
 
 @note Plist detail
    - Key: STARTUP_AUTOEND_SECONDS
    - Type: Number
    - Defult: nil
 */
@property (atomic, strong, readonly, nullable) NSNumber *startupAutoendSeconds;

/**
 Control whether startup moment screenshots are taken.
 
 @note Plist detail
    - Key: STARTUP_MOMENT_SCREENSHOT_ENABLED
    - Type: Boolean
    - Defult: true
 */
@property(atomic, assign, readonly) BOOL startupScreenshotEnabled;

// MARK: Represents the networking configuration element specified in the Embrace config file.

/**
 The Trace ID Header that can be used to trace a particular request.
 
 @note Plist detail
    - Key: TRACE_ID_HEADER_NAME
    - Type: String
    - Defult: x-emb-trace-id
 */
@property(atomic, strong, readonly, nullable) NSString *traceIdHeader;

/**
 The default capture limit for the specified domains.
 
 @note Plist detail
    - Key: DEFAULT_CAPTURE_LIMIT
    - Type: Number
    - Defult: nil
 */
@property (atomic, strong, readonly, nullable) NSNumber *networkCaptureLimit;

/**
 List of domains to be limited for tracking.
 
 @note Plist detail
    - Key: DOMAINS
    - Type: Dictionary
    - Defult: nil
 */
@property (atomic, strong, readonly, nullable) NSDictionary<NSString *, NSNumber *> *networkCaptureDomains;

/**
 URLs that should not be captured.
 
 @note Plist detail
    - Key: DISABLED_URL_PATTERNS
    - Type: Array
    - Defult: nil
 */
@property(atomic, strong, readonly, nullable) NSArray *disabledUrlPatterns;

/**
 Control whether network request metrics is captured.
 
 @note Plist detail
    - Key: COLLECT_NETWORK_REQUEST_METRICS
    - Type: Boolean
    - Defult: true
 */
@property(atomic, assign, readonly) BOOL collectNetworkRequestMetrics;

/**
 Control whether NSURLConnection proxy is enabled.
 
 @note Plist detail
    - Key: NSURLCONNECTION_PROXY_ENABLE
    - Type: Boolean
    - Defult: true
 */
@property(atomic, assign, readonly) BOOL nsurlconnectionProxyEnable;

/**
 Control whether background fetch information is captured.
 
 @note Plist detail
    - Key: BACKGROUND_FETCH_CAPTURE_ENABLE
    - Type: Boolean
    - Defult: false
 */
@property(atomic, assign, readonly) BOOL backgroundFetchCaptureEnable;

/**
 Public RSA key to encrypt and store the network capture payload as a base64 string.

 Inlcude your public RSA key here, network body capture will be fully encrypted and only you can decrypt it using your private key.
 
 @note Plist detail
    - Key: CAPTURE_PUBLIC_KEY
    - Type: String
    - Defult: nil
 */
@property(atomic, strong, readonly, nullable) NSString *networkCapturePublicKey;

// MARK: Represents the session configuration element specified in the Embrace config file.

/**
 Specify a maximum time before a session is allowed to exist before it is ended.
 
 @note Plist detail
    - Key: MAX_SESSION_SECONDS
    - Type: Number
    - Defult: nil
 */
@property(atomic, strong, readonly, nullable) NSNumber *maxSessionSeconds;

// MARK: Represents the webView configuration element specified in the Embrace config file.

/**
 Control whether webview query parameters are captured.
 
 @note Plist detail
    - Key: WEBVIEW_STRIP_QUERYPARAMS
    - Type: Boolean
    - Defult: false
 */
@property(atomic, assign, readonly) BOOL webviewStripQueryparams;

/**
 Control whether webview information is captured.
 
 @note Plist detail
    - Key: WEBVIEW_ENABLE
    - Type: Boolean
    - Defult: true
 */
@property(atomic, assign, readonly) BOOL webviewEnable;

/**
 Embrace will always report on WKWebView content thread terminations when they happen.

 Optionally, you can enable this setting to have Embrace call Reload on the WKWebView for you.
 Note: If your application uses third party WKWebView content, such as advertising SDKS, it is recommended to leave this setting off
 
 @note Plist detail
    - Key: ENABLE_WK_AUTO_RELOAD
    - Type: Boolean
    - Defult: false
 */
@property(atomic, assign, readonly) BOOL wttAutoReloadEnabled;

// MARK: Represents the system configuration element specified in the Embrace config file.

/**
 Control whether tap coordinates are captured.
 
 @note Plist detail
    - Key: CAPTURE_COORDINATES
    - Type: Boolean
    - Defult: true
 */
@property(atomic, assign, readonly) BOOL captureCoordinatesEnabled;

/**
 Control whether automatic view capture is enabled, disable this if you are using custom view API.
 
 @note Plist detail
    - Key: ENABLE_AUTOMATIC_VIEW_CAPTURE
    - Type: Boolean
    - Defult: true
 */
@property(atomic, assign, readonly) BOOL automaticViewCaptureEnabled;

/**
  Embrace can use the os_log stream to help categorize crash reports or find non-fatal exceptions such as CollectionView or Autolayout runtime issues.

  By default this feature is off as the os_log stream can contain sensitive information.  Enable this feature if you comfortable with sharing your os_log data with Embrace.
 
 @note Plist detail
    - Key: ENABLE_OS_LOG
    - Type: Boolean
    - Defult: true
 */
@property(atomic, assign, readonly) BOOL oslogTrackingEnabled;

@end
