

#include "huaweicloud/functiongraph/v2/model/StartWorkflowExecutionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




StartWorkflowExecutionResponse::StartWorkflowExecutionResponse()
{
    executionId_ = "";
    executionIdIsSet_ = false;
}

StartWorkflowExecutionResponse::~StartWorkflowExecutionResponse() = default;

void StartWorkflowExecutionResponse::validate()
{
}

web::json::value StartWorkflowExecutionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(executionIdIsSet_) {
        val[utility::conversions::to_string_t("execution_id")] = ModelBase::toJson(executionId_);
    }

    return val;
}
bool StartWorkflowExecutionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("execution_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionId(refVal);
        }
    }
    return ok;
}


std::string StartWorkflowExecutionResponse::getExecutionId() const
{
    return executionId_;
}

void StartWorkflowExecutionResponse::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool StartWorkflowExecutionResponse::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void StartWorkflowExecutionResponse::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

}
}
}
}
}


