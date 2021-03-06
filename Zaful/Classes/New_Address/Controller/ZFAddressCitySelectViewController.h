//
//  ZFCitySelectViewController.h
//  Zaful
//
//  Created by liuxi on 2017/8/29.
//  Copyright © 2017年 Y001. All rights reserved.
//

#import "ZFBaseViewController.h"

@class ZFAddressCityModel;

typedef void(^AddressCitySelectCompletionHandler)(ZFAddressCityModel *model);

@interface ZFAddressCitySelectViewController : ZFBaseViewController

@property (nonatomic, copy)  NSString *provinceId;
@property (nonatomic, copy)  NSString *countryId;

@property (nonatomic, copy) AddressCitySelectCompletionHandler      addressCitySelectCompletionHandler;
@end
