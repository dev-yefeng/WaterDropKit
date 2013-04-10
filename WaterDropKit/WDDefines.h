//
//  WDDefines.h
//  Easytrip
//
//  Created by zhang jinquan on 13-4-10.
//  Copyright (c) 2013年 WaterDrop Studio. All rights reserved.
//

#ifndef Easytrip_WDDefines_h
#define Easytrip_WDDefines_h

#ifdef __cplusplus
#define WDKIT_EXTERN		extern "C" __attribute__((visibility ("default")))
#else
#define WDKIT_EXTERN	        extern __attribute__((visibility ("default")))
#endif

#define WDStringf(fmt, ...) [NSString stringWithFormat:fmt, ##__VA_ARGS__]

#endif
