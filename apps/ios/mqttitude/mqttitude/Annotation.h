//
//  Location.h
//  Longitude
//
//  Created by Christoph Krey on 13.07.13.
//  Copyright (c) 2013 Christoph Krey. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface Annotation : NSObject <MKAnnotation>
@property (strong, nonatomic) NSDate *timeStamp;
@property (strong, nonatomic) CLPlacemark *placemark;
@property (strong, nonatomic) NSString *topic;


@end
