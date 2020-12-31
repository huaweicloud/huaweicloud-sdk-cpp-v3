
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallGroupResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallGroupResponse_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/vpc/model/NeutronFirewallGroup.h"

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
class HUAWEICLOUD_VPC_EXPORT  NeutronShowFirewallGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronShowFirewallGroupResponse();
    virtual ~NeutronShowFirewallGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronShowFirewallGroupResponse members

    /// <summary>
    /// 
    /// </summary>

    NeutronFirewallGroup getFirewallGroup() const;
    bool firewallGroupIsSet() const;
    void unsetfirewallGroup();
    void setFirewallGroup(const NeutronFirewallGroup& value);


protected:
    NeutronFirewallGroup firewallGroup_;
    bool firewallGroupIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallGroupResponse_H_
