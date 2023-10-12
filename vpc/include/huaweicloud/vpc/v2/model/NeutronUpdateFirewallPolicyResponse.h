
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallPolicyResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallPolicyResponse_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronFirewallPolicy.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdateFirewallPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronUpdateFirewallPolicyResponse();
    virtual ~NeutronUpdateFirewallPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronUpdateFirewallPolicyResponse members

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

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallPolicyResponse_H_
