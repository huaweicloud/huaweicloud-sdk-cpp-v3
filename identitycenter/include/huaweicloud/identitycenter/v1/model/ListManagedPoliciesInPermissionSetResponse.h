
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListManagedPoliciesInPermissionSetResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListManagedPoliciesInPermissionSetResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/PageInfoDto.h>
#include <vector>
#include <huaweicloud/identitycenter/v1/model/AttachedManagedPolicyDto.h>

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
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ListManagedPoliciesInPermissionSetResponse
    : public ModelBase, public HttpResponse
{
public:
    ListManagedPoliciesInPermissionSetResponse();
    virtual ~ListManagedPoliciesInPermissionSetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListManagedPoliciesInPermissionSetResponse members

    /// <summary>
    /// IAM系统身份策略列表
    /// </summary>

    std::vector<AttachedManagedPolicyDto>& getAttachedManagedPolicies();
    bool attachedManagedPoliciesIsSet() const;
    void unsetattachedManagedPolicies();
    void setAttachedManagedPolicies(const std::vector<AttachedManagedPolicyDto>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<AttachedManagedPolicyDto> attachedManagedPolicies_;
    bool attachedManagedPoliciesIsSet_;
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

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListManagedPoliciesInPermissionSetResponse_H_
