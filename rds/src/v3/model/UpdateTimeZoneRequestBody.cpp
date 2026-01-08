

#include "huaweicloud/rds/v3/model/UpdateTimeZoneRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateTimeZoneRequestBody::UpdateTimeZoneRequestBody()
{
    timeZone_ = "";
    timeZoneIsSet_ = false;
}

UpdateTimeZoneRequestBody::~UpdateTimeZoneRequestBody() = default;

void UpdateTimeZoneRequestBody::validate()
{
}

web::json::value UpdateTimeZoneRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }

    return val;
}
bool UpdateTimeZoneRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZone(refVal);
        }
    }
    return ok;
}


std::string UpdateTimeZoneRequestBody::getTimeZone() const
{
    return timeZone_;
}

void UpdateTimeZoneRequestBody::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool UpdateTimeZoneRequestBody::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void UpdateTimeZoneRequestBody::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

}
}
}
}
}


