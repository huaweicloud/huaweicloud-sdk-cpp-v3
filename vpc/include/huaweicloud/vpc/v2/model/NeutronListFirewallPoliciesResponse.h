
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallPoliciesResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallPoliciesResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronPageLink.h>
#include <huaweicloud/vpc/v2/model/NeutronFirewallPolicy.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronListFirewallPoliciesResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronListFirewallPoliciesResponse();
    virtual ~NeutronListFirewallPoliciesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronListFirewallPoliciesResponse members

    /// <summary>
    /// firewall_policy对象列表
    /// </summary>

    std::vector<NeutronFirewallPolicy>& getFirewallPolicies();
    bool firewallPoliciesIsSet() const;
    void unsetfirewallPolicies();
    void setFirewallPolicies(const std::vector<NeutronFirewallPolicy>& value);

    /// <summary>
    /// 分页信息
    /// </summary>

    std::vector<NeutronPageLink>& getFirewallPoliciesLinks();
    bool firewallPoliciesLinksIsSet() const;
    void unsetfirewallPoliciesLinks();
    void setFirewallPoliciesLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::vector<NeutronFirewallPolicy> firewallPolicies_;
    bool firewallPoliciesIsSet_;
    std::vector<NeutronPageLink> firewallPoliciesLinks_;
    bool firewallPoliciesLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallPoliciesResponse_H_
