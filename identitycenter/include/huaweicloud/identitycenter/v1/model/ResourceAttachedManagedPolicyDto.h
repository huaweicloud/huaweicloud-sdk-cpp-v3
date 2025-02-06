
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ResourceAttachedManagedPolicyDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ResourceAttachedManagedPolicyDto_H_


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
/// 系统策略详细信息
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ResourceAttachedManagedPolicyDto
    : public ModelBase
{
public:
    ResourceAttachedManagedPolicyDto();
    virtual ~ResourceAttachedManagedPolicyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceAttachedManagedPolicyDto members

    /// <summary>
    /// IAM系统策略唯一标识
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

    /// <summary>
    /// IAM系统策略名称
    /// </summary>

    std::string getRoleName() const;
    bool roleNameIsSet() const;
    void unsetroleName();
    void setRoleName(const std::string& value);


protected:
    std::string roleId_;
    bool roleIdIsSet_;
    std::string roleName_;
    bool roleNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ResourceAttachedManagedPolicyDto_H_
