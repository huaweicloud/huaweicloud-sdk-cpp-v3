
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GroupMemberDetailDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GroupMemberDetailDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  GroupMemberDetailDto
    : public ModelBase
{
public:
    GroupMemberDetailDto();
    virtual ~GroupMemberDetailDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GroupMemberDetailDto members

    /// <summary>
    /// **参数解释：** 唯一标识id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 资源id。
    /// </summary>

    int32_t getSourceId() const;
    bool sourceIdIsSet() const;
    void unsetsourceId();
    void setSourceId(int32_t value);

    /// <summary>
    /// **参数解释：** 用户id。
    /// </summary>

    int32_t getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(int32_t value);

    /// <summary>
    /// **参数解释：** 用户来源。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getUserFrom() const;
    bool userFromIsSet() const;
    void unsetuserFrom();
    void setUserFrom(const std::string& value);

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

    std::string getCnRoleName() const;
    bool cnRoleNameIsSet() const;
    void unsetcnRoleName();
    void setCnRoleName(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目角色id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getReqRoleId() const;
    bool reqRoleIdIsSet() const;
    void unsetreqRoleId();
    void setReqRoleId(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目角色名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getReqRoleName() const;
    bool reqRoleNameIsSet() const;
    void unsetreqRoleName();
    void setReqRoleName(const std::string& value);

    /// <summary>
    /// **参数解释：** 成员组id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getUserGroupId() const;
    bool userGroupIdIsSet() const;
    void unsetuserGroupId();
    void setUserGroupId(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码组名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释：** 租户id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释：** 租户名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户昵称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否为代码组创建者。
    /// </summary>

    bool isIsGroupCreator() const;
    bool isGroupCreatorIsSet() const;
    void unsetisGroupCreator();
    void setIsGroupCreator(bool value);

    /// <summary>
    /// **参数解释：** 是否为项目管理员。
    /// </summary>

    bool isIsProjectAdmin() const;
    bool isProjectAdminIsSet() const;
    void unsetisProjectAdmin();
    void setIsProjectAdmin(bool value);

    /// <summary>
    /// **参数解释：** 路径。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 角色中文名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getRoleChineseName() const;
    bool roleChineseNameIsSet() const;
    void unsetroleChineseName();
    void setRoleChineseName(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否可移除。
    /// </summary>

    bool isCanRemove() const;
    bool canRemoveIsSet() const;
    void unsetcanRemove();
    void setCanRemove(bool value);

    /// <summary>
    /// **参数解释：** 角色。
    /// </summary>

    int32_t getAccessLevel() const;
    bool accessLevelIsSet() const;
    void unsetaccessLevel();
    void setAccessLevel(int32_t value);

    /// <summary>
    /// **参数解释：** 服务license状态。
    /// </summary>

    int32_t getServiceLicenseStatus() const;
    bool serviceLicenseStatusIsSet() const;
    void unsetserviceLicenseStatus();
    void setServiceLicenseStatus(int32_t value);

    /// <summary>
    /// **参数解释：** 用户iam_id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getIamId() const;
    bool iamIdIsSet() const;
    void unsetiamId();
    void setIamId(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否为当前代码组成员。
    /// </summary>

    bool isCurrentGroupMember() const;
    bool currentGroupMemberIsSet() const;
    void unsetcurrentGroupMember();
    void setCurrentGroupMember(bool value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t sourceId_;
    bool sourceIdIsSet_;
    int32_t userId_;
    bool userIdIsSet_;
    std::string userFrom_;
    bool userFromIsSet_;
    std::string roleId_;
    bool roleIdIsSet_;
    std::string roleName_;
    bool roleNameIsSet_;
    std::string cnRoleName_;
    bool cnRoleNameIsSet_;
    std::string reqRoleId_;
    bool reqRoleIdIsSet_;
    std::string reqRoleName_;
    bool reqRoleNameIsSet_;
    std::string userGroupId_;
    bool userGroupIdIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    bool isGroupCreator_;
    bool isGroupCreatorIsSet_;
    bool isProjectAdmin_;
    bool isProjectAdminIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string roleChineseName_;
    bool roleChineseNameIsSet_;
    bool canRemove_;
    bool canRemoveIsSet_;
    int32_t accessLevel_;
    bool accessLevelIsSet_;
    int32_t serviceLicenseStatus_;
    bool serviceLicenseStatusIsSet_;
    std::string iamId_;
    bool iamIdIsSet_;
    bool currentGroupMember_;
    bool currentGroupMemberIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GroupMemberDetailDto_H_
