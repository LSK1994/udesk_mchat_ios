//
//  UMCCustomButtonConfig.h
//  UdeskMChatExample
//
//  Created by xuchen on 2018/6/28.
//  Copyright © 2018年 Udesk. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UMCCustomButtonConfig;
@class UMCIMViewController;

//点击回调，返回按钮所在的控制器
typedef void(^CustomButtonClickBlock)(UMCCustomButtonConfig *customButton,UMCIMViewController *viewController);

@interface UMCCustomButtonConfig : NSObject

@property (nonatomic, copy  ) NSString *title;
@property (nonatomic, copy  ) CustomButtonClickBlock clickBlock;

/**
 初始化自定义按钮
 
 @param title 按钮标题（如果type是InMoreView则文本长度最大限制为5）
 @param clickBlock 点击回调
 @return 自定义按钮
 */
- (instancetype)initWithTitle:(NSString *)title clickBlock:(CustomButtonClickBlock)clickBlock;

@end
