
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallPolicyResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallPolicyResponse_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/vpc/model/NeutronFirewallPolicy.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VPC_EXPORT  NeutronShowFirewallPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronShowFirewallPolicyResponse();
    virtual ~NeutronShowFirewallPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronShowFirewallPolicyResponse members

    /// <summary>
    /// 
    /// </summary>

    NeutronFirewallPolicy getFirewallPolicy() const;
    bool firewallPolicyIsSet() const;
    void unsetfirewallPolicy();
    void setFirewallPolicy(const NeutronFirewallPolicy& value);


protected:
    NeutronFirewallPolicy firewallPolicy_;
    bool firewallPolicyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallPolicyResponse_H_
