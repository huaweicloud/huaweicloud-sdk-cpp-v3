
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RunPipelineSource_params_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RunPipelineSource_params_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/RunPipelineSource_params_build_params.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 代码源相关参数。 **取值范围**： 不涉及。 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  RunPipelineSource_params
    : public ModelBase
{
public:
    RunPipelineSource_params();
    virtual ~RunPipelineSource_params();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunPipelineSource_params members

    /// <summary>
    /// **参数解释**： 代码仓类型。 **取值范围**： - codehub。 - gitee。 - github。 - gitcode。 - gitlab。 
    /// </summary>

    std::string getGitType() const;
    bool gitTypeIsSet() const;
    void unsetgitType();
    void setGitType(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码仓https地址。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getGitUrl() const;
    bool gitUrlIsSet() const;
    void unsetgitUrl();
    void setGitUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码仓ssh地址。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getSshGitUrl() const;
    bool sshGitUrlIsSet() const;
    void unsetsshGitUrl();
    void setSshGitUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码仓页面地址。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码仓名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getRepoName() const;
    bool repoNameIsSet() const;
    void unsetrepoName();
    void setRepoName(const std::string& value);

    /// <summary>
    /// **参数解释**： 默认分支。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDefaultBranch() const;
    bool defaultBranchIsSet() const;
    void unsetdefaultBranch();
    void setDefaultBranch(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展点ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getEndpointId() const;
    bool endpointIdIsSet() const;
    void unsetendpointId();
    void setEndpointId(const std::string& value);

    /// <summary>
    /// **参数解释**： Repo代码仓ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCodehubId() const;
    bool codehubIdIsSet() const;
    void unsetcodehubId();
    void setCodehubId(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码仓别名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RunPipelineSource_params_build_params getBuildParams() const;
    bool buildParamsIsSet() const;
    void unsetbuildParams();
    void setBuildParams(const RunPipelineSource_params_build_params& value);


protected:
    std::string gitType_;
    bool gitTypeIsSet_;
    std::string gitUrl_;
    bool gitUrlIsSet_;
    std::string sshGitUrl_;
    bool sshGitUrlIsSet_;
    std::string webUrl_;
    bool webUrlIsSet_;
    std::string repoName_;
    bool repoNameIsSet_;
    std::string defaultBranch_;
    bool defaultBranchIsSet_;
    std::string endpointId_;
    bool endpointIdIsSet_;
    std::string codehubId_;
    bool codehubIdIsSet_;
    std::string alias_;
    bool aliasIsSet_;
    RunPipelineSource_params_build_params buildParams_;
    bool buildParamsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RunPipelineSource_params_H_
