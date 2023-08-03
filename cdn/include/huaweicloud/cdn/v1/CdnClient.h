#ifndef HUAWEICLOUD_SDK_CDN_V1_CdnClient_H_
#define HUAWEICLOUD_SDK_CDN_V1_CdnClient_H_

#include <huaweicloud/cdn/v1/CdnExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/cdn/v1/model/BatchDeleteTagsRequest.h>
#include <huaweicloud/cdn/v1/model/BatchDeleteTagsResponse.h>
#include <huaweicloud/cdn/v1/model/BlackWhiteListBody.h>
#include <huaweicloud/cdn/v1/model/CacheConfigRequestBody.h>
#include <huaweicloud/cdn/v1/model/CreateDomainRequest.h>
#include <huaweicloud/cdn/v1/model/CreateDomainRequestBody.h>
#include <huaweicloud/cdn/v1/model/CreateDomainResponse.h>
#include <huaweicloud/cdn/v1/model/CreatePreheatingTasksRequest.h>
#include <huaweicloud/cdn/v1/model/CreatePreheatingTasksResponse.h>
#include <huaweicloud/cdn/v1/model/CreateRefreshTasksRequest.h>
#include <huaweicloud/cdn/v1/model/CreateRefreshTasksResponse.h>
#include <huaweicloud/cdn/v1/model/CreateTagsRequest.h>
#include <huaweicloud/cdn/v1/model/CreateTagsRequestBody.h>
#include <huaweicloud/cdn/v1/model/CreateTagsResponse.h>
#include <huaweicloud/cdn/v1/model/DeleteDomainRequest.h>
#include <huaweicloud/cdn/v1/model/DeleteDomainResponse.h>
#include <huaweicloud/cdn/v1/model/DeleteTagsRequestBody.h>
#include <huaweicloud/cdn/v1/model/DisableDomainRequest.h>
#include <huaweicloud/cdn/v1/model/DisableDomainResponse.h>
#include <huaweicloud/cdn/v1/model/EnableDomainRequest.h>
#include <huaweicloud/cdn/v1/model/EnableDomainResponse.h>
#include <huaweicloud/cdn/v1/model/Follow302StatusRequest.h>
#include <huaweicloud/cdn/v1/model/HeaderBody.h>
#include <huaweicloud/cdn/v1/model/HttpInfoRequest.h>
#include <huaweicloud/cdn/v1/model/ListDomainsRequest.h>
#include <huaweicloud/cdn/v1/model/ListDomainsResponse.h>
#include <huaweicloud/cdn/v1/model/ModifyDomainConfigRequestBody.h>
#include <huaweicloud/cdn/v1/model/OriginHostRequest.h>
#include <huaweicloud/cdn/v1/model/OriginRequest.h>
#include <huaweicloud/cdn/v1/model/PreheatingTaskRequest.h>
#include <huaweicloud/cdn/v1/model/RangeStatusRequest.h>
#include <huaweicloud/cdn/v1/model/RefererBody.h>
#include <huaweicloud/cdn/v1/model/RefreshTaskRequest.h>
#include <huaweicloud/cdn/v1/model/ShowBlackWhiteListRequest.h>
#include <huaweicloud/cdn/v1/model/ShowBlackWhiteListResponse.h>
#include <huaweicloud/cdn/v1/model/ShowCacheRulesRequest.h>
#include <huaweicloud/cdn/v1/model/ShowCacheRulesResponse.h>
#include <huaweicloud/cdn/v1/model/ShowCertificatesHttpsInfoRequest.h>
#include <huaweicloud/cdn/v1/model/ShowCertificatesHttpsInfoResponse.h>
#include <huaweicloud/cdn/v1/model/ShowDomainDetailRequest.h>
#include <huaweicloud/cdn/v1/model/ShowDomainDetailResponse.h>
#include <huaweicloud/cdn/v1/model/ShowDomainFullConfigRequest.h>
#include <huaweicloud/cdn/v1/model/ShowDomainFullConfigResponse.h>
#include <huaweicloud/cdn/v1/model/ShowDomainItemDetailsRequest.h>
#include <huaweicloud/cdn/v1/model/ShowDomainItemDetailsResponse.h>
#include <huaweicloud/cdn/v1/model/ShowDomainItemLocationDetailsRequest.h>
#include <huaweicloud/cdn/v1/model/ShowDomainItemLocationDetailsResponse.h>
#include <huaweicloud/cdn/v1/model/ShowDomainLocationStatsRequest.h>
#include <huaweicloud/cdn/v1/model/ShowDomainLocationStatsResponse.h>
#include <huaweicloud/cdn/v1/model/ShowDomainStatsRequest.h>
#include <huaweicloud/cdn/v1/model/ShowDomainStatsResponse.h>
#include <huaweicloud/cdn/v1/model/ShowHistoryTaskDetailsRequest.h>
#include <huaweicloud/cdn/v1/model/ShowHistoryTaskDetailsResponse.h>
#include <huaweicloud/cdn/v1/model/ShowHistoryTasksRequest.h>
#include <huaweicloud/cdn/v1/model/ShowHistoryTasksResponse.h>
#include <huaweicloud/cdn/v1/model/ShowHttpInfoRequest.h>
#include <huaweicloud/cdn/v1/model/ShowHttpInfoResponse.h>
#include <huaweicloud/cdn/v1/model/ShowIpInfoRequest.h>
#include <huaweicloud/cdn/v1/model/ShowIpInfoResponse.h>
#include <huaweicloud/cdn/v1/model/ShowLogsRequest.h>
#include <huaweicloud/cdn/v1/model/ShowLogsResponse.h>
#include <huaweicloud/cdn/v1/model/ShowOriginHostRequest.h>
#include <huaweicloud/cdn/v1/model/ShowOriginHostResponse.h>
#include <huaweicloud/cdn/v1/model/ShowQuotaRequest.h>
#include <huaweicloud/cdn/v1/model/ShowQuotaResponse.h>
#include <huaweicloud/cdn/v1/model/ShowReferRequest.h>
#include <huaweicloud/cdn/v1/model/ShowReferResponse.h>
#include <huaweicloud/cdn/v1/model/ShowResponseHeaderRequest.h>
#include <huaweicloud/cdn/v1/model/ShowResponseHeaderResponse.h>
#include <huaweicloud/cdn/v1/model/ShowTagsRequest.h>
#include <huaweicloud/cdn/v1/model/ShowTagsResponse.h>
#include <huaweicloud/cdn/v1/model/ShowTopUrlRequest.h>
#include <huaweicloud/cdn/v1/model/ShowTopUrlResponse.h>
#include <huaweicloud/cdn/v1/model/ShowUrlTaskInfoRequest.h>
#include <huaweicloud/cdn/v1/model/ShowUrlTaskInfoResponse.h>
#include <huaweicloud/cdn/v1/model/UpdateBlackWhiteListRequest.h>
#include <huaweicloud/cdn/v1/model/UpdateBlackWhiteListResponse.h>
#include <huaweicloud/cdn/v1/model/UpdateCacheRulesRequest.h>
#include <huaweicloud/cdn/v1/model/UpdateCacheRulesResponse.h>
#include <huaweicloud/cdn/v1/model/UpdateDomainFullConfigRequest.h>
#include <huaweicloud/cdn/v1/model/UpdateDomainFullConfigResponse.h>
#include <huaweicloud/cdn/v1/model/UpdateDomainMultiCertificatesRequest.h>
#include <huaweicloud/cdn/v1/model/UpdateDomainMultiCertificatesRequestBody.h>
#include <huaweicloud/cdn/v1/model/UpdateDomainMultiCertificatesResponse.h>
#include <huaweicloud/cdn/v1/model/UpdateDomainOriginRequest.h>
#include <huaweicloud/cdn/v1/model/UpdateDomainOriginResponse.h>
#include <huaweicloud/cdn/v1/model/UpdateFollow302SwitchRequest.h>
#include <huaweicloud/cdn/v1/model/UpdateFollow302SwitchResponse.h>
#include <huaweicloud/cdn/v1/model/UpdateHttpsInfoRequest.h>
#include <huaweicloud/cdn/v1/model/UpdateHttpsInfoResponse.h>
#include <huaweicloud/cdn/v1/model/UpdateOriginHostRequest.h>
#include <huaweicloud/cdn/v1/model/UpdateOriginHostResponse.h>
#include <huaweicloud/cdn/v1/model/UpdatePrivateBucketAccessBody.h>
#include <huaweicloud/cdn/v1/model/UpdatePrivateBucketAccessRequest.h>
#include <huaweicloud/cdn/v1/model/UpdatePrivateBucketAccessResponse.h>
#include <huaweicloud/cdn/v1/model/UpdateRangeSwitchRequest.h>
#include <huaweicloud/cdn/v1/model/UpdateRangeSwitchResponse.h>
#include <huaweicloud/cdn/v1/model/UpdateReferRequest.h>
#include <huaweicloud/cdn/v1/model/UpdateReferResponse.h>
#include <huaweicloud/cdn/v1/model/UpdateResponseHeaderRequest.h>
#include <huaweicloud/cdn/v1/model/UpdateResponseHeaderResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Cdn::V1::Model;

