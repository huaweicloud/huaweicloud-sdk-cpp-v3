

#include "huaweicloud/modelarts/v1/model/ShowWorkflowScheduleListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkflowScheduleListResponse::ShowWorkflowScheduleListResponse()
{
    schedulesIsSet_ = false;
}

ShowWorkflowScheduleListResponse::~ShowWorkflowScheduleListResponse() = default;

void ShowWorkflowScheduleListResponse::validate()
{
}

web::json::value ShowWorkflowScheduleListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(schedulesIsSet_) {
        val[utility::conversions::to_string_t("schedules")] = ModelBase::toJson(schedules_);
    }

    return val;
}
bool ShowWorkflowScheduleListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("schedules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedules"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowScheduleResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchedules(refVal);
        }
    }
    return ok;
}


std::vector<WorkflowScheduleResp>& ShowWorkflowScheduleListResponse::getSchedules()
{
    return schedules_;
}

void ShowWorkflowScheduleListResponse::setSchedules(const std::vector<WorkflowScheduleResp>& value)
{
    schedules_ = value;
    schedulesIsSet_ = true;
}

bool ShowWorkflowScheduleListResponse::schedulesIsSet() const
{
    return schedulesIsSet_;
}

void ShowWorkflowScheduleListResponse::unsetschedules()
{
    schedulesIsSet_ = false;
}

}
}
}
}
}


