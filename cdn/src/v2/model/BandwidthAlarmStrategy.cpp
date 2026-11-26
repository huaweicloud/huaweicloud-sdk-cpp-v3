

#include "huaweicloud/cdn/v2/model/BandwidthAlarmStrategy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




BandwidthAlarmStrategy::BandwidthAlarmStrategy()
{
    status_ = "";
    statusIsSet_ = false;
    value_ = 0L;
    valueIsSet_ = false;
}

BandwidthAlarmStrategy::~BandwidthAlarmStrategy() = default;

void BandwidthAlarmStrategy::validate()
{
}

web::json::value BandwidthAlarmStrategy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool BandwidthAlarmStrategy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string BandwidthAlarmStrategy::getStatus() const
{
    return status_;
}

void BandwidthAlarmStrategy::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BandwidthAlarmStrategy::statusIsSet() const
{
    return statusIsSet_;
}

void BandwidthAlarmStrategy::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t BandwidthAlarmStrategy::getValue() const
{
    return value_;
}

void BandwidthAlarmStrategy::setValue(int64_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool BandwidthAlarmStrategy::valueIsSet() const
{
    return valueIsSet_;
}

void BandwidthAlarmStrategy::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


