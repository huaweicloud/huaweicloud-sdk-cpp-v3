
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AttachManagedPolicyToPermissionSetRequest_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AttachManagedPolicyToPermissionSetRequest_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/identitycenter/v1/model/AttachManagedPolicyToPermissionSetReqBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  AttachManagedPolicyToPermissionSetRequest
    : public ModelBase
{
public:
    AttachManagedPolicyToPermissionSetRequest();
    virtual ~AttachManagedPolicyToPermissionSetRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachManagedPolicyToPermissionSetRequest members

    /// <summary>
    /// 如果正在使用临时安全凭据，则此header是必需的，该值是临时安全凭据的安全令牌（会话令牌）。
    /// </summary>

    std::string getXSecurityToken() const;
    bool xSecurityTokenIsSet() const;
    void unsetxSecurityToken();
    void setXSecurityToken(const std::string& value);

    /// <summary>
    /// IAM身份中心实例的全局唯一标识符（ID）。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 权限集的全局唯一标识符（ID）
    /// </summary>

    std::string getPermissionSetId() const;
    bool permissionSetIdIsSet() const;
    void unsetpermissionSetId();
    void setPermissionSetId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AttachManagedPolicyToPermissionSetReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AttachManagedPolicyToPermissionSetReqBody& value);


protected:
    std::string xSecurityToken_;
    bool xSecurityTokenIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string permissionSetId_;
    bool permissionSetIdIsSet_;
    AttachManagedPolicyToPermissionSetReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AttachManagedPolicyToPermissionSetRequest& dereference_from_shared_ptr(std::shared_ptr<AttachManagedPolicyToPermissionSetRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AttachManagedPolicyToPermissionSetRequest_H_
