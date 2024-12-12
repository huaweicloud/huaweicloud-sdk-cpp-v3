#ifndef HUAWEICLOUD_SDK_LTS_V2_LtsClient_H_
#define HUAWEICLOUD_SDK_LTS_V2_LtsClient_H_

#include <huaweicloud/lts/v2/LtsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/lts/v2/model/CreateAccessConfigRequest.h>
#include <huaweicloud/lts/v2/model/CreateAccessConfigRequestBody.h>
#include <huaweicloud/lts/v2/model/CreateAccessConfigResponse.h>
#include <huaweicloud/lts/v2/model/CreateAgencyAccessRequest.h>
#include <huaweicloud/lts/v2/model/CreateAgencyAccessResponse.h>
#include <huaweicloud/lts/v2/model/CreateDashBoardReqBody.h>
#include <huaweicloud/lts/v2/model/CreateDashBoardRequest.h>
#include <huaweicloud/lts/v2/model/CreateDashBoardResponse.h>
#include <huaweicloud/lts/v2/model/CreateDashboardGroupReq.h>
#include <huaweicloud/lts/v2/model/CreateDashboardGroupRequest.h>
#include <huaweicloud/lts/v2/model/CreateDashboardGroupResponse.h>
#include <huaweicloud/lts/v2/model/CreateHostGroupRequest.h>
#include <huaweicloud/lts/v2/model/CreateHostGroupRequestBody.h>
#include <huaweicloud/lts/v2/model/CreateHostGroupResponse.h>
#include <huaweicloud/lts/v2/model/CreateKeywordsAlarmRuleRequest.h>
#include <huaweicloud/lts/v2/model/CreateKeywordsAlarmRuleRequestBody.h>
#include <huaweicloud/lts/v2/model/CreateKeywordsAlarmRuleResponse.h>
#include <huaweicloud/lts/v2/model/CreateLogDumpObsRequest.h>
#include <huaweicloud/lts/v2/model/CreateLogDumpObsRequestBody.h>
#include <huaweicloud/lts/v2/model/CreateLogDumpObsResponse.h>
#include <huaweicloud/lts/v2/model/CreateLogGroupParams.h>
#include <huaweicloud/lts/v2/model/CreateLogGroupRequest.h>
#include <huaweicloud/lts/v2/model/CreateLogGroupResponse.h>
#include <huaweicloud/lts/v2/model/CreateLogStreamIndexRequest.h>
#include <huaweicloud/lts/v2/model/CreateLogStreamIndexResponse.h>
#include <huaweicloud/lts/v2/model/CreateLogStreamParams.h>
#include <huaweicloud/lts/v2/model/CreateLogStreamRequest.h>
#include <huaweicloud/lts/v2/model/CreateLogStreamResponse.h>
#include <huaweicloud/lts/v2/model/CreateNotificationTemplateRequest.h>
#include <huaweicloud/lts/v2/model/CreateNotificationTemplateRequestBody.h>
#include <huaweicloud/lts/v2/model/CreateNotificationTemplateResponse.h>
#include <huaweicloud/lts/v2/model/CreateSearchCriteriasBody.h>
#include <huaweicloud/lts/v2/model/CreateSearchCriteriasRequest.h>
#include <huaweicloud/lts/v2/model/CreateSearchCriteriasResponse.h>
#include <huaweicloud/lts/v2/model/CreateStructConfigRequest.h>
#include <huaweicloud/lts/v2/model/CreateStructConfigResponse.h>
#include <huaweicloud/lts/v2/model/CreateStructTemplateRequest.h>
#include <huaweicloud/lts/v2/model/CreateStructTemplateResponse.h>
#include <huaweicloud/lts/v2/model/CreateTagsReqbody.h>
#include <huaweicloud/lts/v2/model/CreateTagsRequest.h>
#include <huaweicloud/lts/v2/model/CreateTagsResponse.h>
#include <huaweicloud/lts/v2/model/CreateTransferRequest.h>
#include <huaweicloud/lts/v2/model/CreateTransferRequestBody.h>
#include <huaweicloud/lts/v2/model/CreateTransferResponse.h>
#include <huaweicloud/lts/v2/model/CreatefavoriteReqbody.h>
#include <huaweicloud/lts/v2/model/CreatefavoriteRequest.h>
#include <huaweicloud/lts/v2/model/CreatefavoriteResponse.h>
#include <huaweicloud/lts/v2/model/DeleteAccessConfigRequest.h>
#include <huaweicloud/lts/v2/model/DeleteAccessConfigRequestBody.h>
#include <huaweicloud/lts/v2/model/DeleteAccessConfigResponse.h>
#include <huaweicloud/lts/v2/model/DeleteActiveAlarmsRequest.h>
#include <huaweicloud/lts/v2/model/DeleteActiveAlarmsRequestBody.h>
#include <huaweicloud/lts/v2/model/DeleteActiveAlarmsResponse.h>
#include <huaweicloud/lts/v2/model/DeleteDashboardRequest.h>
#include <huaweicloud/lts/v2/model/DeleteDashboardResponse.h>
#include <huaweicloud/lts/v2/model/DeleteHostGroupRequest.h>
#include <huaweicloud/lts/v2/model/DeleteHostGroupRequestBody.h>
#include <huaweicloud/lts/v2/model/DeleteHostGroupResponse.h>
#include <huaweicloud/lts/v2/model/DeleteKeywordsAlarmRuleRequest.h>
#include <huaweicloud/lts/v2/model/DeleteKeywordsAlarmRuleResponse.h>
#include <huaweicloud/lts/v2/model/DeleteLogGroupRequest.h>
#include <huaweicloud/lts/v2/model/DeleteLogGroupResponse.h>
#include <huaweicloud/lts/v2/model/DeleteLogStreamRequest.h>
#include <huaweicloud/lts/v2/model/DeleteLogStreamResponse.h>
#include <huaweicloud/lts/v2/model/DeleteNotificationTemplateBody.h>
#include <huaweicloud/lts/v2/model/DeleteNotificationTemplateRequest.h>
#include <huaweicloud/lts/v2/model/DeleteNotificationTemplateResponse.h>
#include <huaweicloud/lts/v2/model/DeleteSearchCriterias.h>
#include <huaweicloud/lts/v2/model/DeleteSearchCriteriasRequest.h>
#include <huaweicloud/lts/v2/model/DeleteSearchCriteriasResponse.h>
#include <huaweicloud/lts/v2/model/DeleteStructTemplateReqBody.h>
#include <huaweicloud/lts/v2/model/DeleteStructTemplateRequest.h>
#include <huaweicloud/lts/v2/model/DeleteStructTemplateResponse.h>
#include <huaweicloud/lts/v2/model/DeleteTransferRequest.h>
#include <huaweicloud/lts/v2/model/DeleteTransferResponse.h>
#include <huaweicloud/lts/v2/model/DeletefavoriteRequest.h>
#include <huaweicloud/lts/v2/model/DeletefavoriteResponse.h>
#include <huaweicloud/lts/v2/model/DisableLogCollectionRequest.h>
#include <huaweicloud/lts/v2/model/DisableLogCollectionResponse.h>
#include <huaweicloud/lts/v2/model/EnableLogCollectionRequest.h>
#include <huaweicloud/lts/v2/model/EnableLogCollectionResponse.h>
#include <huaweicloud/lts/v2/model/GetAccessConfigListRequestBody.h>
#include <huaweicloud/lts/v2/model/GetHostGroupListRequestBody.h>
#include <huaweicloud/lts/v2/model/GetHostListRequestBody.h>
#include <huaweicloud/lts/v2/model/LTSAccessConfigInfoRespon200.h>
#include <huaweicloud/lts/v2/model/LTSIndexConfigInfo.h>
#include <huaweicloud/lts/v2/model/ListAccessConfigRequest.h>
#include <huaweicloud/lts/v2/model/ListAccessConfigResponse.h>
#include <huaweicloud/lts/v2/model/ListActiveOrHistoryAlarmsRequest.h>
#include <huaweicloud/lts/v2/model/ListActiveOrHistoryAlarmsRequestBody.h>
#include <huaweicloud/lts/v2/model/ListActiveOrHistoryAlarmsResponse.h>
#include <huaweicloud/lts/v2/model/ListBreifStructTemplateRequest.h>
#include <huaweicloud/lts/v2/model/ListBreifStructTemplateResponse.h>
#include <huaweicloud/lts/v2/model/ListChartsRequest.h>
#include <huaweicloud/lts/v2/model/ListChartsResponse.h>
#include <huaweicloud/lts/v2/model/ListCriteriasRequest.h>
#include <huaweicloud/lts/v2/model/ListCriteriasResponse.h>
#include <huaweicloud/lts/v2/model/ListHistorySqlRequest.h>
#include <huaweicloud/lts/v2/model/ListHistorySqlResponse.h>
#include <huaweicloud/lts/v2/model/ListHostGroupRequest.h>
#include <huaweicloud/lts/v2/model/ListHostGroupResponse.h>
#include <huaweicloud/lts/v2/model/ListHostRequest.h>
#include <huaweicloud/lts/v2/model/ListHostResponse.h>
#include <huaweicloud/lts/v2/model/ListKeywordsAlarmRulesRequest.h>
#include <huaweicloud/lts/v2/model/ListKeywordsAlarmRulesResponse.h>
#include <huaweicloud/lts/v2/model/ListLogContextRequest.h>
#include <huaweicloud/lts/v2/model/ListLogContextRequestBody.h>
#include <huaweicloud/lts/v2/model/ListLogContextResponse.h>
#include <huaweicloud/lts/v2/model/ListLogGroupsRequest.h>
#include <huaweicloud/lts/v2/model/ListLogGroupsResponse.h>
#include <huaweicloud/lts/v2/model/ListLogHistogramRequest.h>
#include <huaweicloud/lts/v2/model/ListLogHistogramResponse.h>
#include <huaweicloud/lts/v2/model/ListLogStreamRequest.h>
#include <huaweicloud/lts/v2/model/ListLogStreamResponse.h>
#include <huaweicloud/lts/v2/model/ListLogStreamsRequest.h>
#include <huaweicloud/lts/v2/model/ListLogStreamsResponse.h>
#include <huaweicloud/lts/v2/model/ListLogsRequest.h>
#include <huaweicloud/lts/v2/model/ListLogsResponse.h>
#include <huaweicloud/lts/v2/model/ListNotificationTemplateRequest.h>
#include <huaweicloud/lts/v2/model/ListNotificationTemplateResponse.h>
#include <huaweicloud/lts/v2/model/ListNotificationTemplatesRequest.h>
#include <huaweicloud/lts/v2/model/ListNotificationTemplatesResponse.h>
#include <huaweicloud/lts/v2/model/ListNotificationTopicsRequest.h>
#include <huaweicloud/lts/v2/model/ListNotificationTopicsResponse.h>
#include <huaweicloud/lts/v2/model/ListQueryAllSearchCriteriasRequest.h>
#include <huaweicloud/lts/v2/model/ListQueryAllSearchCriteriasResponse.h>
#include <huaweicloud/lts/v2/model/ListQueryStructuredLogsRequest.h>
#include <huaweicloud/lts/v2/model/ListQueryStructuredLogsResponse.h>
#include <huaweicloud/lts/v2/model/ListStructTemplateRequest.h>
#include <huaweicloud/lts/v2/model/ListStructTemplateResponse.h>
#include <huaweicloud/lts/v2/model/ListStructuredLogsWithTimeRangeRequest.h>
#include <huaweicloud/lts/v2/model/ListStructuredLogsWithTimeRangeResponse.h>
#include <huaweicloud/lts/v2/model/ListTimeLineTrafficStatisticsRequest.h>
#include <huaweicloud/lts/v2/model/ListTimeLineTrafficStatisticsResponse.h>
#include <huaweicloud/lts/v2/model/ListTopnTrafficStatisticsRequest.h>
#include <huaweicloud/lts/v2/model/ListTopnTrafficStatisticsResponse.h>
#include <huaweicloud/lts/v2/model/ListTransfersRequest.h>
#include <huaweicloud/lts/v2/model/ListTransfersResponse.h>
#include <huaweicloud/lts/v2/model/LtsStructTemplateInfo.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/lts/v2/model/PreviewAgencyLogAccessReqListBody.h>
#include <huaweicloud/lts/v2/model/PreviewTemplateBody.h>
#include <huaweicloud/lts/v2/model/QueryLogKeyWordCountRequestBody.h>
#include <huaweicloud/lts/v2/model/QueryLtsLogParams.h>
#include <huaweicloud/lts/v2/model/QueryLtsStructLogParams.h>
#include <huaweicloud/lts/v2/model/QueryLtsStructLogParamsNew.h>
#include <huaweicloud/lts/v2/model/RegisterDmsKafkaInstanceRequest.h>
#include <huaweicloud/lts/v2/model/RegisterDmsKafkaInstanceRequestBody.h>
#include <huaweicloud/lts/v2/model/RegisterDmsKafkaInstanceResponse.h>
#include <huaweicloud/lts/v2/model/ShowAdminConfigRequest.h>
#include <huaweicloud/lts/v2/model/ShowAdminConfigResponse.h>
#include <huaweicloud/lts/v2/model/ShowLogConvergeConfigRequest.h>
#include <huaweicloud/lts/v2/model/ShowLogConvergeConfigResponse.h>
#include <huaweicloud/lts/v2/model/ShowMemberGroupAndStreamRequest.h>
#include <huaweicloud/lts/v2/model/ShowMemberGroupAndStreamResponse.h>
#include <huaweicloud/lts/v2/model/ShowNotificationTemplateRequest.h>
#include <huaweicloud/lts/v2/model/ShowNotificationTemplateResponse.h>
#include <huaweicloud/lts/v2/model/ShowStructTemplateRequest.h>
#include <huaweicloud/lts/v2/model/ShowStructTemplateResponse.h>
#include <huaweicloud/lts/v2/model/StructConfig.h>
#include <huaweicloud/lts/v2/model/TimelineTrafficStatisticsRequestBody.h>
#include <huaweicloud/lts/v2/model/TopnRequstBody.h>
#include <huaweicloud/lts/v2/model/UpdateAccessConfigRequest.h>
#include <huaweicloud/lts/v2/model/UpdateAccessConfigRequestBody.h>
#include <huaweicloud/lts/v2/model/UpdateAccessConfigResponse.h>
#include <huaweicloud/lts/v2/model/UpdateHostGroupRequest.h>
#include <huaweicloud/lts/v2/model/UpdateHostGroupRequestBody.h>
#include <huaweicloud/lts/v2/model/UpdateHostGroupResponse.h>
#include <huaweicloud/lts/v2/model/UpdateKeywordsAlarmRuleRequest.h>
#include <huaweicloud/lts/v2/model/UpdateKeywordsAlarmRuleRequestBody.h>
#include <huaweicloud/lts/v2/model/UpdateKeywordsAlarmRuleResponse.h>
#include <huaweicloud/lts/v2/model/UpdateLogConvergeConfigRequest.h>
#include <huaweicloud/lts/v2/model/UpdateLogConvergeConfigResponse.h>
#include <huaweicloud/lts/v2/model/UpdateLogGroupParams.h>
#include <huaweicloud/lts/v2/model/UpdateLogGroupRequest.h>
#include <huaweicloud/lts/v2/model/UpdateLogGroupResponse.h>
#include <huaweicloud/lts/v2/model/UpdateLogStreamParams.h>
#include <huaweicloud/lts/v2/model/UpdateLogStreamRequest.h>
#include <huaweicloud/lts/v2/model/UpdateLogStreamResponse.h>
#include <huaweicloud/lts/v2/model/UpdateNotificationTemplateRequest.h>
#include <huaweicloud/lts/v2/model/UpdateNotificationTemplateResponse.h>
#include <huaweicloud/lts/v2/model/UpdateStructConfigRequest.h>
#include <huaweicloud/lts/v2/model/UpdateStructConfigResponse.h>
#include <huaweicloud/lts/v2/model/UpdateStructTemplateRequest.h>
#include <huaweicloud/lts/v2/model/UpdateStructTemplateResponse.h>
#include <huaweicloud/lts/v2/model/UpdateSwitchRequest.h>
#include <huaweicloud/lts/v2/model/UpdateSwitchResponse.h>
#include <huaweicloud/lts/v2/model/UpdateTransferRequest.h>
#include <huaweicloud/lts/v2/model/UpdateTransferRequestBody.h>
#include <huaweicloud/lts/v2/model/UpdateTransferResponse.h>
#include <huaweicloud/lts/v2/model/UpdatelogConvergeConfig.h>
#include <string>

