
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RoleSyncDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RoleSyncDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  RoleSyncDto
    : public ModelBase
{
public:
    RoleSyncDto();
    virtual ~RoleSyncDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RoleSyncDto members

    /// <summary>
    /// **参数解释：** 角色记录id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 角色id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

    /// <summary>
    /// **参数解释：** 角色同步开关。
    /// </summary>

    bool isRoleSyncEnabled() const;
    bool roleSyncEnabledIsSet() const;
    void unsetroleSyncEnabled();
    void setRoleSyncEnabled(bool value);

    /// <summary>
    /// **参数解释：** 角色名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getRoleName() const;
    bool roleNameIsSet() const;
    void unsetroleName();
    void setRoleName(const std::string& value);

    /// <summary>
    /// **参数解释：** 角色类型。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getRoleType() const;
    bool roleTypeIsSet() const;
    void unsetroleType();
    void setRoleType(const std::string& value);

    /// <summary>
    /// **参数解释：** 角色中文名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getRoleChineseName() const;
    bool roleChineseNameIsSet() const;
    void unsetroleChineseName();
    void setRoleChineseName(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string roleId_;
    bool roleIdIsSet_;
    bool roleSyncEnabled_;
    bool roleSyncEnabledIsSet_;
    std::string roleName_;
    bool roleNameIsSet_;
    std::string roleType_;
    bool roleTypeIsSet_;
    std::string roleChineseName_;
    bool roleChineseNameIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RoleSyncDto_H_
