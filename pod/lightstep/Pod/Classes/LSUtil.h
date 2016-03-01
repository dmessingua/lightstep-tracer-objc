#include <UIKit/UIKit.h>

/**
 * Shared, generic utility functions used across the library.
 */
@interface LSUtil : NSObject

+ (NSString*)generateGUID;
+ (NSString*)objectToJSONString:(id)obj;

@end

@interface NSDate (LSSpan)
- (int64_t) toMicros;
@end
