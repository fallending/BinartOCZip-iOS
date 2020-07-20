
#import <Foundation/Foundation.h>

@interface BAZGzip : NSObject

+ (BOOL)isGzippedData:(NSData *)input;
+ (NSData *)GZipData:(NSData *)input;

@end
