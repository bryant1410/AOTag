//
//  AOTag.h
//  AOTagDemo
//
//  Created by Loïc GRIFFIE on 16/09/13.
//  Copyright (c) 2013 Appsido. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AOTag;

@interface AOTagList : UIView

@property (nonatomic, retain) NSMutableArray *tags;

- (void)addTag:(NSString *)tTitle withImage:(UIImage *)tImage;
- (void)removeTag:(AOTag *)tag;

@end

@interface AOTag : UIView

@property (nonatomic, retain) UIImage *tImage;
@property (nonatomic, copy) NSString *tTitle;

- (CGSize)getTagSize;

@end

