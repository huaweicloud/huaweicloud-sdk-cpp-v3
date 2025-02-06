
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AttachManagedPolicyToPermissionSetReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AttachManagedPolicyToPermissionSetReqBody_H_


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
/// 请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  AttachManagedPolicyToPermissionSetReqBody
    : public ModelBase
{
public:
    AttachManagedPolicyToPermissionSetReqBody();
    virtual ~AttachManagedPolicyToPermissionSetReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachManagedPolicyToPermissionSetReqBody members

    /// <summary>
    /// IAM系统身份策略唯一标识
    /// </summary>

    std::string getManagedPolicyId() const;
    bool managedPolicyIdIsSet() const;
    void unsetmanagedPolicyId();
    void setManagedPolicyId(const std::string& value);

    /// <summary>
    /// IAM系统身份策略名称
    /// </summary>

    std::string getManagedPolicyName() const;
    bool managedPolicyNameIsSet() const;
    void unsetmanagedPolicyName();
    void setManagedPolicyName(const std::string& value);


protected:
    std::string managedPolicyId_;
    bool managedPolicyIdIsSet_;
    std::string managedPolicyName_;
    bool managedPolicyNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AttachManagedPolicyToPermissionSetReqBody_H_
