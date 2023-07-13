
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallRuleResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallRuleResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronFirewallRule.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronShowFirewallRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronShowFirewallRuleResponse();
    virtual ~NeutronShowFirewallRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronShowFirewallRuleResponse members

    /// <summary>
    /// 
    /// </summary>

    NeutronFirewallRule getFirewallRule() const;
    bool firewallRuleIsSet() const;
    void unsetfirewallRule();
    void setFirewallRule(const NeutronFirewallRule& value);


protected:
    NeutronFirewallRule firewallRule_;
    bool firewallRuleIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallRuleResponse_H_
