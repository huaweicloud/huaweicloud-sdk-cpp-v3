
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRuleResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRuleResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/SecurityGroupRule.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  CreateSecurityGroupRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateSecurityGroupRuleResponse();
    virtual ~CreateSecurityGroupRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSecurityGroupRuleResponse members

    /// <summary>
    /// 
    /// </summary>

    SecurityGroupRule getSecurityGroupRule() const;
    bool securityGroupRuleIsSet() const;
    void unsetsecurityGroupRule();
    void setSecurityGroupRule(const SecurityGroupRule& value);


protected:
    SecurityGroupRule securityGroupRule_;
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

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRuleResponse_H_
