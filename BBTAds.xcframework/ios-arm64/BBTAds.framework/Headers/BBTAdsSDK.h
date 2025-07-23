#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BBTAdsSDK : NSObject

/// SDK 版本号
+ (NSString *)version;

/// 注册 SDK
/// @param appId 应用ID
/// @param mediaId 媒体ID 
+ (void)registerWithAppId:(NSString *)appId mediaId:(NSString *)mediaId secret:(NSString *)secret;

/// 是否已经初始化
+ (BOOL)isInitialized;

/// 设置测试模式
/// @param isTest 是否为测试模式
+ (void)setTestMode:(BOOL)isTest;

/// 获取当前测试模式状态
+ (BOOL)isTestMode;

/// 设置日志开关
/// @param enabled 是否开启日志
+ (void)setLogEnabled:(BOOL)enabled;

/// 上报错误日志
/// @param errorSummary 错误摘要
/// @param errorDetails 错误详情
+ (void)reportError:(nullable NSString *)errorSummary
       errorDetails:(nullable NSString *)errorDetails;

/// 设置 CAID（China Advertising ID）
/// @param caid 中国广告标识符，类似苹果的 IDFA
+ (void)setCAID:(nullable NSString *)caid;

/// 获取当前设置的 CAID
+ (nullable NSString *)CAID;

/// 获取 PAID（拼多多 ID）
/// @return 自动生成的 PAID，基于设备信息和初始化时间
+ (NSString *)PAID;

@end

NS_ASSUME_NONNULL_END
