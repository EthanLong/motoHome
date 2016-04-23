//
//  ViewController.m
//  motoHome
//
//  Created by QiEthan on 16/4/23.
//  Copyright © 2016年 bridgetree. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    AFHTTPSessionManager *session = [AFHTTPSessionManager manager];
    
    session.securityPolicy.allowInvalidCertificates = YES;
    [session GET:@"http://www.weather.com.cn/data/sk/101010100.html" parameters:nil progress:nil success:^(NSURLSessionDataTask *task, id responseObject) {
        
        NSLog(@"成功");
    } failure:^(NSURLSessionDataTask *task, NSError *error) {
        NSLog(@"失败 %@",error);
    }];
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
