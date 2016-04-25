//
//  motoUtility.h
//  motoHome
//
//  Created by QiEthan on 16/4/25.
//  Copyright © 2016年 bridgetree. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface motoUtility : NSObject

+ (UIColor *)colorFromHexRGB:(NSString *)inColorString;

+ (UIImage *)imageWithImageSimple:(UIImage*)image scaledToSize:(CGSize)newSize;

+ (NSString *)trim:(NSString*)strInput;

@end
