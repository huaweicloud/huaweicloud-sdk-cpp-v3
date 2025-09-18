
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_UpdateNotMavenRepoDO_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_UpdateNotMavenRepoDO_H_


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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  UpdateNotMavenRepoDO
    : public ModelBase
{
public:
    UpdateNotMavenRepoDO();
    virtual ~UpdateNotMavenRepoDO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateNotMavenRepoDO members

    /// <summary>
    /// 仓库名称
    /// </summary>

    std::string getRepoName() const;
    bool repoNameIsSet() const;
    void unsetrepoName();
    void setRepoName(const std::string& value);

    /// <summary>
    /// 仓库格式
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 仓库描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 仓库id列表
    /// </summary>

    std::vector<std::string>& getRepositoryIds();
    bool repositoryIdsIsSet() const;
    void unsetrepositoryIds();
    void setRepositoryIds(const std::vector<std::string>& value);

    /// <summary>
    /// 路径白名单
    /// </summary>

    std::string getIncludesPattern() const;
    bool includesPatternIsSet() const;
    void unsetincludesPattern();
    void setIncludesPattern(const std::string& value);

    /// <summary>
    /// 仓库属性-覆盖策略
    /// </summary>

    std::string getDeploymentPolicy() const;
    bool deploymentPolicyIsSet() const;
    void unsetdeploymentPolicy();
    void setDeploymentPolicy(const std::string& value);

    /// <summary>
    /// 自动清理快照
    /// </summary>

    bool isAutoCleanSnapshot() const;
    bool autoCleanSnapshotIsSet() const;
    void unsetautoCleanSnapshot();
    void setAutoCleanSnapshot(bool value);

    /// <summary>
    /// 快照保存时间长度
    /// </summary>

    std::string getSnapshotAliveDays() const;
    bool snapshotAliveDaysIsSet() const;
    void unsetsnapshotAliveDays();
    void setSnapshotAliveDays(const std::string& value);

    /// <summary>
    /// 最大不同快照个数
    /// </summary>

    std::string getMaxUniqueSnapshots() const;
    bool maxUniqueSnapshotsIsSet() const;
    void unsetmaxUniqueSnapshots();
    void setMaxUniqueSnapshots(const std::string& value);

    /// <summary>
    /// 是否允许匿名
    /// </summary>

    bool isAllowAnonymous() const;
    bool allowAnonymousIsSet() const;
    void unsetallowAnonymous();
    void setAllowAnonymous(bool value);


protected:
    std::string repoName_;
    bool repoNameIsSet_;
    std::string format_;
    bool formatIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<std::string> repositoryIds_;
    bool repositoryIdsIsSet_;
    std::string includesPattern_;
    bool includesPatternIsSet_;
    std::string deploymentPolicy_;
    bool deploymentPolicyIsSet_;
    bool autoCleanSnapshot_;
    bool autoCleanSnapshotIsSet_;
    std::string snapshotAliveDays_;
    bool snapshotAliveDaysIsSet_;
    std::string maxUniqueSnapshots_;
    bool maxUniqueSnapshotsIsSet_;
    bool allowAnonymous_;
    bool allowAnonymousIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_UpdateNotMavenRepoDO_H_
