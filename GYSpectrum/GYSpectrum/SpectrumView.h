//
//  SpectrumView.h
//  GYSpectrum
//
//  Created by LiQiu Yu on 16/5/19.
//  Copyright © 2016年 LiQiu Yu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SpectrumView : UIView

@property (nonatomic, copy) void (^itemLevelCallback)();

//

@property (nonatomic) NSUInteger numberOfItems;

@property (nonatomic) UIColor * itemColor;

@property (nonatomic) CGFloat level;

@property (nonatomic) UILabel *timeLabel;

@property (nonatomic) NSString *text;


@end
