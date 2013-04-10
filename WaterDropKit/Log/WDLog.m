//
//  WDLog.m
//  Easytrip
//
//  Created by zhang jinquan on 13-4-10.
//  Copyright (c) 2013年 WaterDrop Studio. All rights reserved.
//

#import "WDLog.h"

#include <stdio.h>

void WDRedirectLogToFile(NSString *filePath)
{
    freopen([filePath UTF8String], "w+", stderr);
}
