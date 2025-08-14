
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_PutMfaDeviceManagementForDirectoryReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_PutMfaDeviceManagementForDirectoryReqBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  PutMfaDeviceManagementForDirectoryReqBody
    : public ModelBase
{
public:
    PutMfaDeviceManagementForDirectoryReqBody();
    virtual ~PutMfaDeviceManagementForDirectoryReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PutMfaDeviceManagementForDirectoryReqBody members

    /// <summary>
    /// 关联到IAM身份中心实例的身份源的全局唯一标识符（ID）。
    /// </summary>

    std::string getIdentityStoreId() const;
    bool identityStoreIdIsSet() const;
    void unsetidentityStoreId();
    void setIdentityStoreId(const std::string& value);

    /// <summary>
    /// 允许用户自行管理MFA的行为
    /// </summary>

    std::string getUserPermission() const;
    bool userPermissionIsSet() const;
    void unsetuserPermission();
    void setUserPermission(const std::string& value);


protected:
    std::string identityStoreId_;
    bool identityStoreIdIsSet_;
    std::string userPermission_;
    bool userPermissionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_PutMfaDeviceManagementForDirectoryReqBody_H_
