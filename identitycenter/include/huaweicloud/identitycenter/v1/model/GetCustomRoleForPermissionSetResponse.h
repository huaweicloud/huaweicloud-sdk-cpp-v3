
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_GetCustomRoleForPermissionSetResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_GetCustomRoleForPermissionSetResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  GetCustomRoleForPermissionSetResponse
    : public ModelBase, public HttpResponse
{
public:
    GetCustomRoleForPermissionSetResponse();
    virtual ~GetCustomRoleForPermissionSetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetCustomRoleForPermissionSetResponse members

    /// <summary>
    /// 附加到权限集的自定义策略
    /// </summary>

    std::string getCustomRole() const;
    bool customRoleIsSet() const;
    void unsetcustomRole();
    void setCustomRole(const std::string& value);


protected:
    std::string customRole_;
    bool customRoleIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_GetCustomRoleForPermissionSetResponse_H_
