
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallGroupRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallGroupRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronUpdateFirewallGroupRequestBody.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdateFirewallGroupRequest
    : public ModelBase
{
public:
    NeutronUpdateFirewallGroupRequest();
    virtual ~NeutronUpdateFirewallGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronUpdateFirewallGroupRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getFirewallGroupId() const;
    bool firewallGroupIdIsSet() const;
    void unsetfirewallGroupId();
    void setFirewallGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NeutronUpdateFirewallGroupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronUpdateFirewallGroupRequestBody& value);


protected:
    std::string firewallGroupId_;
    bool firewallGroupIdIsSet_;
    NeutronUpdateFirewallGroupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronUpdateFirewallGroupRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronUpdateFirewallGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallGroupRequest_H_
