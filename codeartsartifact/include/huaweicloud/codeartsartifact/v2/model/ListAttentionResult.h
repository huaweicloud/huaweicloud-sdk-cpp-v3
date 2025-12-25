
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListAttentionResult_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListAttentionResult_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ListAttentionResult
    : public ModelBase
{
public:
    ListAttentionResult();
    virtual ~ListAttentionResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAttentionResult members

    /// <summary>
    /// **参数解释**： 序号。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 租户ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**： 仓库ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(const std::string& value);

    /// <summary>
    /// **参数解释**： 仓库名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getRepositoryName() const;
    bool repositoryNameIsSet() const;
    void unsetrepositoryName();
    void setRepositoryName(const std::string& value);

    /// <summary>
    /// **参数解释**： 制品类型。 **取值范围**： maven2|docker|npm|go|pypi|rpm|composer|debian|conan|nuget|docker2|cocoapods|ohpm|generic。 
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// **参数解释**： 仓库策略。 **取值范围**： - release：正式仓库。 - snapshot：快照仓库。 
    /// </summary>

    std::string getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const std::string& value);

    /// <summary>
    /// **参数解释**： 关注的组件序号。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getArtifactId() const;
    bool artifactIdIsSet() const;
    void unsetartifactId();
    void setArtifactId(const std::string& value);

    /// <summary>
    /// **参数解释**： 关注的组件路径。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释**： 修改人名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getModifiedUserName() const;
    bool modifiedUserNameIsSet() const;
    void unsetmodifiedUserName();
    void setModifiedUserName(const std::string& value);

    /// <summary>
    /// **参数解释**： 修改人ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getModifiedUserId() const;
    bool modifiedUserIdIsSet() const;
    void unsetmodifiedUserId();
    void setModifiedUserId(const std::string& value);

    /// <summary>
    /// **参数解释**： 用户id。 **取值范围**： 只能由英文字母、数字组成，且长度为32个字符。 
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// **参数解释**： 修改时间，时间格式：yyyy-MM-dd HH:mm:ss。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getModifiedTime() const;
    bool modifiedTimeIsSet() const;
    void unsetmodifiedTime();
    void setModifiedTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 区域。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string repositoryId_;
    bool repositoryIdIsSet_;
    std::string repositoryName_;
    bool repositoryNameIsSet_;
    std::string format_;
    bool formatIsSet_;
    std::string policy_;
    bool policyIsSet_;
    std::string artifactId_;
    bool artifactIdIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string modifiedUserName_;
    bool modifiedUserNameIsSet_;
    std::string modifiedUserId_;
    bool modifiedUserIdIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string modifiedTime_;
    bool modifiedTimeIsSet_;
    std::string region_;
    bool regionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListAttentionResult_H_
