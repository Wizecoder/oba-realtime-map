//
//  OBAStop.m
//  oba-realtime-map
//
//  Created by Aengus McMillin on 1/25/14.
//  Copyright (c) 2014 Aengus McMillin. All rights reserved.
//

#import "OBAStop.h"

@implementation OBAStop

- (id)initWithId:(NSString*)stopId name:(NSString*)name stopCode:(NSString*)code location:(OBALocation*)stopLocation {
    self = [super init];
    if (self) {
        _stopId = stopId;
        _stopName = name;
        _stopCode = code;
        _stopLocation = stopLocation;
    }
    return self;
}
@end
