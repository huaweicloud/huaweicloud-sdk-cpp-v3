
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CodeSource_params_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CodeSource_params_H_


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
/// **参数解释**： 流水线源参数，包含流水线源的详细信息。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  CodeSource_params
    : public ModelBase
{
public:
    CodeSource_params();
    virtual ~CodeSource_params();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CodeSource_params members

    /// <summary>
    /// **参数解释**： 代码仓类型。 **约束限制**： 不涉及。 **取值范围**： - codehub。 - gitee。 - github。 - gitcode。 - gitlab。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getGitType() const;
    bool gitTypeIsSet() const;
    void unsetgitType();
    void setGitType(const std::string& value);

    /// <summary>
    /// **参数解释**： CodeArts Repo代码仓ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getCodehubId() const;
    bool codehubIdIsSet() const;
    void unsetcodehubId();
    void setCodehubId(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码源扩展点ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getEndpointId() const;
    bool endpointIdIsSet() const;
    void unsetendpointId();
    void setEndpointId(const std::string& value);

    /// <summary>
    /// **参数解释**： 默认分支。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDefaultBranch() const;
    bool defaultBranchIsSet() const;
    void unsetdefaultBranch();
    void setDefaultBranch(const std::string& value);

    /// <summary>
    /// **参数解释**： Git仓库https地址，例如https://example.com/CloudPipelinezycs00001/2000.git。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getGitUrl() const;
    bool gitUrlIsSet() const;
    void unsetgitUrl();
    void setGitUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： ssh_git链接地址，例如https://example.com/CloudPipelinezycs00001/2000.git。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getSshGitUrl() const;
    bool sshGitUrlIsSet() const;
    void unsetsshGitUrl();
    void setSshGitUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 网页url。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线源名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getRepoName() const;
    bool repoNameIsSet() const;
    void unsetrepoName();
    void setRepoName(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码仓别名。 **约束限制**： 不涉及。 **取值范围**： 仅支持输入大小写英文字母、数字、“_”，至多128个字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);


protected:
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
    std::string alias_;
    bool aliasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CodeSource_params_H_