class HUAWEICLOUD_CDN_V1_EXPORT  CdnClient : public Client
{
public:

    CdnClient();

    virtual ~CdnClient();

    static ClientBuilder<CdnClient> newBuilder();

    // 删除资源标签配置接口
    //
    // 用于删除资源标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteTagsResponse> batchDeleteTags(
        BatchDeleteTagsRequest &request
    );
    // 创建加速域名
    //
    // 创建加速域名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDomainResponse> createDomain(
        CreateDomainRequest &request
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
    // 停用加速域名
    //
    // 停用加速域名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableDomainResponse> disableDomain(
        DisableDomainRequest &request
    );
    // 启用加速域名
    //
    // 启用加速域名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableDomainResponse> enableDomain(
        EnableDomainRequest &request
    );
    // 查询加速域名
    //
    // 查询加速域名信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDomainsResponse> listDomains(
        ListDomainsRequest &request
    );
    // 查询IP黑白名单
    //
    // 查询域名已经设置的IP黑白名单。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBlackWhiteListResponse> showBlackWhiteList(
        ShowBlackWhiteListRequest &request
    );
    // 查询缓存规则
    //
    // 查询缓存规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCacheRulesResponse> showCacheRules(
        ShowCacheRulesRequest &request
    );
    // 查询所有绑定HTTPS证书的域名信息
    //
    // 查询所有绑定HTTPS证书的域名信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCertificatesHttpsInfoResponse> showCertificatesHttpsInfo(
        ShowCertificatesHttpsInfoRequest &request
    );
    // 查询加速域名详情
    //
    // 查询加速域名详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainDetailResponse> showDomainDetail(
        ShowDomainDetailRequest &request
    );
    // 查询域名配置接口
    //
    // 查询域名配置接口，
    // 支持查询回源请求头、HTTP header配置、URL鉴权、证书、源站、回源协议、强制重定向、智能压缩、IPv6开关、状态码缓存时间、Range回源、User-Agent黑白名单、改写回源URL、自定义错误页面、缓存规则、IP黑白名单、防盗链、强制跳转。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainFullConfigResponse> showDomainFullConfig(
        ShowDomainFullConfigRequest &request
    );
    // 批量查询域名的统计明细-按域名单独返回
    //
    // - 支持查询90天内的数据。
    // - 查询跨度不能超过7天。
    // - 最多同时指定100个域名。
    // - 起始时间和结束时间，左闭右开，需要同时指定。
    // - 开始时间、结束时间必须传毫秒级时间戳，且必须为5分钟整时刻点，如：0分、5分、10分、15分等，如果传的不是5分钟时刻点，返回数据可能与预期不一致。
    // - 统一用开始时间表示一个时间段，如：2019-01-24 20:15:00 表示取 [20:15:00, 20:20:00)的统计数据，且左闭右开。
    // - 流量类指标单位统一为Byte（字节）、带宽类指标单位统一为bit/s（比特/秒）、请求数类指标单位统一为次数。用于查询指定域名、指定统计指标的明细数据。
    // - 如果传的是多个域名，则每个域名的数据分开返回。
    // - 支持同时查询多个指标，不超过10个。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainItemDetailsResponse> showDomainItemDetails(
        ShowDomainItemDetailsRequest &request
    );
    // 批量查询域名的区域、运营商统计明细-按域名单独返回
    //
    // - 支持查询90天内的数据。
    // - 查询跨度是7天。
    // - 最多同时指定100个域名。
    // - 起始时间和结束时间，左闭右开，需要同时指定。
    // - 开始时间、结束时间必须传毫秒级时间戳，且必须为5分钟整时刻点，如：0分、5分、10分、15分等，如果传的不是5分钟时刻点，返回数据可能与预期不一致。
    // - 统一用开始时间表示一个时间段，如：2019-01-24 20:15:00 表示取 [20:15:00, 20:20:00)的统计数据，且左闭右开。
    // - 流量类指标单位统一为Byte（字节）、带宽类指标单位统一为bit/s（比特/秒）、请求数类指标单位统一为次数。
    // - 用于查询指定域名、指定统计指标的明细数据。
    // - 如果传的是多个域名，则每个域名的数据分开返回。
    // - 支持按区域、运营商维度查询统计数据, 回源指标除外。
    // - 支持同时查询多个指标，不超过10个。
    // - 域名为海外加速场景不适用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainItemLocationDetailsResponse> showDomainItemLocationDetails(
        ShowDomainItemLocationDetailsRequest &request
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
    // 查询HTTPS配置
    //
    // 获取加速域名证书。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHttpInfoResponse> showHttpInfo(
        ShowHttpInfoRequest &request
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
    // 查询回源HOST
    //
    // 查询回源HOST。回源HOST是CDN节点在回源过程中，在源站访问的站点域名，即http请求头中的host信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOriginHostResponse> showOriginHost(
        ShowOriginHostRequest &request
    );
    // 查询用户配额
    //
    // 查询当前用户域名、刷新文件、刷新目录和预热的配额
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowQuotaResponse> showQuota(
        ShowQuotaRequest &request
    );
    // 查询Referer过滤规则
    //
    // 查询Referer过滤规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowReferResponse> showRefer(
        ShowReferRequest &request
    );
    // 查询响应头配置
    //
    // 列举header所有配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowResponseHeaderResponse> showResponseHeader(
        ShowResponseHeaderRequest &request
    );
    // 查询资源标签列表配置接口
    //
    // 用于查询资源标签列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTagsResponse> showTags(
        ShowTagsRequest &request
    );
    // 查询TOP100 URL明细
    //
    // - 查询TOP100 URL明细。
    // 
    // - 支持查询90天内的数据。
    // 
    // - 查询跨度不能超过31天。
    // 
    // - 起始时间和结束时间，左闭右开，需要同时指定。如查询2021-10-24 00:00:00 到 2021-10-25 00:00:00
    // 的数据，表示取 [2021-10-24 00:00:00, 2021-10-25 00:00:00)的统计数据。
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
    // 查询刷新预热URL记录。如需此接口，请提交工单开通
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUrlTaskInfoResponse> showUrlTaskInfo(
        ShowUrlTaskInfoRequest &request
    );
    // 设置IP黑白名单
    //
    // 设置域名的IP黑白名单。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateBlackWhiteListResponse> updateBlackWhiteList(
        UpdateBlackWhiteListRequest &request
    );
    // 设置缓存规则
    //
    // 设置CDN节点上缓存资源的缓存策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateCacheRulesResponse> updateCacheRules(
        UpdateCacheRulesRequest &request
    );
    // 修改域名全量配置接口
    //
    // 修改域名配置接口，
    // 支持修改回源请求头、HTTP header配置、URL鉴权、证书、源站、回源协议、强制重定向、智能压缩、IPv6开关、状态码缓存时间、Range回源、User-Agent黑白名单、改写回源URL、自定义错误页面、缓存规则、IP黑白名单、防盗链、强制跳转。
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
    // 修改源站信息。
    //
    // 修改加速域名的源站配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDomainOriginResponse> updateDomainOrigin(
        UpdateDomainOriginRequest &request
    );
    // 开启/关闭回源跟随
    //
    // 开启此项配置后，当CDN节点回源请求源站返回301/302状态码时，CDN节点会先跳转到301/302对应地址获取资源并缓存后再返回给用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateFollow302SwitchResponse> updateFollow302Switch(
        UpdateFollow302SwitchRequest &request
    );
    // 配置HTTPS
    //
    // 设置加速域名HTTPS。通过配置加速域名的HTTPS证书，并将其部署在全网CDN节点，实现HTTPS安全加速。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateHttpsInfoResponse> updateHttpsInfo(
        UpdateHttpsInfoRequest &request
    );
    // 修改回源HOST。
    //
    // 修改回源HOST。回源HOST是CDN节点在回源过程中，在源站访问的站点域名，即http请求头中的host信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateOriginHostResponse> updateOriginHost(
        UpdateOriginHostRequest &request
    );
    // 修改私有桶开启关闭状态
    //
    // 修改私有桶开启关闭状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePrivateBucketAccessResponse> updatePrivateBucketAccess(
        UpdatePrivateBucketAccessRequest &request
    );
    // 开启/关闭Range回源
    //
    // Range回源是指源站在收到CDN节点回源请求时，根据http请求头中的Range信息返回指定范围的数据给CDN节点。
    // 
    // 开启Range回源前需要确认源站是否支持Range请求，若源站不支持Range请求，开启Range回源将导致资源无法缓存。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRangeSwitchResponse> updateRangeSwitch(
        UpdateRangeSwitchRequest &request
    );
    // 设置Referer过滤规则
    //
    // 设置Referer过滤规则。通过设置过滤策略，对访问者身份进行识别和过滤，实现限制访问来源的目的。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateReferResponse> updateRefer(
        UpdateReferRequest &request
    );
    // 新增/修改响应头配置
    //
    // 新增/修改域名响应头配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateResponseHeaderResponse> updateResponseHeader(
        UpdateResponseHeaderRequest &request
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

template class HUAWEICLOUD_CDN_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Cdn::V1::CdnClient>;

#endif // HUAWEICLOUD_SDK_CDN_V1_CdnClient_H_

