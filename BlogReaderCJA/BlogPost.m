//
//  BlogPost.m
//  BlogReaderCJA
//
//  Created by Caleb Abraham on 6/16/13.
//  Copyright (c) 2013 Caleb Abraham. All rights reserved.
//

#import "BlogPost.h"

@implementation BlogPost


//Initialize BlogPost object with title from JSON data
- (id) initWithTitle:(NSString *)title {
    self = [super init];
    
    if (self){
        self.title = title;
        self.author = nil;
        self.thumbnail = nil;
    }
    
    return self;
}

//Convenience constructor
+ (id) blogPostWithTitle:(NSString *)title {
    return [[self alloc] initWithTitle:title];
}

//Link to thumbnail image for BlogPost
- (NSURL *) thumbnailURL {
    
    return [NSURL URLWithString:self.thumbnail];
}

//Formats date from original to more readable presentation
- (NSString *) formattedDate {
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
    NSDate *tempDate = [dateFormatter dateFromString:self.date];
    
    [dateFormatter setDateFormat:@"EE MMM,dd"];
    return [dateFormatter stringFromDate:tempDate];
    
}

@end
