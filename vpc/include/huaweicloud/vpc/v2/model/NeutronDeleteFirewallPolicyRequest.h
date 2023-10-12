
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronDeleteFirewallPolicyRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronDeleteFirewallPolicyRequest_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronDeleteFirewallPolicyRequest
    : public ModelBase
{
public:
    NeutronDeleteFirewallPolicyRequest();
    virtual ~NeutronDeleteFirewallPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronDeleteFirewallPolicyRequest members

    /// <summary>
    /// 网络ACL防火墙策略ID
    /// </summary>

    std::string getFirewallPolicyId() const;
    bool firewallPolicyIdIsSet() const;
    void unsetfirewallPolicyId();
    void setFirewallPolicyId(const std::string& value);


protected:
    std::string firewallPolicyId_;
    bool firewallPolicyIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronDeleteFirewallPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronDeleteFirewallPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronDeleteFirewallPolicyRequest_H_
