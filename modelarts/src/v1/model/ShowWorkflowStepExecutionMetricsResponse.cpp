

#include "huaweicloud/modelarts/v1/model/ShowWorkflowStepExecutionMetricsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkflowStepExecutionMetricsResponse::ShowWorkflowStepExecutionMetricsResponse()
{
    bodyIsSet_ = false;
}

ShowWorkflowStepExecutionMetricsResponse::~ShowWorkflowStepExecutionMetricsResponse() = default;

void ShowWorkflowStepExecutionMetricsResponse::validate()
{
}

web::json::value ShowWorkflowStepExecutionMetricsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowWorkflowStepExecutionMetricsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowStepMetric> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<WorkflowStepMetric>& ShowWorkflowStepExecutionMetricsResponse::getBody()
{
    return body_;
}

void ShowWorkflowStepExecutionMetricsResponse::setBody(const std::vector<WorkflowStepMetric>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowWorkflowStepExecutionMetricsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowWorkflowStepExecutionMetricsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


