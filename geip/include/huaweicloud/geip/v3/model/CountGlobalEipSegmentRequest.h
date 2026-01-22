
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_CountGlobalEipSegmentRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_CountGlobalEipSegmentRequest_H_


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
class HUAWEICLOUD_GEIP_V3_EXPORT  CountGlobalEipSegmentRequest
    : public ModelBase
{
public:
    CountGlobalEipSegmentRequest();
    virtual ~CountGlobalEipSegmentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CountGlobalEipSegmentRequest members

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getFields();
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::vector<std::string>& value);

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

    std::vector<std::string>& getCidr();
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getCidrV6();
    bool cidrV6IsSet() const;
    void unsetcidrV6();
    void setCidrV6(const std::vector<std::string>& value);

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

    std::vector<bool>& getInternetBandwidthIsNull();
    bool internetBandwidthIsNullIsSet() const;
    void unsetinternetBandwidthIsNull();
    void setInternetBandwidthIsNull(std::vector<bool> value);

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

    std::vector<std::string>& getAssociateInstanceRegion();
    bool associateInstanceRegionIsSet() const;
    void unsetassociateInstanceRegion();
    void setAssociateInstanceRegion(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getAssociateInstancePublicBorderGroup();
    bool associateInstancePublicBorderGroupIsSet() const;
    void unsetassociateInstancePublicBorderGroup();
    void setAssociateInstancePublicBorderGroup(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getAssociateInstanceInstanceSite();
    bool associateInstanceInstanceSiteIsSet() const;
    void unsetassociateInstanceInstanceSite();
    void setAssociateInstanceInstanceSite(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getAssociateInstanceInstanceType();
    bool associateInstanceInstanceTypeIsSet() const;
    void unsetassociateInstanceInstanceType();
    void setAssociateInstanceInstanceType(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getAssociateInstanceInstanceId();
    bool associateInstanceInstanceIdIsSet() const;
    void unsetassociateInstanceInstanceId();
    void setAssociateInstanceInstanceId(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getAssociateInstanceProjectId();
    bool associateInstanceProjectIdIsSet() const;
    void unsetassociateInstanceProjectId();
    void setAssociateInstanceProjectId(const std::vector<std::string>& value);

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
    std::vector<std::string> fields_;
    bool fieldsIsSet_;
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
    std::vector<std::string> cidr_;
    bool cidrIsSet_;
    std::vector<std::string> cidrV6_;
    bool cidrV6IsSet_;
    std::vector<bool> freezen_;
    bool freezenIsSet_;
    std::vector<bool> internetBandwidthIsNull_;
    bool internetBandwidthIsNullIsSet_;
    std::vector<std::string> status_;
    bool statusIsSet_;
    std::vector<std::string> associateInstanceRegion_;
    bool associateInstanceRegionIsSet_;
    std::vector<std::string> associateInstancePublicBorderGroup_;
    bool associateInstancePublicBorderGroupIsSet_;
    std::vector<std::string> associateInstanceInstanceSite_;
    bool associateInstanceInstanceSiteIsSet_;
    std::vector<std::string> associateInstanceInstanceType_;
    bool associateInstanceInstanceTypeIsSet_;
    std::vector<std::string> associateInstanceInstanceId_;
    bool associateInstanceInstanceIdIsSet_;
    std::vector<std::string> associateInstanceProjectId_;
    bool associateInstanceProjectIdIsSet_;
    std::vector<std::string> enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CountGlobalEipSegmentRequest& dereference_from_shared_ptr(std::shared_ptr<CountGlobalEipSegmentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_CountGlobalEipSegmentRequest_H_
