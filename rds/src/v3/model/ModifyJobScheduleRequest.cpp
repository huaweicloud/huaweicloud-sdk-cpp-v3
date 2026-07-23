

#include "huaweicloud/rds/v3/model/ModifyJobScheduleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyJobScheduleRequest::ModifyJobScheduleRequest()
{
    scheduleId_ = "";
    scheduleIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyJobScheduleRequest::~ModifyJobScheduleRequest() = default;

void ModifyJobScheduleRequest::validate()
{
}

web::json::value ModifyJobScheduleRequest::toJson() const
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
bool ModifyJobScheduleRequest::fromJson(const web::json::value& val)
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
            ModifyJobScheduleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyJobScheduleRequest::getScheduleId() const
{
    return scheduleId_;
}

void ModifyJobScheduleRequest::setScheduleId(const std::string& value)
{
    scheduleId_ = value;
    scheduleIdIsSet_ = true;
}

bool ModifyJobScheduleRequest::scheduleIdIsSet() const
{
    return scheduleIdIsSet_;
}

void ModifyJobScheduleRequest::unsetscheduleId()
{
    scheduleIdIsSet_ = false;
}

ModifyJobScheduleRequestBody ModifyJobScheduleRequest::getBody() const
{
    return body_;
}

void ModifyJobScheduleRequest::setBody(const ModifyJobScheduleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyJobScheduleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyJobScheduleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


