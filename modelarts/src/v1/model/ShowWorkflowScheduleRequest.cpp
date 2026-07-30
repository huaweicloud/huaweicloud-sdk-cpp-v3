

#include "huaweicloud/modelarts/v1/model/ShowWorkflowScheduleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkflowScheduleRequest::ShowWorkflowScheduleRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    scheduleId_ = "";
    scheduleIdIsSet_ = false;
}

ShowWorkflowScheduleRequest::~ShowWorkflowScheduleRequest() = default;

void ShowWorkflowScheduleRequest::validate()
{
}

web::json::value ShowWorkflowScheduleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(scheduleIdIsSet_) {
        val[utility::conversions::to_string_t("schedule_id")] = ModelBase::toJson(scheduleId_);
    }

    return val;
}
bool ShowWorkflowScheduleRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowWorkflowScheduleRequest::getWorkflowId() const
{
    return workflowId_;
}

void ShowWorkflowScheduleRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ShowWorkflowScheduleRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ShowWorkflowScheduleRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string ShowWorkflowScheduleRequest::getScheduleId() const
{
    return scheduleId_;
}

void ShowWorkflowScheduleRequest::setScheduleId(const std::string& value)
{
    scheduleId_ = value;
    scheduleIdIsSet_ = true;
}

bool ShowWorkflowScheduleRequest::scheduleIdIsSet() const
{
    return scheduleIdIsSet_;
}

void ShowWorkflowScheduleRequest::unsetscheduleId()
{
    scheduleIdIsSet_ = false;
}

}
}
}
}
}


