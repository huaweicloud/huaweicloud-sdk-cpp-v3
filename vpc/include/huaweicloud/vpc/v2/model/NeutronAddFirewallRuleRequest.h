
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronAddFirewallRuleRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronAddFirewallRuleRequest_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronInsertFirewallRuleRequestBody.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronAddFirewallRuleRequest
    : public ModelBase
{
public:
    NeutronAddFirewallRuleRequest();
    virtual ~NeutronAddFirewallRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronAddFirewallRuleRequest members

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

    NeutronInsertFirewallRuleRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronInsertFirewallRuleRequestBody& value);


protected:
    std::string firewallPolicyId_;
    bool firewallPolicyIdIsSet_;
    NeutronInsertFirewallRuleRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronAddFirewallRuleRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronAddFirewallRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronAddFirewallRuleRequest_H_
