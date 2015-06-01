//
//  ScoreStarsView.m
//  Star
//
//  Created by deng on 15/6/1.
//  Copyright (c) 2015年 deng. All rights reserved.
//

#import "ScoreStarsView.h"

@implementation ScoreStarsView
-(void)drawRect:(CGRect)rect{
    [StarKIT drawFiveStarWithFrame: rect fillColor: self.fillColor backgroundColor: self.backgroundColor frontColor: self.frontColor value:self.value];
}
@end
