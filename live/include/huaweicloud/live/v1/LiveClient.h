#ifndef HUAWEICLOUD_SDK_LIVE_V1_LiveClient_H_
#define HUAWEICLOUD_SDK_LIVE_V1_LiveClient_H_

#include <huaweicloud/live/v1/LiveExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/live/v1/model/BatchShowIpBelongsRequest.h>
#include <huaweicloud/live/v1/model/BatchShowIpBelongsResponse.h>
#include <huaweicloud/live/v1/model/CallbackUrl.h>
#include <huaweicloud/live/v1/model/CreateDomainMappingRequest.h>
#include <huaweicloud/live/v1/model/CreateDomainMappingResponse.h>
#include <huaweicloud/live/v1/model/CreateDomainRequest.h>
#include <huaweicloud/live/v1/model/CreateDomainResponse.h>
#include <huaweicloud/live/v1/model/CreateFlowsRequest.h>
#include <huaweicloud/live/v1/model/CreateFlowsRequestBody.h>
#include <huaweicloud/live/v1/model/CreateFlowsResponse.h>
#include <huaweicloud/live/v1/model/CreateRecordCallbackConfigRequest.h>
#include <huaweicloud/live/v1/model/CreateRecordCallbackConfigResponse.h>
#include <huaweicloud/live/v1/model/CreateRecordIndexRequest.h>
#include <huaweicloud/live/v1/model/CreateRecordIndexResponse.h>
#include <huaweicloud/live/v1/model/CreateRecordRuleRequest.h>
#include <huaweicloud/live/v1/model/CreateRecordRuleResponse.h>
#include <huaweicloud/live/v1/model/CreateScheduleRecordTasksRequest.h>
#include <huaweicloud/live/v1/model/CreateScheduleRecordTasksResponse.h>
#include <huaweicloud/live/v1/model/CreateSnapshotConfigRequest.h>
#include <huaweicloud/live/v1/model/CreateSnapshotConfigResponse.h>
#include <huaweicloud/live/v1/model/CreateStreamForbiddenOnceRequest.h>
#include <huaweicloud/live/v1/model/CreateStreamForbiddenOnceResponse.h>
#include <huaweicloud/live/v1/model/CreateStreamForbiddenRequest.h>
#include <huaweicloud/live/v1/model/CreateStreamForbiddenResponse.h>
#include <huaweicloud/live/v1/model/CreateTranscodingsTemplateRequest.h>
#include <huaweicloud/live/v1/model/CreateTranscodingsTemplateResponse.h>
#include <huaweicloud/live/v1/model/CreateUrlAuthchainReq.h>
#include <huaweicloud/live/v1/model/CreateUrlAuthchainRequest.h>
#include <huaweicloud/live/v1/model/CreateUrlAuthchainResponse.h>
#include <huaweicloud/live/v1/model/DeleteDomainKeyChainRequest.h>
#include <huaweicloud/live/v1/model/DeleteDomainKeyChainResponse.h>
#include <huaweicloud/live/v1/model/DeleteDomainMappingRequest.h>
#include <huaweicloud/live/v1/model/DeleteDomainMappingResponse.h>
#include <huaweicloud/live/v1/model/DeleteDomainRequest.h>
#include <huaweicloud/live/v1/model/DeleteDomainResponse.h>
#include <huaweicloud/live/v1/model/DeleteFlowRequest.h>
#include <huaweicloud/live/v1/model/DeleteFlowResponse.h>
#include <huaweicloud/live/v1/model/DeletePublishTemplateRequest.h>
#include <huaweicloud/live/v1/model/DeletePublishTemplateResponse.h>
#include <huaweicloud/live/v1/model/DeleteRecordCallbackConfigRequest.h>
#include <huaweicloud/live/v1/model/DeleteRecordCallbackConfigResponse.h>
#include <huaweicloud/live/v1/model/DeleteRecordRuleRequest.h>
#include <huaweicloud/live/v1/model/DeleteRecordRuleResponse.h>
#include <huaweicloud/live/v1/model/DeleteRefererChainRequest.h>
#include <huaweicloud/live/v1/model/DeleteRefererChainResponse.h>
#include <huaweicloud/live/v1/model/DeleteScheduleRecordTasksRequest.h>
#include <huaweicloud/live/v1/model/DeleteScheduleRecordTasksResponse.h>
#include <huaweicloud/live/v1/model/DeleteSnapshotConfigRequest.h>
#include <huaweicloud/live/v1/model/DeleteSnapshotConfigResponse.h>
#include <huaweicloud/live/v1/model/DeleteStreamForbiddenRequest.h>
#include <huaweicloud/live/v1/model/DeleteStreamForbiddenResponse.h>
#include <huaweicloud/live/v1/model/DeleteTranscodingsTemplateRequest.h>
#include <huaweicloud/live/v1/model/DeleteTranscodingsTemplateResponse.h>
#include <huaweicloud/live/v1/model/DomainIpv6SwitchReq.h>
#include <huaweicloud/live/v1/model/DomainMapping.h>
#include <huaweicloud/live/v1/model/GeoBlockingConfigInfo.h>
#include <huaweicloud/live/v1/model/IPAuthInfo.h>
#include <huaweicloud/live/v1/model/KeyChainInfo.h>
#include <huaweicloud/live/v1/model/ListDelayConfigRequest.h>
#include <huaweicloud/live/v1/model/ListDelayConfigResponse.h>
#include <huaweicloud/live/v1/model/ListFlowsRequest.h>
#include <huaweicloud/live/v1/model/ListFlowsResponse.h>
#include <huaweicloud/live/v1/model/ListGeoBlockingConfigRequest.h>
#include <huaweicloud/live/v1/model/ListGeoBlockingConfigResponse.h>
#include <huaweicloud/live/v1/model/ListHlsConfigRequest.h>
#include <huaweicloud/live/v1/model/ListHlsConfigResponse.h>
#include <huaweicloud/live/v1/model/ListIpAuthListRequest.h>
#include <huaweicloud/live/v1/model/ListIpAuthListResponse.h>
#include <huaweicloud/live/v1/model/ListLiveSampleLogsRequest.h>
#include <huaweicloud/live/v1/model/ListLiveSampleLogsResponse.h>
#include <huaweicloud/live/v1/model/ListLiveStreamsOnlineRequest.h>
#include <huaweicloud/live/v1/model/ListLiveStreamsOnlineResponse.h>
#include <huaweicloud/live/v1/model/ListPublishTemplateRequest.h>
#include <huaweicloud/live/v1/model/ListPublishTemplateResponse.h>
#include <huaweicloud/live/v1/model/ListRecordCallbackConfigsRequest.h>
#include <huaweicloud/live/v1/model/ListRecordCallbackConfigsResponse.h>
#include <huaweicloud/live/v1/model/ListRecordContentsRequest.h>
#include <huaweicloud/live/v1/model/ListRecordContentsResponse.h>
#include <huaweicloud/live/v1/model/ListRecordRulesRequest.h>
#include <huaweicloud/live/v1/model/ListRecordRulesResponse.h>
#include <huaweicloud/live/v1/model/ListScheduleRecordTasksRequest.h>
#include <huaweicloud/live/v1/model/ListScheduleRecordTasksResponse.h>
#include <huaweicloud/live/v1/model/ListSnapshotConfigsRequest.h>
#include <huaweicloud/live/v1/model/ListSnapshotConfigsResponse.h>
#include <huaweicloud/live/v1/model/ListStreamForbiddenRequest.h>
#include <huaweicloud/live/v1/model/ListStreamForbiddenResponse.h>
#include <huaweicloud/live/v1/model/LiveDomainCreateReq.h>
#include <huaweicloud/live/v1/model/LiveDomainModifyReq.h>
#include <huaweicloud/live/v1/model/LiveSnapshotConfig.h>
#include <huaweicloud/live/v1/model/ModifyDelayConfig.h>
#include <huaweicloud/live/v1/model/ModifyFlowSourcesRequest.h>
#include <huaweicloud/live/v1/model/ModifyFlowSourcesRequestBody.h>
#include <huaweicloud/live/v1/model/ModifyFlowSourcesResponse.h>
#include <huaweicloud/live/v1/model/ModifyFlowStartRequest.h>
#include <huaweicloud/live/v1/model/ModifyFlowStartResponse.h>
#include <huaweicloud/live/v1/model/ModifyFlowStopRequest.h>
#include <huaweicloud/live/v1/model/ModifyFlowStopResponse.h>
#include <huaweicloud/live/v1/model/ModifyHlsConfig.h>
#include <huaweicloud/live/v1/model/ModifyPullSourcesConfig.h>
#include <huaweicloud/live/v1/model/RecordCallbackConfigRequest.h>
#include <huaweicloud/live/v1/model/RecordControlInfo.h>
#include <huaweicloud/live/v1/model/RecordIndexRequestBody.h>
#include <huaweicloud/live/v1/model/RecordRuleRequest.h>
#include <huaweicloud/live/v1/model/RunRecordRequest.h>
#include <huaweicloud/live/v1/model/RunRecordResponse.h>
#include <huaweicloud/live/v1/model/ScheduleRecordTasksReq.h>
#include <huaweicloud/live/v1/model/SetRefererChainInfo.h>
#include <huaweicloud/live/v1/model/SetRefererChainRequest.h>
#include <huaweicloud/live/v1/model/SetRefererChainResponse.h>
#include <huaweicloud/live/v1/model/ShowDomainKeyChainRequest.h>
#include <huaweicloud/live/v1/model/ShowDomainKeyChainResponse.h>
#include <huaweicloud/live/v1/model/ShowDomainRequest.h>
#include <huaweicloud/live/v1/model/ShowDomainResponse.h>
#include <huaweicloud/live/v1/model/ShowFlowDetailRequest.h>
#include <huaweicloud/live/v1/model/ShowFlowDetailResponse.h>
#include <huaweicloud/live/v1/model/ShowPullSourcesConfigRequest.h>
#include <huaweicloud/live/v1/model/ShowPullSourcesConfigResponse.h>
#include <huaweicloud/live/v1/model/ShowRecordCallbackConfigRequest.h>
#include <huaweicloud/live/v1/model/ShowRecordCallbackConfigResponse.h>
#include <huaweicloud/live/v1/model/ShowRecordRuleRequest.h>
#include <huaweicloud/live/v1/model/ShowRecordRuleResponse.h>
#include <huaweicloud/live/v1/model/ShowRefererChainRequest.h>
#include <huaweicloud/live/v1/model/ShowRefererChainResponse.h>
#include <huaweicloud/live/v1/model/ShowTranscodingsTemplateRequest.h>
#include <huaweicloud/live/v1/model/ShowTranscodingsTemplateResponse.h>
#include <huaweicloud/live/v1/model/StreamForbiddenOnceSetting.h>
#include <huaweicloud/live/v1/model/StreamForbiddenSetting.h>
#include <huaweicloud/live/v1/model/StreamTranscodingTemplate.h>
#include <huaweicloud/live/v1/model/UpdateDelayConfigRequest.h>
#include <huaweicloud/live/v1/model/UpdateDelayConfigResponse.h>
#include <huaweicloud/live/v1/model/UpdateDomainIp6SwitchRequest.h>
#include <huaweicloud/live/v1/model/UpdateDomainIp6SwitchResponse.h>
#include <huaweicloud/live/v1/model/UpdateDomainKeyChainRequest.h>
#include <huaweicloud/live/v1/model/UpdateDomainKeyChainResponse.h>
#include <huaweicloud/live/v1/model/UpdateDomainRequest.h>
#include <huaweicloud/live/v1/model/UpdateDomainResponse.h>
#include <huaweicloud/live/v1/model/UpdateGeoBlockingConfigRequest.h>
#include <huaweicloud/live/v1/model/UpdateGeoBlockingConfigResponse.h>
#include <huaweicloud/live/v1/model/UpdateHlsConfigRequest.h>
#include <huaweicloud/live/v1/model/UpdateHlsConfigResponse.h>
#include <huaweicloud/live/v1/model/UpdateIpAuthListRequest.h>
#include <huaweicloud/live/v1/model/UpdateIpAuthListResponse.h>
#include <huaweicloud/live/v1/model/UpdatePublishTemplateRequest.h>
#include <huaweicloud/live/v1/model/UpdatePublishTemplateResponse.h>
#include <huaweicloud/live/v1/model/UpdatePullSourcesConfigRequest.h>
#include <huaweicloud/live/v1/model/UpdatePullSourcesConfigResponse.h>
#include <huaweicloud/live/v1/model/UpdateRecordCallbackConfigRequest.h>
#include <huaweicloud/live/v1/model/UpdateRecordCallbackConfigResponse.h>
#include <huaweicloud/live/v1/model/UpdateRecordRuleRequest.h>
#include <huaweicloud/live/v1/model/UpdateRecordRuleResponse.h>
#include <huaweicloud/live/v1/model/UpdateSnapshotConfigRequest.h>
#include <huaweicloud/live/v1/model/UpdateSnapshotConfigResponse.h>
#include <huaweicloud/live/v1/model/UpdateStreamForbiddenRequest.h>
#include <huaweicloud/live/v1/model/UpdateStreamForbiddenResponse.h>
#include <huaweicloud/live/v1/model/UpdateTranscodingsTemplateRequest.h>
#include <huaweicloud/live/v1/model/UpdateTranscodingsTemplateResponse.h>
#include <string>
#include <cpprest/details/basic_types.h>

