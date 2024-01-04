#ifndef HUAWEICLOUD_SDK_MPC_V1_MpcClient_H_
#define HUAWEICLOUD_SDK_MPC_V1_MpcClient_H_

#include <huaweicloud/mpc/v1/MpcExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/mpc/v1/model/CreateAnimatedGraphicsTaskReq.h>
#include <huaweicloud/mpc/v1/model/CreateAnimatedGraphicsTaskRequest.h>
#include <huaweicloud/mpc/v1/model/CreateAnimatedGraphicsTaskResponse.h>
#include <huaweicloud/mpc/v1/model/DeleteAnimatedGraphicsTaskRequest.h>
#include <huaweicloud/mpc/v1/model/DeleteAnimatedGraphicsTaskResponse.h>
#include <huaweicloud/mpc/v1/model/ListAnimatedGraphicsTaskRequest.h>
#include <huaweicloud/mpc/v1/model/ListAnimatedGraphicsTaskResponse.h>
#include <string>

#include <huaweicloud/mpc/v1/model/AgenciesTaskReq.h>
#include <huaweicloud/mpc/v1/model/BucketAuthorizedReq.h>
#include <huaweicloud/mpc/v1/model/CreateAgenciesTaskRequest.h>
#include <huaweicloud/mpc/v1/model/CreateAgenciesTaskResponse.h>
#include <huaweicloud/mpc/v1/model/ListAllBucketsRequest.h>
#include <huaweicloud/mpc/v1/model/ListAllBucketsResponse.h>
#include <huaweicloud/mpc/v1/model/ListAllObsObjListRequest.h>
#include <huaweicloud/mpc/v1/model/ListAllObsObjListResponse.h>
#include <huaweicloud/mpc/v1/model/ListNotifyEventRequest.h>
#include <huaweicloud/mpc/v1/model/ListNotifyEventResponse.h>
#include <huaweicloud/mpc/v1/model/ListNotifySmnTopicConfigRequest.h>
#include <huaweicloud/mpc/v1/model/ListNotifySmnTopicConfigResponse.h>
#include <huaweicloud/mpc/v1/model/NotificationConfigReq.h>
#include <huaweicloud/mpc/v1/model/NotifySmnTopicConfigRequest.h>
#include <huaweicloud/mpc/v1/model/NotifySmnTopicConfigResponse.h>
#include <huaweicloud/mpc/v1/model/ShowAgenciesTaskRequest.h>
#include <huaweicloud/mpc/v1/model/ShowAgenciesTaskResponse.h>
#include <huaweicloud/mpc/v1/model/UpdateBucketAuthorizedRequest.h>
#include <huaweicloud/mpc/v1/model/UpdateBucketAuthorizedResponse.h>
#include <string>

#include <huaweicloud/mpc/v1/model/CreateEditingJobReq.h>
#include <huaweicloud/mpc/v1/model/CreateEditingJobRequest.h>
#include <huaweicloud/mpc/v1/model/CreateEditingJobResponse.h>
#include <huaweicloud/mpc/v1/model/DeleteEditingJobRequest.h>
#include <huaweicloud/mpc/v1/model/DeleteEditingJobResponse.h>
#include <huaweicloud/mpc/v1/model/ListEditingJobRequest.h>
#include <huaweicloud/mpc/v1/model/ListEditingJobResponse.h>
#include <string>

#include <huaweicloud/mpc/v1/model/CreateEncryptReq.h>
#include <huaweicloud/mpc/v1/model/CreateEncryptTaskRequest.h>
#include <huaweicloud/mpc/v1/model/CreateEncryptTaskResponse.h>
#include <huaweicloud/mpc/v1/model/DeleteEncryptTaskRequest.h>
#include <huaweicloud/mpc/v1/model/DeleteEncryptTaskResponse.h>
#include <huaweicloud/mpc/v1/model/ListEncryptTaskRequest.h>
#include <huaweicloud/mpc/v1/model/ListEncryptTaskResponse.h>
#include <string>

#include <huaweicloud/mpc/v1/model/CreateExtractTaskReq.h>
#include <huaweicloud/mpc/v1/model/CreateExtractTaskRequest.h>
#include <huaweicloud/mpc/v1/model/CreateExtractTaskResponse.h>
#include <huaweicloud/mpc/v1/model/DeleteExtractTaskRequest.h>
#include <huaweicloud/mpc/v1/model/DeleteExtractTaskResponse.h>
#include <huaweicloud/mpc/v1/model/ListExtractTaskRequest.h>
#include <huaweicloud/mpc/v1/model/ListExtractTaskResponse.h>
#include <string>

