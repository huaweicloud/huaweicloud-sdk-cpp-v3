
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowTodo_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowTodo_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作流待办事项。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowTodo
    : public ModelBase
{
public:
    WorkflowTodo();
    virtual ~WorkflowTodo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowTodo members

    /// <summary>
    /// 时间。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 运行时长。
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

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
    /// 工作流执行ID。
    /// </summary>

    std::string getExecutionId() const;
    bool executionIdIsSet() const;
    void unsetexecutionId();
    void setExecutionId(const std::string& value);

    /// <summary>
    /// 节点名称。
    /// </summary>

    std::string getStepName() const;
    bool stepNameIsSet() const;
    void unsetstepName();
    void setStepName(const std::string& value);

    /// <summary>
    /// 节点的Title。
    /// </summary>

    std::string getStepTitle() const;
    bool stepTitleIsSet() const;
    void unsetstepTitle();
    void setStepTitle(const std::string& value);

    /// <summary>
    /// 状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string time_;
    bool timeIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    std::string workflowId_;
    bool workflowIdIsSet_;
    std::string workflowName_;
    bool workflowNameIsSet_;
    std::string executionId_;
    bool executionIdIsSet_;
    std::string stepName_;
    bool stepNameIsSet_;
    std::string stepTitle_;
    bool stepTitleIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowTodo_H_
