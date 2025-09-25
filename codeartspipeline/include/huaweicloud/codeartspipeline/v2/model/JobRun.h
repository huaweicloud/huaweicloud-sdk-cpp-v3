
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_JobRun_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_JobRun_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/StepRun.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务运行信息
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  JobRun
    : public ModelBase
{
public:
    JobRun();
    virtual ~JobRun();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobRun members

    /// <summary>
    /// **参数解释**： 任务ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 任务类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**： 序列号。 **取值范围**： 不涉及。 
    /// </summary>

    int32_t getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(int32_t value);

    /// <summary>
    /// **参数解释**： 是否异步。 **取值范围**： - true：异步。 - false：非异步。 
    /// </summary>

    std::string getAsync() const;
    bool asyncIsSet() const;
    void unsetasync();
    void setAsync(const std::string& value);

    /// <summary>
    /// **参数解释**： 任务名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 任务唯一标识。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getIdentifier() const;
    bool identifierIsSet() const;
    void unsetidentifier();
    void setIdentifier(const std::string& value);

    /// <summary>
    /// **参数解释**： 依赖。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getDependsOn();
    bool dependsOnIsSet() const;
    void unsetdependsOn();
    void setDependsOn(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 运行条件。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCondition() const;
    bool conditionIsSet() const;
    void unsetcondition();
    void setCondition(const std::string& value);

    /// <summary>
    /// **参数解释**： 执行资源。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否选中。 **取值范围**： - true：选中。 - false：未选中。 
    /// </summary>

    bool isIsSelect() const;
    bool isSelectIsSet() const;
    void unsetisSelect();
    void setIsSelect(bool value);

    /// <summary>
    /// **参数解释**： 任务超时设置。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getTimeout() const;
    bool timeoutIsSet() const;
    void unsettimeout();
    void setTimeout(const std::string& value);

    /// <summary>
    /// **参数解释**： 任务上次下发ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getLastDispatchId() const;
    bool lastDispatchIdIsSet() const;
    void unsetlastDispatchId();
    void setLastDispatchId(const std::string& value);

    /// <summary>
    /// **参数解释**： 状态。 **取值范围**： - INIT：初始化。 - QUEUED：排队。 - RUNNING：运行中。 - CANCELED：取消。 - COMPLETED：已完成。 - FAILED：失败。 - SKIPPED：跳过。 - IGNORED：忽略。 - PAUSED：暂停。 - SUSPEND：挂起。 - ASYNC_RUNNING：异步运行。 - ASYNC_FAILED：异步失败。 - UNSELECTED：未选择。 - REDISPATCH：重新调度。 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 错误信息。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// **参数解释**： 任务开始时间。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释**： 任务结束时间。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释**： 步骤。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<StepRun>& getSteps();
    bool stepsIsSet() const;
    void unsetsteps();
    void setSteps(const std::vector<StepRun>& value);

    /// <summary>
    /// **参数解释**： 任务执行ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getExecId() const;
    bool execIdIsSet() const;
    void unsetexecId();
    void setExecId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string category_;
    bool categoryIsSet_;
    int32_t sequence_;
    bool sequenceIsSet_;
    std::string async_;
    bool asyncIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string identifier_;
    bool identifierIsSet_;
    std::vector<std::string> dependsOn_;
    bool dependsOnIsSet_;
    std::string condition_;
    bool conditionIsSet_;
    std::string resource_;
    bool resourceIsSet_;
    bool isSelect_;
    bool isSelectIsSet_;
    std::string timeout_;
    bool timeoutIsSet_;
    std::string lastDispatchId_;
    bool lastDispatchIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::vector<StepRun> steps_;
    bool stepsIsSet_;
    std::string execId_;
    bool execIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_JobRun_H_
