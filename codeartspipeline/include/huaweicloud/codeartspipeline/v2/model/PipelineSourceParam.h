
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineSourceParam_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineSourceParam_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 流水线源参数。 **取值范围**： 不涉及。 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PipelineSourceParam
    : public ModelBase
{
public:
    PipelineSourceParam();
    virtual ~PipelineSourceParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineSourceParam members

    /// <summary>
    /// **参数解释**： 代码/制品源参数 - 代码仓/制品源别名。 **取值范围**： 别名仅支持输入大小写英文字母、数字、“_”，至多128个字符。 
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);

    /// <summary>
    /// **参数解释**： git代码仓类型。 **取值范围**： - codehub。 - gitee。 - github。 - gitcode。 - gitlab。 
    /// </summary>

    std::string getGitType() const;
    bool gitTypeIsSet() const;
    void unsetgitType();
    void setGitType(const std::string& value);

    /// <summary>
    /// **参数解释**： Repo代码仓ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCodehubId() const;
    bool codehubIdIsSet() const;
    void unsetcodehubId();
    void setCodehubId(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展点id。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getEndpointId() const;
    bool endpointIdIsSet() const;
    void unsetendpointId();
    void setEndpointId(const std::string& value);

    /// <summary>
    /// **参数解释**： 默认分支。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDefaultBranch() const;
    bool defaultBranchIsSet() const;
    void unsetdefaultBranch();
    void setDefaultBranch(const std::string& value);

    /// <summary>
    /// **参数解释**： git链接。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getGitUrl() const;
    bool gitUrlIsSet() const;
    void unsetgitUrl();
    void setGitUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： ssh_git链接。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getSshGitUrl() const;
    bool sshGitUrlIsSet() const;
    void unsetsshGitUrl();
    void setSshGitUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 网页url。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线源名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getRepoName() const;
    bool repoNameIsSet() const;
    void unsetrepoName();
    void setRepoName(const std::string& value);

    /// <summary>
    /// **参数解释**： 制品源类型。 **取值范围**： 仅包含[generic，docker]。 
    /// </summary>

    std::string getArtifactType() const;
    bool artifactTypeIsSet() const;
    void unsetartifactType();
    void setArtifactType(const std::string& value);

    /// <summary>
    /// **参数解释**： 制品源类型名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getArtifactTypeName() const;
    bool artifactTypeNameIsSet() const;
    void unsetartifactTypeName();
    void setArtifactTypeName(const std::string& value);

    /// <summary>
    /// **参数解释**： 过滤分支。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getBranchFilter() const;
    bool branchFilterIsSet() const;
    void unsetbranchFilter();
    void setBranchFilter(const std::string& value);

    /// <summary>
    /// **参数解释**： 制品源所在目录。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDirectory() const;
    bool directoryIsSet() const;
    void unsetdirectory();
    void setDirectory(const std::string& value);

    /// <summary>
    /// **参数解释**： 目录ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDirectoryId() const;
    bool directoryIdIsSet() const;
    void unsetdirectoryId();
    void setDirectoryId(const std::string& value);

    /// <summary>
    /// **参数解释**： Docker组织。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getOrganization() const;
    bool organizationIsSet() const;
    void unsetorganization();
    void setOrganization(const std::string& value);

    /// <summary>
    /// **参数解释**： 软件包名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPackageName() const;
    bool packageNameIsSet() const;
    void unsetpackageName();
    void setPackageName(const std::string& value);

    /// <summary>
    /// **参数解释**： 制品源版本。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 获取制品源版本的策略。 **取值范围**： 仅包含[latest，specificVersion]。 
    /// </summary>

    std::string getVersionStrategy() const;
    bool versionStrategyIsSet() const;
    void unsetversionStrategy();
    void setVersionStrategy(const std::string& value);

    /// <summary>
    /// **参数解释**： 制品源名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getSourceSystem() const;
    bool sourceSystemIsSet() const;
    void unsetsourceSystem();
    void setSourceSystem(const std::string& value);


protected:
    std::string alias_;
    bool aliasIsSet_;
    std::string gitType_;
    bool gitTypeIsSet_;
    std::string codehubId_;
    bool codehubIdIsSet_;
    std::string endpointId_;
    bool endpointIdIsSet_;
    std::string defaultBranch_;
    bool defaultBranchIsSet_;
    std::string gitUrl_;
    bool gitUrlIsSet_;
    std::string sshGitUrl_;
    bool sshGitUrlIsSet_;
    std::string webUrl_;
    bool webUrlIsSet_;
    std::string repoName_;
    bool repoNameIsSet_;
    std::string artifactType_;
    bool artifactTypeIsSet_;
    std::string artifactTypeName_;
    bool artifactTypeNameIsSet_;
    std::string branchFilter_;
    bool branchFilterIsSet_;
    std::string directory_;
    bool directoryIsSet_;
    std::string directoryId_;
    bool directoryIdIsSet_;
    std::string organization_;
    bool organizationIsSet_;
    std::string packageName_;
    bool packageNameIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string versionStrategy_;
    bool versionStrategyIsSet_;
    std::string sourceSystem_;
    bool sourceSystemIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineSourceParam_H_
