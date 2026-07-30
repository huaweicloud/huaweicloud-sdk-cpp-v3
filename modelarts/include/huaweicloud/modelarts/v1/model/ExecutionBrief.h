
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ExecutionBrief_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ExecutionBrief_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作流执行简要信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ExecutionBrief
    : public ModelBase
{
public:
    ExecutionBrief();
    virtual ~ExecutionBrief();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExecutionBrief members

    /// <summary>
    /// 工作流执行ID。
    /// </summary>

    std::string getExecutionId() const;
    bool executionIdIsSet() const;
    void unsetexecutionId();
    void setExecutionId(const std::string& value);

    /// <summary>
    /// 工作流执行的创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 工作流状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 运行的节点。
    /// </summary>

    std::vector<std::string>& getRunningSteps();
    bool runningStepsIsSet() const;
    void unsetrunningSteps();
    void setRunningSteps(const std::vector<std::string>& value);

    /// <summary>
    /// 当前节点。
    /// </summary>

    std::vector<std::string>& getCurrentSteps();
    bool currentStepsIsSet() const;
    void unsetcurrentSteps();
    void setCurrentSteps(const std::vector<std::string>& value);

    /// <summary>
    /// 运行时长。
    /// </summary>

    int64_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int64_t value);


protected:
    std::string executionId_;
    bool executionIdIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> runningSteps_;
    bool runningStepsIsSet_;
    std::vector<std::string> currentSteps_;
    bool currentStepsIsSet_;
    int64_t duration_;
    bool durationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ExecutionBrief_H_
