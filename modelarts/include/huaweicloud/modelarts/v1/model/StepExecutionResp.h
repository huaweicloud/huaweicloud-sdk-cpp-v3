
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StepExecutionResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StepExecutionResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkflowErrorInfoResp.h>
#include <huaweicloud/modelarts/v1/model/JobInputResp.h>
#include <huaweicloud/modelarts/v1/model/WorkflowStepExecutionPolicyResp.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/StepConditionResp.h>
#include <map>
#include <vector>
#include <huaweicloud/modelarts/v1/model/JobOutputResp.h>
#include <huaweicloud/modelarts/v1/model/WorkflowConditionExecutionResp.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  StepExecutionResp
    : public ModelBase
{
public:
    StepExecutionResp();
    virtual ~StepExecutionResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StepExecutionResp members

    /// <summary>
    /// **参数解释**：节点的名称，在一个DAG中唯一。 **取值范围**：不涉及。
    /// </summary>

    std::string getStepName() const;
    bool stepNameIsSet() const;
    void unsetstepName();
    void setStepName(const std::string& value);

    /// <summary>
    /// **参数解释**：执行记录的名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getExecutionName() const;
    bool executionNameIsSet() const;
    void unsetexecutionName();
    void setExecutionName(const std::string& value);

    /// <summary>
    /// **参数解释**：执行记录与节点的组合名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：唯一标识uuid。创建节点执行时，后台自动生成。 **取值范围**：不涉及。
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// **参数解释**：执行记录的UUID。 **取值范围**：不涉及。
    /// </summary>

    std::string getExecutionUuid() const;
    bool executionUuidIsSet() const;
    void unsetexecutionUuid();
    void setExecutionUuid(const std::string& value);

    /// <summary>
    /// **参数解释**：Execution执行的创建时间。 **取值范围**：不涉及。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释**：Execution执行的更新时间。 **取值范围**：不涉及。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// **参数解释**：Execution执行的运行时长。 **取值范围**：不涉及。
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// **参数解释**：节点的类型。 **取值范围**：枚举值如下: - job：训练 - labeling：标注 - release_dataset：数据集发布 - model：模型发布 - service：服务部署 - mrs_job：MRS作业 - dataset_import：数据集导入 - create_dataset：创建数据集
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：实例ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：节点的状态。 **取值范围**：枚举值如下： - init：初始化 - wait_inputs：等待输入 - pending：等待 - creating：创建中 - created：创建成功 - create_failed：创建失败 - running：运行中 - stopping：停止中 - stopped：停止 - timeout：超时 - completed：完成 - failed：失败 - hold：暂停 - skipped：跳过
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：节点的输入项。
    /// </summary>

    std::vector<JobInputResp>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<JobInputResp>& value);

    /// <summary>
    /// **参数解释**：节点的输出项。
    /// </summary>

    std::vector<JobOutputResp>& getOutputs();
    bool outputsIsSet() const;
    void unsetoutputs();
    void setOutputs(const std::vector<JobOutputResp>& value);

    /// <summary>
    /// **参数解释**：节点的UUID，唯一性标识。 **取值范围**：不涉及。
    /// </summary>

    std::string getStepUuid() const;
    bool stepUuidIsSet() const;
    void unsetstepUuid();
    void setStepUuid(const std::string& value);

    /// <summary>
    /// **参数解释**：节点的属性。
    /// </summary>

    std::map<std::string, std::string>& getProperties();
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释**：节点发生的事件。
    /// </summary>

    std::vector<std::string>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowErrorInfoResp getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const WorkflowErrorInfoResp& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowStepExecutionPolicyResp getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const WorkflowStepExecutionPolicyResp& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowConditionExecutionResp getConditionsExecution() const;
    bool conditionsExecutionIsSet() const;
    void unsetconditionsExecution();
    void setConditionsExecution(const WorkflowConditionExecutionResp& value);

    /// <summary>
    /// **参数解释**：节点标题。 **取值范围**：不涉及。
    /// </summary>

    std::string getStepTitle() const;
    bool stepTitleIsSet() const;
    void unsetstepTitle();
    void setStepTitle(const std::string& value);

    /// <summary>
    /// **参数解释**：条件节点执行条件。
    /// </summary>

    std::vector<StepConditionResp>& getConditions();
    bool conditionsIsSet() const;
    void unsetconditions();
    void setConditions(const std::vector<StepConditionResp>& value);


protected:
    std::string stepName_;
    bool stepNameIsSet_;
    std::string executionName_;
    bool executionNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string uuid_;
    bool uuidIsSet_;
    std::string executionUuid_;
    bool executionUuidIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<JobInputResp> inputs_;
    bool inputsIsSet_;
    std::vector<JobOutputResp> outputs_;
    bool outputsIsSet_;
    std::string stepUuid_;
    bool stepUuidIsSet_;
    std::map<std::string, std::string> properties_;
    bool propertiesIsSet_;
    std::vector<std::string> events_;
    bool eventsIsSet_;
    WorkflowErrorInfoResp errorInfo_;
    bool errorInfoIsSet_;
    WorkflowStepExecutionPolicyResp policy_;
    bool policyIsSet_;
    WorkflowConditionExecutionResp conditionsExecution_;
    bool conditionsExecutionIsSet_;
    std::string stepTitle_;
    bool stepTitleIsSet_;
    std::vector<StepConditionResp> conditions_;
    bool conditionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StepExecutionResp_H_
