
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainItemDetailsRequest_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainItemDetailsRequest_H_

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
class HUAWEICLOUD_CDN_V1_EXPORT  ShowDomainItemDetailsRequest
    : public ModelBase
{
public:
    ShowDomainItemDetailsRequest();
    virtual ~ShowDomainItemDetailsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowDomainItemDetailsRequest members

    /// <summary>
    /// 当用户开启企业项目功能时，该参数生效，表示查询资源所属项目，不传表示查询默认项目。注意：当使用子帐号调用接口时，该参数必传。  您可以通过调用企业项目管理服务（EPS）的查询企业项目列表接口（ListEnterpriseProject）查询企业项目id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 查询起始时间戳，必须设为5分钟整时刻点
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 查询结束时间戳，必须设为5分钟整时刻点
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
    /// mainland_china(中国大陆)，outside_mainland_china(中国大陆境外)，默认为mainland_china。
    /// </summary>

    std::string getServiceArea() const;
    bool serviceAreaIsSet() const;
    void unsetserviceArea();
    void setServiceArea(const std::string& value);

    /// <summary>
    /// 网络资源消耗： - bw（带宽） - flux（流量） - bs_bw(回源带宽) - bs_flux（回源流量）  访问情况： - req_num（请求总数） - hit_num（请求命中次数） - bs_num(回源总数) - bs_fail_num(回源失败数) - hit_flux（命中流量）  HTTP状态码（组合指标）： - http_code_2xx(状态码汇总2xx) - http_code_3xx(状态码汇总3xx) - http_code_4xx(状态码汇总4xx) - http_code_5xx(状态码汇总5xx) - bs_http_code_2xx（回源状态码汇总2xx） - bs_http_code_3xx（回源状态码汇总3xx） - bs_http_code_4xx（回源状态码汇总4xx） - bs_http_code_5xx（回源状态码汇总5xx） - status_code_2xx（状态码详情2xx） - status_code_3xx（状态码详情3xx） - status_code_4xx（状态码详情4xx） - status_code_5xx（状态码详情5xx） - bs_status_code_2xx（回源状态码详情2xx） - bs_status_code_3xx（回源状态码详情3xx） - bs_status_code_4xx（回源状态码详情4xx） - bs_status_code_5xx（回源状态码详情5xx） - status_code和bs_status_code不能一起查询，否则数据会不准确，status_code不支持指定服务区域
    /// </summary>

    std::string getStatType() const;
    bool statTypeIsSet() const;
    void unsetstatType();
    void setStatType(const std::string& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string serviceArea_;
    bool serviceAreaIsSet_;
    std::string statType_;
    bool statTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowDomainItemDetailsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowDomainItemDetailsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainItemDetailsRequest_H_
