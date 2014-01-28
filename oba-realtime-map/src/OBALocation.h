//
//  OBALocation.h
//  oba-realtime-map
//
//  Created by Aengus McMillin on 1/25/14.
//  Copyright (c) 2014 Aengus McMillin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OBALocation : NSObject

@property (nonatomic, assign) CGFloat latitude;
@property (nonatomic, assign) CGFloat longitude;

- (id)initWithLatitude:(CGFloat)lat longitude:(CGFloat)lon;
@end
