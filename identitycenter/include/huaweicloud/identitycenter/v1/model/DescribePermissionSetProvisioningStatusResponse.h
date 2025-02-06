
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DescribePermissionSetProvisioningStatusResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DescribePermissionSetProvisioningStatusResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/PermissionSetProvisioningStatusDto.h>

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
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  DescribePermissionSetProvisioningStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    DescribePermissionSetProvisioningStatusResponse();
    virtual ~DescribePermissionSetProvisioningStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DescribePermissionSetProvisioningStatusResponse members

    /// <summary>
    /// 
    /// </summary>

    PermissionSetProvisioningStatusDto getPermissionSetProvisioningStatus() const;
    bool permissionSetProvisioningStatusIsSet() const;
    void unsetpermissionSetProvisioningStatus();
    void setPermissionSetProvisioningStatus(const PermissionSetProvisioningStatusDto& value);


protected:
    PermissionSetProvisioningStatusDto permissionSetProvisioningStatus_;
    bool permissionSetProvisioningStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DescribePermissionSetProvisioningStatusResponse_H_
