
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopPathRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopPathRequest_H_


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
class HUAWEICLOUD_CDN_V2_EXPORT  ListCdnDomainTopPathRequest
    : public ModelBase
{
public:
    ListCdnDomainTopPathRequest();
    virtual ~ListCdnDomainTopPathRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCdnDomainTopPathRequest members

    /// <summary>
    /// 查询起始时间戳，只能传0点毫秒时间戳
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 查询结束时间戳，只能传0点毫秒时间戳
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
    /// - 参数类型支持：flux(流量),req_num(请求数)
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
    /// 域名所属用户的domain_id。
    /// </summary>

    std::string getUserDomainId() const;
    bool userDomainIdIsSet() const;
    void unsetuserDomainId();
    void setUserDomainId(const std::string& value);


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
    std::string userDomainId_;
    bool userDomainIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListCdnDomainTopPathRequest& dereference_from_shared_ptr(std::shared_ptr<ListCdnDomainTopPathRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopPathRequest_H_
