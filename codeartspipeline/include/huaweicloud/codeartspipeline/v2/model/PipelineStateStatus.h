
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineStateStatus_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineStateStatus_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PipelineStateStatus
    : public ModelBase
{
public:
    PipelineStateStatus();
    virtual ~PipelineStateStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineStateStatus members

    /// <summary>
    /// 阶段或任务标识
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 阶段或任务名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 类别(阶段/任务)
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 执行开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 执行结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 运行耗时
    /// </summary>

    std::string getElapsedTime() const;
    bool elapsedTimeIsSet() const;
    void unsetelapsedTime();
    void setElapsedTime(const std::string& value);

    /// <summary>
    /// 运行状态。取值和含义：waiting：等待;running：执行中;verifying：待审核；suspending：挂起;completed：完成
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 运行结果。取值及含义：success：成功；error：失败；aborted：终止
    /// </summary>

    std::string getOutcome() const;
    bool outcomeIsSet() const;
    void unsetoutcome();
    void setOutcome(const std::string& value);

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 错误信息
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);

    /// <summary>
    /// 子任务运行信息(对任务来说是空的)
    /// </summary>

    std::vector<PipelineStateStatus>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<PipelineStateStatus>& value);

    /// <summary>
    /// 任务运行记录跳转链接
    /// </summary>

    std::string getDetailUrl() const;
    bool detailUrlIsSet() const;
    void unsetdetailUrl();
    void setDetailUrl(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string elapsedTime_;
    bool elapsedTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string outcome_;
    bool outcomeIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;
    std::vector<PipelineStateStatus>* children_;
    bool childrenIsSet_;
    std::string detailUrl_;
    bool detailUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineStateStatus_H_
