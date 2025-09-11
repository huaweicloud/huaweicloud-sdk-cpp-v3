

#include "huaweicloud/functiongraph/v2/model/CreateCallbackWorkflowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateCallbackWorkflowResponse::CreateCallbackWorkflowResponse()
{
    executionId_ = "";
    executionIdIsSet_ = false;
}

CreateCallbackWorkflowResponse::~CreateCallbackWorkflowResponse() = default;

void CreateCallbackWorkflowResponse::validate()
{
}

web::json::value CreateCallbackWorkflowResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(executionIdIsSet_) {
        val[utility::conversions::to_string_t("execution_id")] = ModelBase::toJson(executionId_);
    }

    return val;
}
bool CreateCallbackWorkflowResponse::fromJson(const web::json::value& val)
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


std::string CreateCallbackWorkflowResponse::getExecutionId() const
{
    return executionId_;
}

void CreateCallbackWorkflowResponse::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool CreateCallbackWorkflowResponse::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void CreateCallbackWorkflowResponse::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

}
}
}
}
}


