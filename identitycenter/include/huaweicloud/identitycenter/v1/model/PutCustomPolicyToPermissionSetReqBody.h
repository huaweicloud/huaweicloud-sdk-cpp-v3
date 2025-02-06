
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_PutCustomPolicyToPermissionSetReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_PutCustomPolicyToPermissionSetReqBody_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// the request body of PutCustomPolicyToPermissionSet
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  PutCustomPolicyToPermissionSetReqBody
    : public ModelBase
{
public:
    PutCustomPolicyToPermissionSetReqBody();
    virtual ~PutCustomPolicyToPermissionSetReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PutCustomPolicyToPermissionSetReqBody members

    /// <summary>
    /// 要附加到权限集的自定义身份策略
    /// </summary>

    std::string getCustomPolicy() const;
    bool customPolicyIsSet() const;
    void unsetcustomPolicy();
    void setCustomPolicy(const std::string& value);


protected:
    std::string customPolicy_;
    bool customPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_PutCustomPolicyToPermissionSetReqBody_H_
