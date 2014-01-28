//
//  OBADataLoader.h
//  oba-realtime-map
//
//  Created by Aengus McMillin on 1/25/14.
//  Copyright (c) 2014 Aengus McMillin. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol OBADataLoaderDelegate <NSObject>

- (void)didRefreshRoutes:(NSDictionary*)routes;
- (void)didRefreshStops:(NSDictionary*)stops;
- (void)didRefreshTrips:(NSDictionary*)trips;
- (void)didRefreshVehicleStatus:(NSDictionary*)vehicleStatus;

@end

@interface OBADataLoader : NSObject
@property (nonatomic, strong) id <OBADataLoaderDelegate> delegate;

- (void)loadData;

@end
