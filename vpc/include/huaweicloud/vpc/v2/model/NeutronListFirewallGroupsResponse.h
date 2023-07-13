
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallGroupsResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallGroupsResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronPageLink.h>
#include <huaweicloud/vpc/v2/model/NeutronFirewallGroup.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronListFirewallGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronListFirewallGroupsResponse();
    virtual ~NeutronListFirewallGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronListFirewallGroupsResponse members

    /// <summary>
    /// firewall_group对象列表
    /// </summary>

    std::vector<NeutronFirewallGroup>& getFirewallGroups();
    bool firewallGroupsIsSet() const;
    void unsetfirewallGroups();
    void setFirewallGroups(const std::vector<NeutronFirewallGroup>& value);

    /// <summary>
    /// 分页信息
    /// </summary>

    std::vector<NeutronPageLink>& getFirewallGroupsLinks();
    bool firewallGroupsLinksIsSet() const;
    void unsetfirewallGroupsLinks();
    void setFirewallGroupsLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::vector<NeutronFirewallGroup> firewallGroups_;
    bool firewallGroupsIsSet_;
    std::vector<NeutronPageLink> firewallGroupsLinks_;
    bool firewallGroupsLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallGroupsResponse_H_
