
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelineRunsQuery_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelineRunsQuery_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 查询流水线运行历史请求体
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ListPipelineRunsQuery
    : public ModelBase
{
public:
    ListPipelineRunsQuery();
    virtual ~ListPipelineRunsQuery();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPipelineRunsQuery members

    /// <summary>
    /// **参数解释**： 流水线状态列表。 **约束限制**： 不涉及。 **取值范围**： - COMPLETED：已完成。 - RUNNING：运行中。 - FAILED：失败。 - CANCELED：取消。 - PAUSED：暂停。 - SUSPEND：挂起。 - IGNORED：忽略。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getStatus();
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 流水线开始时间。 **约束限制**： 不涉及。 **取值范围**： 时间戳或者yyyy-MM-dd HH:mm:ss格式均可。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线结束时间。 **约束限制**： 不涉及。 **取值范围**： 时间戳或者yyyy-MM-dd HH:mm:ss格式均可。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线状态更新时间。 **约束限制**： 不涉及。 **取值范围**： 时间戳或者yyyy-MM-dd HH:mm:ss格式均可。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 触发类型列表。 **约束限制**： 不涉及。 **取值范围**： - Manual：手动触发。 - Scheduler：定时触发。 - RollBack：回退触发。 - CreateTag：Tag事件触发。 - Note：评论触发。 - Issue：Issue触发。 - MR：MR触发。 - CR：CR触发。 - Generic：流水线触发器触发。 - Push：Push事件触发。 - SubPipeline：子流水线触发。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getTriggerType();
    bool triggerTypeIsSet() const;
    void unsettriggerType();
    void setTriggerType(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 执行人ID列表。 **约束限制**： 不涉及。 **取值范围**： 32位字符，仅由数字和字母组成。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getExecutorIds();
    bool executorIdsIsSet() const;
    void unsetexecutorIds();
    void setExecutorIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 起始偏移。 **约束限制**： 不涉及。 **取值范围**： 大于等于零。 **默认取值**： 不涉及。 
    /// </summary>

    int64_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int64_t value);

    /// <summary>
    /// **参数解释**： 查询数量。 **约束限制**： 不涉及。 **取值范围**： 大于等于零。 **默认取值**： 不涉及。 
    /// </summary>

    int64_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int64_t value);

    /// <summary>
    /// **参数解释**： 排序字段名称。 **约束限制**： 不涉及。 **取值范围**： \&quot;start_time\&quot; - 流水线开始时间。 \&quot;update_time\&quot; - 流水线更新时间。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// **参数解释**： 排序规则。 **约束限制**： 不涉及。 **取值范围**： - asc：按排序字段升序。 - desc：按排序字段降序。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否返回Job状态详情。 **约束限制**： 不涉及。 **取值范围**： - true：返回Job状态列表。 - false：不返回。 **默认取值**： false。 
    /// </summary>

    bool isShowJobDetails() const;
    bool showJobDetailsIsSet() const;
    void unsetshowJobDetails();
    void setShowJobDetails(bool value);

    /// <summary>
    /// **参数解释**： 阶段ID，用于指定返回Job状态详情的阶段。 **约束限制**： 不涉及。 **取值范围**： 32位字符，仅由数字和字母组成。 **默认取值**： 不涉及，为空时默认取流水线最后一个阶段。 
    /// </summary>

    std::string getStageId() const;
    bool stageIdIsSet() const;
    void unsetstageId();
    void setStageId(const std::string& value);

    /// <summary>
    /// **参数解释**： Job ID，仅在show_job_details为true时生效，用于过滤包含指定Job的执行记录。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    std::vector<std::string> status_;
    bool statusIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::vector<std::string> triggerType_;
    bool triggerTypeIsSet_;
    std::vector<std::string> executorIds_;
    bool executorIdsIsSet_;
    int64_t offset_;
    bool offsetIsSet_;
    int64_t limit_;
    bool limitIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    bool showJobDetails_;
    bool showJobDetailsIsSet_;
    std::string stageId_;
    bool stageIdIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelineRunsQuery_H_
