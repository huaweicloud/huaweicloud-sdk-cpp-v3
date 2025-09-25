
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineBuildResult_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineBuildResult_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PipelineBuildResult
    : public ModelBase
{
public:
    PipelineBuildResult();
    virtual ~PipelineBuildResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineBuildResult members

    /// <summary>
    /// **参数解释**： 流水线执行ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getBuildId() const;
    bool buildIdIsSet() const;
    void unsetbuildId();
    void setBuildId(const std::string& value);

    /// <summary>
    /// **参数解释**： 运行耗时，单位为毫秒。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getElapseTime() const;
    bool elapseTimeIsSet() const;
    void unsetelapseTime();
    void setElapseTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 执行结束时间。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 运行结果。 **取值范围**： - success：成功。 - error：失败。 - aborted：终止。 
    /// </summary>

    std::string getOutcome() const;
    bool outcomeIsSet() const;
    void unsetoutcome();
    void setOutcome(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线id。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getPipelineId() const;
    bool pipelineIdIsSet() const;
    void unsetpipelineId();
    void setPipelineId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPipelineName() const;
    bool pipelineNameIsSet() const;
    void unsetpipelineName();
    void setPipelineName(const std::string& value);

    /// <summary>
    /// **参数解释**： 执行开始时间。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 运行状态。 **取值范围**： - waiting：等待中。 - running：运行中。 - verifying：待审核。 - suspending：挂起。 - completed：执行完成。 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string buildId_;
    bool buildIdIsSet_;
    std::string elapseTime_;
    bool elapseTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string outcome_;
    bool outcomeIsSet_;
    std::string pipelineId_;
    bool pipelineIdIsSet_;
    std::string pipelineName_;
    bool pipelineNameIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineBuildResult_H_
