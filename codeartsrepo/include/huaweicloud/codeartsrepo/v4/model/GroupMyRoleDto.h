
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GroupMyRoleDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GroupMyRoleDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  GroupMyRoleDto
    : public ModelBase
{
public:
    GroupMyRoleDto();
    virtual ~GroupMyRoleDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GroupMyRoleDto members

    /// <summary>
    /// 成员id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 成员角色值
    /// </summary>

    int32_t getAccessLevel() const;
    bool accessLevelIsSet() const;
    void unsetaccessLevel();
    void setAccessLevel(int32_t value);

    /// <summary>
    /// 角色中文名称
    /// </summary>

    std::string getRoleNamecn() const;
    bool roleNamecnIsSet() const;
    void unsetroleNamecn();
    void setRoleNamecn(const std::string& value);

    /// <summary>
    /// 角色名称
    /// </summary>

    std::string getRoleNamen() const;
    bool roleNamenIsSet() const;
    void unsetroleNamen();
    void setRoleNamen(const std::string& value);

    /// <summary>
    /// 来源代码组id
    /// </summary>

    int32_t getSourceId() const;
    bool sourceIdIsSet() const;
    void unsetsourceId();
    void setSourceId(int32_t value);

    /// <summary>
    /// 来源类型
    /// </summary>

    std::string getSourceType() const;
    bool sourceTypeIsSet() const;
    void unsetsourceType();
    void setSourceType(const std::string& value);

    /// <summary>
    /// 用户id
    /// </summary>

    int32_t getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(int32_t value);

    /// <summary>
    /// 提示级别
    /// </summary>

    int32_t getNotificationLevel() const;
    bool notificationLevelIsSet() const;
    void unsetnotificationLevel();
    void setNotificationLevel(int32_t value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 创建者id
    /// </summary>

    int32_t getCreatedById() const;
    bool createdByIdIsSet() const;
    void unsetcreatedById();
    void setCreatedById(int32_t value);

    /// <summary>
    /// 邀请邮箱
    /// </summary>

    std::string getInviteEmail() const;
    bool inviteEmailIsSet() const;
    void unsetinviteEmail();
    void setInviteEmail(const std::string& value);

    /// <summary>
    /// 邀请token
    /// </summary>

    std::string getInviteToken() const;
    bool inviteTokenIsSet() const;
    void unsetinviteToken();
    void setInviteToken(const std::string& value);

    /// <summary>
    /// 邀请接受时间
    /// </summary>

    std::string getInviteAcceptedAt() const;
    bool inviteAcceptedAtIsSet() const;
    void unsetinviteAcceptedAt();
    void setInviteAcceptedAt(const std::string& value);

    /// <summary>
    /// 请求时间
    /// </summary>

    std::string getRequestedAt() const;
    bool requestedAtIsSet() const;
    void unsetrequestedAt();
    void setRequestedAt(const std::string& value);

    /// <summary>
    /// 过期时间
    /// </summary>

    std::string getExpiresAt() const;
    bool expiresAtIsSet() const;
    void unsetexpiresAt();
    void setExpiresAt(const std::string& value);

    /// <summary>
    /// 限制
    /// </summary>

    bool isLimited() const;
    bool limitedIsSet() const;
    void unsetlimited();
    void setLimited(bool value);

    /// <summary>
    /// 是否为项目管理员
    /// </summary>

    int32_t getIsProjectAdmin() const;
    bool isProjectAdminIsSet() const;
    void unsetisProjectAdmin();
    void setIsProjectAdmin(int32_t value);

    /// <summary>
    /// 是否为组织创建者
    /// </summary>

    int32_t getIsGroupCreator() const;
    bool isGroupCreatorIsSet() const;
    void unsetisGroupCreator();
    void setIsGroupCreator(int32_t value);

    /// <summary>
    /// 是否仓库创建者
    /// </summary>

    int32_t getIsRepoCreator() const;
    bool isRepoCreatorIsSet() const;
    void unsetisRepoCreator();
    void setIsRepoCreator(int32_t value);

    /// <summary>
    /// 展示标记
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
    int32_t createdById_;
    bool createdByIdIsSet_;
    std::string inviteEmail_;
    bool inviteEmailIsSet_;
    std::string inviteToken_;
    bool inviteTokenIsSet_;
    std::string inviteAcceptedAt_;
    bool inviteAcceptedAtIsSet_;
    std::string requestedAt_;
    bool requestedAtIsSet_;
    std::string expiresAt_;
    bool expiresAtIsSet_;
    bool limited_;
    bool limitedIsSet_;
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

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GroupMyRoleDto_H_
