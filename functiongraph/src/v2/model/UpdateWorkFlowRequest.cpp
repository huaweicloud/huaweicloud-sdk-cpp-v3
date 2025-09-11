

#include "huaweicloud/functiongraph/v2/model/UpdateWorkFlowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateWorkFlowRequest::UpdateWorkFlowRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateWorkFlowRequest::~UpdateWorkFlowRequest() = default;

void UpdateWorkFlowRequest::validate()
{
}

web::json::value UpdateWorkFlowRequest::toJson() const
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
bool UpdateWorkFlowRequest::fromJson(const web::json::value& val)
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
            WorkflowCreateBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateWorkFlowRequest::getWorkflowId() const
{
    return workflowId_;
}

void UpdateWorkFlowRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool UpdateWorkFlowRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void UpdateWorkFlowRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

WorkflowCreateBody UpdateWorkFlowRequest::getBody() const
{
    return body_;
}

void UpdateWorkFlowRequest::setBody(const WorkflowCreateBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateWorkFlowRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateWorkFlowRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


