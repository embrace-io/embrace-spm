//
//  EmbraceEventData.h
//  Embrace
//
//  Created by Austin Emmons on 8/25/23.
//  Copyright © 2023 embrace.io. All rights reserved.
//

#ifndef EmbraceEventData_h
#define EmbraceEventData_h

@protocol EmbraceEventData

@property(nonnull, readonly) NSString *name;
@property(readonly) NSUInteger time;
@property(nonnull, readonly) NSDictionary <NSString *, NSString *>* attributes;

@end

#endif /* EmbraceEventData_h */
