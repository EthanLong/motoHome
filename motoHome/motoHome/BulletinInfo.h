//
//  BulletinInfo.h
//  motoHome
//
//  Created by QiEthan on 16/4/25.
//  Copyright © 2016年 bridgetree. All rights reserved.
//

#import "JSONModel.h"

@interface BulletinInfo : JSONModel

@property (nonatomic, strong) NSString *info_id;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *content;
@property (nonatomic, strong) NSString *is_top; //是否置顶
@property (nonatomic, strong) NSString *is_done; //是否处理
@property (nonatomic, strong) NSString *tags; // { informs:[小组公告，公司公告, 个人公告], notice:[] }
@property (nonatomic, strong) NSString *created_time;
@property (nonatomic, strong) NSDictionary *created_user;
@property (nonatomic, strong) NSString *updated_time;
@property (nonatomic, strong) NSString *expired_time;
@property (nonatomic, strong) NSString *target_type; //{ 面向全公司: c, 面向小组:g, 面向特定人:u }
@property (nonatomic, strong) NSString *target_groups;
@property (nonatomic, strong) NSString *target_users;
@property (nonatomic, strong) NSString *viewed_users;
@property (nonatomic, strong) NSString *web_link;
@property (nonatomic, strong) NSString *app_link;
@property (nonatomic, strong) NSString *module;

@end