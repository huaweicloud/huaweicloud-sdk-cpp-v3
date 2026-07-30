
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowConditionExecutionResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowConditionExecutionResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/modelarts/v1/model/WorkflowMetricPairResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// workflow condition execution
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowConditionExecutionResp
    : public ModelBase
{
public:
    WorkflowConditionExecutionResp();
    virtual ~WorkflowConditionExecutionResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowConditionExecutionResp members

    /// <summary>
    /// **参数解释**：执行结果。 **取值范围**：不涉及。
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// **参数解释**：工作流度量信息列表。
    /// </summary>

    std::vector<WorkflowMetricPairResp>& getMetricList();
    bool metricListIsSet() const;
    void unsetmetricList();
    void setMetricList(const std::vector<WorkflowMetricPairResp>& value);


protected:
    std::string result_;
    bool resultIsSet_;
    std::vector<WorkflowMetricPairResp> metricList_;
    bool metricListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowConditionExecutionResp_H_
