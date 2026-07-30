
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowExecutionResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowExecutionResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/StepExecutionResp.h>
#include <huaweicloud/modelarts/v1/model/WorkflowParameterResp.h>
#include <huaweicloud/modelarts/v1/model/DataRequirementResp.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/WorkflowDagPoliciesResp.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/WorkflowSubgraphResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowWorkflowExecutionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowWorkflowExecutionResponse();
    virtual ~ShowWorkflowExecutionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWorkflowExecutionResponse members

    /// <summary>
    /// **参数解释**：创建时间。 **取值范围**：不涉及。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释**：执行记录名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：工作流执行ID。[获取方法请参见[获取Execution列表](ListWorkflowExecutions.xml)。](tag:hc)。 **取值范围**：不涉及。
    /// </summary>

    std::string getExecutionId() const;
    bool executionIdIsSet() const;
    void unsetexecutionId();
    void setExecutionId(const std::string& value);

    /// <summary>
    /// **参数解释**：执行记录描述。 **取值范围**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：执行记录状态。 **取值范围**：枚举值如下： - init：初始化 - running：运行中 - completed：运行成功 - stopped：已停止 - abnormal：异常
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：工作空间ID。获取方法请参见[查询工作空间列表](ListWorkspace.xml)。 **取值范围**：不涉及。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：Workflow工作流ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// **参数解释**：工作流名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getWorkflowName() const;
    bool workflowNameIsSet() const;
    void unsetworkflowName();
    void setWorkflowName(const std::string& value);

    /// <summary>
    /// **参数解释**：自定义场景ID，[获取方法请参见[查询工作流执行记录列表](CreateWorkflow.xml)](tag:hc)。 **取值范围**：不涉及。
    /// </summary>

    std::string getSceneId() const;
    bool sceneIdIsSet() const;
    void unsetsceneId();
    void setSceneId(const std::string& value);

    /// <summary>
    /// **参数解释**：自定义场景名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getSceneName() const;
    bool sceneNameIsSet() const;
    void unsetsceneName();
    void setSceneName(const std::string& value);

    /// <summary>
    /// **参数解释**：执行记录的step。 **约束限制**：不涉及。
    /// </summary>

    std::vector<StepExecutionResp>& getStepsExecution();
    bool stepsExecutionIsSet() const;
    void unsetstepsExecution();
    void setStepsExecution(const std::vector<StepExecutionResp>& value);

    /// <summary>
    /// **参数解释**：子图。
    /// </summary>

    std::vector<WorkflowSubgraphResp>& getSubGraphs();
    bool subGraphsIsSet() const;
    void unsetsubGraphs();
    void setSubGraphs(const std::vector<WorkflowSubgraphResp>& value);

    /// <summary>
    /// **参数解释**：执行的时长。 **取值范围**：不涉及。
    /// </summary>

    std::string getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(const std::string& value);

    /// <summary>
    /// **参数解释**：执行的事件。
    /// </summary>

    std::vector<std::string>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：为执行记录设置的标签。
    /// </summary>

    std::vector<std::string>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：节点steps使用到的数据。
    /// </summary>

    std::vector<DataRequirementResp>& getDataRequirements();
    bool dataRequirementsIsSet() const;
    void unsetdataRequirements();
    void setDataRequirements(const std::vector<DataRequirementResp>& value);

    /// <summary>
    /// **参数解释**：节点steps使用到的参数。
    /// </summary>

    std::vector<WorkflowParameterResp>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<WorkflowParameterResp>& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowDagPoliciesResp getPolicies() const;
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const WorkflowDagPoliciesResp& value);


protected:
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string executionId_;
    bool executionIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string workflowId_;
    bool workflowIdIsSet_;
    std::string workflowName_;
    bool workflowNameIsSet_;
    std::string sceneId_;
    bool sceneIdIsSet_;
    std::string sceneName_;
    bool sceneNameIsSet_;
    std::vector<StepExecutionResp> stepsExecution_;
    bool stepsExecutionIsSet_;
    std::vector<WorkflowSubgraphResp> subGraphs_;
    bool subGraphsIsSet_;
    std::string duration_;
    bool durationIsSet_;
    std::vector<std::string> events_;
    bool eventsIsSet_;
    std::vector<std::string> labels_;
    bool labelsIsSet_;
    std::vector<DataRequirementResp> dataRequirements_;
    bool dataRequirementsIsSet_;
    std::vector<WorkflowParameterResp> parameters_;
    bool parametersIsSet_;
    WorkflowDagPoliciesResp policies_;
    bool policiesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowExecutionResponse_H_
