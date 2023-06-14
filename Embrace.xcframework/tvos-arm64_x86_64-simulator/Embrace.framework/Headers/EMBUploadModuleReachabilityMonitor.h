//
//  EMBUploadModuleReachabilityMonitor.h
//  Embrace
//
//  Created by Ignacio Tischelman on 27/10/2022.
//  Copyright © 2022 embrace.io. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^EMBUploadModuleReachabilityHandler)(void);

NS_ASSUME_NONNULL_BEGIN

@interface EMBUploadModuleReachabilityMonitor : NSObject

- (instancetype)initWithQueue:(dispatch_queue_t)queue;

@property (nonatomic, copy, nullable) EMBUploadModuleReachabilityHandler onConnectionRegained;

@end

NS_ASSUME_NONNULL_END
