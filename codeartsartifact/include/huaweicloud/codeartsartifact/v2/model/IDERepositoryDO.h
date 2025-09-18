
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_IDERepositoryDO_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_IDERepositoryDO_H_


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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  IDERepositoryDO
    : public ModelBase
{
public:
    IDERepositoryDO();
    virtual ~IDERepositoryDO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IDERepositoryDO members

    /// <summary>
    /// 仓库名称
    /// </summary>

    std::string getRepositoryName() const;
    bool repositoryNameIsSet() const;
    void unsetrepositoryName();
    void setRepositoryName(const std::string& value);

    /// <summary>
    /// 仓库类型
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
    /// release仓库名称
    /// </summary>

    std::string getRelease() const;
    bool releaseIsSet() const;
    void unsetrelease();
    void setRelease(const std::string& value);

    /// <summary>
    /// snapshot仓库名称
    /// </summary>

    std::string getSnapshot() const;
    bool snapshotIsSet() const;
    void unsetsnapshot();
    void setSnapshot(const std::string& value);

    /// <summary>
    /// 路径
    /// </summary>

    std::string getIncludesPattern() const;
    bool includesPatternIsSet() const;
    void unsetincludesPattern();
    void setIncludesPattern(const std::string& value);

    /// <summary>
    /// 共享权限级别
    /// </summary>

    std::string getShareRight() const;
    bool shareRightIsSet() const;
    void unsetshareRight();
    void setShareRight(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 仓库类别，本地仓或聚合仓
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string repositoryName_;
    bool repositoryNameIsSet_;
    std::string format_;
    bool formatIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string release_;
    bool releaseIsSet_;
    std::string snapshot_;
    bool snapshotIsSet_;
    std::string includesPattern_;
    bool includesPatternIsSet_;
    std::string shareRight_;
    bool shareRightIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_IDERepositoryDO_H_
