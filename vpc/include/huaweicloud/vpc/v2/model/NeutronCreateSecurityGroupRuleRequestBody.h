
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRuleRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRuleRequestBody_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRuleOption.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronCreateSecurityGroupRuleRequestBody
    : public ModelBase
{
public:
    NeutronCreateSecurityGroupRuleRequestBody();
    virtual ~NeutronCreateSecurityGroupRuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronCreateSecurityGroupRuleRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NeutronCreateSecurityGroupRuleOption getSecurityGroupRule() const;
    bool securityGroupRuleIsSet() const;
    void unsetsecurityGroupRule();
    void setSecurityGroupRule(const NeutronCreateSecurityGroupRuleOption& value);


protected:
    NeutronCreateSecurityGroupRuleOption securityGroupRule_;
    bool securityGroupRuleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRuleRequestBody_H_
