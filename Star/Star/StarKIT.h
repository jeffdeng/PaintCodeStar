//
//  StarKIT.h
//  StarKIT
//
//  Created by AuthorName on 15/6/1.
//  Copyright (c) 2015 CompanyName. All rights reserved.
//
//  Generated by PaintCode (www.paintcodeapp.com)
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface StarKIT : NSObject

// Drawing Methods
+ (void)drawStarWithFrontColor: (UIColor*)frontColor;
+ (void)drawFiveStarWithFrame: (CGRect)frame fillColor: (UIColor*)fillColor backgroundColor: (UIColor*)backgroundColor frontColor: (UIColor*)frontColor value: (CGFloat)value;

@end
