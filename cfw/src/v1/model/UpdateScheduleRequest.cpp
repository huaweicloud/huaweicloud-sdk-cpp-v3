

#include "huaweicloud/cfw/v1/model/UpdateScheduleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateScheduleRequest::UpdateScheduleRequest()
{
    scheduleId_ = "";
    scheduleIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateScheduleRequest::~UpdateScheduleRequest() = default;

void UpdateScheduleRequest::validate()
{
}

web::json::value UpdateScheduleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scheduleIdIsSet_) {
        val[utility::conversions::to_string_t("schedule_id")] = ModelBase::toJson(scheduleId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateScheduleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ScheduleInfoDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateScheduleRequest::getScheduleId() const
{
    return scheduleId_;
}

void UpdateScheduleRequest::setScheduleId(const std::string& value)
{
    scheduleId_ = value;
    scheduleIdIsSet_ = true;
}

bool UpdateScheduleRequest::scheduleIdIsSet() const
{
    return scheduleIdIsSet_;
}

void UpdateScheduleRequest::unsetscheduleId()
{
    scheduleIdIsSet_ = false;
}

ScheduleInfoDTO UpdateScheduleRequest::getBody() const
{
    return body_;
}

void UpdateScheduleRequest::setBody(const ScheduleInfoDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateScheduleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateScheduleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


