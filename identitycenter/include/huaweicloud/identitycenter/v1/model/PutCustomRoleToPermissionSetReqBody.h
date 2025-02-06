
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_PutCustomRoleToPermissionSetReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_PutCustomRoleToPermissionSetReqBody_H_


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
/// the request body of PutCustomRoleToPermissionSet
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  PutCustomRoleToPermissionSetReqBody
    : public ModelBase
{
public:
    PutCustomRoleToPermissionSetReqBody();
    virtual ~PutCustomRoleToPermissionSetReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PutCustomRoleToPermissionSetReqBody members

    /// <summary>
    /// 要附加到权限集的自定义策略
    /// </summary>

    std::string getCustomRole() const;
    bool customRoleIsSet() const;
    void unsetcustomRole();
    void setCustomRole(const std::string& value);


protected:
    std::string customRole_;
    bool customRoleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_PutCustomRoleToPermissionSetReqBody_H_
