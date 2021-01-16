
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallGroupRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallGroupRequestBody_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronCreateFirewallGroupOption.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronCreateFirewallGroupRequestBody
    : public ModelBase
{
public:
    NeutronCreateFirewallGroupRequestBody();
    virtual ~NeutronCreateFirewallGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronCreateFirewallGroupRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NeutronCreateFirewallGroupOption getFirewallGroup() const;
    bool firewallGroupIsSet() const;
    void unsetfirewallGroup();
    void setFirewallGroup(const NeutronCreateFirewallGroupOption& value);


protected:
    NeutronCreateFirewallGroupOption firewallGroup_;
    bool firewallGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallGroupRequestBody_H_
