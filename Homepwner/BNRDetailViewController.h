//
//  BNRDetailViewController.h
//  Homepwner
//
//  Created by Anthony Fennell on 8/31/14.
//  Copyright (c) 2014 Anthony Fennell. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BNRItem;

@interface BNRDetailViewController : UIViewController

@property (nonatomic, strong) BNRItem *item;
@property (nonatomic, copy) void (^dismissBlock)(void);

- (instancetype)initForNewItem:(BOOL)isNew;

@end
