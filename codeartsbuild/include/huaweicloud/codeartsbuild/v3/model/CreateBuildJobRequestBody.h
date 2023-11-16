
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CreateBuildJobRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CreateBuildJobRequestBody_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/CreateBuildJobSteps.h>
#include <string>
#include <huaweicloud/codeartsbuild/v3/model/CreateBuildJobParameter.h>
#include <vector>
#include <huaweicloud/codeartsbuild/v3/model/CreateBuildJobScm.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建构建任务接口请求体
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  CreateBuildJobRequestBody
    : public ModelBase
{
public:
    CreateBuildJobRequestBody();
    virtual ~CreateBuildJobRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateBuildJobRequestBody members

    /// <summary>
    /// 使用机器的架构
    /// </summary>

    std::string getArch() const;
    bool archIsSet() const;
    void unsetarch();
    void setArch(const std::string& value);

    /// <summary>
    /// 构建任务所在项目的ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 任务名称
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// 是否自动更新子模块
    /// </summary>

    std::string getAutoUpdateSubModule() const;
    bool autoUpdateSubModuleIsSet() const;
    void unsetautoUpdateSubModule();
    void setAutoUpdateSubModule(const std::string& value);

    /// <summary>
    /// 执行机规格
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// 构建执行参数列表
    /// </summary>

    std::vector<CreateBuildJobParameter>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<CreateBuildJobParameter>& value);

    /// <summary>
    /// 构建执行SCM
    /// </summary>

    std::vector<CreateBuildJobScm>& getScms();
    bool scmsIsSet() const;
    void unsetscms();
    void setScms(const std::vector<CreateBuildJobScm>& value);

    /// <summary>
    /// 构建执行的步骤
    /// </summary>

    std::vector<CreateBuildJobSteps>& getSteps();
    bool stepsIsSet() const;
    void unsetsteps();
    void setSteps(const std::vector<CreateBuildJobSteps>& value);

    /// <summary>
    /// host类型
    /// </summary>

    std::string getHostType() const;
    bool hostTypeIsSet() const;
    void unsethostType();
    void setHostType(const std::string& value);

    /// <summary>
    /// 构建的配置类型
    /// </summary>

    std::string getBuildConfigType() const;
    bool buildConfigTypeIsSet() const;
    void unsetbuildConfigType();
    void setBuildConfigType(const std::string& value);


protected:
    std::string arch_;
    bool archIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    std::string autoUpdateSubModule_;
    bool autoUpdateSubModuleIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::vector<CreateBuildJobParameter> parameters_;
    bool parametersIsSet_;
    std::vector<CreateBuildJobScm> scms_;
    bool scmsIsSet_;
    std::vector<CreateBuildJobSteps> steps_;
    bool stepsIsSet_;
    std::string hostType_;
    bool hostTypeIsSet_;
    std::string buildConfigType_;
    bool buildConfigTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CreateBuildJobRequestBody_H_
