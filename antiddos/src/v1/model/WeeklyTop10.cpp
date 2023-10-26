

#include "huaweicloud/antiddos/v1/model/WeeklyTop10.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




WeeklyTop10::WeeklyTop10()
{
    floatingIpAddress_ = "";
    floatingIpAddressIsSet_ = false;
    times_ = 0;
    timesIsSet_ = false;
}

WeeklyTop10::~WeeklyTop10() = default;

void WeeklyTop10::validate()
{
}

web::json::value WeeklyTop10::toJson() const
{
    web::json::value val = web::json::value::object();

    if(floatingIpAddressIsSet_) {
        val[utility::conversions::to_string_t("floating_ip_address")] = ModelBase::toJson(floatingIpAddress_);
    }
    if(timesIsSet_) {
        val[utility::conversions::to_string_t("times")] = ModelBase::toJson(times_);
    }

    return val;
}
bool WeeklyTop10::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("floating_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floating_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimes(refVal);
        }
    }
    return ok;
}


std::string WeeklyTop10::getFloatingIpAddress() const
{
    return floatingIpAddress_;
}

void WeeklyTop10::setFloatingIpAddress(const std::string& value)
{
    floatingIpAddress_ = value;
    floatingIpAddressIsSet_ = true;
}

bool WeeklyTop10::floatingIpAddressIsSet() const
{
    return floatingIpAddressIsSet_;
}

void WeeklyTop10::unsetfloatingIpAddress()
{
    floatingIpAddressIsSet_ = false;
}

int32_t WeeklyTop10::getTimes() const
{
    return times_;
}

void WeeklyTop10::setTimes(int32_t value)
{
    times_ = value;
    timesIsSet_ = true;
}

bool WeeklyTop10::timesIsSet() const
{
    return timesIsSet_;
}

void WeeklyTop10::unsettimes()
{
    timesIsSet_ = false;
}

}
}
}
}
}


