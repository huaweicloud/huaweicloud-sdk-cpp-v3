

#include "huaweicloud/dbss/v1/model/MonitorInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




MonitorInfoRequest::MonitorInfoRequest()
{
    timeIsSet_ = false;
}

MonitorInfoRequest::~MonitorInfoRequest() = default;

void MonitorInfoRequest::validate()
{
}

web::json::value MonitorInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}
bool MonitorInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            Duration refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    return ok;
}


Duration MonitorInfoRequest::getTime() const
{
    return time_;
}

void MonitorInfoRequest::setTime(const Duration& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool MonitorInfoRequest::timeIsSet() const
{
    return timeIsSet_;
}

void MonitorInfoRequest::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


