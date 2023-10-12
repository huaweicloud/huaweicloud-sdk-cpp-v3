
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowHistoryDetailsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowHistoryDetailsResponse_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsbuild/v3/model/BuildStep.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowHistoryDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowHistoryDetailsResponse();
    virtual ~ShowHistoryDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHistoryDetailsResponse members

    /// <summary>
    /// 构建任务名称
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// 构建编号
    /// </summary>

    int32_t getBuildNumber() const;
    bool buildNumberIsSet() const;
    void unsetbuildNumber();
    void setBuildNumber(int32_t value);

    /// <summary>
    /// 构建任务所在项目的ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 构建任务所在项目的名称
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// 本次构建的参数，Map类型，敏感参数值返回*号
    /// </summary>

    std::map<std::string, std::string>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 本次任务的构建步骤详情，返回的步骤为页面可见步骤
    /// </summary>

    std::vector<BuildStep>& getBuildSteps();
    bool buildStepsIsSet() const;
    void unsetbuildSteps();
    void setBuildSteps(const std::vector<BuildStep>& value);


protected:
    std::string jobName_;
    bool jobNameIsSet_;
    int32_t buildNumber_;
    bool buildNumberIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::map<std::string, std::string> parameters_;
    bool parametersIsSet_;
    std::vector<BuildStep> buildSteps_;
    bool buildStepsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowHistoryDetailsResponse_H_
