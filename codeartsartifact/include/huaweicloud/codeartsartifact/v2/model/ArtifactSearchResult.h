
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ArtifactSearchResult_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ArtifactSearchResult_H_


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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ArtifactSearchResult
    : public ModelBase
{
public:
    ArtifactSearchResult();
    virtual ~ArtifactSearchResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ArtifactSearchResult members

    /// <summary>
    /// **参数解释**： 文件名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 文件相对路径。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getRelativePath() const;
    bool relativePathIsSet() const;
    void unsetrelativePath();
    void setRelativePath(const std::string& value);

    /// <summary>
    /// **参数解释**： 仓库ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getRepo() const;
    bool repoIsSet() const;
    void unsetrepo();
    void setRepo(const std::string& value);

    /// <summary>
    /// **参数解释**： 仓库名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getRepoName() const;
    bool repoNameIsSet() const;
    void unsetrepoName();
    void setRepoName(const std::string& value);

    /// <summary>
    /// **参数解释**： 展示名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**： 制品类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getRepoType() const;
    bool repoTypeIsSet() const;
    void unsetrepoType();
    void setRepoType(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建人ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建人名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCreatedUserName() const;
    bool createdUserNameIsSet() const;
    void unsetcreatedUserName();
    void setCreatedUserName(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建时间。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// **参数解释**： 修改时间。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getModified() const;
    bool modifiedIsSet() const;
    void unsetmodified();
    void setModified(const std::string& value);

    /// <summary>
    /// **参数解释**： 旧仓库ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getOldRepoId() const;
    bool oldRepoIdIsSet() const;
    void unsetoldRepoId();
    void setOldRepoId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string relativePath_;
    bool relativePathIsSet_;
    std::string repo_;
    bool repoIsSet_;
    std::string repoName_;
    bool repoNameIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string repoType_;
    bool repoTypeIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::string createdUserName_;
    bool createdUserNameIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string modified_;
    bool modifiedIsSet_;
    std::string oldRepoId_;
    bool oldRepoIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ArtifactSearchResult_H_
