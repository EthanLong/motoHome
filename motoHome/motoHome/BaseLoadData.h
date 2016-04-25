//
//  BaseLoadData.h
//  motoHome
//
//  Created by QiEthan on 16/4/25.
//  Copyright © 2016年 bridgetree. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BaseLoadData <NSObject>

@optional

-(void)loadDataSuccess:(id)loadData error:(NSString *)errors;
-(void)loadDataFialed:(NSString *)error;

-(void)deleteDataSuccess:(NSIndexPath *)indexPath;
-(void)deleteDataFialed:(NSString *)error;

@end
