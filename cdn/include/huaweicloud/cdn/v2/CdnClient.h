#ifndef HUAWEICLOUD_SDK_CDN_V2_CdnClient_H_
#define HUAWEICLOUD_SDK_CDN_V2_CdnClient_H_

#include <huaweicloud/cdn/v2/CdnExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/cdn/v2/model/AccountConfigModifyRequest.h>
#include <huaweicloud/cdn/v2/model/ApplyDomainTemplateRequest.h>
#include <huaweicloud/cdn/v2/model/ApplyDomainTemplateResponse.h>
#include <huaweicloud/cdn/v2/model/BatchCopyDRequestBody.h>
#include <huaweicloud/cdn/v2/model/BatchCopyDomainRequest.h>
#include <huaweicloud/cdn/v2/model/BatchCopyDomainResponse.h>
#include <huaweicloud/cdn/v2/model/BatchCopyErrorRsp.h>
#include <huaweicloud/cdn/v2/model/BatchDeleteTagsRequest.h>
#include <huaweicloud/cdn/v2/model/BatchDeleteTagsResponse.h>
#include <huaweicloud/cdn/v2/model/BatchUpdateRuleStatusRequest.h>
#include <huaweicloud/cdn/v2/model/BatchUpdateRuleStatusResponse.h>
#include <huaweicloud/cdn/v2/model/BatchUpdateRulesRequest.h>
#include <huaweicloud/cdn/v2/model/CreateDomainRequest.h>
#include <huaweicloud/cdn/v2/model/CreateDomainRequestBody.h>
#include <huaweicloud/cdn/v2/model/CreateDomainResponse.h>
#include <huaweicloud/cdn/v2/model/CreateDomainTemplateRequest.h>
#include <huaweicloud/cdn/v2/model/CreateDomainTemplateResponse.h>
#include <huaweicloud/cdn/v2/model/CreatePreheatingTasksRequest.h>
#include <huaweicloud/cdn/v2/model/CreatePreheatingTasksResponse.h>
#include <huaweicloud/cdn/v2/model/CreateRefreshTasksRequest.h>
#include <huaweicloud/cdn/v2/model/CreateRefreshTasksResponse.h>
#include <huaweicloud/cdn/v2/model/CreateRuleNewRequest.h>
#include <huaweicloud/cdn/v2/model/CreateRuleNewResponse.h>
#include <huaweicloud/cdn/v2/model/CreateRuleRequest.h>
#include <huaweicloud/cdn/v2/model/CreateShareCacheGroupsRequest.h>
#include <huaweicloud/cdn/v2/model/CreateShareCacheGroupsRequstBody.h>
#include <huaweicloud/cdn/v2/model/CreateShareCacheGroupsResponse.h>
#include <huaweicloud/cdn/v2/model/CreateSubscriptionTaskRequest.h>
#include <huaweicloud/cdn/v2/model/CreateSubscriptionTaskResponse.h>
#include <huaweicloud/cdn/v2/model/CreateTagsRequest.h>
#include <huaweicloud/cdn/v2/model/CreateTagsRequestBody.h>
#include <huaweicloud/cdn/v2/model/CreateTagsResponse.h>
#include <huaweicloud/cdn/v2/model/CreateTemplateRequestBody.h>
#include <huaweicloud/cdn/v2/model/DeleteDomainRequest.h>
#include <huaweicloud/cdn/v2/model/DeleteDomainResponse.h>
#include <huaweicloud/cdn/v2/model/DeleteDomainTemplateRequest.h>
#include <huaweicloud/cdn/v2/model/DeleteDomainTemplateResponse.h>
#include <huaweicloud/cdn/v2/model/DeleteRuleNewRequest.h>
#include <huaweicloud/cdn/v2/model/DeleteRuleNewResponse.h>
#include <huaweicloud/cdn/v2/model/DeleteShareCacheGroupsRequest.h>
#include <huaweicloud/cdn/v2/model/DeleteShareCacheGroupsResponse.h>
#include <huaweicloud/cdn/v2/model/DeleteSubscriptionTaskRequest.h>
#include <huaweicloud/cdn/v2/model/DeleteSubscriptionTaskResponse.h>
#include <huaweicloud/cdn/v2/model/DeleteTagsRequestBody.h>
#include <huaweicloud/cdn/v2/model/DisableDomainRequest.h>
#include <huaweicloud/cdn/v2/model/DisableDomainResponse.h>
#include <huaweicloud/cdn/v2/model/DownloadRegionCarrierExcelRequest.h>
#include <huaweicloud/cdn/v2/model/DownloadRegionCarrierExcelResponse.h>
#include <huaweicloud/cdn/v2/model/DownloadStatisticsExcelRequest.h>
#include <huaweicloud/cdn/v2/model/DownloadStatisticsExcelResponse.h>
#include <huaweicloud/cdn/v2/model/EnableDomainRequest.h>
#include <huaweicloud/cdn/v2/model/EnableDomainResponse.h>
#include <huaweicloud/cdn/v2/model/ErrRsp.h>
#include <huaweicloud/cdn/v2/model/FullUpdateRulesRequest.h>
#include <huaweicloud/cdn/v2/model/ListCdnDomainTopIpsRequest.h>
#include <huaweicloud/cdn/v2/model/ListCdnDomainTopIpsResponse.h>
#include <huaweicloud/cdn/v2/model/ListCdnDomainTopOriginUrlRequest.h>
#include <huaweicloud/cdn/v2/model/ListCdnDomainTopOriginUrlResponse.h>
#include <huaweicloud/cdn/v2/model/ListCdnDomainTopRefersRequest.h>
#include <huaweicloud/cdn/v2/model/ListCdnDomainTopRefersResponse.h>
#include <huaweicloud/cdn/v2/model/ListCdnDomainTopUasRequest.h>
#include <huaweicloud/cdn/v2/model/ListCdnDomainTopUasResponse.h>
#include <huaweicloud/cdn/v2/model/ListDomainClientStatsRequest.h>
#include <huaweicloud/cdn/v2/model/ListDomainClientStatsResponse.h>
#include <huaweicloud/cdn/v2/model/ListDomainsRequest.h>
#include <huaweicloud/cdn/v2/model/ListDomainsResponse.h>
#include <huaweicloud/cdn/v2/model/ListRuleDetailsRequest.h>
#include <huaweicloud/cdn/v2/model/ListRuleDetailsResponse.h>
#include <huaweicloud/cdn/v2/model/ListShareCacheGroupsRequest.h>
#include <huaweicloud/cdn/v2/model/ListShareCacheGroupsResponse.h>
#include <huaweicloud/cdn/v2/model/ListSubscriptionTasksRequest.h>
#include <huaweicloud/cdn/v2/model/ListSubscriptionTasksResponse.h>
#include <huaweicloud/cdn/v2/model/ModifyAccountInfoRequest.h>
#include <huaweicloud/cdn/v2/model/ModifyAccountInfoResponse.h>
#include <huaweicloud/cdn/v2/model/ModifyDomainConfigRequestBody.h>
#include <huaweicloud/cdn/v2/model/PreheatingTaskRequest.h>
#include <huaweicloud/cdn/v2/model/RefreshTaskRequest.h>
#include <huaweicloud/cdn/v2/model/SetChargeModesBody.h>
#include <huaweicloud/cdn/v2/model/SetChargeModesRequest.h>
#include <huaweicloud/cdn/v2/model/SetChargeModesResponse.h>
#include <huaweicloud/cdn/v2/model/SetStatsConfigBody.h>
#include <huaweicloud/cdn/v2/model/SetStatsConfigRequest.h>
#include <huaweicloud/cdn/v2/model/SetStatsConfigResponse.h>
#include <huaweicloud/cdn/v2/model/ShowAppliedTemplateRecordRequest.h>
#include <huaweicloud/cdn/v2/model/ShowAppliedTemplateRecordResponse.h>
#include <huaweicloud/cdn/v2/model/ShowBandwidthCalcRequest.h>
#include <huaweicloud/cdn/v2/model/ShowBandwidthCalcResponse.h>
#include <huaweicloud/cdn/v2/model/ShowCertificatesHttpsInfoRequest.h>
#include <huaweicloud/cdn/v2/model/ShowCertificatesHttpsInfoResponse.h>
#include <huaweicloud/cdn/v2/model/ShowChargeModesRequest.h>
#include <huaweicloud/cdn/v2/model/ShowChargeModesResponse.h>
#include <huaweicloud/cdn/v2/model/ShowDomainDetailByNameRequest.h>
#include <huaweicloud/cdn/v2/model/ShowDomainDetailByNameResponse.h>
#include <huaweicloud/cdn/v2/model/ShowDomainFullConfigRequest.h>
#include <huaweicloud/cdn/v2/model/ShowDomainFullConfigResponse.h>
#include <huaweicloud/cdn/v2/model/ShowDomainLocationStatsRequest.h>
#include <huaweicloud/cdn/v2/model/ShowDomainLocationStatsResponse.h>
#include <huaweicloud/cdn/v2/model/ShowDomainStatsRequest.h>
#include <huaweicloud/cdn/v2/model/ShowDomainStatsResponse.h>
#include <huaweicloud/cdn/v2/model/ShowDomainTemplateRequest.h>
#include <huaweicloud/cdn/v2/model/ShowDomainTemplateResponse.h>
#include <huaweicloud/cdn/v2/model/ShowHistoryTaskDetailsRequest.h>
#include <huaweicloud/cdn/v2/model/ShowHistoryTaskDetailsResponse.h>
#include <huaweicloud/cdn/v2/model/ShowHistoryTasksRequest.h>
#include <huaweicloud/cdn/v2/model/ShowHistoryTasksResponse.h>
#include <huaweicloud/cdn/v2/model/ShowIpInfoRequest.h>
#include <huaweicloud/cdn/v2/model/ShowIpInfoResponse.h>
#include <huaweicloud/cdn/v2/model/ShowLogsRequest.h>
#include <huaweicloud/cdn/v2/model/ShowLogsResponse.h>
#include <huaweicloud/cdn/v2/model/ShowQuotaRequest.h>
#include <huaweicloud/cdn/v2/model/ShowQuotaResponse.h>
#include <huaweicloud/cdn/v2/model/ShowStatsConfigsRequest.h>
#include <huaweicloud/cdn/v2/model/ShowStatsConfigsResponse.h>
#include <huaweicloud/cdn/v2/model/ShowTagsRequest.h>
#include <huaweicloud/cdn/v2/model/ShowTagsResponse.h>
#include <huaweicloud/cdn/v2/model/ShowTopDomainNamesRequest.h>
#include <huaweicloud/cdn/v2/model/ShowTopDomainNamesResponse.h>
#include <huaweicloud/cdn/v2/model/ShowTopUrlRequest.h>
#include <huaweicloud/cdn/v2/model/ShowTopUrlResponse.h>
#include <huaweicloud/cdn/v2/model/ShowUrlTaskInfoRequest.h>
#include <huaweicloud/cdn/v2/model/ShowUrlTaskInfoResponse.h>
#include <huaweicloud/cdn/v2/model/ShowVerifyDomainOwnerInfoRequest.h>
#include <huaweicloud/cdn/v2/model/ShowVerifyDomainOwnerInfoResponse.h>
#include <huaweicloud/cdn/v2/model/SubscriptionTaskVo.h>
#include <huaweicloud/cdn/v2/model/TemplateApplyRequestBody.h>
#include <huaweicloud/cdn/v2/model/UpdateDomainFullConfigRequest.h>
#include <huaweicloud/cdn/v2/model/UpdateDomainFullConfigResponse.h>
#include <huaweicloud/cdn/v2/model/UpdateDomainMultiCertificatesRequest.h>
#include <huaweicloud/cdn/v2/model/UpdateDomainMultiCertificatesRequestBody.h>
#include <huaweicloud/cdn/v2/model/UpdateDomainMultiCertificatesResponse.h>
#include <huaweicloud/cdn/v2/model/UpdateDomainTemplateRequest.h>
#include <huaweicloud/cdn/v2/model/UpdateDomainTemplateResponse.h>
#include <huaweicloud/cdn/v2/model/UpdateFullRuleRequest.h>
#include <huaweicloud/cdn/v2/model/UpdateFullRuleResponse.h>
#include <huaweicloud/cdn/v2/model/UpdatePrivateBucketAccessBody.h>
#include <huaweicloud/cdn/v2/model/UpdatePrivateBucketAccessRequest.h>
#include <huaweicloud/cdn/v2/model/UpdatePrivateBucketAccessResponse.h>
#include <huaweicloud/cdn/v2/model/UpdateRuleNewRequest.h>
#include <huaweicloud/cdn/v2/model/UpdateRuleNewResponse.h>
#include <huaweicloud/cdn/v2/model/UpdateRuleRequest.h>
#include <huaweicloud/cdn/v2/model/UpdateShareCacheGroupsRequest.h>
#include <huaweicloud/cdn/v2/model/UpdateShareCacheGroupsRequstBody.h>
#include <huaweicloud/cdn/v2/model/UpdateShareCacheGroupsResponse.h>
#include <huaweicloud/cdn/v2/model/UpdateSubscriptionTaskRequest.h>
#include <huaweicloud/cdn/v2/model/UpdateSubscriptionTaskResponse.h>
#include <huaweicloud/cdn/v2/model/VerifyDomainOwnerRequest.h>
#include <huaweicloud/cdn/v2/model/VerifyDomainOwnerRequestBody.h>
#include <huaweicloud/cdn/v2/model/VerifyDomainOwnerResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Cdn::V2::Model;

