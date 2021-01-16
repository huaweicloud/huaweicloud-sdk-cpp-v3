
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallRulesResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallRulesResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronFirewallRule.h>
#include <huaweicloud/vpc/v2/model/NeutronPageLink.h>
#include <vector>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronListFirewallRulesResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronListFirewallRulesResponse();
    virtual ~NeutronListFirewallRulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronListFirewallRulesResponse members

    /// <summary>
    /// firewall_rule对象列表
    /// </summary>

    std::vector<NeutronFirewallRule>& getFirewallRules();
    bool firewallRulesIsSet() const;
    void unsetfirewallRules();
    void setFirewallRules(const std::vector<NeutronFirewallRule>& value);

    /// <summary>
    /// 分页信息
    /// </summary>

    std::vector<NeutronPageLink>& getFirewallRulesLinks();
    bool firewallRulesLinksIsSet() const;
    void unsetfirewallRulesLinks();
    void setFirewallRulesLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::vector<NeutronFirewallRule> firewallRules_;
    bool firewallRulesIsSet_;
    std::vector<NeutronPageLink> firewallRulesLinks_;
    bool firewallRulesLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallRulesResponse_H_
