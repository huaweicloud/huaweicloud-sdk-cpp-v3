
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronDeleteFirewallRuleRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronDeleteFirewallRuleRequest_H_


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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronDeleteFirewallRuleRequest
    : public ModelBase
{
public:
    NeutronDeleteFirewallRuleRequest();
    virtual ~NeutronDeleteFirewallRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronDeleteFirewallRuleRequest members

    /// <summary>
    /// 网络ACL防火墙规则ID
    /// </summary>

    std::string getFirewallRuleId() const;
    bool firewallRuleIdIsSet() const;
    void unsetfirewallRuleId();
    void setFirewallRuleId(const std::string& value);


protected:
    std::string firewallRuleId_;
    bool firewallRuleIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronDeleteFirewallRuleRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronDeleteFirewallRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronDeleteFirewallRuleRequest_H_
