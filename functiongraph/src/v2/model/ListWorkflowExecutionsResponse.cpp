

#include "huaweicloud/functiongraph/v2/model/ListWorkflowExecutionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListWorkflowExecutionsResponse::ListWorkflowExecutionsResponse()
{
    executionsIsSet_ = false;
}

ListWorkflowExecutionsResponse::~ListWorkflowExecutionsResponse() = default;

void ListWorkflowExecutionsResponse::validate()
{
}

web::json::value ListWorkflowExecutionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(executionsIsSet_) {
        val[utility::conversions::to_string_t("executions")] = ModelBase::toJson(executions_);
    }

    return val;
}
bool ListWorkflowExecutionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("executions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executions"));
        if(!fieldValue.is_null())
        {
            std::vector<FlowExecutionBrief> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutions(refVal);
        }
    }
    return ok;
}


std::vector<FlowExecutionBrief>& ListWorkflowExecutionsResponse::getExecutions()
{
    return executions_;
}

void ListWorkflowExecutionsResponse::setExecutions(const std::vector<FlowExecutionBrief>& value)
{
    executions_ = value;
    executionsIsSet_ = true;
}

bool ListWorkflowExecutionsResponse::executionsIsSet() const
{
    return executionsIsSet_;
}

void ListWorkflowExecutionsResponse::unsetexecutions()
{
    executionsIsSet_ = false;
}

}
}
}
}
}


