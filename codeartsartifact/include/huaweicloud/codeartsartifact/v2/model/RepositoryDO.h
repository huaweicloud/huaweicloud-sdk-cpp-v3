
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RepositoryDO_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RepositoryDO_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  RepositoryDO
    : public ModelBase
{
public:
    RepositoryDO();
    virtual ~RepositoryDO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryDO members

    /// <summary>
    /// **参数解释**： 仓库状态。 **取值范围**： - active：正常。 - delete：删除。 - disabled：无效。 - view：可浏览。 - trash：废弃。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 租户ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**： 区域。 **取值范围**： 不涉及。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建时间，时间格式：yyyy-MM-dd HH:mm:ss。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 修改时间，时间格式：yyyy-MM-dd HH:mm:ss。 **取值范围**： 不涉及。
    /// </summary>

    std::string getModifiedTime() const;
    bool modifiedTimeIsSet() const;
    void unsetmodifiedTime();
    void setModifiedTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建人ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCreatedUserId() const;
    bool createdUserIdIsSet() const;
    void unsetcreatedUserId();
    void setCreatedUserId(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建人名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCreatedUserName() const;
    bool createdUserNameIsSet() const;
    void unsetcreatedUserName();
    void setCreatedUserName(const std::string& value);

    /// <summary>
    /// **参数解释**： 修改人ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getModifiedUserId() const;
    bool modifiedUserIdIsSet() const;
    void unsetmodifiedUserId();
    void setModifiedUserId(const std::string& value);

    /// <summary>
    /// **参数解释**： 修改人名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getModifiedUserName() const;
    bool modifiedUserNameIsSet() const;
    void unsetmodifiedUserName();
    void setModifiedUserName(const std::string& value);

    /// <summary>
    /// **参数解释**： 仓库ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否禁用。 **取值范围**： 不涉及。
    /// </summary>

    bool isDisable() const;
    bool disableIsSet() const;
    void unsetdisable();
    void setDisable(bool value);

    /// <summary>
    /// **参数解释**： 制品类型。 **取值范围**： - maven - maven2 - npm - go - pypi - rpm - composer - debian - conan - nuget - docker2 - cocoapods - ohpm - generic - helm - conda - huggingfaceml
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// **参数解释**： 仓库类型。 **取值范围**： - hosted：本地仓库。 - remote：代理仓库。 - virtual：虚拟仓库。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 仓库策略。 **取值范围**： - release：正式仓库。 - snapshot：快照仓库。
    /// </summary>

    std::string getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const std::string& value);

    /// <summary>
    /// **参数解释**： 用于标记一对Maven仓库(release、snapshot)，相同的tab_id即为一对Maven仓库。 **取值范围**： 不涉及。
    /// </summary>

    std::string getTabId() const;
    bool tabIdIsSet() const;
    void unsettabId();
    void setTabId(const std::string& value);

    /// <summary>
    /// **参数解释**： 仓库名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getRepositoryName() const;
    bool repositoryNameIsSet() const;
    void unsetrepositoryName();
    void setRepositoryName(const std::string& value);

    /// <summary>
    /// **参数解释**： 展示的仓库名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**： 仓库描述。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： snapshot仓库名称,release和snapshot至少二选一。 **取值范围**： 不涉及。
    /// </summary>

    std::string getSnapshot() const;
    bool snapshotIsSet() const;
    void unsetsnapshot();
    void setSnapshot(const std::string& value);

    /// <summary>
    /// **参数解释**： release仓库名称,release和snapshot至少二选一。 **取值范围**： 不涉及。
    /// </summary>

    std::string getRelease() const;
    bool releaseIsSet() const;
    void unsetrelease();
    void setRelease(const std::string& value);

    /// <summary>
    /// **参数解释**： npm。 **取值范围**： 不涉及。
    /// </summary>

    std::string getNpm() const;
    bool npmIsSet() const;
    void unsetnpm();
    void setNpm(const std::string& value);

    /// <summary>
    /// **参数解释**： 快照仓库状态。 **取值范围**： 不涉及。
    /// </summary>

    std::string getSnapshotStatus() const;
    bool snapshotStatusIsSet() const;
    void unsetsnapshotStatus();
    void setSnapshotStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 正式仓库状态。 **取值范围**： 不涉及。
    /// </summary>

    std::string getReleaseStatus() const;
    bool releaseStatusIsSet() const;
    void unsetreleaseStatus();
    void setReleaseStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目id。 **取值范围**： 不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 路径包含规则。 **取值范围**： 不涉及。
    /// </summary>

    std::string getIncludesPattern() const;
    bool includesPatternIsSet() const;
    void unsetincludesPattern();
    void setIncludesPattern(const std::string& value);

    /// <summary>
    /// **参数解释**： 仓库ID列表。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<std::string>& getRepositoryIds();
    bool repositoryIdsIsSet() const;
    void unsetrepositoryIds();
    void setRepositoryIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： uri。 **取值范围**： 不涉及。
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// **参数解释**： 覆盖策略。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDeploymentPolicy() const;
    bool deploymentPolicyIsSet() const;
    void unsetdeploymentPolicy();
    void setDeploymentPolicy(const std::string& value);

    /// <summary>
    /// **参数解释**： 仓库列表。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<std::string>& getRepositories();
    bool repositoriesIsSet() const;
    void unsetrepositories();
    void setRepositories(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 父仓库名。 **取值范围**： 不涉及。
    /// </summary>

    std::string getParentRepoName() const;
    bool parentRepoNameIsSet() const;
    void unsetparentRepoName();
    void setParentRepoName(const std::string& value);

    /// <summary>
    /// **参数解释**： 用户名。 **取值范围**： 不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**： 密码。 **取值范围**： 不涉及。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// **参数解释**： 代理仓地址。 **取值范围**： 不涉及。
    /// </summary>

    std::string getRemoteUrl() const;
    bool remoteUrlIsSet() const;
    void unsetremoteUrl();
    void setRemoteUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 默认仓库。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDefaultDeployRepository() const;
    bool defaultDeployRepositoryIsSet() const;
    void unsetdefaultDeployRepository();
    void setDefaultDeployRepository(const std::string& value);

    /// <summary>
    /// **参数解释**： 代理仓类型。 **取值范围**： - public：公共代理仓； - customize：用户自定义代理仓。
    /// </summary>

    std::string getRemoteType() const;
    bool remoteTypeIsSet() const;
    void unsetremoteType();
    void setRemoteType(const std::string& value);

    /// <summary>
    /// **参数解释**： 代理。 **取值范围**： 不涉及。
    /// </summary>

    std::string getProxy() const;
    bool proxyIsSet() const;
    void unsetproxy();
    void setProxy(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否允许匿名下载。 **取值范围**： 不涉及。
    /// </summary>

    bool isAllowAnonymous() const;
    bool allowAnonymousIsSet() const;
    void unsetallowAnonymous();
    void setAllowAnonymous(bool value);

    /// <summary>
    /// **参数解释**： 是否自动清理快照版本。 **取值范围**： 不涉及。
    /// </summary>

    bool isAutoCleanSnapshot() const;
    bool autoCleanSnapshotIsSet() const;
    void unsetautoCleanSnapshot();
    void setAutoCleanSnapshot(bool value);

    /// <summary>
    /// **参数解释**： 快照版本有效期，单位：天。 **取值范围**： 不涉及。
    /// </summary>

    std::string getSnapshotAliveDays() const;
    bool snapshotAliveDaysIsSet() const;
    void unsetsnapshotAliveDays();
    void setSnapshotAliveDays(const std::string& value);

    /// <summary>
    /// **参数解释**： 最大快照数。 **取值范围**： 不涉及。
    /// </summary>

    std::string getMaxUniqueSnapshots() const;
    bool maxUniqueSnapshotsIsSet() const;
    void unsetmaxUniqueSnapshots();
    void setMaxUniqueSnapshots(const std::string& value);

    /// <summary>
    /// **参数解释**： 共享权限级别。 **取值范围**： PROJECT
    /// </summary>

    std::string getShareRight() const;
    bool shareRightIsSet() const;
    void unsetshareRight();
    void setShareRight(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否nexus仓库。 **取值范围**： 不涉及。
    /// </summary>

    bool isNexuRepo() const;
    bool nexuRepoIsSet() const;
    void unsetnexuRepo();
    void setNexuRepo(bool value);

    /// <summary>
    /// **参数解释**： 仓库地址。 **取值范围**： 不涉及。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 制品类型。 **取值范围**： - maven - maven2 - npm - go - pypi - rpm - composer - debian - conan - nuget - docker2 - cocoapods - ohpm - generic - helm - conda - huggingfaceml
    /// </summary>

    std::string getPackageType() const;
    bool packageTypeIsSet() const;
    void unsetpackageType();
    void setPackageType(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::string modifiedTime_;
    bool modifiedTimeIsSet_;
    std::string createdUserId_;
    bool createdUserIdIsSet_;
    std::string createdUserName_;
    bool createdUserNameIsSet_;
    std::string modifiedUserId_;
    bool modifiedUserIdIsSet_;
    std::string modifiedUserName_;
    bool modifiedUserNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool disable_;
    bool disableIsSet_;
    std::string format_;
    bool formatIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string policy_;
    bool policyIsSet_;
    std::string tabId_;
    bool tabIdIsSet_;
    std::string repositoryName_;
    bool repositoryNameIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string snapshot_;
    bool snapshotIsSet_;
    std::string release_;
    bool releaseIsSet_;
    std::string npm_;
    bool npmIsSet_;
    std::string snapshotStatus_;
    bool snapshotStatusIsSet_;
    std::string releaseStatus_;
    bool releaseStatusIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string includesPattern_;
    bool includesPatternIsSet_;
    std::vector<std::string> repositoryIds_;
    bool repositoryIdsIsSet_;
    std::string uri_;
    bool uriIsSet_;
    std::string deploymentPolicy_;
    bool deploymentPolicyIsSet_;
    std::vector<std::string> repositories_;
    bool repositoriesIsSet_;
    std::string parentRepoName_;
    bool parentRepoNameIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string password_;
    bool passwordIsSet_;
    std::string remoteUrl_;
    bool remoteUrlIsSet_;
    std::string defaultDeployRepository_;
    bool defaultDeployRepositoryIsSet_;
    std::string remoteType_;
    bool remoteTypeIsSet_;
    std::string proxy_;
    bool proxyIsSet_;
    bool allowAnonymous_;
    bool allowAnonymousIsSet_;
    bool autoCleanSnapshot_;
    bool autoCleanSnapshotIsSet_;
    std::string snapshotAliveDays_;
    bool snapshotAliveDaysIsSet_;
    std::string maxUniqueSnapshots_;
    bool maxUniqueSnapshotsIsSet_;
    std::string shareRight_;
    bool shareRightIsSet_;
    bool nexuRepo_;
    bool nexuRepoIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string packageType_;
    bool packageTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RepositoryDO_H_
