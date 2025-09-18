
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_IDERepositoryPair_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_IDERepositoryPair_H_


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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  IDERepositoryPair
    : public ModelBase
{
public:
    IDERepositoryPair();
    virtual ~IDERepositoryPair();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IDERepositoryPair members

    /// <summary>
    /// 仓库名称
    /// </summary>

    std::string getRepoName() const;
    bool repoNameIsSet() const;
    void unsetrepoName();
    void setRepoName(const std::string& value);

    /// <summary>
    /// 路径
    /// </summary>

    std::string getIncludesPattern() const;
    bool includesPatternIsSet() const;
    void unsetincludesPattern();
    void setIncludesPattern(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// snapshot仓库名称
    /// </summary>

    std::string getSnapshot() const;
    bool snapshotIsSet() const;
    void unsetsnapshot();
    void setSnapshot(const std::string& value);

    /// <summary>
    /// release仓库名称
    /// </summary>

    std::string getRelease() const;
    bool releaseIsSet() const;
    void unsetrelease();
    void setRelease(const std::string& value);


protected:
    std::string repoName_;
    bool repoNameIsSet_;
    std::string includesPattern_;
    bool includesPatternIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string snapshot_;
    bool snapshotIsSet_;
    std::string release_;
    bool releaseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_IDERepositoryPair_H_
