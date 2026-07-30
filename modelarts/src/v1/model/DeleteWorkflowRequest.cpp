

#include "huaweicloud/modelarts/v1/model/DeleteWorkflowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteWorkflowRequest::DeleteWorkflowRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
}

DeleteWorkflowRequest::~DeleteWorkflowRequest() = default;

void DeleteWorkflowRequest::validate()
{
}

web::json::value DeleteWorkflowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }

    return val;
}
bool DeleteWorkflowRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
        }
    }
    return ok;
}


std::string DeleteWorkflowRequest::getWorkflowId() const
{
    return workflowId_;
}

void DeleteWorkflowRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool DeleteWorkflowRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void DeleteWorkflowRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

}
}
}
}
}


