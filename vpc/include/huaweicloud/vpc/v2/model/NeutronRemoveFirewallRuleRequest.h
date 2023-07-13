
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronRemoveFirewallRuleRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronRemoveFirewallRuleRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronRemoveFirewallRuleRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronRemoveFirewallRuleRequest
    : public ModelBase
{
public:
    NeutronRemoveFirewallRuleRequest();
    virtual ~NeutronRemoveFirewallRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronRemoveFirewallRuleRequest members

    /// <summary>
    /// 网络ACL防火墙策略ID
    /// </summary>

    std::string getFirewallPolicyId() const;
    bool firewallPolicyIdIsSet() const;
    void unsetfirewallPolicyId();
    void setFirewallPolicyId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NeutronRemoveFirewallRuleRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronRemoveFirewallRuleRequestBody& value);


protected:
    std::string firewallPolicyId_;
    bool firewallPolicyIdIsSet_;
    NeutronRemoveFirewallRuleRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronRemoveFirewallRuleRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronRemoveFirewallRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronRemoveFirewallRuleRequest_H_
