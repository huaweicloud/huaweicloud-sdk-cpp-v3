
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_UpdateBuildJobScm_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_UpdateBuildJobScm_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 构建执行SCM
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  UpdateBuildJobScm
    : public ModelBase
{
public:
    UpdateBuildJobScm();
    virtual ~UpdateBuildJobScm();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateBuildJobScm members

    /// <summary>
    /// 代码分支
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// 代码仓地址
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// repo的id
    /// </summary>

    std::string getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(const std::string& value);

    /// <summary>
    /// 代码仓http地址
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);

    /// <summary>
    /// 仓库类别，Repo、Github等
    /// </summary>

    std::string getScmType() const;
    bool scmTypeIsSet() const;
    void unsetscmType();
    void setScmType(const std::string& value);

    /// <summary>
    /// 是否自动构建
    /// </summary>

    bool isIsAutoBuild() const;
    bool isAutoBuildIsSet() const;
    void unsetisAutoBuild();
    void setIsAutoBuild(bool value);

    /// <summary>
    /// 构建类别
    /// </summary>

    std::string getBuildType() const;
    bool buildTypeIsSet() const;
    void unsetbuildType();
    void setBuildType(const std::string& value);

    /// <summary>
    /// 克隆深度
    /// </summary>

    std::string getDepth() const;
    bool depthIsSet() const;
    void unsetdepth();
    void setDepth(const std::string& value);

    /// <summary>
    /// endpointId
    /// </summary>

    std::string getEndPointId() const;
    bool endPointIdIsSet() const;
    void unsetendPointId();
    void setEndPointId(const std::string& value);

    /// <summary>
    /// source
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);


protected:
    std::string branch_;
    bool branchIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string repoId_;
    bool repoIdIsSet_;
    std::string webUrl_;
    bool webUrlIsSet_;
    std::string scmType_;
    bool scmTypeIsSet_;
    bool isAutoBuild_;
    bool isAutoBuildIsSet_;
    std::string buildType_;
    bool buildTypeIsSet_;
    std::string depth_;
    bool depthIsSet_;
    std::string endPointId_;
    bool endPointIdIsSet_;
    std::string source_;
    bool sourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_UpdateBuildJobScm_H_
