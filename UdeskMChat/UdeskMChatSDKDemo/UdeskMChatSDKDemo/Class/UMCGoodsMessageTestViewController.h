//
//  UdeskGoodsMessageTestViewController.h
//  UdeskSDK
//
//  Created by xuchen on 2018/6/25.
//  Copyright © 2018年 Udesk. All rights reserved.
//

#import <UIKit/UIKit.h>
@class UMCGoodsModel;

@interface UMCGoodsMessageTestViewController : UITableViewController

@property (nonatomic, copy) void(^doneEditGoodsMessageBlock)(UMCGoodsModel *model);

@end
