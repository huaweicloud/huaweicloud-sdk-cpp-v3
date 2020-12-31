
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronRemoveFirewallRuleRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronRemoveFirewallRuleRequestBody_H_

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
/// 
/// </summary>
class HUAWEICLOUD_VPC_EXPORT  NeutronRemoveFirewallRuleRequestBody
    : public ModelBase
{
public:
    NeutronRemoveFirewallRuleRequestBody();
    virtual ~NeutronRemoveFirewallRuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronRemoveFirewallRuleRequestBody members

    /// <summary>
    /// 功能说明：待移除的ACL规则ID
    /// </summary>

    std::string getFirewallRuleId() const;
    bool firewallRuleIdIsSet() const;
    void unsetfirewallRuleId();
    void setFirewallRuleId(const std::string& value);


protected:
    std::string firewallRuleId_;
    bool firewallRuleIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronRemoveFirewallRuleRequestBody_H_
