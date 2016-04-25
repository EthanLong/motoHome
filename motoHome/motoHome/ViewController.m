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
//    AFJSONResponseSerializer *responseSerializer = [AFJSONResponseSerializer serializerWithReadingOptions:NSJSONReadingAllowFragments];
//    [session setResponseSerializer:responseSerializer];
//    session.responseSerializer.acceptableContentTypes =[NSSet setWithObjects:@"application/json",@"text/json",@"text/javascript",@"text/html",nil];
    [session GET:@"http://139.196.53.170:9001/informs?target_type=a&page=1&group_id=53293b902544341378c5a021&user_id=2db1551662ab43adab3a53ab48e8cc55&token=20d51ea12c0f434ebdf38b01a6933265&validation=gAJ9cQAoVQZsb2NhbGVxAVUFemhfQ05xAl&pagesize=4" parameters:nil progress:nil success:^(NSURLSessionDataTask *task, id responseObject) {
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
