
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowSchedulePolicies_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowSchedulePolicies_H_


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
/// 工作流调度策略。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowSchedulePolicies
    : public ModelBase
{
public:
    WorkflowSchedulePolicies();
    virtual ~WorkflowSchedulePolicies();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowSchedulePolicies members

    /// <summary>
    /// 定时调度策略中的标记，失败时触发。
    /// </summary>

    std::string getOnFailure() const;
    bool onFailureIsSet() const;
    void unsetonFailure();
    void setOnFailure(const std::string& value);

    /// <summary>
    /// 定时调度策略中的标记，running时触发。
    /// </summary>

    std::string getOnRunning() const;
    bool onRunningIsSet() const;
    void unsetonRunning();
    void setOnRunning(const std::string& value);


protected:
    std::string onFailure_;
    bool onFailureIsSet_;
    std::string onRunning_;
    bool onRunningIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowSchedulePolicies_H_
