
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallPolicyRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallPolicyRequest_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

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
class HUAWEICLOUD_VPC_EXPORT  NeutronShowFirewallPolicyRequest
    : public ModelBase
{
public:
    NeutronShowFirewallPolicyRequest();
    virtual ~NeutronShowFirewallPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronShowFirewallPolicyRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getFirewallPolicyId() const;
    bool firewallPolicyIdIsSet() const;
    void unsetfirewallPolicyId();
    void setFirewallPolicyId(const std::string& value);


protected:
    std::string firewallPolicyId_;
    bool firewallPolicyIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronShowFirewallPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronShowFirewallPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallPolicyRequest_H_
