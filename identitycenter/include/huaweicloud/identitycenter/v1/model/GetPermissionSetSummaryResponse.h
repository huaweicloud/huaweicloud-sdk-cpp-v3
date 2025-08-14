
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_GetPermissionSetSummaryResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_GetPermissionSetSummaryResponse_H_


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
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  GetPermissionSetSummaryResponse
    : public ModelBase, public HttpResponse
{
public:
    GetPermissionSetSummaryResponse();
    virtual ~GetPermissionSetSummaryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetPermissionSetSummaryResponse members

    /// <summary>
    /// 已创建的权限集数量
    /// </summary>

    int64_t getPermissionSets() const;
    bool permissionSetsIsSet() const;
    void unsetpermissionSets();
    void setPermissionSets(int64_t value);

    /// <summary>
    /// 权限集配额
    /// </summary>

    int64_t getPermissionSetsQuota() const;
    bool permissionSetsQuotaIsSet() const;
    void unsetpermissionSetsQuota();
    void setPermissionSetsQuota(int64_t value);

    /// <summary>
    /// 允许权限集可绑定的策略配额
    /// </summary>

    int64_t getPermissionPolicyCountQuota() const;
    bool permissionPolicyCountQuotaIsSet() const;
    void unsetpermissionPolicyCountQuota();
    void setPermissionPolicyCountQuota(int64_t value);

    /// <summary>
    /// 允许权限集可绑定的身份策略配额
    /// </summary>

    int64_t getPermissionPolicyQuota() const;
    bool permissionPolicyQuotaIsSet() const;
    void unsetpermissionPolicyQuota();
    void setPermissionPolicyQuota(int64_t value);


protected:
    int64_t permissionSets_;
    bool permissionSetsIsSet_;
    int64_t permissionSetsQuota_;
    bool permissionSetsQuotaIsSet_;
    int64_t permissionPolicyCountQuota_;
    bool permissionPolicyCountQuotaIsSet_;
    int64_t permissionPolicyQuota_;
    bool permissionPolicyQuotaIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_GetPermissionSetSummaryResponse_H_
