// The MIT License (MIT)
// Copyright (c) 2013 Objective-Cloud (chris@objective-cloud.com)
// https://github.com/Objective-Cloud/OCFWeb

#import <Foundation/Foundation.h>

#import "OCFWebApplication.h"

@interface OCFRoute : NSObject

#pragma mark - Creating
- (instancetype)initWithPattern:(NSString *)pattern requestHandler:(OCFWebApplicationRequestHandler)requestHandler;

#pragma mark - Properties
@property (nonatomic, copy, readonly) NSString *pattern;
@property (nonatomic, copy, readonly) OCFWebApplicationRequestHandler requestHandler;

#pragma mark - Working with the Route
- (NSDictionary *)parametersWithRequestPath:(NSString *)path;

@end
