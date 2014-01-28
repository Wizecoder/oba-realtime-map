//
//  OBATrip.h
//  oba-realtime-map
//
//  Created by Aengus McMillin on 1/25/14.
//  Copyright (c) 2014 Aengus McMillin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class OBARoute;

@interface OBATrip : NSObject

@property (nonatomic, strong) NSString *tripName;
@property (nonatomic, strong) OBARoute *route;

@end
