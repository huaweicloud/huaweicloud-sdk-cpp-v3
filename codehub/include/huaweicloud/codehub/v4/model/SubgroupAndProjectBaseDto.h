
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_SubgroupAndProjectBaseDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_SubgroupAndProjectBaseDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codehub/v4/model/ProjectCreatorDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// A empty base object for subgroup and project.
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  SubgroupAndProjectBaseDto
    : public ModelBase
{
public:
    SubgroupAndProjectBaseDto();
    virtual ~SubgroupAndProjectBaseDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubgroupAndProjectBaseDto members

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
    /// **参数解释：** 角色中文名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getRoleNamecn() const;
    bool roleNamecnIsSet() const;
    void unsetroleNamecn();
    void setRoleNamecn(const std::string& value);

    /// <summary>
    /// **参数解释：** 角色英文名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getRoleNameen() const;
    bool roleNameenIsSet() const;
    void unsetroleNameen();
    void setRoleNameen(const std::string& value);

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
    /// **参数解释：** 创建时间。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间戳。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getUpdatedAtTimestamp() const;
    bool updatedAtTimestampIsSet() const;
    void unsetupdatedAtTimestamp();
    void setUpdatedAtTimestamp(const std::string& value);

    /// <summary>
    /// **参数解释：** 开始时间戳。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getStarTime() const;
    bool starTimeIsSet() const;
    void unsetstarTime();
    void setStarTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否收藏。
    /// </summary>

    bool isStarred() const;
    bool starredIsSet() const;
    void unsetstarred();
    void setStarred(bool value);

    /// <summary>
    /// **参数解释：** 开发模式，cr,\&quot;normal\&quot;。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getDevelopMode() const;
    bool developModeIsSet() const;
    void unsetdevelopMode();
    void setDevelopMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库或者代码组id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 代码组或仓库名称。 **取值范围：** 字符串长度不少于1，不超过1000。
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
    /// **参数解释：** 代码组或仓库描述。 **取值范围：** 字符串长度不少于1，不超过1000。
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
    /// **参数解释：** 资源类型 group,project。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getDescendantType() const;
    bool descendantTypeIsSet() const;
    void unsetdescendantType();
    void setDescendantType(const std::string& value);

    /// <summary>
    /// **参数解释：** 可见性level 0(私有),20(公开)
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
    /// **参数解释：** 当前用户是否为项目创建者。
    /// </summary>

    int32_t getIsProjectAdmin() const;
    bool isProjectAdminIsSet() const;
    void unsetisProjectAdmin();
    void setIsProjectAdmin(int32_t value);

    /// <summary>
    /// **参数解释：** 当前用户是否为代码组创建者。
    /// </summary>

    int32_t getIsGroupCreator() const;
    bool isGroupCreatorIsSet() const;
    void unsetisGroupCreator();
    void setIsGroupCreator(int32_t value);

    /// <summary>
    /// **参数解释：** 当前用户是否为仓库创建者。
    /// </summary>

    int32_t getIsRepoCreator() const;
    bool isRepoCreatorIsSet() const;
    void unsetisRepoCreator();
    void setIsRepoCreator(int32_t value);

    /// <summary>
    /// **参数解释：** 角色展示标记。
    /// </summary>

    int32_t getRoleShowFlag() const;
    bool roleShowFlagIsSet() const;
    void unsetroleShowFlag();
    void setRoleShowFlag(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库的uuid。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// **参数解释：** fork数量。
    /// </summary>

    int32_t getForksCount() const;
    bool forksCountIsSet() const;
    void unsetforksCount();
    void setForksCount(int32_t value);

    /// <summary>
    /// **参数解释：** 是否为kia。
    /// </summary>

    bool isIsKia() const;
    bool isKiaIsSet() const;
    void unsetisKia();
    void setIsKia(bool value);

    /// <summary>
    /// **参数解释：** 是否为所有者。
    /// </summary>

    bool isIsOwner() const;
    bool isOwnerIsSet() const;
    void unsetisOwner();
    void setIsOwner(bool value);

    /// <summary>
    /// **参数解释：** 是否为存档。
    /// </summary>

    bool isArchived() const;
    bool archivedIsSet() const;
    void unsetarchived();
    void setArchived(bool value);

    /// <summary>
    /// **参数解释：** 仓库的最后更新时间。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getLastRepositoryUpdatedAt() const;
    bool lastRepositoryUpdatedAtIsSet() const;
    void unsetlastRepositoryUpdatedAt();
    void setLastRepositoryUpdatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 开启的mr数量。
    /// </summary>

    int32_t getOpenMergeRequestsCount() const;
    bool openMergeRequestsCountIsSet() const;
    void unsetopenMergeRequestsCount();
    void setOpenMergeRequestsCount(int32_t value);

    /// <summary>
    /// **参数解释：** 所有的mr数量。
    /// </summary>

    int32_t getAllMergeRequestsCount() const;
    bool allMergeRequestsCountIsSet() const;
    void unsetallMergeRequestsCount();
    void setAllMergeRequestsCount(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库角色。
    /// </summary>

    int32_t getProjectRole() const;
    bool projectRoleIsSet() const;
    void unsetprojectRole();
    void setProjectRole(int32_t value);

    /// <summary>
    /// **参数解释：** fork数量。
    /// </summary>

    int32_t getProjectMembersCount() const;
    bool projectMembersCountIsSet() const;
    void unsetprojectMembersCount();
    void setProjectMembersCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ProjectCreatorDto getProjectCreator() const;
    bool projectCreatorIsSet() const;
    void unsetprojectCreator();
    void setProjectCreator(const ProjectCreatorDto& value);

    /// <summary>
    /// **参数解释：** fork数量。
    /// </summary>

    int32_t getStarCount() const;
    bool starCountIsSet() const;
    void unsetstarCount();
    void setStarCount(int32_t value);

    /// <summary>
    /// **参数解释：** tag列表。
    /// </summary>

    std::vector<std::string>& getTagList();
    bool tagListIsSet() const;
    void unsettagList();
    void setTagList(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 仓库的http url。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getHttpUrlToRepo() const;
    bool httpUrlToRepoIsSet() const;
    void unsethttpUrlToRepo();
    void setHttpUrlToRepo(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库的ssh url。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getSshUrlToRepo() const;
    bool sshUrlToRepoIsSet() const;
    void unsetsshUrlToRepo();
    void setSshUrlToRepo(const std::string& value);

    /// <summary>
    /// **参数解释：** 状态。
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// **参数解释：** 活跃统计。
    /// </summary>

    std::vector<int32_t>& getActiveStatistic();
    bool activeStatisticIsSet() const;
    void unsetactiveStatistic();
    void setActiveStatistic(std::vector<int32_t> value);

    /// <summary>
    /// **参数解释：** 安全标签。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getSecurityTag() const;
    bool securityTagIsSet() const;
    void unsetsecurityTag();
    void setSecurityTag(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string roleNamecn_;
    bool roleNamecnIsSet_;
    std::string roleNameen_;
    bool roleNameenIsSet_;
    std::string fullName_;
    bool fullNameIsSet_;
    std::string fullPath_;
    bool fullPathIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAtTimestamp_;
    bool updatedAtTimestampIsSet_;
    std::string starTime_;
    bool starTimeIsSet_;
    bool starred_;
    bool starredIsSet_;
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
    int32_t roleShowFlag_;
    bool roleShowFlagIsSet_;
    std::string uuid_;
    bool uuidIsSet_;
    int32_t forksCount_;
    bool forksCountIsSet_;
    bool isKia_;
    bool isKiaIsSet_;
    bool isOwner_;
    bool isOwnerIsSet_;
    bool archived_;
    bool archivedIsSet_;
    std::string lastRepositoryUpdatedAt_;
    bool lastRepositoryUpdatedAtIsSet_;
    int32_t openMergeRequestsCount_;
    bool openMergeRequestsCountIsSet_;
    int32_t allMergeRequestsCount_;
    bool allMergeRequestsCountIsSet_;
    int32_t projectRole_;
    bool projectRoleIsSet_;
    int32_t projectMembersCount_;
    bool projectMembersCountIsSet_;
    ProjectCreatorDto projectCreator_;
    bool projectCreatorIsSet_;
    int32_t starCount_;
    bool starCountIsSet_;
    std::vector<std::string> tagList_;
    bool tagListIsSet_;
    std::string httpUrlToRepo_;
    bool httpUrlToRepoIsSet_;
    std::string sshUrlToRepo_;
    bool sshUrlToRepoIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::vector<int32_t> activeStatistic_;
    bool activeStatisticIsSet_;
    std::string securityTag_;
    bool securityTagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_SubgroupAndProjectBaseDto_H_