#include <huaweicloud/live/v1/model/DeleteDomainHttpsCertRequest.h>
#include <huaweicloud/live/v1/model/DeleteDomainHttpsCertResponse.h>
#include <huaweicloud/live/v1/model/DomainHttpsCertInfo.h>
#include <huaweicloud/live/v1/model/ShowDomainHttpsCertRequest.h>
#include <huaweicloud/live/v1/model/ShowDomainHttpsCertResponse.h>
#include <huaweicloud/live/v1/model/UpdateDomainHttpsCertRequest.h>
#include <huaweicloud/live/v1/model/UpdateDomainHttpsCertResponse.h>
#include <string>

#include <huaweicloud/live/v1/model/CreateHarvestTaskInfoReq.h>
#include <huaweicloud/live/v1/model/CreateHarvestTaskRequest.h>
#include <huaweicloud/live/v1/model/CreateHarvestTaskResponse.h>
#include <huaweicloud/live/v1/model/DeleteHarvestTaskRequest.h>
#include <huaweicloud/live/v1/model/DeleteHarvestTaskResponse.h>
#include <huaweicloud/live/v1/model/ListHarvestTaskRequest.h>
#include <huaweicloud/live/v1/model/ListHarvestTaskResponse.h>
#include <huaweicloud/live/v1/model/ModifyHarvestTaskRequest.h>
#include <huaweicloud/live/v1/model/ModifyHarvestTaskRequestBody.h>
#include <huaweicloud/live/v1/model/ModifyHarvestTaskResponse.h>
#include <huaweicloud/live/v1/model/UpdateHarvestJobStatusRequest.h>
#include <huaweicloud/live/v1/model/UpdateHarvestJobStatusRequestBody.h>
#include <huaweicloud/live/v1/model/UpdateHarvestJobStatusResponse.h>
#include <string>

