//
//  WDLog.h
//  Easytrip
//
//  Created by zhang jinquan on 13-4-10.
//  Copyright (c) 2013年 WaterDrop Studio. All rights reserved.
//

#ifndef Easytrip_WDLog_h
#define Easytrip_WDLog_h

#define WDFUNC_EMPTY ((void)0)

/*
 * Simple log settings
 */
//#define WDLOG_ENABLED
//#define WDLOG_LEVEL WDLOG_LEVEL_INFO

#define WDLOG_ENABLED
#define WDLOG_LEVEL WDLOG_LEVEL_ALL

/*
 * WDLog
 */
#ifndef WDLOG_ENABLED
#define WDLog(fmt, ...) WDFUNC_EMPTY
#else
#define WDLog(fmt, ...) NSLog(fmt, ##__VA_ARGS__)
#endif

/*
 * Log levels
 */
#define WDLOG_LEVEL_NONE  0 // ignore all logs
#define WDLOG_LEVEL_FATAL 1 // fatal error happens
#define WDLOG_LEVEL_ERROR 2 // error happens
#define WDLOG_LEVEL_WARN  3 // problem exists probably
#define WDLOG_LEVEL_INFO  4 // normal info
#define WDLOG_LEVEL_DEBUG 5 // debug info
#define WDLOG_LEVEL_TRACE 6 // verbose debug info
#define WDLOG_LEVEL_ALL   7 // active all logs

#ifndef WDLOG_LEVEL
#define WDLOG_LEVEL WDLOG_LEVEL_DEBUG
#endif


#ifndef DEBUG
#define WDLOG_LEVEL WDLOG_LEVEL_NONE
#endif


#if WDLOG_LEVEL < WDLOG_LEVEL_FATAL
#define WDFatal(fmt, ...) WDFUNC_EMPTY
#else
#define WDFatal(fmt, ...) WDLog(@"<FATAL>: %s(%d): " fmt, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#endif

#if WDLOG_LEVEL < WDLOG_LEVEL_ERROR
#define WDError(fmt, ...) WDFUNC_EMPTY
#else
#define WDError(fmt, ...) WDLog(@"<ERROR>: %s(%d): " fmt, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#endif

#if WDLOG_LEVEL < WDLOG_LEVEL_WARN
#define WDWarn(fmt, ...) WDFUNC_EMPTY
#else
#define WDWarn(fmt, ...) WDLog(@"<WARN>: %s(%d): " fmt, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#endif

#if WDLOG_LEVEL < WDLOG_LEVEL_INFO
#define WDInfo(fmt, ...) WDFUNC_EMPTY
#else
#define WDInfo(fmt, ...) WDLog(@"<INFO>: " fmt, ##__VA_ARGS__)
#endif

#if WDLOG_LEVEL < WDLOG_LEVEL_DEBUG
#define WDDebug(fmt, ...) WDFUNC_EMPTY
#else
#define WDDebug(fmt, ...) WDLog(@"<DEBUG>: %s(%d): " fmt, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#endif

#if WDLOG_LEVEL < WDLOG_LEVEL_TRACE
#define WDTrace(fmt, ...) WDFUNC_EMPTY
#else
#define WDTrace(fmt, ...) WDLog(@"<TRACE>: %s(%d): " fmt, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#endif

void WDRedirectLogToFile(NSString *filePath);

#endif