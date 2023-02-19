//
//  CIUDPSocketTool.h
//  CIUDPSocket
//
//  Created by daben on 2022/5/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 持续向外回调消息
typedef void(^UDPSocketResultCallback)(NSInteger callbackType, NSString * _Nullable callbackName, id _Nullable callbackParams, NSString * _Nullable errorString);

@interface CIUDPSocketTool : NSObject

+ (instancetype)tool;

/// 验证命令是否有效
/// @param command 命令
- (BOOL)canIUse:(NSString *)command;

/**
 创建UDP Socket 实例
 
 @param message JS消息体
 @param callback 消息回调
 @discussion 该方法属于UdpSocket消息分发器，所有和UdpSocket相关的消息都通过该方法进行转发
 */
- (void)dispatchJSMessage:(NSDictionary *)message callback:(UDPSocketResultCallback)callback;

@end

NS_ASSUME_NONNULL_END
