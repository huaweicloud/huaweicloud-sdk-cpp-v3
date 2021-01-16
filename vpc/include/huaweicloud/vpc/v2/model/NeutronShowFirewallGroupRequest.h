
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallGroupRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallGroupRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronShowFirewallGroupRequest
    : public ModelBase
{
public:
    NeutronShowFirewallGroupRequest();
    virtual ~NeutronShowFirewallGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronShowFirewallGroupRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getFirewallGroupId() const;
    bool firewallGroupIdIsSet() const;
    void unsetfirewallGroupId();
    void setFirewallGroupId(const std::string& value);


protected:
    std::string firewallGroupId_;
    bool firewallGroupIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronShowFirewallGroupRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronShowFirewallGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallGroupRequest_H_
