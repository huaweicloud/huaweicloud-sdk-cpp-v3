
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopRefersRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopRefersRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ListCdnDomainTopRefersRequest
    : public ModelBase
{
public:
    ListCdnDomainTopRefersRequest();
    virtual ~ListCdnDomainTopRefersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCdnDomainTopRefersRequest members

    /// <summary>
    /// 查询起始时间戳，需与结束时间戳同时指定，左闭右开，设置方式如下： - interval为300时，start_time设置为整5分钟时刻点，如：1631240100000(对应2021-09-10 10:15:00) - interval为3600时，start_time设置为整小时时刻点，如：1631239200000(对应2021-09-10 10:00:00) - interval为86400时，start_time设置为东8区零点时刻点，如：1631203200000(对应2021-09-10 00:00:00)
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 查询结束时间戳，需与开始时间戳同时指定，左闭右开，设置方式如下： - interval为300时，end_time设置为整5分钟时刻点，如：1631243700000(对应2021-09-10 11:15:00) - interval为3600时，end_time设置为整小时时刻点，如：1631325600000(对应2021-09-11 10:00:00) - interval为86400时，end_time设置为东8区零点时刻点，如：1631376000000(对应2021-09-12 00:00:00)
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 域名列表，多个域名以逗号（半角）分隔，如：www.test1.com,www.test2.com all表示查询名下全部域名。如果域名在查询时间段内无数据，结果将不返回该域名的信息。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// - 统计指标类型 - 目前只支持flux（流量），req_num（请求数）
    /// </summary>

    std::string getStatType() const;
    bool statTypeIsSet() const;
    void unsetstatType();
    void setStatType(const std::string& value);

    /// <summary>
    /// 服务区域：mainland_china(大陆)，outside_mainland_china(海外)，默认为global(全球)
    /// </summary>

    std::string getServiceArea() const;
    bool serviceAreaIsSet() const;
    void unsetserviceArea();
    void setServiceArea(const std::string& value);

    /// <summary>
    /// 当用户开启企业项目功能时，该参数生效，表示查询资源所属项目，\&quot;all\&quot;表示所有项目。注意：当使用子账号调用接口时，该参数必传。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 是否包含百分比数据，默认false
    /// </summary>

    bool isIncludeRatio() const;
    bool includeRatioIsSet() const;
    void unsetincludeRatio();
    void setIncludeRatio(bool value);


protected:
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string statType_;
    bool statTypeIsSet_;
    std::string serviceArea_;
    bool serviceAreaIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    bool includeRatio_;
    bool includeRatioIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListCdnDomainTopRefersRequest& dereference_from_shared_ptr(std::shared_ptr<ListCdnDomainTopRefersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopRefersRequest_H_
