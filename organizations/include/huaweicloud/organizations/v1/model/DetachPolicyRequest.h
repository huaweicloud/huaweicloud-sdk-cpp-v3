
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DetachPolicyRequest_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DetachPolicyRequest_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/organizations/v1/model/PolicyTachReqBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  DetachPolicyRequest
    : public ModelBase
{
public:
    DetachPolicyRequest();
    virtual ~DetachPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetachPolicyRequest members

    /// <summary>
    /// 策略的唯一标识符（ID）。
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PolicyTachReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PolicyTachReqBody& value);


protected:
    std::string policyId_;
    bool policyIdIsSet_;
    PolicyTachReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DetachPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<DetachPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DetachPolicyRequest_H_
