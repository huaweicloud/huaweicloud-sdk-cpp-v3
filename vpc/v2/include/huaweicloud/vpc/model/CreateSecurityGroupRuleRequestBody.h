
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRuleRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRuleRequestBody_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/vpc/model/CreateSecurityGroupRuleOption.h"

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
class HUAWEICLOUD_VPC_EXPORT  CreateSecurityGroupRuleRequestBody
    : public ModelBase
{
public:
    CreateSecurityGroupRuleRequestBody();
    virtual ~CreateSecurityGroupRuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSecurityGroupRuleRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateSecurityGroupRuleOption getSecurityGroupRule() const;
    bool securityGroupRuleIsSet() const;
    void unsetsecurityGroupRule();
    void setSecurityGroupRule(const CreateSecurityGroupRuleOption& value);


protected:
    CreateSecurityGroupRuleOption securityGroupRule_;
    bool securityGroupRuleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRuleRequestBody_H_
