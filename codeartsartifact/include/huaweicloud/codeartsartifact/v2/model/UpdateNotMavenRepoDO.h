
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
    /// **参数解释**: 仓库名称。 **约束限制**: 长度1-20。 **取值范围**: 不涉及。 **默认取值**: 无。 
    /// </summary>

    std::string getRepoName() const;
    bool repoNameIsSet() const;
    void unsetrepoName();
    void setRepoName(const std::string& value);

    /// <summary>
    /// **参数解释**: 制品类型。 **约束限制**: 不涉及。 **取值范围**: docker|npm|go|pypi|rpm|composer|debian|conan|nuget|docker2|cocoapods|ohpm|generic。 **默认取值**: 无。
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// **参数解释**: 仓库描述。 **约束限制**: 最大长度200。 **取值范围**: 不涉及。 **默认取值**: 无。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**: 仓库id列表。仓库id，格式为{region}_{domainId}_{format}_{sequence}。可以从私有依赖库首页-&gt;仓库概览-&gt;仓库地址 url 中获取，最后两个\&quot;/\&quot;中间的字符串即为仓库id。 **约束限制**: 根据仓库id格式中region, domainId需要为有效值，format有效值为:npm|go|pypi|rpm|composer|maven|debian|conan|nuget|docker2|cocoapods|ohpm, sequence取值根据套餐不同有不同上限值。 **取值范围**: 不涉及。 **默认取值**: 无。 
    /// </summary>

    std::vector<std::string>& getRepositoryIds();
    bool repositoryIdsIsSet() const;
    void unsetrepositoryIds();
    void setRepositoryIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**: 路径包含规则。 **约束限制**: 最大长度512。 **取值范围**: 不涉及。 **默认取值**: 无。 
    /// </summary>

    std::string getIncludesPattern() const;
    bool includesPatternIsSet() const;
    void unsetincludesPattern();
    void setIncludesPattern(const std::string& value);

    /// <summary>
    /// **参数解释**: 覆盖策略。 **约束限制**: 不涉及。 **取值范围**: allowRedeploy：允许覆盖 disableRedeploy：禁止覆盖 readOnly：只读。 **默认取值**: 无。 
    /// </summary>

    std::string getDeploymentPolicy() const;
    bool deploymentPolicyIsSet() const;
    void unsetdeploymentPolicy();
    void setDeploymentPolicy(const std::string& value);

    /// <summary>
    /// **参数解释**: 自动清理快照。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 无。 
    /// </summary>

    bool isAutoCleanSnapshot() const;
    bool autoCleanSnapshotIsSet() const;
    void unsetautoCleanSnapshot();
    void setAutoCleanSnapshot(bool value);

    /// <summary>
    /// **参数解释**: 快照保存时间长度。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 无。 
    /// </summary>

    std::string getSnapshotAliveDays() const;
    bool snapshotAliveDaysIsSet() const;
    void unsetsnapshotAliveDays();
    void setSnapshotAliveDays(const std::string& value);

    /// <summary>
    /// **参数解释**: 最大不同快照个数。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 无。 
    /// </summary>

    std::string getMaxUniqueSnapshots() const;
    bool maxUniqueSnapshotsIsSet() const;
    void unsetmaxUniqueSnapshots();
    void setMaxUniqueSnapshots(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否允许匿名。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。 
    /// </summary>

    bool isAllowAnonymous() const;
    bool allowAnonymousIsSet() const;
    void unsetallowAnonymous();
    void setAllowAnonymous(bool value);

    /// <summary>
    /// **参数解释**: 项目ID，可以从调用API处获取，也可以从控制台获取。获取方式请参考[获取项目ID](CloudArtifact_api_0015.xml)。 **约束限制**: 只能由英文字母、数字组成，且长度为32个字符。 **取值范围**: 不涉及。 **默认取值**: 无。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


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
    std::string projectId_;
    bool projectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_UpdateNotMavenRepoDO_H_