#include <huaweicloud/mpc/v1/model/CreateMbTasksReportRequest.h>
#include <huaweicloud/mpc/v1/model/CreateMbTasksReportResponse.h>
#include <huaweicloud/mpc/v1/model/CreateMergeChannelsReq.h>
#include <huaweicloud/mpc/v1/model/CreateMergeChannelsTaskRequest.h>
#include <huaweicloud/mpc/v1/model/CreateMergeChannelsTaskResponse.h>
#include <huaweicloud/mpc/v1/model/CreateResetTracksReq.h>
#include <huaweicloud/mpc/v1/model/CreateResetTracksTaskRequest.h>
#include <huaweicloud/mpc/v1/model/CreateResetTracksTaskResponse.h>
#include <huaweicloud/mpc/v1/model/DeleteMergeChannelsTaskRequest.h>
#include <huaweicloud/mpc/v1/model/DeleteMergeChannelsTaskResponse.h>
#include <huaweicloud/mpc/v1/model/DeleteResetTracksTaskRequest.h>
#include <huaweicloud/mpc/v1/model/DeleteResetTracksTaskResponse.h>
#include <huaweicloud/mpc/v1/model/ListMergeChannelsTaskRequest.h>
#include <huaweicloud/mpc/v1/model/ListMergeChannelsTaskResponse.h>
#include <huaweicloud/mpc/v1/model/ListResetTracksTaskRequest.h>
#include <huaweicloud/mpc/v1/model/ListResetTracksTaskResponse.h>
#include <huaweicloud/mpc/v1/model/MbTasksReportReq.h>
#include <string>

#include <huaweicloud/mpc/v1/model/CreateMediaProcessReq.h>
#include <huaweicloud/mpc/v1/model/CreateMediaProcessTaskRequest.h>
#include <huaweicloud/mpc/v1/model/CreateMediaProcessTaskResponse.h>
#include <huaweicloud/mpc/v1/model/DeleteMediaProcessTaskRequest.h>
#include <huaweicloud/mpc/v1/model/DeleteMediaProcessTaskResponse.h>
#include <huaweicloud/mpc/v1/model/ListMediaProcessTaskRequest.h>
#include <huaweicloud/mpc/v1/model/ListMediaProcessTaskResponse.h>
#include <string>

#include <huaweicloud/mpc/v1/model/CreateMpeCallBackRequest.h>
#include <huaweicloud/mpc/v1/model/CreateMpeCallBackResponse.h>
#include <huaweicloud/mpc/v1/model/MpeCallBackReq.h>

#include <huaweicloud/mpc/v1/model/CreateQualityEnhanceTemplateRequest.h>
#include <huaweicloud/mpc/v1/model/CreateQualityEnhanceTemplateResponse.h>
#include <huaweicloud/mpc/v1/model/DeleteQualityEnhanceTemplateRequest.h>
#include <huaweicloud/mpc/v1/model/DeleteQualityEnhanceTemplateResponse.h>
#include <huaweicloud/mpc/v1/model/ListQualityEnhanceDefaultTemplateRequest.h>
#include <huaweicloud/mpc/v1/model/ListQualityEnhanceDefaultTemplateResponse.h>
#include <huaweicloud/mpc/v1/model/QualityEnhanceTemplate.h>
#include <huaweicloud/mpc/v1/model/UpdateQualityEnhanceTemplateReq.h>
#include <huaweicloud/mpc/v1/model/UpdateQualityEnhanceTemplateRequest.h>
#include <huaweicloud/mpc/v1/model/UpdateQualityEnhanceTemplateResponse.h>

#include <huaweicloud/mpc/v1/model/ListTranscodeDetailRequest.h>
#include <huaweicloud/mpc/v1/model/ListTranscodeDetailResponse.h>
#include <string>

