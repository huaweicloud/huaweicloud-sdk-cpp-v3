
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPipleineStatusResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPipleineStatusResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/PipelineParameter.h>
#include <string>
#include <huaweicloud/codeartspipeline/v2/model/PipelineStateStatus.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ShowPipleineStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPipleineStatusResponse();
    virtual ~ShowPipleineStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPipleineStatusResponse members

    /// <summary>
    /// 流水线ID
    /// </summary>

    std::string getPipelineId() const;
    bool pipelineIdIsSet() const;
    void unsetpipelineId();
    void setPipelineId(const std::string& value);

    /// <summary>
    /// 流水线名称
    /// </summary>

    std::string getPipelineName() const;
    bool pipelineNameIsSet() const;
    void unsetpipelineName();
    void setPipelineName(const std::string& value);

    /// <summary>
    /// 执行人
    /// </summary>

    std::string getExecutor() const;
    bool executorIsSet() const;
    void unsetexecutor();
    void setExecutor(const std::string& value);

    /// <summary>
    /// 流水线执行ID
    /// </summary>

    std::string getBuildId() const;
    bool buildIdIsSet() const;
    void unsetbuildId();
    void setBuildId(const std::string& value);

    /// <summary>
    /// 开始执行时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束执行时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 流水线参数
    /// </summary>

    std::vector<PipelineParameter>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<PipelineParameter>& value);

    /// <summary>
    /// 流水线执行情况
    /// </summary>

    std::vector<PipelineStateStatus>& getStates();
    bool statesIsSet() const;
    void unsetstates();
    void setStates(const std::vector<PipelineStateStatus>& value);

    /// <summary>
    /// 执行耗时
    /// </summary>

    std::string getElapsedTime() const;
    bool elapsedTimeIsSet() const;
    void unsetelapsedTime();
    void setElapsedTime(const std::string& value);

    /// <summary>
    /// 流水线运行状态。取值及含义：waiting：等待；running：执行中；verifying：待审核；suspending：挂起；completed：完成。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 流水线执行结果。取值及含义：success：成功；error：失败；aborted：终止
    /// </summary>

    std::string getOutcome() const;
    bool outcomeIsSet() const;
    void unsetoutcome();
    void setOutcome(const std::string& value);

    /// <summary>
    /// 流水线详情页地址
    /// </summary>

    std::string getDetailUrl() const;
    bool detailUrlIsSet() const;
    void unsetdetailUrl();
    void setDetailUrl(const std::string& value);


protected:
    std::string pipelineId_;
    bool pipelineIdIsSet_;
    std::string pipelineName_;
    bool pipelineNameIsSet_;
    std::string executor_;
    bool executorIsSet_;
    std::string buildId_;
    bool buildIdIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::vector<PipelineParameter> parameters_;
    bool parametersIsSet_;
    std::vector<PipelineStateStatus> states_;
    bool statesIsSet_;
    std::string elapsedTime_;
    bool elapsedTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string outcome_;
    bool outcomeIsSet_;
    std::string detailUrl_;
    bool detailUrlIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPipleineStatusResponse_H_
