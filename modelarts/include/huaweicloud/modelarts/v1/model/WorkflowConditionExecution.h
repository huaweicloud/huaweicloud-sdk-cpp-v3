
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowConditionExecution_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowConditionExecution_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/modelarts/v1/model/WorkflowMetricPair.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowConditionExecution
    : public ModelBase
{
public:
    WorkflowConditionExecution();
    virtual ~WorkflowConditionExecution();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowConditionExecution members

    /// <summary>
    /// 执行结果。
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// 工作流度量信息列表。
    /// </summary>

    std::vector<WorkflowMetricPair>& getMetricList();
    bool metricListIsSet() const;
    void unsetmetricList();
    void setMetricList(const std::vector<WorkflowMetricPair>& value);


protected:
    std::string result_;
    bool resultIsSet_;
    std::vector<WorkflowMetricPair> metricList_;
    bool metricListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowConditionExecution_H_