#include <huaweicloud/mpc/v1/model/CancelRemuxTaskRequest.h>
#include <huaweicloud/mpc/v1/model/CancelRemuxTaskResponse.h>
#include <huaweicloud/mpc/v1/model/CreateRemuxTaskReq.h>
#include <huaweicloud/mpc/v1/model/CreateRemuxTaskRequest.h>
#include <huaweicloud/mpc/v1/model/CreateRemuxTaskResponse.h>
#include <huaweicloud/mpc/v1/model/CreateRetryRemuxTaskRequest.h>
#include <huaweicloud/mpc/v1/model/CreateRetryRemuxTaskResponse.h>
#include <huaweicloud/mpc/v1/model/DeleteRemuxTaskRequest.h>
#include <huaweicloud/mpc/v1/model/DeleteRemuxTaskResponse.h>
#include <huaweicloud/mpc/v1/model/ListRemuxTaskRequest.h>
#include <huaweicloud/mpc/v1/model/ListRemuxTaskResponse.h>
#include <huaweicloud/mpc/v1/model/RemuxRetryReq.h>
#include <string>

#include <huaweicloud/mpc/v1/model/CreateTemplateGroupRequest.h>
#include <huaweicloud/mpc/v1/model/CreateTemplateGroupResponse.h>
#include <huaweicloud/mpc/v1/model/DeleteTemplateGroupRequest.h>
#include <huaweicloud/mpc/v1/model/DeleteTemplateGroupResponse.h>
#include <huaweicloud/mpc/v1/model/ListTemplateGroupRequest.h>
#include <huaweicloud/mpc/v1/model/ListTemplateGroupResponse.h>
#include <huaweicloud/mpc/v1/model/ModifyTransTemplateGroup.h>
#include <huaweicloud/mpc/v1/model/TransTemplateGroup.h>
#include <huaweicloud/mpc/v1/model/UpdateTemplateGroupRequest.h>
#include <huaweicloud/mpc/v1/model/UpdateTemplateGroupResponse.h>
#include <string>

#include <huaweicloud/mpc/v1/model/ShowTenantAccessInfoRequest.h>
#include <huaweicloud/mpc/v1/model/ShowTenantAccessInfoResponse.h>
#include <huaweicloud/mpc/v1/model/UpdateTenantAccessInfoReq.h>
#include <huaweicloud/mpc/v1/model/UpdateTenantAccessInfoRequest.h>
#include <huaweicloud/mpc/v1/model/UpdateTenantAccessInfoResponse.h>
#include <string>

#include <huaweicloud/mpc/v1/model/CreateThumbReq.h>
#include <huaweicloud/mpc/v1/model/CreateThumbnailsTaskRequest.h>
#include <huaweicloud/mpc/v1/model/CreateThumbnailsTaskResponse.h>
#include <huaweicloud/mpc/v1/model/DeleteThumbnailsTaskRequest.h>
#include <huaweicloud/mpc/v1/model/DeleteThumbnailsTaskResponse.h>
#include <huaweicloud/mpc/v1/model/ListThumbnailsTaskRequest.h>
#include <huaweicloud/mpc/v1/model/ListThumbnailsTaskResponse.h>
#include <string>

#include <huaweicloud/mpc/v1/model/CreateTranscodingReq.h>
#include <huaweicloud/mpc/v1/model/CreateTranscodingTaskRequest.h>
#include <huaweicloud/mpc/v1/model/CreateTranscodingTaskResponse.h>
#include <huaweicloud/mpc/v1/model/DeleteTranscodingTaskByConsoleRequest.h>
#include <huaweicloud/mpc/v1/model/DeleteTranscodingTaskByConsoleResponse.h>
#include <huaweicloud/mpc/v1/model/DeleteTranscodingTaskRequest.h>
#include <huaweicloud/mpc/v1/model/DeleteTranscodingTaskResponse.h>
#include <huaweicloud/mpc/v1/model/ListStatSummaryRequest.h>
#include <huaweicloud/mpc/v1/model/ListStatSummaryResponse.h>
#include <huaweicloud/mpc/v1/model/ListTranscodingTaskRequest.h>
#include <huaweicloud/mpc/v1/model/ListTranscodingTaskResponse.h>
#include <string>

#include <huaweicloud/mpc/v1/model/CreateTransTemplateRequest.h>
#include <huaweicloud/mpc/v1/model/CreateTransTemplateResponse.h>
#include <huaweicloud/mpc/v1/model/DeleteTemplateRequest.h>
#include <huaweicloud/mpc/v1/model/DeleteTemplateResponse.h>
#include <huaweicloud/mpc/v1/model/ListTemplateRequest.h>
#include <huaweicloud/mpc/v1/model/ListTemplateResponse.h>
#include <huaweicloud/mpc/v1/model/ModifyTransTemplateReq.h>
#include <huaweicloud/mpc/v1/model/TransTemplate.h>
#include <huaweicloud/mpc/v1/model/UpdateTransTemplateRequest.h>
#include <huaweicloud/mpc/v1/model/UpdateTransTemplateResponse.h>

