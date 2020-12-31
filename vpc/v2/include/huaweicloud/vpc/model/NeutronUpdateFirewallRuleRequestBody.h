
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallRuleRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallRuleRequestBody_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/vpc/model/NeutronUpdateFirewallRuleOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_EXPORT  NeutronUpdateFirewallRuleRequestBody
    : public ModelBase
{
public:
    NeutronUpdateFirewallRuleRequestBody();
    virtual ~NeutronUpdateFirewallRuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronUpdateFirewallRuleRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NeutronUpdateFirewallRuleOption getFirewallRule() const;
    bool firewallRuleIsSet() const;
    void unsetfirewallRule();
    void setFirewallRule(const NeutronUpdateFirewallRuleOption& value);


protected:
    NeutronUpdateFirewallRuleOption firewallRule_;
    bool firewallRuleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallRuleRequestBody_H_
