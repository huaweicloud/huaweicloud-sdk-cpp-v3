
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Task_algorithm_job_config_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Task_algorithm_job_config_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Output.h>
#include <huaweicloud/modelarts/v1/model/Task_algorithm_job_config_engine.h>
#include <huaweicloud/modelarts/v1/model/Input.h>
#include <huaweicloud/modelarts/v1/model/Parameter.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：算法配置信息，如启动文件等。 **约束限制**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Task_algorithm_job_config
    : public ModelBase
{
public:
    Task_algorithm_job_config();
    virtual ~Task_algorithm_job_config();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Task_algorithm_job_config members

    /// <summary>
    /// **参数解释**：算法的运行参数。 **约束限制**：不涉及。
    /// </summary>

    std::vector<Parameter>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<Parameter>& value);

    /// <summary>
    /// **参数解释**：算法的数据输入。 **约束限制**：不涉及。
    /// </summary>

    std::vector<Input>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<Input>& value);

    /// <summary>
    /// **参数解释**：算法的数据输出。 **约束限制**：不涉及。
    /// </summary>

    std::vector<Output>& getOutputs();
    bool outputsIsSet() const;
    void unsetoutputs();
    void setOutputs(const std::vector<Output>& value);

    /// <summary>
    /// 
    /// </summary>

    Task_algorithm_job_config_engine getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const Task_algorithm_job_config_engine& value);


protected:
    std::vector<Parameter> parameters_;
    bool parametersIsSet_;
    std::vector<Input> inputs_;
    bool inputsIsSet_;
    std::vector<Output> outputs_;
    bool outputsIsSet_;
    Task_algorithm_job_config_engine engine_;
    bool engineIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Task_algorithm_job_config_H_
