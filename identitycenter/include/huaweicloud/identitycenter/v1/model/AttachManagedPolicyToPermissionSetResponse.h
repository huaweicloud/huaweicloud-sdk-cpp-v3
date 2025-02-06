
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AttachManagedPolicyToPermissionSetResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AttachManagedPolicyToPermissionSetResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  AttachManagedPolicyToPermissionSetResponse
    : public ModelBase, public HttpResponse
{
public:
    AttachManagedPolicyToPermissionSetResponse();
    virtual ~AttachManagedPolicyToPermissionSetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachManagedPolicyToPermissionSetResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AttachManagedPolicyToPermissionSetResponse_H_
