//
//  Task.h
//  Quiz7
//
//  Created by Lewis Cooper on 4/7/14.
//  Copyright (c) 2014 Lewis Cooper. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Task : NSManagedObject

@property (nonatomic, retain) NSDate * timeStamp;
@property (nonatomic) float urgency;
@property (nonatomic, retain) NSString * name;

@end
