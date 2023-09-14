//
//  EmbraceOTelSpanErrorCode.h
//  Embrace
//
//  Created by Austin Emmons on 8/23/23.
//  Copyright © 2023 embrace.io. All rights reserved.
//

#ifndef EmbraceOTelSpanErrorCode_h
#define EmbraceOTelSpanErrorCode_h

typedef NS_ENUM(NSInteger, EmbraceOTelSpanErrorCode) {
    None = 0,
    Failure,
    UserAbandon,
    Unknown
};

#endif /* EmbraceOTelSpanErrorCode_h */

