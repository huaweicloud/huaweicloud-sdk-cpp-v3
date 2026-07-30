

#include "huaweicloud/modelarts/v1/model/CreateWorkflowScheduleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateWorkflowScheduleRequest::CreateWorkflowScheduleRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateWorkflowScheduleRequest::~CreateWorkflowScheduleRequest() = default;

void CreateWorkflowScheduleRequest::validate()
{
}

web::json::value CreateWorkflowScheduleRequest::toJson() const
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
bool CreateWorkflowScheduleRequest::fromJson(const web::json::value& val)
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
            WorkflowSchedule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateWorkflowScheduleRequest::getWorkflowId() const
{
    return workflowId_;
}

void CreateWorkflowScheduleRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool CreateWorkflowScheduleRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void CreateWorkflowScheduleRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

WorkflowSchedule CreateWorkflowScheduleRequest::getBody() const
{
    return body_;
}

void CreateWorkflowScheduleRequest::setBody(const WorkflowSchedule& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateWorkflowScheduleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateWorkflowScheduleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


