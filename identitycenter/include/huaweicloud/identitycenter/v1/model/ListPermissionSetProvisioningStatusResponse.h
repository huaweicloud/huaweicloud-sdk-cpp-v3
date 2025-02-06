
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListPermissionSetProvisioningStatusResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListPermissionSetProvisioningStatusResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/PermissionSetProvisioningStatusMetadataDto.h>
#include <huaweicloud/identitycenter/v1/model/PageInfoDto.h>
#include <vector>

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
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ListPermissionSetProvisioningStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPermissionSetProvisioningStatusResponse();
    virtual ~ListPermissionSetProvisioningStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPermissionSetProvisioningStatusResponse members

    /// <summary>
    /// 权限集授权状态
    /// </summary>

    std::vector<PermissionSetProvisioningStatusMetadataDto>& getPermissionSetsProvisioningStatus();
    bool permissionSetsProvisioningStatusIsSet() const;
    void unsetpermissionSetsProvisioningStatus();
    void setPermissionSetsProvisioningStatus(const std::vector<PermissionSetProvisioningStatusMetadataDto>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<PermissionSetProvisioningStatusMetadataDto> permissionSetsProvisioningStatus_;
    bool permissionSetsProvisioningStatusIsSet_;
    PageInfoDto pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListPermissionSetProvisioningStatusResponse_H_