#include <huaweicloud/lts/v2/model/AomMappingRequestInfo.h>
#include <huaweicloud/lts/v2/model/AomMappingRuleResp.h>
#include <huaweicloud/lts/v2/model/CreateAomMappingRulesRequest.h>
#include <huaweicloud/lts/v2/model/CreateAomMappingRulesResponse.h>
#include <huaweicloud/lts/v2/model/DeleteAomMappingRulesRequest.h>
#include <huaweicloud/lts/v2/model/DeleteAomMappingRulesResponse.h>
#include <huaweicloud/lts/v2/model/ShowAomMappingRuleRequest.h>
#include <huaweicloud/lts/v2/model/ShowAomMappingRuleResponse.h>
#include <huaweicloud/lts/v2/model/ShowAomMappingRulesRequest.h>
#include <huaweicloud/lts/v2/model/ShowAomMappingRulesResponse.h>
#include <huaweicloud/lts/v2/model/UpdateAomMappingRequest.h>
#include <huaweicloud/lts/v2/model/UpdateAomMappingRulesRequest.h>
#include <huaweicloud/lts/v2/model/UpdateAomMappingRulesResponse.h>
#include <string>

#include <huaweicloud/lts/v2/model/ConsumerCheckpointInfo.h>
#include <huaweicloud/lts/v2/model/ConsumerGroupHeartBeatRequest.h>
#include <huaweicloud/lts/v2/model/ConsumerGroupHeartBeatResponse.h>
#include <huaweicloud/lts/v2/model/ConsumerGroupInfo.h>
#include <huaweicloud/lts/v2/model/ConsumerShardCheckpointInfo.h>
#include <huaweicloud/lts/v2/model/CreateConsumerGroupRequest.h>
#include <huaweicloud/lts/v2/model/CreateConsumerGroupResponse.h>
#include <huaweicloud/lts/v2/model/DeleteConsumerGroupRequest.h>
#include <huaweicloud/lts/v2/model/DeleteConsumerGroupResponse.h>
#include <huaweicloud/lts/v2/model/ListConsumerGroupRequest.h>
#include <huaweicloud/lts/v2/model/ListConsumerGroupResponse.h>
#include <huaweicloud/lts/v2/model/ListDetailsConsumerGroupRequest.h>
#include <huaweicloud/lts/v2/model/ListDetailsConsumerGroupResponse.h>
#include <huaweicloud/lts/v2/model/ShowCursorByTimeRequest.h>
#include <huaweicloud/lts/v2/model/ShowCursorByTimeResponse.h>
#include <huaweicloud/lts/v2/model/ShowCursorTimeRequest.h>
#include <huaweicloud/lts/v2/model/ShowCursorTimeResponse.h>
#include <huaweicloud/lts/v2/model/ShowLogStreamShardsRequest.h>
#include <huaweicloud/lts/v2/model/ShowLogStreamShardsResponse.h>
#include <huaweicloud/lts/v2/model/UpdateCheckPointRequest.h>
#include <huaweicloud/lts/v2/model/UpdateCheckPointResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/lts/v2/model/ChangeAlarmRuleStatus.h>
#include <huaweicloud/lts/v2/model/CreateSqlAlarmRuleRequest.h>
#include <huaweicloud/lts/v2/model/CreateSqlAlarmRuleRequestBody.h>
#include <huaweicloud/lts/v2/model/CreateSqlAlarmRuleResponse.h>
#include <huaweicloud/lts/v2/model/DeleteSqlAlarmRuleRequest.h>
#include <huaweicloud/lts/v2/model/DeleteSqlAlarmRuleResponse.h>
#include <huaweicloud/lts/v2/model/ListSqlAlarmRulesRequest.h>
#include <huaweicloud/lts/v2/model/ListSqlAlarmRulesResponse.h>
#include <huaweicloud/lts/v2/model/UpdateAlarmRuleStatusRequest.h>
#include <huaweicloud/lts/v2/model/UpdateAlarmRuleStatusResponse.h>
#include <huaweicloud/lts/v2/model/UpdateSqlAlarmRuleRequest.h>
#include <huaweicloud/lts/v2/model/UpdateSqlAlarmRuleRequestBody.h>
#include <huaweicloud/lts/v2/model/UpdateSqlAlarmRuleResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Lts::V2::Model;

