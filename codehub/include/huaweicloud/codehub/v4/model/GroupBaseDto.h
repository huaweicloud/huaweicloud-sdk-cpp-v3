
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_GroupBaseDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_GroupBaseDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/GroupMyRoleDtoV4.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// A empty base object for group.
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  GroupBaseDto
    : public ModelBase
{
public:
    GroupBaseDto();
    virtual ~GroupBaseDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GroupBaseDto members

    /// <summary>
    /// **参数解释：** 项目id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码组id。
    /// </summary>

    std::vector<int32_t>& getAncestorIds();
    bool ancestorIdsIsSet() const;
    void unsetancestorIds();
    void setAncestorIds(std::vector<int32_t> value);

    /// <summary>
    /// **参数解释：** 代码组名称。
    /// </summary>

    std::vector<std::string>& getAncestorNames();
    bool ancestorNamesIsSet() const;
    void unsetancestorNames();
    void setAncestorNames(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 开发模式，normal，cr。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getDevelopMode() const;
    bool developModeIsSet() const;
    void unsetdevelopMode();
    void setDevelopMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 记录id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 路径。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码组层级。
    /// </summary>

    int32_t getGroupLevel() const;
    bool groupLevelIsSet() const;
    void unsetgroupLevel();
    void setGroupLevel(int32_t value);

    /// <summary>
    /// **参数解释：** 描述。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 子代码组数量。
    /// </summary>

    int32_t getSubgroupCount() const;
    bool subgroupCountIsSet() const;
    void unsetsubgroupCount();
    void setSubgroupCount(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库数量。
    /// </summary>

    int32_t getProjectCount() const;
    bool projectCountIsSet() const;
    void unsetprojectCount();
    void setProjectCount(int32_t value);

    /// <summary>
    /// **参数解释：** 代码组角色。
    /// </summary>

    int32_t getGroupRole() const;
    bool groupRoleIsSet() const;
    void unsetgroupRole();
    void setGroupRole(int32_t value);

    /// <summary>
    /// **参数解释：** 代码组成员数量。
    /// </summary>

    int32_t getGroupMembersCount() const;
    bool groupMembersCountIsSet() const;
    void unsetgroupMembersCount();
    void setGroupMembersCount(int32_t value);

    /// <summary>
    /// **参数解释：** 类型。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getDescendantType() const;
    bool descendantTypeIsSet() const;
    void unsetdescendantType();
    void setDescendantType(const std::string& value);

    /// <summary>
    /// **参数解释：** 可见性 0 20。
    /// </summary>

    int32_t getVisibilityLevel() const;
    bool visibilityLevelIsSet() const;
    void unsetvisibilityLevel();
    void setVisibilityLevel(int32_t value);

    /// <summary>
    /// **参数解释：** 可见性 private public。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getVisibility() const;
    bool visibilityIsSet() const;
    void unsetvisibility();
    void setVisibility(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否为项目创建者。
    /// </summary>

    int32_t getIsProjectAdmin() const;
    bool isProjectAdminIsSet() const;
    void unsetisProjectAdmin();
    void setIsProjectAdmin(int32_t value);

    /// <summary>
    /// **参数解释：** 是否为代码组创建者。
    /// </summary>

    int32_t getIsGroupCreator() const;
    bool isGroupCreatorIsSet() const;
    void unsetisGroupCreator();
    void setIsGroupCreator(int32_t value);

    /// <summary>
    /// **参数解释：** 是否为仓库创建者。
    /// </summary>

    int32_t getIsRepoCreator() const;
    bool isRepoCreatorIsSet() const;
    void unsetisRepoCreator();
    void setIsRepoCreator(int32_t value);

    /// <summary>
    /// **参数解释：** lfs是否开启。
    /// </summary>

    bool isLfsEnabled() const;
    bool lfsEnabledIsSet() const;
    void unsetlfsEnabled();
    void setLfsEnabled(bool value);

    /// <summary>
    /// **参数解释：** 全名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getFullName() const;
    bool fullNameIsSet() const;
    void unsetfullName();
    void setFullName(const std::string& value);

    /// <summary>
    /// **参数解释：** 全路径。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getFullPath() const;
    bool fullPathIsSet() const;
    void unsetfullPath();
    void setFullPath(const std::string& value);

    /// <summary>
    /// **参数解释：** item类型。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getItemType() const;
    bool itemTypeIsSet() const;
    void unsetitemType();
    void setItemType(const std::string& value);

    /// <summary>
    /// **参数解释：** 父代码组id。
    /// </summary>

    int32_t getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    GroupMyRoleDtoV4 getMyRole() const;
    bool myRoleIsSet() const;
    void unsetmyRole();
    void setMyRole(const GroupMyRoleDtoV4& value);

    /// <summary>
    /// **参数解释：** 成员。
    /// </summary>

    int32_t getMembers() const;
    bool membersIsSet() const;
    void unsetmembers();
    void setMembers(int32_t value);

    /// <summary>
    /// **参数解释：** url地址。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 子代码组数量。
    /// </summary>

    int32_t getSubGroupCount() const;
    bool subGroupCountIsSet() const;
    void unsetsubGroupCount();
    void setSubGroupCount(int32_t value);

    /// <summary>
    /// **参数解释：** 是否为最后所有者。
    /// </summary>

    bool isLastOwner() const;
    bool lastOwnerIsSet() const;
    void unsetlastOwner();
    void setLastOwner(bool value);

    /// <summary>
    /// **参数解释：** 是否关注。
    /// </summary>

    bool isStarred() const;
    bool starredIsSet() const;
    void unsetstarred();
    void setStarred(bool value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::vector<int32_t> ancestorIds_;
    bool ancestorIdsIsSet_;
    std::vector<std::string> ancestorNames_;
    bool ancestorNamesIsSet_;
    std::string developMode_;
    bool developModeIsSet_;
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string path_;
    bool pathIsSet_;
    int32_t groupLevel_;
    bool groupLevelIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t subgroupCount_;
    bool subgroupCountIsSet_;
    int32_t projectCount_;
    bool projectCountIsSet_;
    int32_t groupRole_;
    bool groupRoleIsSet_;
    int32_t groupMembersCount_;
    bool groupMembersCountIsSet_;
    std::string descendantType_;
    bool descendantTypeIsSet_;
    int32_t visibilityLevel_;
    bool visibilityLevelIsSet_;
    std::string visibility_;
    bool visibilityIsSet_;
    int32_t isProjectAdmin_;
    bool isProjectAdminIsSet_;
    int32_t isGroupCreator_;
    bool isGroupCreatorIsSet_;
    int32_t isRepoCreator_;
    bool isRepoCreatorIsSet_;
    bool lfsEnabled_;
    bool lfsEnabledIsSet_;
    std::string fullName_;
    bool fullNameIsSet_;
    std::string fullPath_;
    bool fullPathIsSet_;
    std::string itemType_;
    bool itemTypeIsSet_;
    int32_t parentId_;
    bool parentIdIsSet_;
    GroupMyRoleDtoV4 myRole_;
    bool myRoleIsSet_;
    int32_t members_;
    bool membersIsSet_;
    std::string webUrl_;
    bool webUrlIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    int32_t subGroupCount_;
    bool subGroupCountIsSet_;
    bool lastOwner_;
    bool lastOwnerIsSet_;
    bool starred_;
    bool starredIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_GroupBaseDto_H_
