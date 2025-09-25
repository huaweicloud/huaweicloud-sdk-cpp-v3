
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PermissionDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PermissionDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v4/model/ResourcePermissionDto.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  PermissionDto
    : public ModelBase
{
public:
    PermissionDto();
    virtual ~PermissionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PermissionDto members

    /// <summary>
    /// **参数解释：** 排序id。
    /// </summary>

    int32_t getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(int32_t value);

    /// <summary>
    /// **参数解释：** 角色id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

    /// <summary>
    /// **参数解释：** 角色名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getRoleName() const;
    bool roleNameIsSet() const;
    void unsetroleName();
    void setRoleName(const std::string& value);

    /// <summary>
    /// **参数解释：** 角色中文名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getRoleNameCn() const;
    bool roleNameCnIsSet() const;
    void unsetroleNameCn();
    void setRoleNameCn(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源权限对象。
    /// </summary>

    std::map<std::string, ResourcePermissionDto>& getResourcePermissions();
    bool resourcePermissionsIsSet() const;
    void unsetresourcePermissions();
    void setResourcePermissions(const std::map<std::string, ResourcePermissionDto>& value);


protected:
    int32_t order_;
    bool orderIsSet_;
    std::string roleId_;
    bool roleIdIsSet_;
    std::string roleName_;
    bool roleNameIsSet_;
    std::string roleNameCn_;
    bool roleNameCnIsSet_;
    std::map<std::string, ResourcePermissionDto> resourcePermissions_;
    bool resourcePermissionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PermissionDto_H_
