#import <Foundation/Foundation.h>

extern const struct OCFResponseAttributes {
	__unsafe_unretained NSString *status;
	__unsafe_unretained NSString *headers;
	__unsafe_unretained NSString *body;
} OCFResponseAttributes;

@interface NSDictionary (SinResponseAdditions)

- (NSInteger)status_ocf;
- (NSDictionary *)headers_ocf;
- (NSData *)body_ocf;

@end

@interface OCFResponse : NSObject

#pragma mark - Creating
- (id)initWithStatus:(NSInteger)status headers:(NSDictionary *)headers body:(NSData *)body;
- (id)initWithProperties:(NSDictionary *)properties;

#pragma mark - Properties
@property (nonatomic, assign, readonly) NSInteger status;
@property (nonatomic, copy, readonly) NSDictionary *headers;
@property (nonatomic, copy, readonly) NSData *body;

#pragma mark - Convenience
@property (nonatomic, readonly) NSString *contentType;

@end
