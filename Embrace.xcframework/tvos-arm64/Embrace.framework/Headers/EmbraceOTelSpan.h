//
//  EmbraceOTelSpan.h
//  Embrace
//
//  Created by Austin Emmons on 8/23/23.
//  Copyright © 2023 embrace.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Embrace/EmbraceOTelSpanErrorCode.h>
#import <Embrace/EmbraceEventData.h>

#ifndef EmbraceOTelSpan_h
#define EmbraceOTelSpan_h

NS_ASSUME_NONNULL_BEGIN

@protocol EmbraceOTelSpan

@property(readonly) NSString *spanName;
@property(readonly) NSString *traceId;
@property(readonly) NSString *spanId;

-(void) start;

-(void) stop;
-(void) stopWithErrorCode:(EmbraceOTelSpanErrorCode) errorCode;

-(void) addEventNamed:(NSString *)name time: (NSUInteger) time attributes: (nullable NSDictionary<NSString*, NSString*> *) attributes;

-(void) addAttributeWithKey:(NSString *)key value: (NSString *)value;

@end

NS_ASSUME_NONNULL_END

#endif /* EmbraceOTelSpan_h */
