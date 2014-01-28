//
//  OBADataLoader.m
//  oba-realtime-map
//
//  Created by Aengus McMillin on 1/25/14.
//  Copyright (c) 2014 Aengus McMillin. All rights reserved.
//

#import "OBADataLoader.h"
#import <AFNetworking.h>
#import <AFRaptureXMLRequestOperation.h>
#import <RaptureXML/RXMLElement.h>
#import "OBALocation.h"
#import "OBAStop.h"

@implementation OBADataLoader

- (void)loadData {
    AFRaptureXMLRequestOperation *operation = [AFRaptureXMLRequestOperation XMLParserRequestOperationWithRequest:[NSURLRequest requestWithURL:[NSURL URLWithString:@"http://api.onebusaway.org/api/where/vehicles-for-agency/1.xml?key=TEST"]] success:^(NSURLRequest *request, NSHTTPURLResponse *response, RXMLElement *xmlElement) {
        [self loadStops:xmlElement];
        [xmlElement iterate:@"data.list.vehicleStatus" usingBlock:^(RXMLElement *vehicleStatus) {
            NSString *route = @"No Route";
            if ([vehicleStatus child:@"tripId"]) {
                route = @"Some Route";
            }
            NSLog(@"Vehicle Status: %@", route);
        }];
    } failure:^(NSURLRequest *request, NSHTTPURLResponse *response, NSError *error, RXMLElement *XMLElement) {
        // Handle Error
    }];
    
    [operation start];

}

- (void)loadStops:(RXMLElement*)xmlElement {
    NSMutableDictionary *stops = [NSMutableDictionary dictionary];
    [xmlElement iterate:@"data.references.stops.stop" usingBlock:^(RXMLElement *stopXML) {
        OBAStop *stop = [[OBAStop alloc] initWithId:[stopXML child:@"id"].text
                                               name:[stopXML child:@"name"].text
                                           stopCode:[stopXML child:@"code"].text
                                           location:[[OBALocation alloc] initWithLatitude:[stopXML child:@"lat"].textAsDouble
                                                                                longitude:[stopXML child:@"lon"].textAsDouble]];
        stops[stop.stopName] = stop;
        NSLog(@"Stop: %@", stop.stopName);
    }];
    [self.delegate didRefreshStops:stops];
}
@end
