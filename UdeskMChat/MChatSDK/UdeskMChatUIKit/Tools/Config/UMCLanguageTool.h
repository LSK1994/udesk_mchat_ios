//
//  UMCLanguageTool.h
//  UdeskSDK
//
//  Created by Udesk on 16/9/5.
//  Copyright © 2016年 Udesk. All rights reserved.
//

#import <Foundation/Foundation.h>

#define LANGUAGE_SET @"udLangeuageset"

//语言类型枚举
typedef NS_ENUM(NSUInteger, UMCLanguageType) {
    UMCLanguageTypeCN = 0,
    UMCLanguageTypeEN, //暂时未支持
};

@interface UMCLanguageTool : NSObject

+ (id)sharedInstance;

/**
 *  返回table中指定的key的值
 *
 *  @param key   key
 *  @param table table
 *
 *  @return 返回table中指定的key的值
 */
- (NSString *)getStringForKey:(NSString *)key withTable:(NSString *)table;

/**
 *  设置新的语言
 *
 *  @param language 新语言
 */
- (void)setNewLanguage:(UMCLanguageType)language;

@end
