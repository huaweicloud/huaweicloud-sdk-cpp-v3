
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StepExecution_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StepExecution_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/StepCondition.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/modelarts/v1/model/WorkflowErrorInfo.h>
#include <huaweicloud/modelarts/v1/model/JobInput.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/WorkflowConditionExecution.h>
#include <map>
#include <vector>
#include <huaweicloud/modelarts/v1/model/WorkflowStepExecutionPolicy.h>
#include <huaweicloud/modelarts/v1/model/JobOutput.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 单节点执行状态。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  StepExecution
    : public ModelBase
{
public:
    StepExecution();
    virtual ~StepExecution();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StepExecution members

    /// <summary>
    /// 节点的名称，在一个DAG中唯一，1到64位只包含中英文，数字，空格，下划线（_）和中划线（-），并且以中英文开头。
    /// </summary>

    std::string getStepName() const;
    bool stepNameIsSet() const;
    void unsetstepName();
    void setStepName(const std::string& value);

    /// <summary>
    /// Execution执行的运行时长。
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// 节点的类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 节点的状态。枚举值如下： - init：初始化 - wait_inputs：等待输入 - pending：等待 - creating：创建中 - created：创建成功 - create_failed：创建失败 - running：运行中 - stopping：停止中 - stopped：停止 - timeout：超时 - completed：完成 - failed：失败 - hold：持有 - skipped：跳过
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

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
    /// 节点的UUID，唯一性标识。
    /// </summary>

    std::string getStepUuid() const;
    bool stepUuidIsSet() const;
    void unsetstepUuid();
    void setStepUuid(const std::string& value);

    /// <summary>
    /// 节点的属性。
    /// </summary>

    std::map<std::string, Object>& getProperties();
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const std::map<std::string, Object>& value);

    /// <summary>
    /// 节点发生的事件。
    /// </summary>

    std::vector<std::string>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowErrorInfo getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const WorkflowErrorInfo& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowStepExecutionPolicy getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const WorkflowStepExecutionPolicy& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowConditionExecution getConditionsExecution() const;
    bool conditionsExecutionIsSet() const;
    void unsetconditionsExecution();
    void setConditionsExecution(const WorkflowConditionExecution& value);

    /// <summary>
    /// 节点标题。
    /// </summary>

    std::string getStepTitle() const;
    bool stepTitleIsSet() const;
    void unsetstepTitle();
    void setStepTitle(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<StepCondition>& getConditions();
    bool conditionsIsSet() const;
    void unsetconditions();
    void setConditions(const std::vector<StepCondition>& value);


protected:
    std::string stepName_;
    bool stepNameIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<JobInput> inputs_;
    bool inputsIsSet_;
    std::vector<JobOutput> outputs_;
    bool outputsIsSet_;
    std::string stepUuid_;
    bool stepUuidIsSet_;
    std::map<std::string, Object> properties_;
    bool propertiesIsSet_;
    std::vector<std::string> events_;
    bool eventsIsSet_;
    WorkflowErrorInfo errorInfo_;
    bool errorInfoIsSet_;
    WorkflowStepExecutionPolicy policy_;
    bool policyIsSet_;
    WorkflowConditionExecution conditionsExecution_;
    bool conditionsExecutionIsSet_;
    std::string stepTitle_;
    bool stepTitleIsSet_;
    std::vector<StepCondition> conditions_;
    bool conditionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StepExecution_H_
