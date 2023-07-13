
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallPolicyRequestBody_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronUpdateFirewallPolicyOption.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdateFirewallPolicyRequestBody
    : public ModelBase
{
public:
    NeutronUpdateFirewallPolicyRequestBody();
    virtual ~NeutronUpdateFirewallPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronUpdateFirewallPolicyRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NeutronUpdateFirewallPolicyOption getFirewallPolicy() const;
    bool firewallPolicyIsSet() const;
    void unsetfirewallPolicy();
    void setFirewallPolicy(const NeutronUpdateFirewallPolicyOption& value);


protected:
    NeutronUpdateFirewallPolicyOption firewallPolicy_;
    bool firewallPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallPolicyRequestBody_H_
