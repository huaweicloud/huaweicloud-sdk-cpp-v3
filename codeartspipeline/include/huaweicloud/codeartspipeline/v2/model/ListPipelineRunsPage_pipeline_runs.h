
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelineRunsPage_pipeline_runs_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelineRunsPage_pipeline_runs_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/ListPipelineRunsPage_build_params.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPipelineRunsPage_stage_status_list.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineLatestRun_artifact_params.h>
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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ListPipelineRunsPage_pipeline_runs
    : public ModelBase
{
public:
    ListPipelineRunsPage_pipeline_runs();
    virtual ~ListPipelineRunsPage_pipeline_runs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPipelineRunsPage_pipeline_runs members

    /// <summary>
    /// **参数解释**： 流水线ID，可以通过[查询流水线列表](ListPipelines.xml)接口，其中pipelines.pipelineId即为流水线ID。 **取值范围**： 32位字符，仅由数字和字母组成。 
    /// </summary>

    std::string getPipelineId() const;
    bool pipelineIdIsSet() const;
    void unsetpipelineId();
    void setPipelineId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线运行实例ID，[启动流水线](RunPipeline.xml)接口的返回值即为流水线运行实例ID。 **取值范围**： 32位字符，仅由数字和字母组成。 
    /// </summary>

    std::string getPipelineRunId() const;
    bool pipelineRunIdIsSet() const;
    void unsetpipelineRunId();
    void setPipelineRunId(const std::string& value);

    /// <summary>
    /// **参数解释**： 执行人ID。 **取值范围**： 32位字符，仅由数字和字母组成。 
    /// </summary>

    std::string getExecutorId() const;
    bool executorIdIsSet() const;
    void unsetexecutorId();
    void setExecutorId(const std::string& value);

    /// <summary>
    /// **参数解释**： 执行人名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getExecutorName() const;
    bool executorNameIsSet() const;
    void unsetexecutorName();
    void setExecutorName(const std::string& value);

    /// <summary>
    /// **参数解释**： 阶段信息列表。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<ListPipelineRunsPage_stage_status_list>& getStageStatusList();
    bool stageStatusListIsSet() const;
    void unsetstageStatusList();
    void setStageStatusList(const std::vector<ListPipelineRunsPage_stage_status_list>& value);

    /// <summary>
    /// **参数解释**： 流水线运行实例状态。 **取值范围**： - COMPLETED：已完成。 - RUNNING：运行中。 - FAILED：失败。 - CANCELED：取消。 - PAUSED：暂停。 - SUSPEND：挂起。 - IGNORED：忽略。 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线运行序号。 **取值范围**： 大于等于 1。 
    /// </summary>

    int32_t getRunNumber() const;
    bool runNumberIsSet() const;
    void unsetrunNumber();
    void setRunNumber(int32_t value);

    /// <summary>
    /// **参数解释**： 触发类型 **取值范围**： - Manual：手动触发。 - Scheduler：定时任务。 - MR：MR触发。 - Push：Push事件触发。 - CreateTag：Tag事件触发。 - Issue：Issue触发。 - Note：评论触发。 
    /// </summary>

    std::string getTriggerType() const;
    bool triggerTypeIsSet() const;
    void unsettriggerType();
    void setTriggerType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListPipelineRunsPage_build_params getBuildParams() const;
    bool buildParamsIsSet() const;
    void unsetbuildParams();
    void setBuildParams(const ListPipelineRunsPage_build_params& value);

    /// <summary>
    /// 
    /// </summary>

    PipelineLatestRun_artifact_params getArtifactParams() const;
    bool artifactParamsIsSet() const;
    void unsetartifactParams();
    void setArtifactParams(const PipelineLatestRun_artifact_params& value);

    /// <summary>
    /// **参数解释**： 流水线开始时间。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释**： 流水线结束时间。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释**： 详情页地址，如果x-auth-token中的region信息为空，则详情页地址也返回空。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDetailUrl() const;
    bool detailUrlIsSet() const;
    void unsetdetailUrl();
    void setDetailUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 修改页地址，如果x-auth-token中的region信息为空，则修改页地址也返回空。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getModifyUrl() const;
    bool modifyUrlIsSet() const;
    void unsetmodifyUrl();
    void setModifyUrl(const std::string& value);


protected:
    std::string pipelineId_;
    bool pipelineIdIsSet_;
    std::string pipelineRunId_;
    bool pipelineRunIdIsSet_;
    std::string executorId_;
    bool executorIdIsSet_;
    std::string executorName_;
    bool executorNameIsSet_;
    std::vector<ListPipelineRunsPage_stage_status_list> stageStatusList_;
    bool stageStatusListIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t runNumber_;
    bool runNumberIsSet_;
    std::string triggerType_;
    bool triggerTypeIsSet_;
    ListPipelineRunsPage_build_params buildParams_;
    bool buildParamsIsSet_;
    PipelineLatestRun_artifact_params artifactParams_;
    bool artifactParamsIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string detailUrl_;
    bool detailUrlIsSet_;
    std::string modifyUrl_;
    bool modifyUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelineRunsPage_pipeline_runs_H_
