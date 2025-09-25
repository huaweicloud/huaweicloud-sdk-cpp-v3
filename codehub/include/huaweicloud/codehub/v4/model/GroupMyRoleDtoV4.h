
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_GroupMyRoleDtoV4_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_GroupMyRoleDtoV4_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  GroupMyRoleDtoV4
    : public ModelBase
{
public:
    GroupMyRoleDtoV4();
    virtual ~GroupMyRoleDtoV4();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GroupMyRoleDtoV4 members

    /// <summary>
    /// **参数解释：** 记录id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 角色。
    /// </summary>

    int32_t getAccessLevel() const;
    bool accessLevelIsSet() const;
    void unsetaccessLevel();
    void setAccessLevel(int32_t value);

    /// <summary>
    /// **参数解释：** 角色中文名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getRoleNamecn() const;
    bool roleNamecnIsSet() const;
    void unsetroleNamecn();
    void setRoleNamecn(const std::string& value);

    /// <summary>
    /// **参数解释：** 角色英文名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getRoleNamen() const;
    bool roleNamenIsSet() const;
    void unsetroleNamen();
    void setRoleNamen(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源id。
    /// </summary>

    int32_t getSourceId() const;
    bool sourceIdIsSet() const;
    void unsetsourceId();
    void setSourceId(int32_t value);

    /// <summary>
    /// **参数解释：** 资源类型。 **取值范围：Group Project** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getSourceType() const;
    bool sourceTypeIsSet() const;
    void unsetsourceType();
    void setSourceType(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户id。
    /// </summary>

    int32_t getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(int32_t value);

    /// <summary>
    /// **参数解释：** 通知。
    /// </summary>

    int32_t getNotificationLevel() const;
    bool notificationLevelIsSet() const;
    void unsetnotificationLevel();
    void setNotificationLevel(int32_t value);

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

    /// <summary>
    /// **参数解释：** 是否是项目创建者。
    /// </summary>

    int32_t getIsProjectAdmin() const;
    bool isProjectAdminIsSet() const;
    void unsetisProjectAdmin();
    void setIsProjectAdmin(int32_t value);

    /// <summary>
    /// **参数解释：** 是否是代码组创建者。
    /// </summary>

    int32_t getIsGroupCreator() const;
    bool isGroupCreatorIsSet() const;
    void unsetisGroupCreator();
    void setIsGroupCreator(int32_t value);

    /// <summary>
    /// **参数解释：** 是否是仓库创建者。
    /// </summary>

    int32_t getIsRepoCreator() const;
    bool isRepoCreatorIsSet() const;
    void unsetisRepoCreator();
    void setIsRepoCreator(int32_t value);

    /// <summary>
    /// **参数解释：** 角色展示。
    /// </summary>

    int32_t getRoleShowFlag() const;
    bool roleShowFlagIsSet() const;
    void unsetroleShowFlag();
    void setRoleShowFlag(int32_t value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t accessLevel_;
    bool accessLevelIsSet_;
    std::string roleNamecn_;
    bool roleNamecnIsSet_;
    std::string roleNamen_;
    bool roleNamenIsSet_;
    int32_t sourceId_;
    bool sourceIdIsSet_;
    std::string sourceType_;
    bool sourceTypeIsSet_;
    int32_t userId_;
    bool userIdIsSet_;
    int32_t notificationLevel_;
    bool notificationLevelIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    int32_t isProjectAdmin_;
    bool isProjectAdminIsSet_;
    int32_t isGroupCreator_;
    bool isGroupCreatorIsSet_;
    int32_t isRepoCreator_;
    bool isRepoCreatorIsSet_;
    int32_t roleShowFlag_;
    bool roleShowFlagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_GroupMyRoleDtoV4_H_
