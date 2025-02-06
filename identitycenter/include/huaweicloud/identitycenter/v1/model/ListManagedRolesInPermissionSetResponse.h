
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListManagedRolesInPermissionSetResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListManagedRolesInPermissionSetResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/PageInfoDto.h>
#include <huaweicloud/identitycenter/v1/model/ResourceAttachedManagedPolicyDto.h>
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
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ListManagedRolesInPermissionSetResponse
    : public ModelBase, public HttpResponse
{
public:
    ListManagedRolesInPermissionSetResponse();
    virtual ~ListManagedRolesInPermissionSetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListManagedRolesInPermissionSetResponse members

    /// <summary>
    /// IAM系统策略列表
    /// </summary>

    std::vector<ResourceAttachedManagedPolicyDto>& getAttachedManagedRoles();
    bool attachedManagedRolesIsSet() const;
    void unsetattachedManagedRoles();
    void setAttachedManagedRoles(const std::vector<ResourceAttachedManagedPolicyDto>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<ResourceAttachedManagedPolicyDto> attachedManagedRoles_;
    bool attachedManagedRolesIsSet_;
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

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListManagedRolesInPermissionSetResponse_H_
