
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_CountGlobalEipsRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_CountGlobalEipsRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  CountGlobalEipsRequest
    : public ModelBase
{
public:
    CountGlobalEipsRequest();
    virtual ~CountGlobalEipsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CountGlobalEipsRequest members

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getId();
    bool idIsSet() const;
    void unsetid();
    void setId(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getInternetBandwidthId();
    bool internetBandwidthIdIsSet() const;
    void unsetinternetBandwidthId();
    void setInternetBandwidthId(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getName();
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getNameLike() const;
    bool nameLikeIsSet() const;
    void unsetnameLike();
    void setNameLike(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getAccessSite();
    bool accessSiteIsSet() const;
    void unsetaccessSite();
    void setAccessSite(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getGeipPoolName();
    bool geipPoolNameIsSet() const;
    void unsetgeipPoolName();
    void setGeipPoolName(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getIsp();
    bool ispIsSet() const;
    void unsetisp();
    void setIsp(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<int32_t>& getIpVersion();
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(std::vector<int32_t> value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getIpAddress();
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getIpv6Address();
    bool ipv6AddressIsSet() const;
    void unsetipv6Address();
    void setIpv6Address(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<bool>& getFreezen();
    bool freezenIsSet() const;
    void unsetfreezen();
    void setFreezen(std::vector<bool> value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<bool>& getPolluted();
    bool pollutedIsSet() const;
    void unsetpolluted();
    void setPolluted(std::vector<bool> value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<bool>& getInternetBandwidthIsNull();
    bool internetBandwidthIsNullIsSet() const;
    void unsetinternetBandwidthIsNull();
    void setInternetBandwidthIsNull(std::vector<bool> value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<bool>& getGcbBandwidthIsNull();
    bool gcbBandwidthIsNullIsSet() const;
    void unsetgcbBandwidthIsNull();
    void setGcbBandwidthIsNull(std::vector<bool> value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getStatus();
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getAssociateInstanceInfoRegion();
    bool associateInstanceInfoRegionIsSet() const;
    void unsetassociateInstanceInfoRegion();
    void setAssociateInstanceInfoRegion(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getAssociateInstanceInfoPublicBorderGroup();
    bool associateInstanceInfoPublicBorderGroupIsSet() const;
    void unsetassociateInstanceInfoPublicBorderGroup();
    void setAssociateInstanceInfoPublicBorderGroup(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getAssociateInstanceInfoInstanceSite();
    bool associateInstanceInfoInstanceSiteIsSet() const;
    void unsetassociateInstanceInfoInstanceSite();
    void setAssociateInstanceInfoInstanceSite(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getAssociateInstanceInfoInstanceType();
    bool associateInstanceInfoInstanceTypeIsSet() const;
    void unsetassociateInstanceInfoInstanceType();
    void setAssociateInstanceInfoInstanceType(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getAssociateInstanceInfoInstanceId();
    bool associateInstanceInfoInstanceIdIsSet() const;
    void unsetassociateInstanceInfoInstanceId();
    void setAssociateInstanceInfoInstanceId(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getAssociateInstanceInfoProjectId();
    bool associateInstanceInfoProjectIdIsSet() const;
    void unsetassociateInstanceInfoProjectId();
    void setAssociateInstanceInfoProjectId(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getEnterpriseProjectId();
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);


protected:
    std::vector<std::string> id_;
    bool idIsSet_;
    std::vector<std::string> internetBandwidthId_;
    bool internetBandwidthIdIsSet_;
    std::vector<std::string> name_;
    bool nameIsSet_;
    std::string nameLike_;
    bool nameLikeIsSet_;
    std::vector<std::string> accessSite_;
    bool accessSiteIsSet_;
    std::vector<std::string> geipPoolName_;
    bool geipPoolNameIsSet_;
    std::vector<std::string> isp_;
    bool ispIsSet_;
    std::vector<int32_t> ipVersion_;
    bool ipVersionIsSet_;
    std::vector<std::string> ipAddress_;
    bool ipAddressIsSet_;
    std::vector<std::string> ipv6Address_;
    bool ipv6AddressIsSet_;
    std::vector<bool> freezen_;
    bool freezenIsSet_;
    std::vector<bool> polluted_;
    bool pollutedIsSet_;
    std::vector<bool> internetBandwidthIsNull_;
    bool internetBandwidthIsNullIsSet_;
    std::vector<bool> gcbBandwidthIsNull_;
    bool gcbBandwidthIsNullIsSet_;
    std::vector<std::string> status_;
    bool statusIsSet_;
    std::vector<std::string> associateInstanceInfoRegion_;
    bool associateInstanceInfoRegionIsSet_;
    std::vector<std::string> associateInstanceInfoPublicBorderGroup_;
    bool associateInstanceInfoPublicBorderGroupIsSet_;
    std::vector<std::string> associateInstanceInfoInstanceSite_;
    bool associateInstanceInfoInstanceSiteIsSet_;
    std::vector<std::string> associateInstanceInfoInstanceType_;
    bool associateInstanceInfoInstanceTypeIsSet_;
    std::vector<std::string> associateInstanceInfoInstanceId_;
    bool associateInstanceInfoInstanceIdIsSet_;
    std::vector<std::string> associateInstanceInfoProjectId_;
    bool associateInstanceInfoProjectIdIsSet_;
    std::vector<std::string> enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CountGlobalEipsRequest& dereference_from_shared_ptr(std::shared_ptr<CountGlobalEipsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_CountGlobalEipsRequest_H_
