//
//  TableViewController.h
//  BlogReaderCJA
//
//  Created by Caleb Abraham on 6/16/13.
//  Copyright (c) 2013 Caleb Abraham. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface TableViewController : UITableViewController

//Variable number of blogPosts depending on data feed
@property (nonatomic, strong) NSMutableArray *blogPosts;

@end
