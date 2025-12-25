
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RepositoryDOV5_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RepositoryDOV5_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/BasicDOV5.h>
#include <string>

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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  RepositoryDOV5
    : public ModelBase
{
public:
    RepositoryDOV5();
    virtual ~RepositoryDOV5();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryDOV5 members

    /// <summary>
    /// **参数解释**: 仓库状态。 **取值范围**: active：正常。 delete：删除。 disabled：无效。 view：私有库浏览者。 trash：废弃。 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**: 租户id。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**: 区域。 **取值范围**: 不涉及。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// **参数解释**: 创建时间，时间格式：yyyy-MM-dd HH:mm:ss。 **取值范围**: 不涉及。
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 修改时间，时间格式：yyyy-MM-dd HH:mm:ss。 **取值范围**: 不涉及。
    /// </summary>

    std::string getModifiedTime() const;
    bool modifiedTimeIsSet() const;
    void unsetmodifiedTime();
    void setModifiedTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 创建人id。 **取值范围**: 不涉及。
    /// </summary>

    std::string getCreatedUserId() const;
    bool createdUserIdIsSet() const;
    void unsetcreatedUserId();
    void setCreatedUserId(const std::string& value);

    /// <summary>
    /// **参数解释**: 创建人。 **取值范围**: 不涉及。
    /// </summary>

    std::string getCreatedUserName() const;
    bool createdUserNameIsSet() const;
    void unsetcreatedUserName();
    void setCreatedUserName(const std::string& value);

    /// <summary>
    /// **参数解释**: 修改人id。 **取值范围**: 不涉及。
    /// </summary>

    std::string getModifiedUserId() const;
    bool modifiedUserIdIsSet() const;
    void unsetmodifiedUserId();
    void setModifiedUserId(const std::string& value);

    /// <summary>
    /// **参数解释**: 修改人。 **取值范围**: 不涉及。
    /// </summary>

    std::string getModifiedUserName() const;
    bool modifiedUserNameIsSet() const;
    void unsetmodifiedUserName();
    void setModifiedUserName(const std::string& value);

    /// <summary>
    /// **参数解释**: 仓库名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getRepositoryName() const;
    bool repositoryNameIsSet() const;
    void unsetrepositoryName();
    void setRepositoryName(const std::string& value);

    /// <summary>
    /// **参数解释**: 制品类型。 **取值范围**: - maven - maven2 - npm - go - pypi - rpm - composer - debian - conan - nuget - docker2 - cocoapods - ohpm - generic - helm - conda
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// **参数解释**: 仓库类型。 **取值范围**: hosted：本地仓库。 remote：代理仓库。 virtual：聚合仓库。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**: 仓库描述。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**: release仓库名称,release和snapshot至少二选一。 **取值范围**: 不涉及。
    /// </summary>

    std::string getRelease() const;
    bool releaseIsSet() const;
    void unsetrelease();
    void setRelease(const std::string& value);

    /// <summary>
    /// **参数解释**: snapshot仓库名称,release和snapshot至少二选一。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSnapshot() const;
    bool snapshotIsSet() const;
    void unsetsnapshot();
    void setSnapshot(const std::string& value);

    /// <summary>
    /// **参数解释**: 路径包含规则。 **取值范围**: 不涉及。
    /// </summary>

    std::string getIncludesPattern() const;
    bool includesPatternIsSet() const;
    void unsetincludesPattern();
    void setIncludesPattern(const std::string& value);

    /// <summary>
    /// **参数解释**: 路径排除规则。 **取值范围**: 不涉及。
    /// </summary>

    std::string getExcludesPattern() const;
    bool excludesPatternIsSet() const;
    void unsetexcludesPattern();
    void setExcludesPattern(const std::string& value);

    /// <summary>
    /// **参数解释**: 共享权限级别。 **取值范围**: PROJECT。
    /// </summary>

    std::string getShareRight() const;
    bool shareRightIsSet() const;
    void unsetshareRight();
    void setShareRight(const std::string& value);

    /// <summary>
    /// **参数解释**: 项目ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**: 仓库id。 **取值范围**: 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否禁用。 **取值范围**: 不涉及。
    /// </summary>

    bool isDisable() const;
    bool disableIsSet() const;
    void unsetdisable();
    void setDisable(bool value);

    /// <summary>
    /// **参数解释**: 仓库策略。 **取值范围**: release或snapshot。
    /// </summary>

    std::string getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const std::string& value);

    /// <summary>
    /// **参数解释**: npm。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNpm() const;
    bool npmIsSet() const;
    void unsetnpm();
    void setNpm(const std::string& value);

    /// <summary>
    /// **参数解释**: uri。 **取值范围**: 不涉及。
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// **参数解释**: repositories。 **取值范围**: 不涉及。
    /// </summary>

    std::string getRepositories() const;
    bool repositoriesIsSet() const;
    void unsetrepositories();
    void setRepositories(const std::string& value);

    /// <summary>
    /// **参数解释**: 账号。 **取值范围**: 不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**: 密码。 **取值范围**: 不涉及。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// **参数解释**: 代理。 **取值范围**: 不涉及。
    /// </summary>

    std::string getProxy() const;
    bool proxyIsSet() const;
    void unsetproxy();
    void setProxy(const std::string& value);

    /// <summary>
    /// **参数解释**: 范围。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getScope() const;
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(int32_t value);

    /// <summary>
    /// **参数解释**: 地址。 **取值范围**: 不涉及。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// **参数解释**: 用于标记一对maven仓库(release、snapshot)，相同的tab_id即为一对maven仓库。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getTabId() const;
    bool tabIdIsSet() const;
    void unsettabId();
    void setTabId(const std::string& value);

    /// <summary>
    /// **参数解释**: 展示的仓库名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**: 快照仓状态。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSnapshotStatus() const;
    bool snapshotStatusIsSet() const;
    void unsetsnapshotStatus();
    void setSnapshotStatus(const std::string& value);

    /// <summary>
    /// **参数解释**: 发布仓状态。 **取值范围**: 不涉及。
    /// </summary>

    std::string getReleaseStatus() const;
    bool releaseStatusIsSet() const;
    void unsetreleaseStatus();
    void setReleaseStatus(const std::string& value);

    /// <summary>
    /// **参数解释**: 仓库id列表。 **取值范围**: 不涉及。
    /// </summary>

    std::string getRepositoryIds() const;
    bool repositoryIdsIsSet() const;
    void unsetrepositoryIds();
    void setRepositoryIds(const std::string& value);

    /// <summary>
    /// **参数解释**: 覆盖策略。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getDeploymentPolicy() const;
    bool deploymentPolicyIsSet() const;
    void unsetdeploymentPolicy();
    void setDeploymentPolicy(const std::string& value);

    /// <summary>
    /// **参数解释**: 父仓库名。 **取值范围**: 不涉及。
    /// </summary>

    std::string getParentRepoName() const;
    bool parentRepoNameIsSet() const;
    void unsetparentRepoName();
    void setParentRepoName(const std::string& value);

    /// <summary>
    /// **参数解释**: 代理仓地址。 **取值范围**: 不涉及。
    /// </summary>

    std::string getRemoteUrl() const;
    bool remoteUrlIsSet() const;
    void unsetremoteUrl();
    void setRemoteUrl(const std::string& value);

    /// <summary>
    /// **参数解释**: 代理仓认证。 **取值范围**: 不涉及。
    /// </summary>

    std::string getRemoteAuth() const;
    bool remoteAuthIsSet() const;
    void unsetremoteAuth();
    void setRemoteAuth(const std::string& value);

    /// <summary>
    /// **参数解释**: pypi索引代理地址。 **取值范围**: 不涉及。
    /// </summary>

    std::string getPypiRegistryUrl() const;
    bool pypiRegistryUrlIsSet() const;
    void unsetpypiRegistryUrl();
    void setPypiRegistryUrl(const std::string& value);

    /// <summary>
    /// **参数解释**: 虚仓的默认仓库。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDefaultDeployRepository() const;
    bool defaultDeployRepositoryIsSet() const;
    void unsetdefaultDeployRepository();
    void setDefaultDeployRepository(const std::string& value);

    /// <summary>
    /// **参数解释**: 制品类型。 **取值范围**: 不涉及。
    /// </summary>

    std::string getPackageType() const;
    bool packageTypeIsSet() const;
    void unsetpackageType();
    void setPackageType(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否nexu仓库。 **取值范围**: 不涉及。
    /// </summary>

    bool isNexuRepo() const;
    bool nexuRepoIsSet() const;
    void unsetnexuRepo();
    void setNexuRepo(bool value);

    /// <summary>
    /// **参数解释**: 迁移标识。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getMigrateFlag() const;
    bool migrateFlagIsSet() const;
    void unsetmigrateFlag();
    void setMigrateFlag(int32_t value);


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
    std::string repositoryName_;
    bool repositoryNameIsSet_;
    std::string format_;
    bool formatIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string release_;
    bool releaseIsSet_;
    std::string snapshot_;
    bool snapshotIsSet_;
    std::string includesPattern_;
    bool includesPatternIsSet_;
    std::string excludesPattern_;
    bool excludesPatternIsSet_;
    std::string shareRight_;
    bool shareRightIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool disable_;
    bool disableIsSet_;
    std::string policy_;
    bool policyIsSet_;
    std::string npm_;
    bool npmIsSet_;
    std::string uri_;
    bool uriIsSet_;
    std::string repositories_;
    bool repositoriesIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string password_;
    bool passwordIsSet_;
    std::string proxy_;
    bool proxyIsSet_;
    int32_t scope_;
    bool scopeIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string tabId_;
    bool tabIdIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string snapshotStatus_;
    bool snapshotStatusIsSet_;
    std::string releaseStatus_;
    bool releaseStatusIsSet_;
    std::string repositoryIds_;
    bool repositoryIdsIsSet_;
    std::string deploymentPolicy_;
    bool deploymentPolicyIsSet_;
    std::string parentRepoName_;
    bool parentRepoNameIsSet_;
    std::string remoteUrl_;
    bool remoteUrlIsSet_;
    std::string remoteAuth_;
    bool remoteAuthIsSet_;
    std::string pypiRegistryUrl_;
    bool pypiRegistryUrlIsSet_;
    std::string defaultDeployRepository_;
    bool defaultDeployRepositoryIsSet_;
    std::string packageType_;
    bool packageTypeIsSet_;
    bool nexuRepo_;
    bool nexuRepoIsSet_;
    int32_t migrateFlag_;
    bool migrateFlagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RepositoryDOV5_H_
