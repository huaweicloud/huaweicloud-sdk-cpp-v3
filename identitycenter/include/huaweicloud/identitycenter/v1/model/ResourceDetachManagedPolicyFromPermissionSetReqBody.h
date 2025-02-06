
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ResourceDetachManagedPolicyFromPermissionSetReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ResourceDetachManagedPolicyFromPermissionSetReqBody_H_


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
/// DetachManagedPolicyFromPermissionSetReqBody请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ResourceDetachManagedPolicyFromPermissionSetReqBody
    : public ModelBase
{
public:
    ResourceDetachManagedPolicyFromPermissionSetReqBody();
    virtual ~ResourceDetachManagedPolicyFromPermissionSetReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceDetachManagedPolicyFromPermissionSetReqBody members

    /// <summary>
    /// IAM系统策略唯一标识
    /// </summary>

    std::string getManagedRoleId() const;
    bool managedRoleIdIsSet() const;
    void unsetmanagedRoleId();
    void setManagedRoleId(const std::string& value);


protected:
    std::string managedRoleId_;
    bool managedRoleIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ResourceDetachManagedPolicyFromPermissionSetReqBody_H_
