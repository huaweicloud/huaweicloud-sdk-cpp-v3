
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallGroupRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallGroupRequestBody_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronUpdateFirewallGroupOption.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdateFirewallGroupRequestBody
    : public ModelBase
{
public:
    NeutronUpdateFirewallGroupRequestBody();
    virtual ~NeutronUpdateFirewallGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronUpdateFirewallGroupRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NeutronUpdateFirewallGroupOption getFirewallGroup() const;
    bool firewallGroupIsSet() const;
    void unsetfirewallGroup();
    void setFirewallGroup(const NeutronUpdateFirewallGroupOption& value);


protected:
    NeutronUpdateFirewallGroupOption firewallGroup_;
    bool firewallGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallGroupRequestBody_H_
