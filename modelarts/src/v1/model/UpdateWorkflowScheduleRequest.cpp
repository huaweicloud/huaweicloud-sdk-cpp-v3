

#include "huaweicloud/modelarts/v1/model/UpdateWorkflowScheduleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateWorkflowScheduleRequest::UpdateWorkflowScheduleRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    scheduleId_ = "";
    scheduleIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateWorkflowScheduleRequest::~UpdateWorkflowScheduleRequest() = default;

void UpdateWorkflowScheduleRequest::validate()
{
}

web::json::value UpdateWorkflowScheduleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(scheduleIdIsSet_) {
        val[utility::conversions::to_string_t("schedule_id")] = ModelBase::toJson(scheduleId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateWorkflowScheduleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("schedule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            WorkflowScheduleUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateWorkflowScheduleRequest::getWorkflowId() const
{
    return workflowId_;
}

void UpdateWorkflowScheduleRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool UpdateWorkflowScheduleRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void UpdateWorkflowScheduleRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string UpdateWorkflowScheduleRequest::getScheduleId() const
{
    return scheduleId_;
}

void UpdateWorkflowScheduleRequest::setScheduleId(const std::string& value)
{
    scheduleId_ = value;
    scheduleIdIsSet_ = true;
}

bool UpdateWorkflowScheduleRequest::scheduleIdIsSet() const
{
    return scheduleIdIsSet_;
}

void UpdateWorkflowScheduleRequest::unsetscheduleId()
{
    scheduleIdIsSet_ = false;
}

WorkflowScheduleUpdate UpdateWorkflowScheduleRequest::getBody() const
{
    return body_;
}

void UpdateWorkflowScheduleRequest::setBody(const WorkflowScheduleUpdate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateWorkflowScheduleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateWorkflowScheduleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