#include <huaweicloud/mpc/v1/model/CreateWatermarkTemplateRequest.h>
#include <huaweicloud/mpc/v1/model/CreateWatermarkTemplateResponse.h>
#include <huaweicloud/mpc/v1/model/DeleteWatermarkTemplateRequest.h>
#include <huaweicloud/mpc/v1/model/DeleteWatermarkTemplateResponse.h>
#include <huaweicloud/mpc/v1/model/ListWatermarkTemplateRequest.h>
#include <huaweicloud/mpc/v1/model/ListWatermarkTemplateResponse.h>
#include <huaweicloud/mpc/v1/model/UpdateWatermarkTemplateRequest.h>
#include <huaweicloud/mpc/v1/model/UpdateWatermarkTemplateResponse.h>
#include <huaweicloud/mpc/v1/model/WatermarkTemplate.h>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Mpc::V1::Model;

class HUAWEICLOUD_MPC_V1_EXPORT  MpcClient : public Client
{
public:

    MpcClient();

    virtual ~MpcClient();

    static ClientBuilder<MpcClient> newBuilder();

    // 新建转动图任务
    //
    // 创建动图任务，用于将完整的视频文件或视频文件中的一部分转换为动态图文件，暂只支持输出GIF文件。
    // 待转动图的视频文件需要存储在与媒体处理服务同区域的OBS桶中，且该OBS桶已授权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAnimatedGraphicsTaskResponse> createAnimatedGraphicsTask(
        CreateAnimatedGraphicsTaskRequest &request
    );
    // 取消转动图任务
    //
    // 取消已下发的生成动图任务，仅支持取消正在排队中的任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAnimatedGraphicsTaskResponse> deleteAnimatedGraphicsTask(
        DeleteAnimatedGraphicsTaskRequest &request
    );
    // 查询转动图任务
    //
    // 查询动图任务的状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAnimatedGraphicsTaskResponse> listAnimatedGraphicsTask(
        ListAnimatedGraphicsTaskRequest &request
    );

    // 请求委托任务
    //
    // 开启或关闭\&quot;委托授权\&quot;, 开启后，媒体处理服务将拥有您所有桶的读写权限，子账号不支持委托授权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAgenciesTaskResponse> createAgenciesTask(
        CreateAgenciesTaskRequest &request
    );
    // 查询桶列表
    //
    // 请求查询自己创建的指定的桶区域位置的桶列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAllBucketsResponse> listAllBuckets(
        ListAllBucketsRequest &request
    );
    // 查询桶里的object
    //
    // 查询桶里的object。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAllObsObjListResponse> listAllObsObjList(
        ListAllObsObjListRequest &request
    );
    // 查询转码服务端所有事件
    //
    // 查询消息订阅功能板块, SMN主题的所有订阅事件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNotifyEventResponse> listNotifyEvent(
        ListNotifyEventRequest &request
    );
    // 查询转码服务端事件通知
    //
    // 查询消息订阅功能板块, SMN主题的订阅事件的启用状态和订阅消息的启用状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNotifySmnTopicConfigResponse> listNotifySmnTopicConfig(
        ListNotifySmnTopicConfigRequest &request
    );
    // 配置转码服务端事件通知
    //
    // 配置转码服务端事件通知。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NotifySmnTopicConfigResponse> notifySmnTopicConfig(
        NotifySmnTopicConfigRequest &request
    );
    // 查询创建委托任务状态
    //
    // 查询创建委托任务状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAgenciesTaskResponse> showAgenciesTask(
        ShowAgenciesTaskRequest &request
    );
    // 桶授权或取消授权
    //
    // 对OBS桶进行授权或取消授权，媒体处理服务仅拥有已授权桶的读写权限。（暂不支持KMS加密桶的授权）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateBucketAuthorizedResponse> updateBucketAuthorized(
        UpdateBucketAuthorizedRequest &request
    );

    // 新建剪辑任务
    //
    // 创建剪辑任务，用于将多个视频文件进行裁剪成多个视频分段，并且可以把这些视频分段合并成一个视频，剪切和拼接功能可以单独使用。
    // 待剪辑的视频文件需要存储在与媒体处理服务同区域的OBS桶中，且该OBS桶已授权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateEditingJobResponse> createEditingJob(
        CreateEditingJobRequest &request
    );
    // 取消剪辑任务
    //
    // 取消已下发的生成剪辑任务，仅支持取消正在排队中的任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteEditingJobResponse> deleteEditingJob(
        DeleteEditingJobRequest &request
    );
    // 查询剪辑任务
    //
    // 查询剪辑任务的状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEditingJobResponse> listEditingJob(
        ListEditingJobRequest &request
    );

    // 新建独立加密任务
    //
    // 支持独立加密，包括创建、查询、删除独立加密任务。该API已废弃。
    // 
    // 约束：
    //   - 只支持转码后的文件进行加密。
    //   - 加密的文件必须是m3u8或者mpd结尾的文件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateEncryptTaskResponse> createEncryptTask(
        CreateEncryptTaskRequest &request
    );
    // 取消独立加密任务
    //
    // 取消独立加密任务。该API已废弃。
    // 
    // 约束：
    // 
    //   只能取消正在任务队列中排队的任务。已开始加密或已完成的加密任务不能取消。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteEncryptTaskResponse> deleteEncryptTask(
        DeleteEncryptTaskRequest &request
    );
    // 查询独立加密任务
    //
    // 查询独立加密任务状态。返回任务执行结果或当前状态。该API已废弃。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEncryptTaskResponse> listEncryptTask(
        ListEncryptTaskRequest &request
    );

    // 新建视频解析任务
    //
    // 创建视频解析任务，解析视频元数据。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateExtractTaskResponse> createExtractTask(
        CreateExtractTaskRequest &request
    );
    // 取消视频解析任务
    //
    // 取消已下发的视频解析任务，仅支持取消正在排队中的任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteExtractTaskResponse> deleteExtractTask(
        DeleteExtractTaskRequest &request
    );
    // 查询视频解析任务
    //
    // 查询解析任务的状态和结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListExtractTaskResponse> listExtractTask(
        ListExtractTaskRequest &request
    );

    // 合并多声道任务、重置声轨任务上报接口
    //
    // ## 典型场景 ##
    //   合并音频多声道文件任务、重置音频文件声轨任务上报结果接口。
    // ## 接口功能 ##
    //   合并音频多声道文件任务、重置音频文件声轨任务上报结果接口。
    // ## 接口约束 ##
    //   无。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateMbTasksReportResponse> createMbTasksReport(
        CreateMbTasksReportRequest &request
    );
    // 创建声道合并任务
    //
    // 创建声道合并任务，合并声道任务支持将每个声道各放一个文件中的片源，合并为单个音频文件。
    // 执行合并声道的源音频文件需要存储在与媒体处理服务同区域的OBS桶中，且该OBS桶已授权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateMergeChannelsTaskResponse> createMergeChannelsTask(
        CreateMergeChannelsTaskRequest &request
    );
    // 创建音轨重置任务
    //
    // 创建音轨重置任务，重置音轨任务支持按人工指定关系声道layout，语言标签，转封装片源，使其满足转码输入。
    // 执行音轨重置的源音频文件需要存储在与媒体处理服务同区域的OBS桶中，且该OBS桶已授权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateResetTracksTaskResponse> createResetTracksTask(
        CreateResetTracksTaskRequest &request
    );
    // 取消声道合并任务
    //
    // 取消合并音频多声道文件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteMergeChannelsTaskResponse> deleteMergeChannelsTask(
        DeleteMergeChannelsTaskRequest &request
    );
    // 取消音轨重置任务
    //
    // 取消重置音频文件声轨任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteResetTracksTaskResponse> deleteResetTracksTask(
        DeleteResetTracksTaskRequest &request
    );
    // 查询声道合并任务
    //
    // 查询声道合并任务的状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeChannelsTaskResponse> listMergeChannelsTask(
        ListMergeChannelsTaskRequest &request
    );
    // 查询音轨重置任务
    //
    // 查询音轨重置任务的状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListResetTracksTaskResponse> listResetTracksTask(
        ListResetTracksTaskRequest &request
    );

    // 创建视频增强任务
    //
    // ## 典型场景 ##
    //   创建视频增强任务。
    // 
    // ## 接口功能 ##
    //   创建视频增强任务。
    // 
    // ## 接口约束 ##
    //   无。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateMediaProcessTaskResponse> createMediaProcessTask(
        CreateMediaProcessTaskRequest &request
    );
    // 取消视频增强任务
    //
    // ## 典型场景 ##
    //   取消视频增强任务。
    // 
    // ## 接口功能 ##
    //   取消视频增强任务。
    // 
    // ## 接口约束 ##
    //   仅可删除正在排队中的任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteMediaProcessTaskResponse> deleteMediaProcessTask(
        DeleteMediaProcessTaskRequest &request
    );
    // 查询视频增强任务
    //
    // ## 典型场景 ##
    //   查询视频增强任务。
    // 
    // ## 接口功能 ##
    //   查询视频增强任务。
    // 
    // ## 接口约束 ##
    //   无。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMediaProcessTaskResponse> listMediaProcessTask(
        ListMediaProcessTaskRequest &request
    );

    // mpe通知mpc
    //
    // ## 典型场景 ##
    //   mpe通知mpc。
    // ## 接口功能 ##
    //   mpe调用此接口通知mpc转封装等结果。
    // ## 接口约束 ##
    //   无。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateMpeCallBackResponse> createMpeCallBack(
        CreateMpeCallBackRequest &request
    );

    // 创建视频增强模板
    //
    // 创建视频增强模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateQualityEnhanceTemplateResponse> createQualityEnhanceTemplate(
        CreateQualityEnhanceTemplateRequest &request
    );
    // 删除用户视频增强模板
    //
    // 删除用户视频增强模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteQualityEnhanceTemplateResponse> deleteQualityEnhanceTemplate(
        DeleteQualityEnhanceTemplateRequest &request
    );
    // 查询视频增强预置模板
    //
    // 查询视频增强预置模板，返回所有结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListQualityEnhanceDefaultTemplateResponse> listQualityEnhanceDefaultTemplate(
        ListQualityEnhanceDefaultTemplateRequest &request
    );
    // 更新视频增强模板
    //
    // 更新视频增强模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateQualityEnhanceTemplateResponse> updateQualityEnhanceTemplate(
        UpdateQualityEnhanceTemplateRequest &request
    );

    // 查询媒资转码详情
    //
    // 查询媒资转码详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTranscodeDetailResponse> listTranscodeDetail(
        ListTranscodeDetailRequest &request
    );

    // 取消转封装任务
    //
    // 取消已下发的转封装任务，仅支持取消正在排队中的任务。。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelRemuxTaskResponse> cancelRemuxTask(
        CancelRemuxTaskRequest &request
    );
    // 新建转封装任务
    //
    // 创建转封装任务，转换音视频文件的格式，但不改变其分辨率和码率。
    // 待转封装的媒资文件需要存储在与媒体处理服务同区域的OBS桶中，且该OBS桶已授权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRemuxTaskResponse> createRemuxTask(
        CreateRemuxTaskRequest &request
    );
    // 重试转封装任务
    //
    // 对失败的转封装任务进行重试。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRetryRemuxTaskResponse> createRetryRemuxTask(
        CreateRetryRemuxTaskRequest &request
    );
    // 删除转封装任务记录
    //
    // 删除转封装任务记录，只能删除状态为“已取消”，“转码成功”，“转码失败”的任务记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRemuxTaskResponse> deleteRemuxTask(
        DeleteRemuxTaskRequest &request
    );
    // 查询转封装任务
    //
    // 查询转封装任务状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRemuxTaskResponse> listRemuxTask(
        ListRemuxTaskRequest &request
    );

    // 新建转码模板组
    //
    // 新建转码模板组，最多支持一进六出。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTemplateGroupResponse> createTemplateGroup(
        CreateTemplateGroupRequest &request
    );
    // 删除转码模板组
    //
    // 删除转码模板组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTemplateGroupResponse> deleteTemplateGroup(
        DeleteTemplateGroupRequest &request
    );
    // 查询转码模板组
    //
    // 查询转码模板组列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTemplateGroupResponse> listTemplateGroup(
        ListTemplateGroupRequest &request
    );
    // 更新转码模板组
    //
    // 修改模板组接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTemplateGroupResponse> updateTemplateGroup(
        UpdateTemplateGroupRequest &request
    );

    // 租户查询服务开通状态信息
    //
    // 租户查询媒体转码服务开通状态信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTenantAccessInfoResponse> showTenantAccessInfo(
        ShowTenantAccessInfoRequest &request
    );
    // 租户开通媒体转码服务
    //
    // 租户开通媒体转码服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTenantAccessInfoResponse> updateTenantAccessInfo(
        UpdateTenantAccessInfoRequest &request
    );

    // 新建截图任务
    //
    // 新建截图任务，视频截图将从首帧开始，按设置的时间间隔截图，最后截取末帧。
    // 待截图的视频文件需要存储在与媒体处理服务同区域的OBS桶中，且该OBS桶已授权。
    // 
    // 约束：
    //   暂只支持生成JPG格式的图片文件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateThumbnailsTaskResponse> createThumbnailsTask(
        CreateThumbnailsTaskRequest &request
    );
    // 取消截图任务
    //
    // 取消已下发截图任务。
    // 只能取消已接受尚在队列中等待处理的任务，已完成或正在执行阶段的任务不能取消。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteThumbnailsTaskResponse> deleteThumbnailsTask(
        DeleteThumbnailsTaskRequest &request
    );
    // 查询截图任务
    //
    // 查询截图任务状态。返回任务执行结果，包括状态、输入、输出等信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListThumbnailsTaskResponse> listThumbnailsTask(
        ListThumbnailsTaskRequest &request
    );

    // 新建转码任务
    //
    // 新建转码任务可以将视频进行转码，并在转码过程中压制水印、视频截图等。视频转码前需要配置转码模板。
    // 待转码的音视频需要存储在与媒体处理服务同区域的OBS桶中，且该OBS桶已授权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTranscodingTaskResponse> createTranscodingTask(
        CreateTranscodingTaskRequest &request
    );
    // 取消转码任务
    //
    // 取消已下发转码任务。
    // 只能取消正在转码任务队列中排队的转码任务。已开始转码或已完成的转码任务不能取消。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTranscodingTaskResponse> deleteTranscodingTask(
        DeleteTranscodingTaskRequest &request
    );
    // 删除转码任务记录
    //
    // 删除转码任务记录，只能删除状态为“已取消”，“转码成功”，“转码失败”的转码任务记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTranscodingTaskByConsoleResponse> deleteTranscodingTaskByConsole(
        DeleteTranscodingTaskByConsoleRequest &request
    );
    // 查询点播概览信息
    //
    // 查询最近一周，最近一月或者自定义时间段的“转码时长”，“调用转码API次数”。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListStatSummaryResponse> listStatSummary(
        ListStatSummaryRequest &request
    );
    // 查询转码任务
    //
    // 查询转码任务状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTranscodingTaskResponse> listTranscodingTask(
        ListTranscodingTaskRequest &request
    );

    // 新建转码模板
    //
    // 新建转码模板，采用自定义的模板转码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTransTemplateResponse> createTransTemplate(
        CreateTransTemplateRequest &request
    );
    // 删除转码模板
    //
    // 删除转码模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTemplateResponse> deleteTemplate(
        DeleteTemplateRequest &request
    );
    // 查询转码模板
    //
    // 查询用户自定义转码配置模板。
    // 支持指定模板ID查询，或分页全量查询。转码配置模板ID，最多10个。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTemplateResponse> listTemplate(
        ListTemplateRequest &request
    );
    // 更新转码模板
    //
    // 更新转码模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTransTemplateResponse> updateTransTemplate(
        UpdateTransTemplateRequest &request
    );

    // 新建水印模板
    //
    // 自定义水印模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateWatermarkTemplateResponse> createWatermarkTemplate(
        CreateWatermarkTemplateRequest &request
    );
    // 删除水印模板
    //
    // 删除自定义水印模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteWatermarkTemplateResponse> deleteWatermarkTemplate(
        DeleteWatermarkTemplateRequest &request
    );
    // 查询水印模板
    //
    // 查询自定义水印模板。支持指定模板ID查询，或分页全量查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWatermarkTemplateResponse> listWatermarkTemplate(
        ListWatermarkTemplateRequest &request
    );
    // 更新水印模板
    //
    // 更新自定义水印模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateWatermarkTemplateResponse> updateWatermarkTemplate(
        UpdateWatermarkTemplateRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_MPC_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Mpc::V1::MpcClient>;

#endif // HUAWEICLOUD_SDK_MPC_V1_MpcClient_H_

