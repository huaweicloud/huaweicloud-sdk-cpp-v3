
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryBasicDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryBasicDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/NamespaceBasicDto.h>
#include <huaweicloud/codehub/v4/model/RepositorySimpleDto.h>
#include <string>
#include <huaweicloud/codehub/v4/model/RepositoryUserBasicDto.h>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  RepositoryBasicDto
    : public ModelBase
{
public:
    RepositoryBasicDto();
    virtual ~RepositoryBasicDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryBasicDto members

    /// <summary>
    /// **参数解释：** 仓库ID。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库完整名称。
    /// </summary>

    std::string getNameWithNamespace() const;
    bool nameWithNamespaceIsSet() const;
    void unsetnameWithNamespace();
    void setNameWithNamespace(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库路径。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库完整路径。
    /// </summary>

    std::string getPathWithNamespace() const;
    bool pathWithNamespaceIsSet() const;
    void unsetpathWithNamespace();
    void setPathWithNamespace(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否归档。
    /// </summary>

    bool isArchived() const;
    bool archivedIsSet() const;
    void unsetarchived();
    void setArchived(bool value);

    /// <summary>
    /// **参数解释：** 仓库ssh地址。
    /// </summary>

    std::string getSshUrlToRepo() const;
    bool sshUrlToRepoIsSet() const;
    void unsetsshUrlToRepo();
    void setSshUrlToRepo(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库http地址。
    /// </summary>

    std::string getHttpUrlToRepo() const;
    bool httpUrlToRepoIsSet() const;
    void unsethttpUrlToRepo();
    void setHttpUrlToRepo(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库页面链接。
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库readme文件链接。
    /// </summary>

    std::string getReadmeUrl() const;
    bool readmeUrlIsSet() const;
    void unsetreadmeUrl();
    void setReadmeUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库所属项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库所属项目名称。
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库开发模式。 **取值范围：** - normal - CR
    /// </summary>

    std::string getDevelopMode() const;
    bool developModeIsSet() const;
    void unsetdevelopMode();
    void setDevelopMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 审核状态。
    /// </summary>

    bool isModerationResult() const;
    bool moderationResultIsSet() const;
    void unsetmoderationResult();
    void setModerationResult(bool value);

    /// <summary>
    /// **参数解释：** 仓库默认分支 **约束限制：** 不涉及。
    /// </summary>

    std::string getDefaultBranch() const;
    bool defaultBranchIsSet() const;
    void unsetdefaultBranch();
    void setDefaultBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库图标url **约束限制：** 不涉及。
    /// </summary>

    std::string getAvatarUrl() const;
    bool avatarUrlIsSet() const;
    void unsetavatarUrl();
    void setAvatarUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 关注数 **约束限制：** 不涉及。
    /// </summary>

    int32_t getStarCount() const;
    bool starCountIsSet() const;
    void unsetstarCount();
    void setStarCount(int32_t value);

    /// <summary>
    /// **参数解释：** fork数 **约束限制：** 不涉及。
    /// </summary>

    int32_t getForksCount() const;
    bool forksCountIsSet() const;
    void unsetforksCount();
    void setForksCount(int32_t value);

    /// <summary>
    /// **参数解释：** 开启issue数 **约束限制：** 不涉及。
    /// </summary>

    int32_t getOpenIssuesCount() const;
    bool openIssuesCountIsSet() const;
    void unsetopenIssuesCount();
    void setOpenIssuesCount(int32_t value);

    /// <summary>
    /// **参数解释：** 开启中的CR、MR数量 **约束限制：** 不涉及。
    /// </summary>

    int32_t getOpenMergeRequestsCount() const;
    bool openMergeRequestsCountIsSet() const;
    void unsetopenMergeRequestsCount();
    void setOpenMergeRequestsCount(int32_t value);

    /// <summary>
    /// **参数解释：** 最后活跃时间 **约束限制：** 不涉及。
    /// </summary>

    std::string getLastActivityAt() const;
    bool lastActivityAtIsSet() const;
    void unsetlastActivityAt();
    void setLastActivityAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NamespaceBasicDto getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const NamespaceBasicDto& value);

    /// <summary>
    /// **参数解释：** 空仓库 **约束限制：** 不涉及。
    /// </summary>

    bool isEmptyRepo() const;
    bool emptyRepoIsSet() const;
    void unsetemptyRepo();
    void setEmptyRepo(bool value);

    /// <summary>
    /// **参数解释：** 是否已关注 **约束限制：** 不涉及。
    /// </summary>

    bool isStarred() const;
    bool starredIsSet() const;
    void unsetstarred();
    void setStarred(bool value);

    /// <summary>
    /// **参数解释：** 仓库可见等级 **约束限制：** 不涉及。
    /// </summary>

    std::string getVisibility() const;
    bool visibilityIsSet() const;
    void unsetvisibility();
    void setVisibility(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库保密等级 **约束限制：** 不涉及。
    /// </summary>

    std::string getSecurityTag() const;
    bool securityTagIsSet() const;
    void unsetsecurityTag();
    void setSecurityTag(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库保密等级 **约束限制：** 不涉及。
    /// </summary>

    std::string getSecurity() const;
    bool securityIsSet() const;
    void unsetsecurity();
    void setSecurity(const std::string& value);

    /// <summary>
    /// **参数解释：** 网络类型 **约束限制：** 不涉及。
    /// </summary>

    std::string getNetworkType() const;
    bool networkTypeIsSet() const;
    void unsetnetworkType();
    void setNetworkType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RepositoryUserBasicDto getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const RepositoryUserBasicDto& value);

    /// <summary>
    /// 
    /// </summary>

    RepositoryUserBasicDto getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const RepositoryUserBasicDto& value);

    /// <summary>
    /// **参数解释：** 创建者ID **约束限制：** 不涉及。
    /// </summary>

    int32_t getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    RepositorySimpleDto getForkedFromRepository() const;
    bool forkedFromRepositoryIsSet() const;
    void unsetforkedFromRepository();
    void setForkedFromRepository(const RepositorySimpleDto& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nameWithNamespace_;
    bool nameWithNamespaceIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string pathWithNamespace_;
    bool pathWithNamespaceIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    bool archived_;
    bool archivedIsSet_;
    std::string sshUrlToRepo_;
    bool sshUrlToRepoIsSet_;
    std::string httpUrlToRepo_;
    bool httpUrlToRepoIsSet_;
    std::string webUrl_;
    bool webUrlIsSet_;
    std::string readmeUrl_;
    bool readmeUrlIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string developMode_;
    bool developModeIsSet_;
    bool moderationResult_;
    bool moderationResultIsSet_;
    std::string defaultBranch_;
    bool defaultBranchIsSet_;
    std::string avatarUrl_;
    bool avatarUrlIsSet_;
    int32_t starCount_;
    bool starCountIsSet_;
    int32_t forksCount_;
    bool forksCountIsSet_;
    int32_t openIssuesCount_;
    bool openIssuesCountIsSet_;
    int32_t openMergeRequestsCount_;
    bool openMergeRequestsCountIsSet_;
    std::string lastActivityAt_;
    bool lastActivityAtIsSet_;
    NamespaceBasicDto namespace_;
    bool namespaceIsSet_;
    bool emptyRepo_;
    bool emptyRepoIsSet_;
    bool starred_;
    bool starredIsSet_;
    std::string visibility_;
    bool visibilityIsSet_;
    std::string securityTag_;
    bool securityTagIsSet_;
    std::string security_;
    bool securityIsSet_;
    std::string networkType_;
    bool networkTypeIsSet_;
    RepositoryUserBasicDto owner_;
    bool ownerIsSet_;
    RepositoryUserBasicDto creator_;
    bool creatorIsSet_;
    int32_t creatorId_;
    bool creatorIdIsSet_;
    RepositorySimpleDto forkedFromRepository_;
    bool forkedFromRepositoryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryBasicDto_H_
