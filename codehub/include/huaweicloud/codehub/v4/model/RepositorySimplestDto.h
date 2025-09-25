
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositorySimplestDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositorySimplestDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/ForkedFromRepositorySimplestDto.h>
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
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  RepositorySimplestDto
    : public ModelBase
{
public:
    RepositorySimplestDto();
    virtual ~RepositorySimplestDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositorySimplestDto members

    /// <summary>
    /// **参数解释：** 仓库ID **约束限制：** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库名称。 **约束限制：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 命名空间。 **约束限制：** 不涉及。
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库路径。 **约束限制：** 不涉及。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 开发模式。 **约束限制：** 不涉及。
    /// </summary>

    std::string getDevelopMode() const;
    bool developModeIsSet() const;
    void unsetdevelopMode();
    void setDevelopMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 可见性。 **约束限制：** 不涉及。
    /// </summary>

    std::string getVisibility() const;
    bool visibilityIsSet() const;
    void unsetvisibility();
    void setVisibility(const std::string& value);

    /// <summary>
    /// **参数解释：** 安全级别。 **约束限制：** 不涉及。
    /// </summary>

    std::string getSecurity() const;
    bool securityIsSet() const;
    void unsetsecurity();
    void setSecurity(const std::string& value);

    /// <summary>
    /// **参数解释：** 关注数。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getStarCount() const;
    bool starCountIsSet() const;
    void unsetstarCount();
    void setStarCount(int32_t value);

    /// <summary>
    /// **参数解释：** Fork数。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getForksCount() const;
    bool forksCountIsSet() const;
    void unsetforksCount();
    void setForksCount(int32_t value);

    /// <summary>
    /// **参数解释：** 开放的问题数。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getOpenIssuesCount() const;
    bool openIssuesCountIsSet() const;
    void unsetopenIssuesCount();
    void setOpenIssuesCount(int32_t value);

    /// <summary>
    /// **参数解释：** 开放的合并请求数。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getOpenMergeRequestsCount() const;
    bool openMergeRequestsCountIsSet() const;
    void unsetopenMergeRequestsCount();
    void setOpenMergeRequestsCount(int32_t value);

    /// <summary>
    /// **参数解释：** 是否已关注。 **约束限制：** 不涉及。
    /// </summary>

    bool isStarred() const;
    bool starredIsSet() const;
    void unsetstarred();
    void setStarred(bool value);

    /// <summary>
    /// **参数解释：** 包含命名空间的仓库名称。 **约束限制：** 不涉及。
    /// </summary>

    std::string getNameWithNamespace() const;
    bool nameWithNamespaceIsSet() const;
    void unsetnameWithNamespace();
    void setNameWithNamespace(const std::string& value);

    /// <summary>
    /// **参数解释：** 最后活跃时间。 **约束限制：** 不涉及。
    /// </summary>

    std::string getLastActivityAt() const;
    bool lastActivityAtIsSet() const;
    void unsetlastActivityAt();
    void setLastActivityAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ForkedFromRepositorySimplestDto getForkedFromRepository() const;
    bool forkedFromRepositoryIsSet() const;
    void unsetforkedFromRepository();
    void setForkedFromRepository(const ForkedFromRepositorySimplestDto& value);

    /// <summary>
    /// **参数解释：** 权限。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getPermissions() const;
    bool permissionsIsSet() const;
    void unsetpermissions();
    void setPermissions(int32_t value);

    /// <summary>
    /// **参数解释：** 是否归档。 **约束限制：** 不涉及。
    /// </summary>

    bool isArchived() const;
    bool archivedIsSet() const;
    void unsetarchived();
    void setArchived(bool value);

    /// <summary>
    /// **参数解释：** 成员数。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getMemberCount() const;
    bool memberCountIsSet() const;
    void unsetmemberCount();
    void setMemberCount(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库唯一标识符。 **约束限制：** 不涉及。
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库描述。 **约束限制：** 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 最后更新时间。 **约束限制：** 不涉及。
    /// </summary>

    std::string getLastRepositoryUpdatedAt() const;
    bool lastRepositoryUpdatedAtIsSet() const;
    void unsetlastRepositoryUpdatedAt();
    void setLastRepositoryUpdatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** SSH仓库URL。 **约束限制：** 不涉及。
    /// </summary>

    std::string getSshUrlToRepo() const;
    bool sshUrlToRepoIsSet() const;
    void unsetsshUrlToRepo();
    void setSshUrlToRepo(const std::string& value);

    /// <summary>
    /// **参数解释：** HTTP仓库URL。 **约束限制：** 不涉及。
    /// </summary>

    std::string getHttpUrlToRepo() const;
    bool httpUrlToRepoIsSet() const;
    void unsethttpUrlToRepo();
    void setHttpUrlToRepo(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库状态。 **约束限制：** 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 活跃统计。 **约束限制：** 不涉及。
    /// </summary>

    std::vector<int32_t>& getActiveStatistic();
    bool activeStatisticIsSet() const;
    void unsetactiveStatistic();
    void setActiveStatistic(std::vector<int32_t> value);

    /// <summary>
    /// **参数解释：** 项目名称。 **约束限制：** 不涉及。
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目ID。 **约束限制：** 不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目是否删除。 **约束限制：** 不涉及。
    /// </summary>

    bool isProjectIsDelete() const;
    bool projectIsDeleteIsSet() const;
    void unsetprojectIsDelete();
    void setProjectIsDelete(bool value);

    /// <summary>
    /// **参数解释：** 创建者ID **约束限制：** 不涉及。
    /// </summary>

    int32_t getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(int32_t value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string developMode_;
    bool developModeIsSet_;
    std::string visibility_;
    bool visibilityIsSet_;
    std::string security_;
    bool securityIsSet_;
    int32_t starCount_;
    bool starCountIsSet_;
    int32_t forksCount_;
    bool forksCountIsSet_;
    int32_t openIssuesCount_;
    bool openIssuesCountIsSet_;
    int32_t openMergeRequestsCount_;
    bool openMergeRequestsCountIsSet_;
    bool starred_;
    bool starredIsSet_;
    std::string nameWithNamespace_;
    bool nameWithNamespaceIsSet_;
    std::string lastActivityAt_;
    bool lastActivityAtIsSet_;
    ForkedFromRepositorySimplestDto forkedFromRepository_;
    bool forkedFromRepositoryIsSet_;
    int32_t permissions_;
    bool permissionsIsSet_;
    bool archived_;
    bool archivedIsSet_;
    int32_t memberCount_;
    bool memberCountIsSet_;
    std::string uuid_;
    bool uuidIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string lastRepositoryUpdatedAt_;
    bool lastRepositoryUpdatedAtIsSet_;
    std::string sshUrlToRepo_;
    bool sshUrlToRepoIsSet_;
    std::string httpUrlToRepo_;
    bool httpUrlToRepoIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<int32_t> activeStatistic_;
    bool activeStatisticIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    bool projectIsDelete_;
    bool projectIsDeleteIsSet_;
    int32_t creatorId_;
    bool creatorIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositorySimplestDto_H_
