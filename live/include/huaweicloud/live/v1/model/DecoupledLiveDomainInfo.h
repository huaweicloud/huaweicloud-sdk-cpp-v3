
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_DecoupledLiveDomainInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_DecoupledLiveDomainInfo_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  DecoupledLiveDomainInfo
    : public ModelBase
{
public:
    DecoupledLiveDomainInfo();
    virtual ~DecoupledLiveDomainInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DecoupledLiveDomainInfo members

    /// <summary>
    /// 直播域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 域名类型
    /// </summary>

    std::string getDomainType() const;
    bool domainTypeIsSet() const;
    void unsetdomainType();
    void setDomainType(const std::string& value);

    /// <summary>
    /// CDN厂商
    /// </summary>

    std::string getVendor() const;
    bool vendorIsSet() const;
    void unsetvendor();
    void setVendor(const std::string& value);

    /// <summary>
    /// 直播所属直播中心
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 直播域名的CName
    /// </summary>

    std::string getDomainCname() const;
    bool domainCnameIsSet() const;
    void unsetdomainCname();
    void setDomainCname(const std::string& value);

    /// <summary>
    /// 直播域名的状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 播放域名关联的推流域名（只有domain_type为pull的时候有效）
    /// </summary>

    std::string getRelatedDomain() const;
    bool relatedDomainIsSet() const;
    void unsetrelatedDomain();
    void setRelatedDomain(const std::string& value);

    /// <summary>
    /// 域名创建时间，格式：yyyy-mm-ddThh:mm:ssZ，UTC时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 状态描述
    /// </summary>

    std::string getStatusDescribe() const;
    bool statusDescribeIsSet() const;
    void unsetstatusDescribe();
    void setStatusDescribe(const std::string& value);

    /// <summary>
    /// 域名应用区域 - mainland_china表示中国大陆区域 - outside_mainland_china表示中国大陆以外区域 
    /// </summary>

    std::string getServiceArea() const;
    bool serviceAreaIsSet() const;
    void unsetserviceArea();
    void setServiceArea(const std::string& value);

    /// <summary>
    /// 企业项目ID
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// IPV6开关是否开启，默认关闭，true为开启；false或空为关闭
    /// </summary>

    bool isIsIpv6() const;
    bool isIpv6IsSet() const;
    void unsetisIpv6();
    void setIsIpv6(bool value);


protected:
    std::string domain_;
    bool domainIsSet_;
    std::string domainType_;
    bool domainTypeIsSet_;
    std::string vendor_;
    bool vendorIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string domainCname_;
    bool domainCnameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string relatedDomain_;
    bool relatedDomainIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    std::string statusDescribe_;
    bool statusDescribeIsSet_;
    std::string serviceArea_;
    bool serviceAreaIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    bool isIpv6_;
    bool isIpv6IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_DecoupledLiveDomainInfo_H_
