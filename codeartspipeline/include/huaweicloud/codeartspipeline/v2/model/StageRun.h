
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_StageRun_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_StageRun_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/StepRun.h>
#include <string>
#include <huaweicloud/codeartspipeline/v2/model/JobRun.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 阶段运行信息
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  StageRun
    : public ModelBase
{
public:
    StageRun();
    virtual ~StageRun();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StageRun members

    /// <summary>
    /// **参数解释**： 阶段ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 阶段类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**： 阶段名称。 **取值范围**： 仅支持输入中文、大小写英文字母、数字、&#39;-&#39;、&#39;_&#39;、&#39;,&#39;、&#39;;&#39;、&#39;:&#39;、&#39;.&#39;、&#39;/&#39;、&#39;(&#39;、&#39;)&#39;、&#39;（&#39;、&#39;）&#39;及空格，其中空格不可在名称开头或结尾使用，且长度为[1,128]个字符。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 阶段唯一标识。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getIdentifier() const;
    bool identifierIsSet() const;
    void unsetidentifier();
    void setIdentifier(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否总是运行。 **取值范围**： - true：总是运行。 - false：非总是运行。 
    /// </summary>

    bool isRunAlways() const;
    bool runAlwaysIsSet() const;
    void unsetrunAlways();
    void setRunAlways(bool value);

    /// <summary>
    /// **参数解释**： 是否并行。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getParallel() const;
    bool parallelIsSet() const;
    void unsetparallel();
    void setParallel(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否选中。 **取值范围**： - true：选中。 - false：未选中。 
    /// </summary>

    bool isIsSelect() const;
    bool isSelectIsSet() const;
    void unsetisSelect();
    void setIsSelect(bool value);

    /// <summary>
    /// **参数解释**： 序列号。 **取值范围**： 大于等于0。 
    /// </summary>

    int32_t getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(int32_t value);

    /// <summary>
    /// **参数解释**： 依赖阶段的identifier信息。 **取值范围**： 不涉及。 
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
    /// **参数解释**： 状态。 **取值范围**： - INIT：初始化。 - QUEUED：排队。 - RUNNING：运行中。 - CANCELED：取消。 - COMPLETED：已完成。 - FAILED：失败。 - SKIPPED：跳过。 - IGNORED：忽略。 - PAUSED：暂停。 - SUSPEND：挂起。 - ASYNC_RUNNING：异步运行。 - ASYNC_FAILED：异步失败。 - UNSELECTED：未选择。 - REDISPATCH：重新调度。 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 阶段开始时间。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释**： 阶段结束时间。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释**： 阶段准入。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<StepRun>& getPre();
    bool preIsSet() const;
    void unsetpre();
    void setPre(const std::vector<StepRun>& value);

    /// <summary>
    /// **参数解释**： 阶段准出。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<StepRun>& getPost();
    bool postIsSet() const;
    void unsetpost();
    void setPost(const std::vector<StepRun>& value);

    /// <summary>
    /// **参数解释**： 任务列表。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<JobRun>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<JobRun>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string identifier_;
    bool identifierIsSet_;
    bool runAlways_;
    bool runAlwaysIsSet_;
    std::string parallel_;
    bool parallelIsSet_;
    bool isSelect_;
    bool isSelectIsSet_;
    int32_t sequence_;
    bool sequenceIsSet_;
    std::vector<std::string> dependsOn_;
    bool dependsOnIsSet_;
    std::string condition_;
    bool conditionIsSet_;
    std::string status_;
    bool statusIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::vector<StepRun> pre_;
    bool preIsSet_;
    std::vector<StepRun> post_;
    bool postIsSet_;
    std::vector<JobRun> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_StageRun_H_
