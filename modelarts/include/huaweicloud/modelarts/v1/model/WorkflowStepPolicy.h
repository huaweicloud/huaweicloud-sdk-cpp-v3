
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowStepPolicy_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowStepPolicy_H_


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
/// 节点执行策略。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowStepPolicy
    : public ModelBase
{
public:
    WorkflowStepPolicy();
    virtual ~WorkflowStepPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowStepPolicy members

    /// <summary>
    /// 节点执行间隔。
    /// </summary>

    std::string getPollIntervalSeconds() const;
    bool pollIntervalSecondsIsSet() const;
    void unsetpollIntervalSeconds();
    void setPollIntervalSeconds(const std::string& value);

    /// <summary>
    /// 最大执行时间。
    /// </summary>

    std::string getMaxExecutionMinutes() const;
    bool maxExecutionMinutesIsSet() const;
    void unsetmaxExecutionMinutes();
    void setMaxExecutionMinutes(const std::string& value);


protected:
    std::string pollIntervalSeconds_;
    bool pollIntervalSecondsIsSet_;
    std::string maxExecutionMinutes_;
    bool maxExecutionMinutesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowStepPolicy_H_
