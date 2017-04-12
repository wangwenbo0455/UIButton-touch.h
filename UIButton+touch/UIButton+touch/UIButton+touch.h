//
//  ViewController.m
//  UIButton+touch
//
//  Created by 王文博 on 17/4/12.
//  Copyright © 2017年 王文博. All rights reserved.
//

#import <UIKit/UIKit.h>
#define defaultInterval 1  //默认时间间隔
@interface UIButton (touch)
/**设置点击时间间隔*/
@property (nonatomic, assign) NSTimeInterval timeInterval;
/**
 *  用于设置单个按钮不需要被hook
 */
@property (nonatomic, assign) BOOL isIgnore;
@end
