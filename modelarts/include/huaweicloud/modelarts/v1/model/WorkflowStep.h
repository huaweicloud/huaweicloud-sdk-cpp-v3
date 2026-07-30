
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowStep_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowStep_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/StepCondition.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/modelarts/v1/model/JobInput.h>
#include <string>
#include <map>
#include <vector>
#include <huaweicloud/modelarts/v1/model/WorkflowStepPolicy.h>
#include <huaweicloud/modelarts/v1/model/JobOutput.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作流节点。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowStep
    : public ModelBase
{
public:
    WorkflowStep();
    virtual ~WorkflowStep();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowStep members

    /// <summary>
    /// Workflow工作流节点的名称，在一个DAG中唯一，1到64位只包含中英文，数字，空格，下划线（_）和中划线（-），并且以中英文开头。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 节点的类型，枚举值如下: - job 训练 - labeling 标注 - release_dataset 数据集发布 - model 模型发布 - service 服务部署 - mrs_job MRS作业 - dataset_import 数据集导入 - create_dataset 创建数据集
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 节点的输入项。
    /// </summary>

    std::vector<JobInput>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<JobInput>& value);

    /// <summary>
    /// 节点的输出项。
    /// </summary>

    std::vector<JobOutput>& getOutputs();
    bool outputsIsSet() const;
    void unsetoutputs();
    void setOutputs(const std::vector<JobOutput>& value);

    /// <summary>
    /// 节点的创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 工作流节点标题。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 节点的描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 节点属性。
    /// </summary>

    std::map<std::string, Object>& getProperties();
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const std::map<std::string, Object>& value);

    /// <summary>
    /// 运行依赖的前置节点。
    /// </summary>

    std::vector<std::string>& getDependSteps();
    bool dependStepsIsSet() const;
    void unsetdependSteps();
    void setDependSteps(const std::vector<std::string>& value);

    /// <summary>
    /// 节点执行条件。
    /// </summary>

    std::vector<StepCondition>& getConditions();
    bool conditionsIsSet() const;
    void unsetconditions();
    void setConditions(const std::vector<StepCondition>& value);

    /// <summary>
    /// 条件节点分支。
    /// </summary>

    std::vector<std::string>& getIfThenSteps();
    bool ifThenStepsIsSet() const;
    void unsetifThenSteps();
    void setIfThenSteps(const std::vector<std::string>& value);

    /// <summary>
    /// 条件节点另一分支。
    /// </summary>

    std::vector<std::string>& getElseThenSteps();
    bool elseThenStepsIsSet() const;
    void unsetelseThenSteps();
    void setElseThenSteps(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowStepPolicy getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const WorkflowStepPolicy& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::vector<JobInput> inputs_;
    bool inputsIsSet_;
    std::vector<JobOutput> outputs_;
    bool outputsIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::map<std::string, Object> properties_;
    bool propertiesIsSet_;
    std::vector<std::string> dependSteps_;
    bool dependStepsIsSet_;
    std::vector<StepCondition> conditions_;
    bool conditionsIsSet_;
    std::vector<std::string> ifThenSteps_;
    bool ifThenStepsIsSet_;
    std::vector<std::string> elseThenSteps_;
    bool elseThenStepsIsSet_;
    WorkflowStepPolicy policy_;
    bool policyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowStep_H_
