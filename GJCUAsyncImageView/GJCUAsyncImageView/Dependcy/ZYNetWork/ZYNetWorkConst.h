//
//  ZYNetWorkConst.h
//  ZYNetwork
//
//  Created by ZYVincent on 15/7/18.
//  Copyright (c) 2015年 ZYProSoft. All rights reserved.
//

/**
 *  请求类型
 */
typedef NS_ENUM(NSUInteger, ZYNetworkRequestMethod){
    /**
     *  POST
     */
    ZYNetworkRequestMethodPOST,
    /**
     *  GET
     */
    ZYNetworkRequestMethodGET,
};

/**
 *  网络底层错误类型
 */
typedef NS_ENUM(NSUInteger, ZYNetworkInnerError){
    /**
     *  <#Description#>
     */
    ZYNetworkInnerErrorNotConnectInternet,
};

/**
 *  网络请求任务类型
 */
typedef NS_ENUM(NSUInteger, ZYNetworkTaskType){
    /**
     *  下载图片
     */
    ZYNetworkTaskTypeDownloadFile,
    /**
     *  请求json接口
     */
    ZYNetworkTaskTypeJsonRequest,
};

/**
 *  任务状态
 */
typedef NS_ENUM(NSUInteger, ZYNetworkTaskState){
    /**
     *  请求成功
     */
    ZYNetworkTaskStateSuccess,
    /**
     *  请求中
     */
    ZYNetworkTaskStateLoading,
    /**
     *  请求失败
     */
    ZYNetworkTaskStateFaild,
    /**
     *  请求等待中
     */
    ZYNetworkTaskStateWait,
    
};
