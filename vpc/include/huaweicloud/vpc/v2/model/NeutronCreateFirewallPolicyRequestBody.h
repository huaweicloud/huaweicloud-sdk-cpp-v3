
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallPolicyRequestBody_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronCreateFirewallPolicyOption.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronCreateFirewallPolicyRequestBody
    : public ModelBase
{
public:
    NeutronCreateFirewallPolicyRequestBody();
    virtual ~NeutronCreateFirewallPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronCreateFirewallPolicyRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NeutronCreateFirewallPolicyOption getFirewallPolicy() const;
    bool firewallPolicyIsSet() const;
    void unsetfirewallPolicy();
    void setFirewallPolicy(const NeutronCreateFirewallPolicyOption& value);


protected:
    NeutronCreateFirewallPolicyOption firewallPolicy_;
    bool firewallPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallPolicyRequestBody_H_
