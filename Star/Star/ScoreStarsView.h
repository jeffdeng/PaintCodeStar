//
//  ScoreStarsView.h
//  Star
//
//  Created by deng on 15/6/1.
//  Copyright (c) 2015年 deng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StarKIT.h"
IB_DESIGNABLE
@interface ScoreStarsView : UIView
@property  (nonatomic,strong) IBInspectable UIColor* frontColor;
@property  (nonatomic,strong) IBInspectable UIColor* fillColor;
@property  (nonatomic,strong) IBInspectable UIColor* backgroundColor;
@property  (nonatomic,assign) IBInspectable CGFloat  value;
@end
