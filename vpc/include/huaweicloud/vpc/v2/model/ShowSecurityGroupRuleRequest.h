
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowSecurityGroupRuleRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowSecurityGroupRuleRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  ShowSecurityGroupRuleRequest
    : public ModelBase
{
public:
    ShowSecurityGroupRuleRequest();
    virtual ~ShowSecurityGroupRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowSecurityGroupRuleRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getSecurityGroupRuleId() const;
    bool securityGroupRuleIdIsSet() const;
    void unsetsecurityGroupRuleId();
    void setSecurityGroupRuleId(const std::string& value);


protected:
    std::string securityGroupRuleId_;
    bool securityGroupRuleIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowSecurityGroupRuleRequest& dereference_from_shared_ptr(std::shared_ptr<ShowSecurityGroupRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowSecurityGroupRuleRequest_H_
