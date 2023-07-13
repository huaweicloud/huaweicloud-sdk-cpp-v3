
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallRuleRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallRuleRequestBody_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronCreateFirewallRuleOption.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronCreateFirewallRuleRequestBody
    : public ModelBase
{
public:
    NeutronCreateFirewallRuleRequestBody();
    virtual ~NeutronCreateFirewallRuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronCreateFirewallRuleRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NeutronCreateFirewallRuleOption getFirewallRule() const;
    bool firewallRuleIsSet() const;
    void unsetfirewallRule();
    void setFirewallRule(const NeutronCreateFirewallRuleOption& value);


protected:
    NeutronCreateFirewallRuleOption firewallRule_;
    bool firewallRuleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallRuleRequestBody_H_