#include <huaweicloud/live/v1/model/ObsAuthorityConfigV2.h>
#include <huaweicloud/live/v1/model/UpdateObsBucketAuthorityPublicRequest.h>
#include <huaweicloud/live/v1/model/UpdateObsBucketAuthorityPublicResponse.h>

#include <huaweicloud/live/v1/model/CreateOttChannelInfoReq.h>
#include <huaweicloud/live/v1/model/CreateOttChannelInfoRequest.h>
#include <huaweicloud/live/v1/model/CreateOttChannelInfoResponse.h>
#include <huaweicloud/live/v1/model/DeleteOttChannelInfoRequest.h>
#include <huaweicloud/live/v1/model/DeleteOttChannelInfoResponse.h>
#include <huaweicloud/live/v1/model/ListOttChannelInfoRequest.h>
#include <huaweicloud/live/v1/model/ListOttChannelInfoResponse.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelEncoderSettings.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelEndPointsReq.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelGeneral.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelInfoEncoderSettingsRequest.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelInfoEncoderSettingsResponse.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelInfoEndPointsRequest.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelInfoEndPointsResponse.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelInfoGeneralRequest.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelInfoGeneralResponse.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelInfoInputRequest.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelInfoInputResponse.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelInfoRecordSettingsRequest.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelInfoRecordSettingsResponse.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelInfoStatsRequest.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelInfoStatsResponse.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelInputReq.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelRecordSettings.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelState.h>
#include <huaweicloud/live/v1/model/ShowChannelStatisticReq.h>
#include <huaweicloud/live/v1/model/ShowChannelStatisticRequest.h>
#include <huaweicloud/live/v1/model/ShowChannelStatisticResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Live::V1::Model;

