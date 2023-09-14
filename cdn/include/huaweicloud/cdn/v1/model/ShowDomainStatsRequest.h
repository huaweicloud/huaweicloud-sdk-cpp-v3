
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainStatsRequest_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainStatsRequest_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  ShowDomainStatsRequest
    : public ModelBase
{
public:
    ShowDomainStatsRequest();
    virtual ~ShowDomainStatsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowDomainStatsRequest members

    /// <summary>
    /// - 动作名称，可选summary、detail。 - summary：查询汇总数据 - detail：查询数据详情。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// - 查询起始时间戳，需与结束时间戳同时指定，左闭右开，设置方式如下：  - interval为300时，start_time设置为整5分钟时刻点，如：1631240100000(对应2021-09-10 10:15:00)  - interval为3600时，start_time设置为整小时时刻点，如：1631239200000(对应2021-09-10 10:00:00)  - interval为86400时，start_time设置为东8区零点时刻点，如：1631203200000(对应2021-09-10 00:00:00)
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// - 查询结束时间戳，需与开始时间戳同时指定，左闭右开，设置方式如下：  - interval为300时，end_time设置为整5分钟时刻点，如：1631243700000(对应2021-09-10 11:15:00)  - interval为3600时，end_time设置为整小时时刻点，如：1631325600000(对应2021-09-11 10:00:00)  - interval为86400时，end_time设置为东8区零点时刻点，如：1631376000000(对应2021-09-12 00:00:00)
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 域名列表，多个域名以逗号（半角）分隔，如：www.test1.com,www.test2.com，all表示查询名下全部域名。如果域名在查询时间段内无数据，结果将不返回该域名的信息。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// - 网络资源消耗：   - bw（带宽）   - flux（流量）   - bs_bw（回源带宽）   - bs_flux（回源流量） - 访问情况：   - req_num（请求总数）   - hit_num（请求命中次数）   - bs_num（回源总数）   - bs_fail_num（回源失败数）   - hit_flux（命中流量） - HTTP状态码（组合指标）：   - http_code_2xx（状态码汇总2xx）   - http_code_3xx（状态码汇总3xx）   - http_code_4xx（状态码汇总4xx）   - http_code_5xx（状态码汇总5xx）   - bs_http_code_2xx（回源状态码汇总2xx）   - bs_http_code_3xx（回源状态码汇总3xx）   - bs_http_code_4xx（回源状态码汇总4xx）   - bs_http_code_5xx（回源状态码汇总5xx）   - status_code_2xx（状态码详情2xx）   - status_code_3xx（状态码详情3xx）   - status_code_4xx（状态码详情4xx）   - status_code_5xx（状态码详情5xx）   - bs_status_code_2xx（回源状态码详情2xx）   - bs_status_code_3xx（回源状态码详情3xx）   - bs_status_code_4xx（回源状态码详情4xx）   - bs_status_code_5xx（回源状态码详情5xx）   - status_code和bs_status_code不能一起查询
    /// </summary>

    std::string getStatType() const;
    bool statTypeIsSet() const;
    void unsetstatType();
    void setStatType(const std::string& value);

    /// <summary>
    /// - 查询时间间隔，单位：秒，取值说明： - 300(5分钟)：最大查询跨度2天 - 3600(1小时)：最大查询跨度7天 - 86400(1天)：最大查询跨度31天 - 如果不传，默认取对应时间跨度的最小间隔。
    /// </summary>

    int64_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int64_t value);

    /// <summary>
    /// 数据分组方式，可选domain，默认不分组。
    /// </summary>

    std::string getGroupBy() const;
    bool groupByIsSet() const;
    void unsetgroupBy();
    void setGroupBy(const std::string& value);

    /// <summary>
    /// 服务区域：mainland_china（默认）、outside_mainland_china，当查询回源类指标时该参数无效。
    /// </summary>

    std::string getServiceArea() const;
    bool serviceAreaIsSet() const;
    void unsetserviceArea();
    void setServiceArea(const std::string& value);

    /// <summary>
    /// 当用户开启企业项目功能时，该参数生效，表示查询资源所属项目，\&quot;all\&quot;表示所有项目。注意：当使用子帐号调用接口时，该参数必传。  您可以通过调用企业项目管理服务（EPS）的查询企业项目列表接口（ListEnterpriseProject）查询企业项目id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    std::string action_;
    bool actionIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string statType_;
    bool statTypeIsSet_;
    int64_t interval_;
    bool intervalIsSet_;
    std::string groupBy_;
    bool groupByIsSet_;
    std::string serviceArea_;
    bool serviceAreaIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowDomainStatsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowDomainStatsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainStatsRequest_H_
