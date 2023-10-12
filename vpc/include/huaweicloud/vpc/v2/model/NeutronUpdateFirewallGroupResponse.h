
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallGroupResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallGroupResponse_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronFirewallGroup.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdateFirewallGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronUpdateFirewallGroupResponse();
    virtual ~NeutronUpdateFirewallGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronUpdateFirewallGroupResponse members

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

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallGroupResponse_H_