class HUAWEICLOUD_CDN_V2_EXPORT  CdnClient : public Client
{
public:

    CdnClient();

    virtual ~CdnClient();

    static ClientBuilder<CdnClient> newBuilder();

    // 应用域名模板。
    //
    // 应用域名模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ApplyDomainTemplateResponse> applyDomainTemplate(
        ApplyDomainTemplateRequest &request
    );
    // 批量域名复制
    //
    // 批量域名复制接口。
    //  &gt; 将某个加速域名的配置批量复制到其他域名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCopyDomainResponse> batchCopyDomain(
        BatchCopyDomainRequest &request
    );
    // 删除资源标签配置接口
    //
    // 用于删除资源标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteTagsResponse> batchDeleteTags(
        BatchDeleteTagsRequest &request
    );
    // 批量更新规则状态及优先级
    //
    // 批量更新规则状态及优先级。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpdateRuleStatusResponse> batchUpdateRuleStatus(
        BatchUpdateRuleStatusRequest &request
    );
    // 创建加速域名
    //
    // 创建加速域名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDomainResponse> createDomain(
        CreateDomainRequest &request
    );
    // 创建域名模板。
    //
    // 创建域名模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDomainTemplateResponse> createDomainTemplate(
        CreateDomainTemplateRequest &request
    );
    // 创建预热缓存任务
    //
    // 创建预热任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePreheatingTasksResponse> createPreheatingTasks(
        CreatePreheatingTasksRequest &request
    );
    // 创建刷新缓存任务
    //
    // 创建刷新缓存任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRefreshTasksResponse> createRefreshTasks(
        CreateRefreshTasksRequest &request
    );
    // 创建规则引擎规则
    //
    // 规则引擎功能通过图形化的方式实现各种规则配置，实现更加灵活、细粒度的规则配置。通过限制触发条件，控制当前配置生效的资源范围，满足多种场景的配置需求。
    // - 请提交工单开通规则引擎功能后再使用当前接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRuleNewResponse> createRuleNew(
        CreateRuleNewRequest &request
    );
    // 创建共享缓存组
    //
    // 配置共享缓存组，将一个域名设置为主域名，组内其他域名共享该域名的缓存，提高缓存命中率。
    // - 只有缓存规则中“URL参数”的配置为“忽略参数”或者“不忽略参数”的域名才能加入共享缓存组。
    // - 每个账号最多配置500个共享缓存组。
    // - 单租户调用频率：5次/s。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateShareCacheGroupsResponse> createShareCacheGroups(
        CreateShareCacheGroupsRequest &request
    );
    // 创建运营报表订阅任务
    //
    // create subscription task
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSubscriptionTaskResponse> createSubscriptionTask(
        CreateSubscriptionTaskRequest &request
    );
    // 创建资源标签配置接口
    //
    // 用于创建资源标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTagsResponse> createTags(
        CreateTagsRequest &request
    );
    // 删除加速域名
    //
    // 删除加速域名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDomainResponse> deleteDomain(
        DeleteDomainRequest &request
    );
    // 删除域名模板。
    //
    // 删除域名模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDomainTemplateResponse> deleteDomainTemplate(
        DeleteDomainTemplateRequest &request
    );
    // 删除规则引擎规则
    //
    // 删除规则引擎规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRuleNewResponse> deleteRuleNew(
        DeleteRuleNewRequest &request
    );
    // 删除共享缓存组
    //
    // 删除新共享缓存组。
    // - 共享缓存组内不包含关联域名时才可以删除。
    // - 单租户调用频率：5次/s。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteShareCacheGroupsResponse> deleteShareCacheGroups(
        DeleteShareCacheGroupsRequest &request
    );
    // 删除运营报表订阅任务
    //
    // delete subscription task
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSubscriptionTaskResponse> deleteSubscriptionTask(
        DeleteSubscriptionTaskRequest &request
    );
    // 停用加速域名
    //
    // 停用加速域名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableDomainResponse> disableDomain(
        DisableDomainRequest &request
    );
    // 下载区域运营商指标数据表格文件
    //
    // - 下载区域运营商指标数据表格文件。
    // 
    // - 支持下载90天内的指标数据表格。
    // 
    // - 时间跨度不能超过31天。
    // 
    // - 起始时间和结束时间，左闭右开。如时间跨度为2022-10-24 00:00:00 到 2022-10-25 00:00:00，表示取 [2022-10-24 00:00:00, 2022-10-25 00:00:00)的统计数据。
    // 
    // - 起始时间、结束时间必须传毫秒级时间戳，起始时间和结束时间必须同时指定。
    // 
    // - 单租户调用频率：10次/min。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadRegionCarrierExcelResponse> downloadRegionCarrierExcel(
        DownloadRegionCarrierExcelRequest &request
    );
    // 下载统计指标数据表格文件
    //
    // - 下载统计指标数据表格文件。
    // 
    // - 支持下载90天内的指标数据。
    // 
    // - 时间跨度不能超过31天。
    // 
    // - 起始时间和结束时间，左闭右开。如时间跨度为2022-10-24 00:00:00 到 2022-10-25 00:00:00，表示取 [2022-10-24 00:00:00, 2022-10-25 00:00:00)的统计数据。
    // 
    // - 起始时间、结束时间必须传毫秒级时间戳，起始时间和结束时间必须同时指定。
    // 
    // - 单租户调用频率：10次/min。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadStatisticsExcelResponse> downloadStatisticsExcel(
        DownloadStatisticsExcelRequest &request
    );
    // 启用加速域名
    //
    // 启用加速域名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableDomainResponse> enableDomain(
        EnableDomainRequest &request
    );
    // 查询域名top ip统计分析数据
    //
    // - 查询域名top ip统计分析数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCdnDomainTopIpsResponse> listCdnDomainTopIps(
        ListCdnDomainTopIpsRequest &request
    );
    // 查询域名top回源URL数据
    //
    // - 查询域名top 回源URL数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCdnDomainTopOriginUrlResponse> listCdnDomainTopOriginUrl(
        ListCdnDomainTopOriginUrlRequest &request
    );
    // 查询统计TOP100 referer数据明细
    //
    // - 查询TOP100 referer数据。
    // 
    // - 支持查询90天内的数据。
    // 
    // - 查询跨度不能超过31天。
    // 
    // - 单租户调用频率：2次/s。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCdnDomainTopRefersResponse> listCdnDomainTopRefers(
        ListCdnDomainTopRefersRequest &request
    );
    // 查询域名top ua统计分析数据
    //
    // - 统计分析TOP UA统计数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCdnDomainTopUasResponse> listCdnDomainTopUas(
        ListCdnDomainTopUasRequest &request
    );
    // 按域名维度查询每天客户端访问详情统计
    //
    // - 按域名维度查询每天客户端访问详情统计。
    // - 支持查询90天内的数据。
    // - ip_num查询跨度只支持1天,uv查询跨度只支持5分钟。
    // - 起始时间和结束时间，左闭右开，需要同时指定。如查询2022-07-12 00:00:00 到 2022-07-13 00:00:00 的数据，表示取 [2022-07-12 00:00:00, 2022-07-13 00:00:00)的统计数据。
    // - ip_num开始时间、结束时间必须传毫秒级时间戳，必须为凌晨0点整时刻点，如果传的不是凌晨0点整时刻点，返回数据可能与预期不一致。
    // - uv必须为5分钟整时刻点，如：0分、5分、10分、15分等，如果传的不是5分钟时刻点，返回数据可能与预期不一致
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDomainClientStatsResponse> listDomainClientStats(
        ListDomainClientStatsRequest &request
    );
    // 查询加速域名
    //
    // 查询加速域名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDomainsResponse> listDomains(
        ListDomainsRequest &request
    );
    // 查询规则引擎列表
    //
    // 查询规则引擎列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRuleDetailsResponse> listRuleDetails(
        ListRuleDetailsRequest &request
    );
    // 查询共享缓存组列表
    //
    // 查询共享缓存组列表。
    // - 单租户调用频率：5次/s。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListShareCacheGroupsResponse> listShareCacheGroups(
        ListShareCacheGroupsRequest &request
    );
    // 分页查询运营报表订阅任务
    //
    // query subscription task
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSubscriptionTasksResponse> listSubscriptionTasks(
        ListSubscriptionTasksRequest &request
    );
    // 修改租户配置
    //
    // 修改租户配置，当前仅支持开启OBS和SCM委托授权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyAccountInfoResponse> modifyAccountInfo(
        ModifyAccountInfoRequest &request
    );
    // 设置用户计费模式
    //
    // - 设置用户计费模式。
    // 
    // - 服务区域仅支持mainland_china（国内）
    // 
    // - 计费模式仅支持设置flux（流量），v2及以上客户支持bw（带宽）
    // 
    // - 加速类型仅支持base（基础加速）
    // 
    // - 单租户调用频率：10次/min。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetChargeModesResponse> setChargeModes(
        SetChargeModesRequest &request
    );
    // 设置统计配置
    //
    // - 设置统计配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetStatsConfigResponse> setStatsConfig(
        SetStatsConfigRequest &request
    );
    // 查询域名模板应用记录。
    //
    // 查询域名模板应用记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAppliedTemplateRecordResponse> showAppliedTemplateRecord(
        ShowAppliedTemplateRecordRequest &request
    );
    // 查询域名带宽峰值类数据
    //
    // - 查询域名带宽峰值类数据。
    // 
    // - 支持查询90天内的数据。
    // 
    // - 查询时间跨度不能超过31天。
    // 
    // - 起始时间和结束时间，左闭右开。如查询2022-10-24 00:00:00 到 2022-10-25 00:00:00 的数据，表示取 [2022-10-24 00:00:00, 2022-10-25 00:00:00)的统计数据。
    // 
    // - 起始时间、结束时间必须传毫秒级时间戳，起始时间和结束时间必须同时指定。
    // 
    // - 流量类指标单位统一为Byte（字节）、带宽类指标单位统一为bit/s（比特/秒）、峰值类指标单位统一为bps（比特率），请求数类和状态码类指标单位统一为次数。用于查询指定域名、指定统计指标的明细数据。
    // 
    // - 单租户调用频率：2次/s。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBandwidthCalcResponse> showBandwidthCalc(
        ShowBandwidthCalcRequest &request
    );
    // 查询所有绑定HTTPS证书的域名信息
    //
    // 查询所有绑定HTTPS证书的域名信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCertificatesHttpsInfoResponse> showCertificatesHttpsInfo(
        ShowCertificatesHttpsInfoRequest &request
    );
    // 查询用户计费模式
    //
    // - 查询用户计费模式。
    // 
    // - 服务区域仅支持mainland_china（国内，默认）和outside_mainland_china（海外）
    // 
    // - 计费模式状态支持active（已生效），upcoming（待生效）两种状态，默认为active(已生效)
    // 
    // - 加速类型仅支持base（基础加速）
    // 
    // - 单租户调用频率：5次/s。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowChargeModesResponse> showChargeModes(
        ShowChargeModesRequest &request
    );
    // 查询加速域名详情
    //
    // 加速域名详情信息接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainDetailByNameResponse> showDomainDetailByName(
        ShowDomainDetailByNameRequest &request
    );
    // 查询域名配置接口
    //
    // 查询域名配置接口，支持查询业务类型、服务范围、备注、IPv6开关、回源方式、回源URL改写、高级回源、Range回源、回源跟随、回源是否校验Etag、回源超时时间、回源请求头、HTTPS配置、TLS版本配置、强制跳转、HSTS、HTTP/2、OCSP Stapling、QUIC、缓存规则、状态码缓存时间、防盗链、IP黑白名单、 Use-Agent黑白名单、URL鉴权配置、远程鉴权配置、IP访问限频、HTTP header配置、自定义错误页面配置、智能压缩、请求限速配置、WebSocket配置、视频拖拽、回源SNI、访问URL重写、浏览器缓存过期时间、区域访问控制。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainFullConfigResponse> showDomainFullConfig(
        ShowDomainFullConfigRequest &request
    );
    // 按区域运营商查询域名统计数据
    //
    // - 支持查询90天内的数据。
    // 
    // - 支持多指标同时查询，不超过5个。
    // 
    // - 最多同时指定20个域名。
    // 
    // - 起始时间和结束时间需要同时指定，左闭右开，毫秒级时间戳，且时间点必须为与查询时间间隔参数匹配的整时刻点。比如查询时间间隔为5分钟时，起始时间和结束时间必须为5分钟整时刻点，如：0分、5分、10分、15分等，如果时间点与时间间隔不匹配，返回数据可能与预期不一致。统一用开始时间表示一个时间段，如：2019-01-24 20:15:00 表示取 [20:15:00, 20:20:00)的统计数据，且左闭右开。
    // 
    // - action取值：location_detail,location_summary
    // 
    // - 流量类指标单位统一为Byte（字节）、带宽类指标单位统一为bit/s（比特/秒）、请求数类和状态码类指标单位统一为次数。用于查询指定域名、指定统计指标的区域运营商明细数据。
    // 
    // - 单租户调用频率：15次/s。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainLocationStatsResponse> showDomainLocationStats(
        ShowDomainLocationStatsRequest &request
    );
    // 查询域名统计数据
    //
    // - 支持查询90天内的数据。
    // 
    // - 支持多指标同时查询，不超过5个。
    // 
    // - 最多同时指定20个域名。
    // 
    // - 起始时间和结束时间需要同时指定，左闭右开，毫秒级时间戳，且时间点必须为与查询时间间隔参数匹配的整时刻点。比如查询时间间隔为5分钟时，起始时间和结束时间必须为5分钟整时刻点，如：0分、5分、10分、15分等，如果时间点与时间间隔不匹配，返回数据可能与预期不一致。统一用开始时间表示一个时间段，如：2019-01-24 20:15:00 表示取 [20:15:00, 20:20:00)的统计数据，且左闭右开。
    // 
    // - action取值：detail,summary
    // 
    // - 流量类指标单位统一为Byte（字节）、带宽类指标单位统一为bit/s（比特/秒）、请求数类和状态码类指标单位统一为次数。用于查询指定域名、指定统计指标的明细数据。
    // 
    // - 单租户调用频率：15次/s。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainStatsResponse> showDomainStats(
        ShowDomainStatsRequest &request
    );
    // 查询域名模板列表
    //
    // 查询域名模板列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainTemplateResponse> showDomainTemplate(
        ShowDomainTemplateRequest &request
    );
    // 查询刷新预热任务详情
    //
    // 查询刷新预热任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHistoryTaskDetailsResponse> showHistoryTaskDetails(
        ShowHistoryTaskDetailsRequest &request
    );
    // 查询刷新预热任务
    //
    // 查询刷新预热任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHistoryTasksResponse> showHistoryTasks(
        ShowHistoryTasksRequest &request
    );
    // 查询IP归属信息
    //
    // 查询IP归属信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIpInfoResponse> showIpInfo(
        ShowIpInfoRequest &request
    );
    // 日志查询
    //
    // 查询日志下载链接，支持查询30天内的日志信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLogsResponse> showLogs(
        ShowLogsRequest &request
    );
    // 查询用户配额
    //
    // 查询当前用户域名、刷新文件、刷新目录和预热的配额
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowQuotaResponse> showQuota(
        ShowQuotaRequest &request
    );
    // 查询统计配置
    //
    // - 配置类型：目前支持，
    // - 0：热点统计。
    // - 1：ces上报。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowStatsConfigsResponse> showStatsConfigs(
        ShowStatsConfigsRequest &request
    );
    // 查询资源标签列表配置接口
    //
    // 用于查询资源标签列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTagsResponse> showTags(
        ShowTagsRequest &request
    );
    // 查询TOP域名
    //
    // - 查询TOP域名。
    // 
    // - 支持查询90天内的数据。
    // 
    // - 查询时间跨度不能超过1天。
    // 
    // - 起始时间和结束时间，左闭右开，必须同时指定。如查询2022-10-24 00:00:00 到 2022-10-25 00:00:00 的数据，表示取 [2022-10-24 00:00:00, 2022-10-25 00:00:00)的统计数据。
    // 
    // - 起始时间、结束时间必须传整点毫秒级时间戳。
    // 
    // - 流量类指标单位统一为Byte（字节）、带宽类指标单位统一为bit/s（比特/秒）、请求数类和状态码类指标单位统一为次数。用于查询指定域名、指定统计指标的明细数据。
    // 
    // - 单租户调用频率：5次/s。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTopDomainNamesResponse> showTopDomainNames(
        ShowTopDomainNamesRequest &request
    );
    // 查询TOP100 URL明细
    //
    // - 查询TOP100 URL明细。
    // 
    // - 支持查询90天内的数据。
    // 
    // - 查询跨度不能超过31天。
    // 
    // - 起始时间和结束时间，左闭右开，需要同时指定。如查询2021-10-24 00:00:00 到 2021-10-25 00:00:00 的数据，表示取 [2021-10-24 00:00:00, 2021-10-25 00:00:00)的统计数据。
    // 
    // - 开始时间、结束时间必须传毫秒级时间戳，且必须为凌晨0点整时刻点，如果传的不是凌晨0点整时刻点，返回数据可能与预期不一致。
    // 
    // - 流量类指标单位统一为Byte（字节）、请求数类指标单位统一为次数。用于查询指定域名、指定统计指标的明细数据。
    // 
    // - 单租户调用频率：5次/s。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTopUrlResponse> showTopUrl(
        ShowTopUrlRequest &request
    );
    // 查询刷新预热URL记录
    //
    // 查询刷新预热URL记录。如需此接口，请提交工单开通。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUrlTaskInfoResponse> showUrlTaskInfo(
        ShowUrlTaskInfoRequest &request
    );
    // 查询域名归属校验信息
    //
    // 用于查询域名归属校验信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVerifyDomainOwnerInfoResponse> showVerifyDomainOwnerInfo(
        ShowVerifyDomainOwnerInfoRequest &request
    );
    // 修改域名全量配置接口
    //
    // 修改域名配置接口，支持修改业务类型、服务范围、备注、IPv6开关、回源方式、回源URL改写、高级回源、Range回源、回源跟随、回源是否校验Etag、回源超时时间、回源请求头、HTTPS配置、TLS版本配置、强制跳转、HSTS、HTTP/2、OCSP Stapling、QUIC、缓存规则、状态码缓存时间、防盗链、IP黑白名单、Use-Agent黑白名单、URL鉴权配置、远程鉴权配置、IP访问限频、HTTP header配置、自定义错误页面配置、智能压缩、请求限速配置、WebSocket配置、视频拖拽、回源SNI、访问URL重写、浏览器缓存过期时间、区域访问控制。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDomainFullConfigResponse> updateDomainFullConfig(
        UpdateDomainFullConfigRequest &request
    );
    // 一个证书批量设置多个域名
    //
    // 一个证书配置多个域名，设置域名强制https回源参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDomainMultiCertificatesResponse> updateDomainMultiCertificates(
        UpdateDomainMultiCertificatesRequest &request
    );
    // 修改域名模板。
    //
    // 修改域名模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDomainTemplateResponse> updateDomainTemplate(
        UpdateDomainTemplateRequest &request
    );
    // 全量更新规则引擎规则
    //
    // 全量更新规则引擎规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateFullRuleResponse> updateFullRule(
        UpdateFullRuleRequest &request
    );
    // 修改私有桶开启关闭状态
    //
    // 修改私有桶开启关闭状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePrivateBucketAccessResponse> updatePrivateBucketAccess(
        UpdatePrivateBucketAccessRequest &request
    );
    // 更新规则引擎规则
    //
    // 更新规则引擎规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRuleNewResponse> updateRuleNew(
        UpdateRuleNewRequest &request
    );
    // 更新共享缓存组
    //
    // 更新共享缓存组。
    // - 单租户调用频率：5次/s。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateShareCacheGroupsResponse> updateShareCacheGroups(
        UpdateShareCacheGroupsRequest &request
    );
    // 修改运营报表订阅任务
    //
    // modify subscription task
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSubscriptionTaskResponse> updateSubscriptionTask(
        UpdateSubscriptionTaskRequest &request
    );
    // 域名归属校验
    //
    // 用于域名归属校验
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<VerifyDomainOwnerResponse> verifyDomainOwner(
        VerifyDomainOwnerRequest &request
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

template class HUAWEICLOUD_CDN_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Cdn::V2::CdnClient>;

#endif // HUAWEICLOUD_SDK_CDN_V2_CdnClient_H_

