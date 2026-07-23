

#include "huaweicloud/rds/v3/model/DeleteJobScheduleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteJobScheduleRequest::DeleteJobScheduleRequest()
{
    scheduleId_ = "";
    scheduleIdIsSet_ = false;
}

DeleteJobScheduleRequest::~DeleteJobScheduleRequest() = default;

void DeleteJobScheduleRequest::validate()
{
}

web::json::value DeleteJobScheduleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scheduleIdIsSet_) {
        val[utility::conversions::to_string_t("schedule_id")] = ModelBase::toJson(scheduleId_);
    }

    return val;
}
bool DeleteJobScheduleRequest::fromJson(const web::json::value& val)
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


std::string DeleteJobScheduleRequest::getScheduleId() const
{
    return scheduleId_;
}

void DeleteJobScheduleRequest::setScheduleId(const std::string& value)
{
    scheduleId_ = value;
    scheduleIdIsSet_ = true;
}

bool DeleteJobScheduleRequest::scheduleIdIsSet() const
{
    return scheduleIdIsSet_;
}

void DeleteJobScheduleRequest::unsetscheduleId()
{
    scheduleIdIsSet_ = false;
}

}
}
}
}
}


