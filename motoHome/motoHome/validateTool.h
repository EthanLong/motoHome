//
//  validateTool.h
//  motoHome
//
//  Created by QiEthan on 16/4/25.
//  Copyright © 2016年 bridgetree. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface validateTool : NSObject

#pragma 正则匹配Email
+(BOOL)checkEmail:(NSString *)strEmail;
#pragma 正则匹配手机号
+ (BOOL)checkTelNumber:(NSString *) telNumber;
#pragma 正则匹配用户密码6-18位数字和字母组合
+ (BOOL)checkPassword:(NSString *) password;
#pragma 正则匹配用户姓名,20位的中文或英文
+ (BOOL)checkUserName : (NSString *) userName;
#pragma 正则匹配用户身份证号
+ (BOOL)checkUserIdCard: (NSString *) idCard;
#pragma 正则匹员工号,12位的数字
+ (BOOL)checkEmployeeNumber: (NSString *) number;
#pragma 正则匹配URL
+ (BOOL)checkURL: (NSString *) url;
#pragma 中英文字符、数字和"_"或减号
+ (BOOL)checkSpecial: (NSString *) str;

@end
