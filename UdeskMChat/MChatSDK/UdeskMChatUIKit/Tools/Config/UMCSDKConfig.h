//
//  UdeskSDKConfig.h
//  UdeskSDK
//
//  Created by Udesk on 16/1/16.
//  Copyright © 2016年 Udesk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UMCSDKStyle.h"
#import "UMCCustomButtonConfig.h"
#import <UdeskMChatSDK/UdeskMChatSDK.h>

@class UMCIMViewController;

@interface UMCSDKConfig : NSObject

@property (nonatomic, strong) UMCSDKStyle *sdkStyle;

/** im标题 */
@property (nonatomic, copy  ) NSString *imTitle;
/** 导航栏返回按钮文字 */
@property (nonatomic, copy  ) NSString *navBackButtonTitle;

/** 客户头像 */
@property (nonatomic, strong) UIImage  *customerImage;
/** 客户头像URL */
@property (nonatomic, copy  ) NSString *customerImageURL;
/** 商户头像 */
@property (nonatomic, strong) UIImage  *merchantImage;
/** 商户头像URL */
@property (nonatomic, copy  ) NSString *merchantImageURL;

/** 咨询对象消息 */
@property (nonatomic, strong) UMCProduct *product;

/** 是否隐藏（默认隐）*/
@property (nonatomic, assign, getter=isShowCustomButtons) BOOL showCustomButtons;
/** 自定义按钮 */
@property (nonatomic, strong) NSArray<UMCCustomButtonConfig *> *customButtons;

/** 超链接正则 */
@property (nonatomic, strong, readonly) NSMutableArray *linkRegexs;
/** 号码正则 */
@property (nonatomic, strong, readonly) NSMutableArray *numberRegexs;

/** 是否隐藏语音 */
@property (nonatomic, assign) BOOL     hiddenVoiceButton;
/** 是否隐藏表情 */
@property (nonatomic, assign) BOOL     hiddenEmotionButton;
/** 是否隐藏相机 */
@property (nonatomic, assign) BOOL     hiddenCameraButton;
/** 是否隐藏相册 */
@property (nonatomic, assign) BOOL     hiddenAlbumButton;
/** 是否隐藏商户搜索功能 */
@property (nonatomic, assign) BOOL     hiddenMerchantsSearch;

/** 离开聊天页面回调 */
@property (nonatomic, copy) void (^leaveChatViewController)(void);
/** 点击了商品消息 */
@property (nonatomic, copy) void (^clickGoodsBlock)(UMCIMViewController *viewController, NSString *url, NSString *goodsId);

+ (instancetype)sharedConfig;

- (void)setConfigToDefault;

@end
