
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowExecution_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowExecution_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkflowSubgraph.h>
#include <huaweicloud/modelarts/v1/model/StepExecution.h>
#include <huaweicloud/modelarts/v1/model/DataRequirement.h>
#include <huaweicloud/modelarts/v1/model/WorkflowParameter.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/WorkflowDagPolicies.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowExecution
    : public ModelBase
{
public:
    WorkflowExecution();
    virtual ~WorkflowExecution();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowExecution members

    /// <summary>
    /// 创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 执行记录名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 工作流执行ID。
    /// </summary>

    std::string getExecutionId() const;
    bool executionIdIsSet() const;
    void unsetexecutionId();
    void setExecutionId(const std::string& value);

    /// <summary>
    /// 执行记录描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 执行记录状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 工作空间ID。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// Workflow工作流ID。
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// 工作流名称。填写1-64位，仅包含英文、数字、下划线（_）和中划线（-），并且以英文开头的名称。
    /// </summary>

    std::string getWorkflowName() const;
    bool workflowNameIsSet() const;
    void unsetworkflowName();
    void setWorkflowName(const std::string& value);

    /// <summary>
    /// 自定义场景ID。
    /// </summary>

    std::string getSceneId() const;
    bool sceneIdIsSet() const;
    void unsetsceneId();
    void setSceneId(const std::string& value);

    /// <summary>
    /// 自定义场景名称。
    /// </summary>

    std::string getSceneName() const;
    bool sceneNameIsSet() const;
    void unsetsceneName();
    void setSceneName(const std::string& value);

    /// <summary>
    /// 执行记录的step。
    /// </summary>

    std::vector<StepExecution>& getStepsExecution();
    bool stepsExecutionIsSet() const;
    void unsetstepsExecution();
    void setStepsExecution(const std::vector<StepExecution>& value);

    /// <summary>
    /// 子图。
    /// </summary>

    std::vector<WorkflowSubgraph>& getSubGraphs();
    bool subGraphsIsSet() const;
    void unsetsubGraphs();
    void setSubGraphs(const std::vector<WorkflowSubgraph>& value);

    /// <summary>
    /// 执行的时长。
    /// </summary>

    std::string getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(const std::string& value);

    /// <summary>
    /// 执行的事件。
    /// </summary>

    std::vector<std::string>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<std::string>& value);

    /// <summary>
    /// 为执行记录设置的标签。
    /// </summary>

    std::vector<std::string>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::vector<std::string>& value);

    /// <summary>
    /// 节点steps使用到的数据。
    /// </summary>

    std::vector<DataRequirement>& getDataRequirements();
    bool dataRequirementsIsSet() const;
    void unsetdataRequirements();
    void setDataRequirements(const std::vector<DataRequirement>& value);

    /// <summary>
    /// 节点steps使用到的参数。
    /// </summary>

    std::vector<WorkflowParameter>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<WorkflowParameter>& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowDagPolicies getPolicies() const;
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const WorkflowDagPolicies& value);


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
    std::vector<StepExecution> stepsExecution_;
    bool stepsExecutionIsSet_;
    std::vector<WorkflowSubgraph> subGraphs_;
    bool subGraphsIsSet_;
    std::string duration_;
    bool durationIsSet_;
    std::vector<std::string> events_;
    bool eventsIsSet_;
    std::vector<std::string> labels_;
    bool labelsIsSet_;
    std::vector<DataRequirement> dataRequirements_;
    bool dataRequirementsIsSet_;
    std::vector<WorkflowParameter> parameters_;
    bool parametersIsSet_;
    WorkflowDagPolicies policies_;
    bool policiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowExecution_H_
