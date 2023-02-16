//
//  CIUDPSocketConst.h
//  CIUDPSocket
//
//  Created by daben on 2022/5/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 回调类型
typedef NS_ENUM(NSUInteger, CIUDPSocketJSCallbackType) {
    CIUDPSocketJSCallbackTypeNormal, // 普通回调
    CIUDPSocketJSCallbackTypeSubscribe // 订阅回调
};

/// 错误码
typedef NS_ENUM(NSInteger, CIUDPSocketError) {
    CIUDPSocketErrorSuccess  = 0,
    /// 系统错误
    CIUDPSocketErrorSystem  = -1,
    /// socket接口错误
    CIUDPSocketErrorInterface  = -2,
    /// 发送失败，无接口权限
    CIUDPSocketErrorNoAuth  = -3,
    /// 发送失败，参数错误，address不合法
    CIUDPSocketErrorAddress  = 1,
    /// 发送失败，参数错误，port不合法
    CIUDPSocketErrorPort  = 2
};

/// 参数名
typedef NSString * CIUDPSocketParamName;
/// callbackId
FOUNDATION_EXPORT CIUDPSocketParamName const CIUDPSocketParamCallbackIdName;
/// id
FOUNDATION_EXPORT CIUDPSocketParamName const CIUDPSocketParamIdName;
/// address
FOUNDATION_EXPORT CIUDPSocketParamName const CIUDPSocketParamAddressName;
/// port
FOUNDATION_EXPORT CIUDPSocketParamName const CIUDPSocketParamPortName;
/// message
FOUNDATION_EXPORT CIUDPSocketParamName const CIUDPSocketParamMessageName;
/// family
FOUNDATION_EXPORT CIUDPSocketParamName const CIUDPSocketParamFamilyName;
/// remoteInfo
FOUNDATION_EXPORT CIUDPSocketParamName const CIUDPSocketParamRemoteInfoName;
/// localInfo
FOUNDATION_EXPORT CIUDPSocketParamName const CIUDPSocketParamLocalInfoName;
/// size
FOUNDATION_EXPORT CIUDPSocketParamName const CIUDPSocketParamSizeName;
/// setBroadcast
FOUNDATION_EXPORT CIUDPSocketParamName const CIUDPSocketParamSetBroadcastName;

/// 响应：Native回调给小程序
typedef NSString * CIUDPSocketResKey;
/// 错误码（对标微信的响应结构。暂时无用，请使用CIUDPSocketResStatus和CIUDPSocketResStatusMessage）
FOUNDATION_EXPORT CIUDPSocketResKey const CIUDPSocketResCode;
FOUNDATION_EXPORT CIUDPSocketResKey const CIUDPSocketResCodeMessage;

/// 错误码（小程序框架设计如此：errMsg=ok代表成功，errMsg=fail代表失败）
/// 使用示例：@{CIUDPSocketResStatus : CIUDPSocketResStatusSuccess, CIUDPSocketResStatusMessage : @"This response is success"}
FOUNDATION_EXPORT CIUDPSocketResKey const CIUDPSocketResStatus;
FOUNDATION_EXPORT CIUDPSocketResKey const CIUDPSocketResStatusSuccess;
FOUNDATION_EXPORT CIUDPSocketResKey const CIUDPSocketResStatusFailure;
FOUNDATION_EXPORT CIUDPSocketResKey const CIUDPSocketResStatusMessage;

@interface CIUDPSocketConst : NSObject

@end

NS_ASSUME_NONNULL_END