class HUAWEICLOUD_LTS_V2_EXPORT  LtsClient : public Client
{
public:

    LtsClient();

    virtual ~LtsClient();

    static ClientBuilder<LtsClient> newBuilder();

    // 创建日志接入
    //
    // 创建日志接入
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAccessConfigResponse> createAccessConfig(
        CreateAccessConfigRequest &request
    );
    // 新建跨账号日志接入
    //
    // 新建跨账号日志接入
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAgencyAccessResponse> createAgencyAccess(
        CreateAgencyAccessRequest &request
    );
    // 创建仪表盘
    //
    // 创建仪表盘
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDashBoardResponse> createDashBoard(
        CreateDashBoardRequest &request
    );
    // 创建仪表盘分组
    //
    // 创建仪表盘分组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDashboardGroupResponse> createDashboardGroup(
        CreateDashboardGroupRequest &request
    );
    // 创建主机组
    //
    // 创建主机组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateHostGroupResponse> createHostGroup(
        CreateHostGroupRequest &request
    );
    // 创建关键词告警规则
    //
    // 该接口用于创建关键词告警，目前每个帐户最多可以创建共200个关键词告警与SQL告警。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateKeywordsAlarmRuleResponse> createKeywordsAlarmRule(
        CreateKeywordsAlarmRuleRequest &request
    );
    // 创建日志转储（旧版）
    //
    // 该接口用于将指定的一个或多个日志流的日志转储到OBS服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateLogDumpObsResponse> createLogDumpObs(
        CreateLogDumpObsRequest &request
    );
    // 创建日志组
    //
    // 该接口用于创建一个日志组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateLogGroupResponse> createLogGroup(
        CreateLogGroupRequest &request
    );
    // 创建日志流
    //
    // 该接口用于创建某个指定日志组下的日志流
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateLogStreamResponse> createLogStream(
        CreateLogStreamRequest &request
    );
    // 向指定流创建索引
    //
    // 向指定流创建索引
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateLogStreamIndexResponse> createLogStreamIndex(
        CreateLogStreamIndexRequest &request
    );
    // 创建消息模板
    //
    // 该接口用于创建通知模板，目前每个帐户最多可以创建共100个通知模板，创建后名称不可修改。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateNotificationTemplateResponse> createNotificationTemplate(
        CreateNotificationTemplateRequest &request
    );
    // 添加快速查询
    //
    // 添加快速查询
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSearchCriteriasResponse> createSearchCriterias(
        CreateSearchCriteriasRequest &request
    );
    // 通过结构化模板创建结构化配置（新）
    //
    // 该接口通过结构化模板创建结构化配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateStructConfigResponse> createStructConfig(
        CreateStructConfigRequest &request
    );
    // 创建结构化配置
    //
    // 该接口用于创建指定日志流下的结构化配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateStructTemplateResponse> createStructTemplate(
        CreateStructTemplateRequest &request
    );
    // 
    //
    // 添加标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTagsResponse> createTags(
        CreateTagsRequest &request
    );
    // 创建日志转储（新版）
    //
    // 该接口用于创建OBS转储，DIS转储，DMS转储。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTransferResponse> createTransfer(
        CreateTransferRequest &request
    );
    // 创建日志收藏
    //
    // 创建日志收藏
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatefavoriteResponse> createfavorite(
        CreatefavoriteRequest &request
    );
    // 删除日志接入
    //
    // 删除日志接入
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAccessConfigResponse> deleteAccessConfig(
        DeleteAccessConfigRequest &request
    );
    // 删除活动告警
    //
    // 该接口用于删除活动告警
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteActiveAlarmsResponse> deleteActiveAlarms(
        DeleteActiveAlarmsRequest &request
    );
    // 删除仪表盘
    //
    // 删除仪表盘
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDashboardResponse> deleteDashboard(
        DeleteDashboardRequest &request
    );
    // 删除主机组
    //
    // 删除主机组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteHostGroupResponse> deleteHostGroup(
        DeleteHostGroupRequest &request
    );
    // 删除关键词告警规则
    //
    // 该接口用于删除关键词告警。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteKeywordsAlarmRuleResponse> deleteKeywordsAlarmRule(
        DeleteKeywordsAlarmRuleRequest &request
    );
    // 删除日志组
    //
    // 该接口用于删除指定日志组。当日志组中的日志流配置了日志转储，需要取消日志转储后才可删除。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteLogGroupResponse> deleteLogGroup(
        DeleteLogGroupRequest &request
    );
    // 删除日志流
    //
    // 该接口用于删除指定日志组下的指定日志流。当该日志流配置了日志转储，需要取消日志转储后才可删除。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteLogStreamResponse> deleteLogStream(
        DeleteLogStreamRequest &request
    );
    // 删除消息模板
    //
    // 该接口用于删除通知模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteNotificationTemplateResponse> deleteNotificationTemplate(
        DeleteNotificationTemplateRequest &request
    );
    // 删除快速查询
    //
    // 删除快速查询
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSearchCriteriasResponse> deleteSearchCriterias(
        DeleteSearchCriteriasRequest &request
    );
    // 删除结构化配置
    //
    // 该接口用于删除指定日志流下的结构化配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteStructTemplateResponse> deleteStructTemplate(
        DeleteStructTemplateRequest &request
    );
    // 删除日志转储
    //
    // 该接口用于删除OBS转储，DIS转储，DMS转储。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTransferResponse> deleteTransfer(
        DeleteTransferRequest &request
    );
    // 取消收藏
    //
    // 取消收藏
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletefavoriteResponse> deletefavorite(
        DeletefavoriteRequest &request
    );
    // 关闭超额采集开关
    //
    // 该接口用于将超额采集日志功能关闭。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableLogCollectionResponse> disableLogCollection(
        DisableLogCollectionRequest &request
    );
    // 打开超额采集开关
    //
    // 该接口用于将超额采集日志功能打开。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableLogCollectionResponse> enableLogCollection(
        EnableLogCollectionRequest &request
    );
    // 查询日志接入
    //
    // 查询日志接入列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAccessConfigResponse> listAccessConfig(
        ListAccessConfigRequest &request
    );
    // 查询活动或历史告警列表
    //
    // 该接口用于查询告警列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListActiveOrHistoryAlarmsResponse> listActiveOrHistoryAlarms(
        ListActiveOrHistoryAlarmsRequest &request
    );
    // 查询结构化模板简略列表
    //
    // 该接口用于查询结构化模板简略列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBreifStructTemplateResponse> listBreifStructTemplate(
        ListBreifStructTemplateRequest &request
    );
    // 查询日志流图表
    //
    // 该接口用于查询日志流图表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListChartsResponse> listCharts(
        ListChartsRequest &request
    );
    // 获取快速查询
    //
    // 获取快速查询
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCriteriasResponse> listCriterias(
        ListCriteriasRequest &request
    );
    // 查询用户历史sql
    //
    // 查询用户历史sql
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHistorySqlResponse> listHistorySql(
        ListHistorySqlRequest &request
    );
    // 查询主机信息
    //
    // 查询主机列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHostResponse> listHost(
        ListHostRequest &request
    );
    // 查询主机组
    //
    // 查询主机组列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHostGroupResponse> listHostGroup(
        ListHostGroupRequest &request
    );
    // 查询关键词告警规则
    //
    // 该接口用于查询关键词告警。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListKeywordsAlarmRulesResponse> listKeywordsAlarmRules(
        ListKeywordsAlarmRulesRequest &request
    );
    // 查询上下文日志
    //
    // 查询上下文日志 该接口用于查询指定日志前（上文）后（下文）的若干条日志。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLogContextResponse> listLogContext(
        ListLogContextRequest &request
    );
    // 查询账号下所有日志组
    //
    // 该接口用于查询账号下所有日志组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLogGroupsResponse> listLogGroups(
        ListLogGroupsRequest &request
    );
    // 查询日志直方图
    //
    // 查询关键词搜索条数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLogHistogramResponse> listLogHistogram(
        ListLogHistogramRequest &request
    );
    // 查询指定日志组下的所有日志流
    //
    // 该接口用于查询指定日志组下的所有日志流信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLogStreamResponse> listLogStream(
        ListLogStreamRequest &request
    );
    // 查询日志流信息
    //
    // 该接口用于查询LTS日志流信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLogStreamsResponse> listLogStreams(
        ListLogStreamsRequest &request
    );
    // 查询日志
    //
    // 该接口用于查询指定日志流下的日志内容。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLogsResponse> listLogs(
        ListLogsRequest &request
    );
    // 预览消息模板邮件格式
    //
    // 该接口用于预览通知模板邮件格式
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNotificationTemplateResponse> listNotificationTemplate(
        ListNotificationTemplateRequest &request
    );
    // 查询消息模板
    //
    // 该接口用于查询通知模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNotificationTemplatesResponse> listNotificationTemplates(
        ListNotificationTemplatesRequest &request
    );
    // 查询SMN主题
    //
    // 该接口用于查询SMN主题
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNotificationTopicsResponse> listNotificationTopics(
        ListNotificationTopicsRequest &request
    );
    // 查询日志组下所有快速查询
    //
    // 查询日志组下所有快速查询
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListQueryAllSearchCriteriasResponse> listQueryAllSearchCriterias(
        ListQueryAllSearchCriteriasRequest &request
    );
    // 查询结构化日志
    //
    // 该接口用于查询指定日志流下的结构化日志内容。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListQueryStructuredLogsResponse> listQueryStructuredLogs(
        ListQueryStructuredLogsRequest &request
    );
    // 查询结构化模板
    //
    // 该接口用于查询结构化模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListStructTemplateResponse> listStructTemplate(
        ListStructTemplateRequest &request
    );
    // 查询结构化日志（新版）
    //
    // 该接口用于查询指定日志流下的结构化日志内容（新版）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListStructuredLogsWithTimeRangeResponse> listStructuredLogsWithTimeRange(
        ListStructuredLogsWithTimeRangeRequest &request
    );
    // 按时间段统计查询资源
    //
    // 按时间段统计查询资源
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTimeLineTrafficStatisticsResponse> listTimeLineTrafficStatistics(
        ListTimeLineTrafficStatisticsRequest &request
    );
    // 统计top n的日志组或日志流流量
    //
    // 统计top n的日志组或日志流流量
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTopnTrafficStatisticsResponse> listTopnTrafficStatistics(
        ListTopnTrafficStatisticsRequest &request
    );
    // 查询日志转储
    //
    // 该接口用于查询OBS转储，DIS转储，DMS转储配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTransfersResponse> listTransfers(
        ListTransfersRequest &request
    );
    // 注册DMS kafka实例
    //
    // 该接口用于注册DMS kafka实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RegisterDmsKafkaInstanceResponse> registerDmsKafkaInstance(
        RegisterDmsKafkaInstanceRequest &request
    );
    // 获取日志汇聚开关
    //
    // 只能由管理员或者委托管理员调用    获取日志汇聚开关
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAdminConfigResponse> showAdminConfig(
        ShowAdminConfigRequest &request
    );
    // 获取组织成员汇聚配置
    //
    // 只能由组织管理员或者委托管理员调用    获取组织成员汇聚配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLogConvergeConfigResponse> showLogConvergeConfig(
        ShowLogConvergeConfigRequest &request
    );
    // 获取组织成员日志组日志流
    //
    // 只能由管理员或者委托管理员调用，获取组织成员日志组日志流
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMemberGroupAndStreamResponse> showMemberGroupAndStream(
        ShowMemberGroupAndStreamRequest &request
    );
    // 查询单个消息模板
    //
    // 该接口用于查询单个通知模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowNotificationTemplateResponse> showNotificationTemplate(
        ShowNotificationTemplateRequest &request
    );
    // 查询结构化配置
    //
    // 该接口用于查询指定日志流下的结构化配置内容。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowStructTemplateResponse> showStructTemplate(
        ShowStructTemplateRequest &request
    );
    // 修改日志接入
    //
    // 修改日志接入
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAccessConfigResponse> updateAccessConfig(
        UpdateAccessConfigRequest &request
    );
    // 修改主机组
    //
    // 修改主机组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateHostGroupResponse> updateHostGroup(
        UpdateHostGroupRequest &request
    );
    // 修改关键词告警规则
    //
    // 该接口用于修改关键词告警。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateKeywordsAlarmRuleResponse> updateKeywordsAlarmRule(
        UpdateKeywordsAlarmRuleRequest &request
    );
    // 更新汇聚配置
    //
    // 只能由管理员或者委托管理员 ,更新汇聚配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateLogConvergeConfigResponse> updateLogConvergeConfig(
        UpdateLogConvergeConfigRequest &request
    );
    // 修改日志组
    //
    // 该接口用于修改指定日志组下的日志存储时长。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateLogGroupResponse> updateLogGroup(
        UpdateLogGroupRequest &request
    );
    // 修改日志流
    //
    // 该接口用于修改指定日志流下的日志存储时长。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateLogStreamResponse> updateLogStream(
        UpdateLogStreamRequest &request
    );
    // 修改消息模板
    //
    // 该接口用于修改通知模板,根据名称进行修改。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateNotificationTemplateResponse> updateNotificationTemplate(
        UpdateNotificationTemplateRequest &request
    );
    // 通过结构化模板修改结构化配置（新）
    //
    // 该接口通过结构化模板修改结构化配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateStructConfigResponse> updateStructConfig(
        UpdateStructConfigRequest &request
    );
    // 修改结构化配置
    //
    // 该接口用于修改指定日志流下的结构化配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateStructTemplateResponse> updateStructTemplate(
        UpdateStructTemplateRequest &request
    );
    // 修改日志汇聚开关
    //
    // 只能由管理员或者委托管理员调用     修改日志汇聚开关
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSwitchResponse> updateSwitch(
        UpdateSwitchRequest &request
    );
    // 更新日志转储
    //
    // 该接口用于更新OBS转储，DIS转储，DMS转储。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTransferResponse> updateTransfer(
        UpdateTransferRequest &request
    );

    // 创建接入规则
    //
    // 该接口用于创建aom日志接入lts规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAomMappingRulesResponse> createAomMappingRules(
        CreateAomMappingRulesRequest &request
    );
    // 删除接入规则
    //
    // 该接口用于删除lts接入规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAomMappingRulesResponse> deleteAomMappingRules(
        DeleteAomMappingRulesRequest &request
    );
    // 查询单个接入规则
    //
    // 该接口用于查询单个aom日志接入lts
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAomMappingRuleResponse> showAomMappingRule(
        ShowAomMappingRuleRequest &request
    );
    // 查询所有接入规则
    //
    // 该接口用于查询aom日志所有接入lts规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAomMappingRulesResponse> showAomMappingRules(
        ShowAomMappingRulesRequest &request
    );
    // 修改接入规则
    //
    // 该接口用于修改接入规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAomMappingRulesResponse> updateAomMappingRules(
        UpdateAomMappingRulesRequest &request
    );

    // 消费者发送心跳到服务端
    //
    // 消费者发送心跳到服务端
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ConsumerGroupHeartBeatResponse> consumerGroupHeartBeat(
        ConsumerGroupHeartBeatRequest &request
    );
    // 创建消费组
    //
    // 创建消费组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateConsumerGroupResponse> createConsumerGroup(
        CreateConsumerGroupRequest &request
    );
    // 删除消费组
    //
    // 删除消费组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteConsumerGroupResponse> deleteConsumerGroup(
        DeleteConsumerGroupRequest &request
    );
    // 查询消费组列表
    //
    // 查询消费组列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListConsumerGroupResponse> listConsumerGroup(
        ListConsumerGroupRequest &request
    );
    // 查询消费组详情
    //
    // 查询消费组详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDetailsConsumerGroupResponse> listDetailsConsumerGroup(
        ListDetailsConsumerGroupRequest &request
    );
    // 通过时间获取消费游标
    //
    // 通过时间查询cursor
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCursorByTimeResponse> showCursorByTime(
        ShowCursorByTimeRequest &request
    );
    // 通过消费游标获取时间
    //
    // 通过cursor查询服务端时间
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCursorTimeResponse> showCursorTime(
        ShowCursorTimeRequest &request
    );
    // 流消费获取Shards
    //
    // 流消费获取所有的query shards
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLogStreamShardsResponse> showLogStreamShards(
        ShowLogStreamShardsRequest &request
    );
    // 更新消费组位点
    //
    // 更新消费组位点
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateCheckPointResponse> updateCheckPoint(
        UpdateCheckPointRequest &request
    );

    // 创建SQL告警规则
    //
    // 该接口用于创建SQL告警，目前每个帐户最多可以创建共200个关键词告警与SQL告警
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSqlAlarmRuleResponse> createSqlAlarmRule(
        CreateSqlAlarmRuleRequest &request
    );
    // 删除SQL告警规则
    //
    // 该接口用于删除SQL告警
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSqlAlarmRuleResponse> deleteSqlAlarmRule(
        DeleteSqlAlarmRuleRequest &request
    );
    // 查询SQL告警规则
    //
    // 该接口用于查询SQL告警
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSqlAlarmRulesResponse> listSqlAlarmRules(
        ListSqlAlarmRulesRequest &request
    );
    // 切换告警规则状态
    //
    // 改变告警规则状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAlarmRuleStatusResponse> updateAlarmRuleStatus(
        UpdateAlarmRuleStatusRequest &request
    );
    // 修改SQL告警规则
    //
    // 该接口用于修改SQL告警
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSqlAlarmRuleResponse> updateSqlAlarmRule(
        UpdateSqlAlarmRuleRequest &request
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

template class HUAWEICLOUD_LTS_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Lts::V2::LtsClient>;

#endif // HUAWEICLOUD_SDK_LTS_V2_LtsClient_H_

