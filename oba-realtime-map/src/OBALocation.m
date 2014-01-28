//
//  OBALocation.m
//  oba-realtime-map
//
//  Created by Aengus McMillin on 1/25/14.
//  Copyright (c) 2014 Aengus McMillin. All rights reserved.
//

#import "OBALocation.h"

@implementation OBALocation

- (id)initWithLatitude:(CGFloat)lat longitude:(CGFloat)lon {
    self = [super init];
    if (self) {
        _latitude = lat;
        _longitude = lon;
    }
    return self;
}

@end
