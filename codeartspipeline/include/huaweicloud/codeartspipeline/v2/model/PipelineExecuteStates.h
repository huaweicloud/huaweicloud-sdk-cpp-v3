
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineExecuteStates_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineExecuteStates_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/Stages.h>
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
/// 流水线执行结果
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PipelineExecuteStates
    : public ModelBase
{
public:
    PipelineExecuteStates();
    virtual ~PipelineExecuteStates();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineExecuteStates members

    /// <summary>
    /// 流水线执行结果。取值及含义：success：成功；error：失败；aborted：终止
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// 流水线执行状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 阶段执行情况
    /// </summary>

    std::vector<Stages>& getStages();
    bool stagesIsSet() const;
    void unsetstages();
    void setStages(const std::vector<Stages>& value);

    /// <summary>
    /// 执行人
    /// </summary>

    std::string getExecutor() const;
    bool executorIsSet() const;
    void unsetexecutor();
    void setExecutor(const std::string& value);

    /// <summary>
    /// 流水线名字
    /// </summary>

    std::string getPipelineName() const;
    bool pipelineNameIsSet() const;
    void unsetpipelineName();
    void setPipelineName(const std::string& value);

    /// <summary>
    /// 流水线ID
    /// </summary>

    std::string getPipelineId() const;
    bool pipelineIdIsSet() const;
    void unsetpipelineId();
    void setPipelineId(const std::string& value);

    /// <summary>
    /// 流水线执行ID
    /// </summary>

    std::string getBuildId() const;
    bool buildIdIsSet() const;
    void unsetbuildId();
    void setBuildId(const std::string& value);

    /// <summary>
    /// 流水线详情页URL
    /// </summary>

    std::string getDetailUrl() const;
    bool detailUrlIsSet() const;
    void unsetdetailUrl();
    void setDetailUrl(const std::string& value);

    /// <summary>
    /// 流水线编辑页URL
    /// </summary>

    std::string getModifyUrl() const;
    bool modifyUrlIsSet() const;
    void unsetmodifyUrl();
    void setModifyUrl(const std::string& value);

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


protected:
    std::string result_;
    bool resultIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<Stages> stages_;
    bool stagesIsSet_;
    std::string executor_;
    bool executorIsSet_;
    std::string pipelineName_;
    bool pipelineNameIsSet_;
    std::string pipelineId_;
    bool pipelineIdIsSet_;
    std::string buildId_;
    bool buildIdIsSet_;
    std::string detailUrl_;
    bool detailUrlIsSet_;
    std::string modifyUrl_;
    bool modifyUrlIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineExecuteStates_H_
