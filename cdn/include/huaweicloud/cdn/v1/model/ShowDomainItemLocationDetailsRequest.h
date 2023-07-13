
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainItemLocationDetailsRequest_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainItemLocationDetailsRequest_H_

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
class HUAWEICLOUD_CDN_V1_EXPORT  ShowDomainItemLocationDetailsRequest
    : public ModelBase
{
public:
    ShowDomainItemLocationDetailsRequest();
    virtual ~ShowDomainItemLocationDetailsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowDomainItemLocationDetailsRequest members

    /// <summary>
    /// 当用户开启企业项目功能时，该参数生效，表示查询资源所属项目，不传表示查询默认项目。注意：当使用子帐号调用接口时，该参数必传。  您可以通过调用企业项目管理服务（EPS）的查询企业项目列表接口（ListEnterpriseProject）查询企业项目id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 查询开始时间戳，必须设为5分钟整时刻点
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
    /// 域名列表，多个域名以逗号（半角）分隔，如：www.test1.com,www.test2.com，all表示查询名下全部域名
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 指标类型列表 网络资源消耗：bw（带宽），flux（流量），ipv6_bw(ipv6带宽)，ipv6_flux(ipv6流量), https_bw(https带宽)，https_flux(https流量) 访问情况：req_num（请求总数），hit_num（请求命中次数），req_time(请求时长) HTTP状态码（组合指标）：status_code_2xx(状态码2xx)，status_code_3xx(状态码3xx)，status_code_4xx(状态码4xx)，status_code_5xx(状态码5xx)
    /// </summary>

    std::string getStatType() const;
    bool statTypeIsSet() const;
    void unsetstatType();
    void setStatType(const std::string& value);

    /// <summary>
    /// 区域列表，以逗号分隔，all表示查询全部区域
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 运营商列表，以逗号分隔，all表示查询全部运营商
    /// </summary>

    std::string getIsp() const;
    bool ispIsSet() const;
    void unsetisp();
    void setIsp(const std::string& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string statType_;
    bool statTypeIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string isp_;
    bool ispIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowDomainItemLocationDetailsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowDomainItemLocationDetailsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainItemLocationDetailsRequest_H_
