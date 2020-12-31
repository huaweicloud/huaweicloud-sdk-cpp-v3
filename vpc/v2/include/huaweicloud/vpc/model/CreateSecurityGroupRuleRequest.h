
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRuleRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRuleRequest_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/vpc/model/CreateSecurityGroupRuleRequestBody.h"

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
class HUAWEICLOUD_VPC_EXPORT  CreateSecurityGroupRuleRequest
    : public ModelBase
{
public:
    CreateSecurityGroupRuleRequest();
    virtual ~CreateSecurityGroupRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSecurityGroupRuleRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateSecurityGroupRuleRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateSecurityGroupRuleRequestBody& value);


protected:
    CreateSecurityGroupRuleRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateSecurityGroupRuleRequest& dereference_from_shared_ptr(std::shared_ptr<CreateSecurityGroupRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRuleRequest_H_
