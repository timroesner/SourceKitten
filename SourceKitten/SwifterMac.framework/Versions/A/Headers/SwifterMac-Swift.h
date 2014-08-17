// Generated by Swift version 1.0 (swift-600.0.45.3.2)

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif
#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif

#if defined(__has_feature) && __has_feature(modules)
@import Foundation;
@import ObjectiveC;
#endif


@interface NSURL (SWIFT_EXTENSION(SwifterMac))
- (NSURL *)URLByAppendingQueryString:(NSString *)queryString;
@end

@class NSMutableURLRequest;
@class NSURLConnection;
@class NSHTTPURLResponse;
@class NSMutableData;
@class NSData;
@class NSError;
@class NSURLRequest;
@class NSURLResponse;

SWIFT_CLASS("_TtC10SwifterMac18SwifterHTTPRequest")
@interface SwifterHTTPRequest : NSObject <NSURLConnectionDataDelegate>
@property (nonatomic, readonly) NSURL * URL;
@property (nonatomic, readonly, copy) NSString * HTTPMethod;
@property (nonatomic) NSMutableURLRequest * request;
@property (nonatomic) NSURLConnection * connection;
@property (nonatomic, copy) NSDictionary * headers;
@property (nonatomic, copy) NSDictionary * parameters;
@property (nonatomic) BOOL encodeParameters;
@property (nonatomic) NSUInteger dataEncoding;
@property (nonatomic) NSTimeInterval timeoutInterval;
@property (nonatomic) BOOL HTTPShouldHandleCookies;
@property (nonatomic) NSHTTPURLResponse * response;
@property (nonatomic) NSMutableData * responseData;
@property (nonatomic, copy) void (^ uploadProgressHandler)(NSInteger, NSInteger, NSInteger);
@property (nonatomic, copy) void (^ downloadProgressHandler)(NSData *, NSInteger, NSInteger, NSHTTPURLResponse *);
@property (nonatomic, copy) void (^ successHandler)(NSData *, NSHTTPURLResponse *);
@property (nonatomic, copy) void (^ failureHandler)(NSError *);
- (instancetype)initWithURL:(NSURL *)URL;
- (instancetype)initWithURL:(NSURL *)URL method:(NSString *)method parameters:(NSDictionary *)parameters OBJC_DESIGNATED_INITIALIZER;
- (instancetype)initWithRequest:(NSURLRequest *)request OBJC_DESIGNATED_INITIALIZER;
- (void)start;
- (void)addMultipartData:(NSData *)data parameterName:(NSString *)parameterName mimeType:(NSString *)mimeType fileName:(NSString *)fileName;
- (void)connection:(NSURLConnection *)connection didReceiveResponse:(NSURLResponse *)response;
- (void)connection:(NSURLConnection *)connection didSendBodyData:(NSInteger)bytesWritten totalBytesWritten:(NSInteger)totalBytesWritten totalBytesExpectedToWrite:(NSInteger)totalBytesExpectedToWrite;
- (void)connection:(NSURLConnection *)connection didReceiveData:(NSData *)data;
- (void)connection:(NSURLConnection *)connection didFailWithError:(NSError *)error;
- (void)connectionDidFinishLoading:(NSURLConnection *)connection;
+ (NSString *)stringWithData:(NSData *)data encodingName:(NSString *)encodingName;
+ (NSString *)descriptionForHTTPStatus:(NSInteger)status responseString:(NSString *)responseString;
@end

