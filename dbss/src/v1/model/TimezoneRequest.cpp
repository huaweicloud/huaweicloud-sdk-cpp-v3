

#include "huaweicloud/dbss/v1/model/TimezoneRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




TimezoneRequest::TimezoneRequest()
{
    timezone_ = "";
    timezoneIsSet_ = false;
}

TimezoneRequest::~TimezoneRequest() = default;

void TimezoneRequest::validate()
{
}

web::json::value TimezoneRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timezoneIsSet_) {
        val[utility::conversions::to_string_t("timezone")] = ModelBase::toJson(timezone_);
    }

    return val;
}
bool TimezoneRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("timezone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timezone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimezone(refVal);
        }
    }
    return ok;
}


std::string TimezoneRequest::getTimezone() const
{
    return timezone_;
}

void TimezoneRequest::setTimezone(const std::string& value)
{
    timezone_ = value;
    timezoneIsSet_ = true;
}

bool TimezoneRequest::timezoneIsSet() const
{
    return timezoneIsSet_;
}

void TimezoneRequest::unsettimezone()
{
    timezoneIsSet_ = false;
}

}
}
}
}
}


