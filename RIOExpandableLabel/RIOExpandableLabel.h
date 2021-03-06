//
//  RIOExpandableLabel.h
//  RIOExpandableLabelDemo
//
//  Created by Christian Rasmussen on 04.05.13.
//  Copyright (c) 2013 Rasmussen I/O. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface RIOExpandableLabel : UIView

@property (nonatomic) NSUInteger maxNumberOfLines;

@property (nonatomic, copy) NSString *text;
@property (nonatomic, strong) UIFont *textFont;
@property (nonatomic, strong) UIColor *textColor;

@property (nonatomic, copy) NSString *moreButtonText;
@property (nonatomic, strong) UIFont *moreButtonFont;
@property (nonatomic, copy) UIColor *moreButtonColor;

- (void)moreButtonAddTarget:(id)target action:(SEL)action;
- (void)moreButtonRemoveTarget:(id)target action:(SEL)action;

@end
