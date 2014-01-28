//
//  OBAStop.h
//  oba-realtime-map
//
//  Created by Aengus McMillin on 1/25/14.
//  Copyright (c) 2014 Aengus McMillin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class OBALocation;

@interface OBAStop : NSObject

@property (nonatomic, strong) NSString *stopId;
@property (nonatomic, strong) NSString *stopName;
@property (nonatomic, strong) NSString *stopCode;
@property (nonatomic, strong) OBALocation *stopLocation;

- (id)initWithId:(NSString*)stopId name:(NSString*)name stopCode:(NSString*)code location:(OBALocation*)stopLocation;

@end