class HUAWEICLOUD_LIVE_V1_EXPORT  LiveClient : public Client
{
public:

    LiveClient();

    virtual ~LiveClient();

    static ClientBuilder<LiveClient> newBuilder();

    // 查询IP归属信息
    //
    // 查询IP归属信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchShowIpBelongsResponse> batchShowIpBelongs(
        BatchShowIpBelongsRequest &request
    );
    // 创建直播域名
    //
    // 可单独创建直播播放域名或推流域名，每个租户最多可配置64条域名记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDomainResponse> createDomain(
        CreateDomainRequest &request
    );
    // 域名映射
    //
    // 将用户已创建的播放域名和推流域名建立域名映射关系
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDomainMappingResponse> createDomainMapping(
        CreateDomainMappingRequest &request
    );
    // 创建流
    //
    // 创建流
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateFlowsResponse> createFlows(
        CreateFlowsRequest &request
    );
    // 创建录制回调配置
    //
    // 创建录制回调配置接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRecordCallbackConfigResponse> createRecordCallbackConfig(
        CreateRecordCallbackConfigRequest &request
    );
    // 创建录制视频索引文件
    //
    // Create Record Index
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRecordIndexResponse> createRecordIndex(
        CreateRecordIndexRequest &request
    );
    // 创建录制规则
    //
    // 创建录制规则接口，录制规则对新推送的流生效，对已经推送中的流不生效
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRecordRuleResponse> createRecordRule(
        CreateRecordRuleRequest &request
    );
    // 创建计划录制任务
    //
    // 通过使用指定录制模板ID对应的配置创建一个在指定时间启动、结束的录制任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateScheduleRecordTasksResponse> createScheduleRecordTasks(
        CreateScheduleRecordTasksRequest &request
    );
    // 创建直播截图配置
    //
    // 创建直播截图配置接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSnapshotConfigResponse> createSnapshotConfig(
        CreateSnapshotConfigRequest &request
    );
    // 禁止直播推流
    //
    // 禁止直播推流
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateStreamForbiddenResponse> createStreamForbidden(
        CreateStreamForbiddenRequest &request
    );
    // 禁推闪断
    //
    // 直播推流闪断接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateStreamForbiddenOnceResponse> createStreamForbiddenOnce(
        CreateStreamForbiddenOnceRequest &request
    );
    // 创建直播转码模板
    //
    // 创建直播转码模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTranscodingsTemplateResponse> createTranscodingsTemplate(
        CreateTranscodingsTemplateRequest &request
    );
    // 生成URL鉴权串
    //
    // 生成URL鉴权串
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateUrlAuthchainResponse> createUrlAuthchain(
        CreateUrlAuthchainRequest &request
    );
    // 删除直播域名
    //
    // 删除域名。只有在域名停用（off）状态时才能删除。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDomainResponse> deleteDomain(
        DeleteDomainRequest &request
    );
    // 删除指定域名的Key防盗链配置
    //
    // 删除指定域名的Key防盗链配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDomainKeyChainResponse> deleteDomainKeyChain(
        DeleteDomainKeyChainRequest &request
    );
    // 删除直播域名映射关系
    //
    // 将播放域名和推流域名的域名映射关系删除
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDomainMappingResponse> deleteDomainMapping(
        DeleteDomainMappingRequest &request
    );
    // 删除流
    //
    // 删除流
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteFlowResponse> deleteFlow(
        DeleteFlowRequest &request
    );
    // 删除直播推流通知配置
    //
    // 删除直播推流通知配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePublishTemplateResponse> deletePublishTemplate(
        DeletePublishTemplateRequest &request
    );
    // 删除录制回调配置
    //
    // 删除录制回调配置接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRecordCallbackConfigResponse> deleteRecordCallbackConfig(
        DeleteRecordCallbackConfigRequest &request
    );
    // 删除录制规则
    //
    // 删除录制规则接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRecordRuleResponse> deleteRecordRule(
        DeleteRecordRuleRequest &request
    );
    // 删除Referer防盗链黑白名单
    //
    // 删除Referer防盗链黑白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRefererChainResponse> deleteRefererChain(
        DeleteRefererChainRequest &request
    );
    // 停止计划录制任务
    //
    // 停止计划录制任务，当前的录制任务会中止并生产录制文件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteScheduleRecordTasksResponse> deleteScheduleRecordTasks(
        DeleteScheduleRecordTasksRequest &request
    );
    // 删除直播截图配置
    //
    // 删除直播截图配置接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSnapshotConfigResponse> deleteSnapshotConfig(
        DeleteSnapshotConfigRequest &request
    );
    // 禁推恢复
    //
    // 恢复直播推流接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteStreamForbiddenResponse> deleteStreamForbidden(
        DeleteStreamForbiddenRequest &request
    );
    // 删除直播转码模板
    //
    // 删除直播转码模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTranscodingsTemplateResponse> deleteTranscodingsTemplate(
        DeleteTranscodingsTemplateRequest &request
    );
    // 查询播放域名延时配置
    //
    // 查询播放域名延时配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDelayConfigResponse> listDelayConfig(
        ListDelayConfigRequest &request
    );
    // 获取流列表
    //
    // 获取流列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFlowsResponse> listFlows(
        ListFlowsRequest &request
    );
    // 获取地域限制配置列表
    //
    // 查询播放域名的地域限制列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGeoBlockingConfigResponse> listGeoBlockingConfig(
        ListGeoBlockingConfigRequest &request
    );
    // 查询域名HLS配置
    //
    // 查询域名HLS配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHlsConfigResponse> listHlsConfig(
        ListHlsConfigRequest &request
    );
    // 查询IP黑/白名单
    //
    // 查询推流/播放域名的IP黑/白名单。
    // - 黑名单模式：禁止指定的IP或网段
    // - 白名单模式：仅允许指定的IP或网段
    // - 默认：全放通。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIpAuthListResponse> listIpAuthList(
        ListIpAuthListRequest &request
    );
    // 获取直播播放日志
    //
    // 获取直播播放日志，基于域名以5分钟粒度进行打包，日志内容以 \&quot;|\&quot; 进行分隔。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLiveSampleLogsResponse> listLiveSampleLogs(
        ListLiveSampleLogsRequest &request
    );
    // 查询直播中的流信息
    //
    // 查询直播中的流信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLiveStreamsOnlineResponse> listLiveStreamsOnline(
        ListLiveStreamsOnlineRequest &request
    );
    // 查询直播推流通知配置
    //
    // 查询直播推流通知配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPublishTemplateResponse> listPublishTemplate(
        ListPublishTemplateRequest &request
    );
    // 查询录制回调配置列表
    //
    // 查询录制回调配置列表接口。通过指定条件，查询满足条件的配置列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRecordCallbackConfigsResponse> listRecordCallbackConfigs(
        ListRecordCallbackConfigsRequest &request
    );
    // 录制完成内容的查询
    //
    // 录制完成的内容查询
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRecordContentsResponse> listRecordContents(
        ListRecordContentsRequest &request
    );
    // 查询录制规则列表
    //
    // 查询录制规则列表接口，通过指定条件，查询满足条件的录制规则列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRecordRulesResponse> listRecordRules(
        ListRecordRulesRequest &request
    );
    // 查询计划录制任务
    //
    // 查询指定时间范围内启动和结束的计划录制任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListScheduleRecordTasksResponse> listScheduleRecordTasks(
        ListScheduleRecordTasksRequest &request
    );
    // 查询直播截图配置
    //
    // 查询直播截图配置接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSnapshotConfigsResponse> listSnapshotConfigs(
        ListSnapshotConfigsRequest &request
    );
    // 查询禁止直播推流列表
    //
    // 查询禁播黑名单列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListStreamForbiddenResponse> listStreamForbidden(
        ListStreamForbiddenRequest &request
    );
    // 修改流来源
    //
    // 修改流来源
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyFlowSourcesResponse> modifyFlowSources(
        ModifyFlowSourcesRequest &request
    );
    // 启动流任务
    //
    // 启动流任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyFlowStartResponse> modifyFlowStart(
        ModifyFlowStartRequest &request
    );
    // 停止流任务
    //
    // 停止流任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyFlowStopResponse> modifyFlowStop(
        ModifyFlowStopRequest &request
    );
    // 提交录制控制命令
    //
    // 对单条流的实时录制控制接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunRecordResponse> runRecord(
        RunRecordRequest &request
    );
    // 设置Referer防盗链黑白名单
    //
    // 设置Referer黑白名单，直播服务会根据配置的referer黑白名单，对访问者的身份进行识别和过滤，符合规则的可以顺利访问到该内容。如果不符合规则，该访问请求将会被禁止。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetRefererChainResponse> setRefererChain(
        SetRefererChainRequest &request
    );
    // 查询直播域名
    //
    // 查询直播域名
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainResponse> showDomain(
        ShowDomainRequest &request
    );
    // 查询指定域名的Key防盗链配置
    //
    // 查询指定域名的Key防盗链配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainKeyChainResponse> showDomainKeyChain(
        ShowDomainKeyChainRequest &request
    );
    // 获取流详情
    //
    // 获取流详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFlowDetailResponse> showFlowDetail(
        ShowFlowDetailRequest &request
    );
    // 查询直播拉流回源配置
    //
    // 查询直播拉流回源配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPullSourcesConfigResponse> showPullSourcesConfig(
        ShowPullSourcesConfigRequest &request
    );
    // 查询录制回调配置
    //
    // 查询录制回调配置接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRecordCallbackConfigResponse> showRecordCallbackConfig(
        ShowRecordCallbackConfigRequest &request
    );
    // 查询录制规则配置
    //
    // 查询录制规则接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRecordRuleResponse> showRecordRule(
        ShowRecordRuleRequest &request
    );
    // 查询Referer防盗链黑白名单
    //
    // 查询Referer防盗链黑白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRefererChainResponse> showRefererChain(
        ShowRefererChainRequest &request
    );
    // 查询直播转码模板
    //
    // 查询直播转码模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTranscodingsTemplateResponse> showTranscodingsTemplate(
        ShowTranscodingsTemplateRequest &request
    );
    // 修改播放域名延时配置
    //
    // 修改播放域名延时配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDelayConfigResponse> updateDelayConfig(
        UpdateDelayConfigRequest &request
    );
    // 修改直播域名
    //
    // 修改直播播放、RTMP推流加速域名相关信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDomainResponse> updateDomain(
        UpdateDomainRequest &request
    );
    // 配置域名IPV6开关
    //
    // 配置IPV6开关
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDomainIp6SwitchResponse> updateDomainIp6Switch(
        UpdateDomainIp6SwitchRequest &request
    );
    // 更新指定域名的Key防盗链配置
    //
    // 更新指定域名的Key防盗链配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDomainKeyChainResponse> updateDomainKeyChain(
        UpdateDomainKeyChainRequest &request
    );
    // 修改地域限制配置
    //
    // 修改播放域名的地域限制，选中地域允许接入。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGeoBlockingConfigResponse> updateGeoBlockingConfig(
        UpdateGeoBlockingConfigRequest &request
    );
    // 修改域名HLS配置
    //
    // 修改域名HLS配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateHlsConfigResponse> updateHlsConfig(
        UpdateHlsConfigRequest &request
    );
    // 修改IP黑/白名单
    //
    // 修改推流/播放域名的IP黑/白名单，当前仅支持ipv4。
    // - 黑名单模式：禁止指定的IP或网段
    // - 白名单模式：仅允许指定的IP或网段
    // - 默认：全放通。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateIpAuthListResponse> updateIpAuthList(
        UpdateIpAuthListRequest &request
    );
    // 新增、覆盖直播推流通知配置
    //
    // 新增、覆盖直播推流通知配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePublishTemplateResponse> updatePublishTemplate(
        UpdatePublishTemplateRequest &request
    );
    // 修改直播拉流回源配置
    //
    // 修改直播拉流回源配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePullSourcesConfigResponse> updatePullSourcesConfig(
        UpdatePullSourcesConfigRequest &request
    );
    // 修改录制回调配置
    //
    // 修改录制回调配置接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRecordCallbackConfigResponse> updateRecordCallbackConfig(
        UpdateRecordCallbackConfigRequest &request
    );
    // 修改录制规则
    //
    // 修改录制规则接口，如果规则修改后，修改后的规则对正在录制的流无效，对新的流有效。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRecordRuleResponse> updateRecordRule(
        UpdateRecordRuleRequest &request
    );
    // 修改直播截图配置
    //
    // 修改直播截图配置接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSnapshotConfigResponse> updateSnapshotConfig(
        UpdateSnapshotConfigRequest &request
    );
    // 修改禁推属性
    //
    // 修改禁推属性
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateStreamForbiddenResponse> updateStreamForbidden(
        UpdateStreamForbiddenRequest &request
    );
    // 配置直播转码模板
    //
    // 修改直播转码模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTranscodingsTemplateResponse> updateTranscodingsTemplate(
        UpdateTranscodingsTemplateRequest &request
    );

    // 删除指定域名的https证书配置
    //
    // 删除指定域名的https证书配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDomainHttpsCertResponse> deleteDomainHttpsCert(
        DeleteDomainHttpsCertRequest &request
    );
    // 查询指定域名的https证书配置
    //
    // 查询指定域名的https证书配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainHttpsCertResponse> showDomainHttpsCert(
        ShowDomainHttpsCertRequest &request
    );
    // 修改指定域名的https证书配置
    //
    // 修改指定域名的https证书配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDomainHttpsCertResponse> updateDomainHttpsCert(
        UpdateDomainHttpsCertRequest &request
    );

    // 创建Live2VOD任务
    //
    // 创建Live2VOD任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateHarvestTaskResponse> createHarvestTask(
        CreateHarvestTaskRequest &request
    );
    // 删除Live2VOD任务
    //
    // 删除Live2VOD任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteHarvestTaskResponse> deleteHarvestTask(
        DeleteHarvestTaskRequest &request
    );
    // 查询Live2VOD任务
    //
    // 查询Live2VOD任务，支持批量查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHarvestTaskResponse> listHarvestTask(
        ListHarvestTaskRequest &request
    );
    // 修改Live2VOD任务
    //
    // 修改Live2VOD任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyHarvestTaskResponse> modifyHarvestTask(
        ModifyHarvestTaskRequest &request
    );
    // 修改Live2VOD任务状态
    //
    // 修改Live2VOD任务状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateHarvestJobStatusResponse> updateHarvestJobStatus(
        UpdateHarvestJobStatusRequest &request
    );

    // OBS桶授权及取消授权
    //
    // OBS桶授权及取消授权
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateObsBucketAuthorityPublicResponse> updateObsBucketAuthorityPublic(
        UpdateObsBucketAuthorityPublicRequest &request
    );

    // 新建OTT频道
    //
    // 创建频道接口，支持创建OTT频道。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateOttChannelInfoResponse> createOttChannelInfo(
        CreateOttChannelInfoRequest &request
    );
    // 删除频道信息
    //
    // 删除频道信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteOttChannelInfoResponse> deleteOttChannelInfo(
        DeleteOttChannelInfoRequest &request
    );
    // 查询频道信息
    //
    // 查询频道信息，支持批量查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListOttChannelInfoResponse> listOttChannelInfo(
        ListOttChannelInfoRequest &request
    );
    // 修改频道转码模板信息
    //
    // 修改频道转码模板信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyOttChannelInfoEncoderSettingsResponse> modifyOttChannelInfoEncoderSettings(
        ModifyOttChannelInfoEncoderSettingsRequest &request
    );
    // 修改频道打包信息
    //
    // 修改频道打包信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyOttChannelInfoEndPointsResponse> modifyOttChannelInfoEndPoints(
        ModifyOttChannelInfoEndPointsRequest &request
    );
    // 修改频道通用信息
    //
    // 修改频道通用信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyOttChannelInfoGeneralResponse> modifyOttChannelInfoGeneral(
        ModifyOttChannelInfoGeneralRequest &request
    );
    // 修改频道入流信息
    //
    // 修改频道入流信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyOttChannelInfoInputResponse> modifyOttChannelInfoInput(
        ModifyOttChannelInfoInputRequest &request
    );
    // 修改频道录制信息
    //
    // 修改频道录制信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyOttChannelInfoRecordSettingsResponse> modifyOttChannelInfoRecordSettings(
        ModifyOttChannelInfoRecordSettingsRequest &request
    );
    // 修改频道状态
    //
    // 修改频道状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyOttChannelInfoStatsResponse> modifyOttChannelInfoStats(
        ModifyOttChannelInfoStatsRequest &request
    );
    // 查询频道统计信息
    //
    // 查询频道的统计信息（入流scte35信号）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowChannelStatisticResponse> showChannelStatistic(
        ShowChannelStatisticRequest &request
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

template class HUAWEICLOUD_LIVE_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Live::V1::LiveClient>;

#endif // HUAWEICLOUD_SDK_LIVE_V1_LiveClient_H_

