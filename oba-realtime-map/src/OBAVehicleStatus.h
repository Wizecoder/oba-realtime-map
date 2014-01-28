//
//  OBAVehicleStatus.h
//  oba-realtime-map
//
//  Created by Aengus McMillin on 1/25/14.
//  Copyright (c) 2014 Aengus McMillin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class OBALocation;
@class OBATrip;
@class OBAStop;

@interface OBAVehicleStatus : NSObject

@property (nonatomic, strong) NSString *vehicleId;
@property (nonatomic, strong) OBALocation *location;
@property (nonatomic, strong) OBATrip *trip;
@property (nonatomic, strong) OBAStop *nextStop;

@end
