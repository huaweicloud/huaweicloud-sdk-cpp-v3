
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobPipelineInfoItems_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobPipelineInfoItems_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/JobPipelineInfoParameters.h>
#include <string>
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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  JobPipelineInfoItems
    : public ModelBase
{
public:
    JobPipelineInfoItems();
    virtual ~JobPipelineInfoItems();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobPipelineInfoItems members

    /// <summary>
    /// 构建执行SCM
    /// </summary>

    std::vector<CreateBuildJobScm>& getScms();
    bool scmsIsSet() const;
    void unsetscms();
    void setScms(const std::vector<CreateBuildJobScm>& value);

    /// <summary>
    /// 参数
    /// </summary>

    std::vector<JobPipelineInfoParameters>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<JobPipelineInfoParameters>& value);

    /// <summary>
    /// 任务名称
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// 任务名称信息
    /// </summary>

    std::string getJobNameMassage() const;
    bool jobNameMassageIsSet() const;
    void unsetjobNameMassage();
    void setJobNameMassage(const std::string& value);

    /// <summary>
    /// 任务名称正则
    /// </summary>

    std::string getJobNameRegex() const;
    bool jobNameRegexIsSet() const;
    void unsetjobNameRegex();
    void setJobNameRegex(const std::string& value);

    /// <summary>
    /// 任务名称正则
    /// </summary>

    std::string getSourceCode() const;
    bool sourceCodeIsSet() const;
    void unsetsourceCode();
    void setSourceCode(const std::string& value);


protected:
    std::vector<CreateBuildJobScm> scms_;
    bool scmsIsSet_;
    std::vector<JobPipelineInfoParameters> parameters_;
    bool parametersIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    std::string jobNameMassage_;
    bool jobNameMassageIsSet_;
    std::string jobNameRegex_;
    bool jobNameRegexIsSet_;
    std::string sourceCode_;
    bool sourceCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobPipelineInfoItems_H_
