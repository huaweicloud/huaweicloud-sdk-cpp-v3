
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallPolicyRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallPolicyRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronUpdateFirewallPolicyRequestBody.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdateFirewallPolicyRequest
    : public ModelBase
{
public:
    NeutronUpdateFirewallPolicyRequest();
    virtual ~NeutronUpdateFirewallPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronUpdateFirewallPolicyRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getFirewallPolicyId() const;
    bool firewallPolicyIdIsSet() const;
    void unsetfirewallPolicyId();
    void setFirewallPolicyId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NeutronUpdateFirewallPolicyRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronUpdateFirewallPolicyRequestBody& value);


protected:
    std::string firewallPolicyId_;
    bool firewallPolicyIdIsSet_;
    NeutronUpdateFirewallPolicyRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronUpdateFirewallPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronUpdateFirewallPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallPolicyRequest_H_
