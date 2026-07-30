

#include "huaweicloud/modelarts/v1/model/DeleteWorkflowScheduleIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteWorkflowScheduleIdRequest::DeleteWorkflowScheduleIdRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    scheduleId_ = "";
    scheduleIdIsSet_ = false;
}

DeleteWorkflowScheduleIdRequest::~DeleteWorkflowScheduleIdRequest() = default;

void DeleteWorkflowScheduleIdRequest::validate()
{
}

web::json::value DeleteWorkflowScheduleIdRequest::toJson() const
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
bool DeleteWorkflowScheduleIdRequest::fromJson(const web::json::value& val)
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


std::string DeleteWorkflowScheduleIdRequest::getWorkflowId() const
{
    return workflowId_;
}

void DeleteWorkflowScheduleIdRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool DeleteWorkflowScheduleIdRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void DeleteWorkflowScheduleIdRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string DeleteWorkflowScheduleIdRequest::getScheduleId() const
{
    return scheduleId_;
}

void DeleteWorkflowScheduleIdRequest::setScheduleId(const std::string& value)
{
    scheduleId_ = value;
    scheduleIdIsSet_ = true;
}

bool DeleteWorkflowScheduleIdRequest::scheduleIdIsSet() const
{
    return scheduleIdIsSet_;
}

void DeleteWorkflowScheduleIdRequest::unsetscheduleId()
{
    scheduleIdIsSet_ = false;
}

}
}
}
}
}


