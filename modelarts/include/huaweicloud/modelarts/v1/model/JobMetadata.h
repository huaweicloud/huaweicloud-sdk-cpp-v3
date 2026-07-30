
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobMetadata_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobMetadata_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/TrainingExperimentRequest.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业元信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobMetadata
    : public ModelBase
{
public:
    JobMetadata();
    virtual ~JobMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobMetadata members

    /// <summary>
    /// 训练作业名称。限制为1-64位只含数字、字母、下划线和中划线的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 指定作业所处的工作空间，默认值为“0”。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// 对训练作业的描述，默认为“NULL”，字符串的长度限制为[0, 256]。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 训练作业高级功能配置，可选取值如下： - \&quot;job_template\&quot;: \&quot;Template RL\&quot;（异构作业）。 - \&quot;fault-tolerance/job-retry-num\&quot;: \&quot;3\&quot;（故障自动重启次数）。 - \&quot;jupyter-lab/enable\&quot;: \&quot;true\&quot;（JupyterLab训练应用程序）
    /// </summary>

    std::map<std::string, std::string>& getAnnotations();
    bool annotationsIsSet() const;
    void unsetannotations();
    void setAnnotations(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    TrainingExperimentRequest getTrainingExperimentReference() const;
    bool trainingExperimentReferenceIsSet() const;
    void unsettrainingExperimentReference();
    void setTrainingExperimentReference(const TrainingExperimentRequest& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::map<std::string, std::string> annotations_;
    bool annotationsIsSet_;
    TrainingExperimentRequest trainingExperimentReference_;
    bool trainingExperimentReferenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobMetadata_H_
