
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRuleRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRuleRequest_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRuleRequestBody.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronCreateSecurityGroupRuleRequest
    : public ModelBase
{
public:
    NeutronCreateSecurityGroupRuleRequest();
    virtual ~NeutronCreateSecurityGroupRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronCreateSecurityGroupRuleRequest members

    /// <summary>
    /// 
    /// </summary>

    NeutronCreateSecurityGroupRuleRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronCreateSecurityGroupRuleRequestBody& value);


protected:
    NeutronCreateSecurityGroupRuleRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronCreateSecurityGroupRuleRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronCreateSecurityGroupRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRuleRequest_H_
