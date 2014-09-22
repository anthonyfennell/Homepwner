//
//  BNRImageStore.h
//  Homepwner
//
//  Created by Anthony Fennell on 8/31/14.
//  Copyright (c) 2014 Anthony Fennell. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRImageStore : NSObject

+ (instancetype)sharedStore;

- (void)setImage:(UIImage *)image forKey:(NSString *)key;
- (UIImage *)imageForKey:(NSString *)key;
- (void)deleteImageForKey:(NSString *)key;

@end
