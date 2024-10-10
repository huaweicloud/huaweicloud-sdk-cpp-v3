
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_DisassociateIpFromPolicyAndPackageRequest_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_DisassociateIpFromPolicyAndPackageRequest_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/IpBindingV3Body.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  DisassociateIpFromPolicyAndPackageRequest
    : public ModelBase
{
public:
    DisassociateIpFromPolicyAndPackageRequest();
    virtual ~DisassociateIpFromPolicyAndPackageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisassociateIpFromPolicyAndPackageRequest members

    /// <summary>
    /// 策略id
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IpBindingV3Body getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const IpBindingV3Body& value);


protected:
    std::string policyId_;
    bool policyIdIsSet_;
    IpBindingV3Body body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DisassociateIpFromPolicyAndPackageRequest& dereference_from_shared_ptr(std::shared_ptr<DisassociateIpFromPolicyAndPackageRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_DisassociateIpFromPolicyAndPackageRequest_H_
