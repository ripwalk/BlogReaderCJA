//
//  BlogPost.h
//  BlogReaderCJA
//
//  Created by Caleb Abraham on 6/16/13.
//  Copyright (c) 2013 Caleb Abraham. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

//JSON data after parse
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *author;
@property (nonatomic, strong) NSString *thumbnail;
@property (nonatomic, strong) NSString *date;
@property (nonatomic, strong) NSURL *url;



- (id) initWithTitle:(NSString *)title;
+ (id) blogPostWithTitle:(NSString *)title;

- (NSURL *) thumbnailURL;

//Date of post after formatting from JSON form
- (NSString *) formattedDate;


@end
