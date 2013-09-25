//
//  AOTag.h
//  AOTagDemo
//
//  Created by Loïc GRIFFIE on 16/09/13.
//  Copyright (c) 2013 Appsido. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>

@class AOTag;

@interface AOTagList : UIView

@property (nonatomic, retain) NSMutableArray *tags;

/**
 * Create a new tag object
 *
 * @param tTitle the NSString tag label
 * @param tImage the NSString tag image named
 */
- (void)addTag:(NSString *)tTitle withImage:(NSString *)tImage;

/**
 * Create a new tags object and add them to the tag list view.
 *
 * @param tags the NSArray tag list to be added. The given tag must be of NSDictionary type (ie. @{@"title": @"Tyrion", @"image": @"tyrion.jpg"})
 */
- (void)addTags:(NSArray *)tags;

/**
 * Remove the given tag from the tag list view
 *
 * @param tag the AOTag instance to be removed
 */
- (void)removeTag:(AOTag *)tag;

/**
 * Remove all tags object
 */
- (void)removeAllTag;

@end

@interface AOTag : UIView

@property (nonatomic, retain) UIImage *tImage;
@property (nonatomic, copy) NSString *tTitle;

/**
 * Return a tag object size
 *
 * @return return a tag object CGSize size
 */
- (CGSize)getTagSize;

@end

