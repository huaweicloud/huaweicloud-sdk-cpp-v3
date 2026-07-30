

#include "huaweicloud/modelarts/v1/model/UpdateWorkflowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateWorkflowRequest::UpdateWorkflowRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateWorkflowRequest::~UpdateWorkflowRequest() = default;

void UpdateWorkflowRequest::validate()
{
}

web::json::value UpdateWorkflowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateWorkflowRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            WorkflowUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateWorkflowRequest::getWorkflowId() const
{
    return workflowId_;
}

void UpdateWorkflowRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool UpdateWorkflowRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void UpdateWorkflowRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

WorkflowUpdate UpdateWorkflowRequest::getBody() const
{
    return body_;
}

void UpdateWorkflowRequest::setBody(const WorkflowUpdate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateWorkflowRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateWorkflowRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


