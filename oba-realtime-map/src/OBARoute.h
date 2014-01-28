//
//  OBARoute.h
//  oba-realtime-map
//
//  Created by Aengus McMillin on 1/25/14.
//  Copyright (c) 2014 Aengus McMillin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OBARoute : NSObject

@property (nonatomic, strong) NSString *routeId;
@property (nonatomic, strong) NSString *routeName;
@property (nonatomic, strong) NSString *routeDescription;
@property (nonatomic, strong) NSString *scheduleURL;

@end
