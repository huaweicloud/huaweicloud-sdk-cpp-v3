
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowSecurityGroupRuleResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowSecurityGroupRuleResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronSecurityGroupRule.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronShowSecurityGroupRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronShowSecurityGroupRuleResponse();
    virtual ~NeutronShowSecurityGroupRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronShowSecurityGroupRuleResponse members

    /// <summary>
    /// 
    /// </summary>

    NeutronSecurityGroupRule getSecurityGroupRule() const;
    bool securityGroupRuleIsSet() const;
    void unsetsecurityGroupRule();
    void setSecurityGroupRule(const NeutronSecurityGroupRule& value);


protected:
    NeutronSecurityGroupRule securityGroupRule_;
    bool securityGroupRuleIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowSecurityGroupRuleResponse_H_
