

#include "huaweicloud/cfw/v1/model/DeleteScheduleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteScheduleRequest::DeleteScheduleRequest()
{
    scheduleId_ = "";
    scheduleIdIsSet_ = false;
}

DeleteScheduleRequest::~DeleteScheduleRequest() = default;

void DeleteScheduleRequest::validate()
{
}

web::json::value DeleteScheduleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scheduleIdIsSet_) {
        val[utility::conversions::to_string_t("schedule_id")] = ModelBase::toJson(scheduleId_);
    }

    return val;
}
bool DeleteScheduleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string DeleteScheduleRequest::getScheduleId() const
{
    return scheduleId_;
}

void DeleteScheduleRequest::setScheduleId(const std::string& value)
{
    scheduleId_ = value;
    scheduleIdIsSet_ = true;
}

bool DeleteScheduleRequest::scheduleIdIsSet() const
{
    return scheduleIdIsSet_;
}

void DeleteScheduleRequest::unsetscheduleId()
{
    scheduleIdIsSet_ = false;
}

}
}
}
}
}


