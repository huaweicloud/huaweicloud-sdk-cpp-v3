
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowSchedulePoliciesResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowSchedulePoliciesResp_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowSchedulePoliciesResp
    : public ModelBase
{
public:
    WorkflowSchedulePoliciesResp();
    virtual ~WorkflowSchedulePoliciesResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowSchedulePoliciesResp members

    /// <summary>
    /// **参数解释**：定时调度策略中的标记，失败时触发。 **取值范围**：不涉及。
    /// </summary>

    std::string getOnFailure() const;
    bool onFailureIsSet() const;
    void unsetonFailure();
    void setOnFailure(const std::string& value);

    /// <summary>
    /// **参数解释**：定时调度策略中的标记，running时触发。 **取值范围**：不涉及。
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowSchedulePoliciesResp_H_
