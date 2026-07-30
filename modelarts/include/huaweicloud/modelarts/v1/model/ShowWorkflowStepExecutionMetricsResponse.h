
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowStepExecutionMetricsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowStepExecutionMetricsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkflowStepMetric.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowWorkflowStepExecutionMetricsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowWorkflowStepExecutionMetricsResponse();
    virtual ~ShowWorkflowStepExecutionMetricsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWorkflowStepExecutionMetricsResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<WorkflowStepMetric>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<WorkflowStepMetric>& value);


protected:
    std::vector<WorkflowStepMetric> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowStepExecutionMetricsResponse_H_
