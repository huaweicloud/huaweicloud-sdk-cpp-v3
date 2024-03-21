

#include "huaweicloud/live/v1/model/LiveRequestArgs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




LiveRequestArgs::LiveRequestArgs()
{
    delay_ = "";
    delayIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
}

LiveRequestArgs::~LiveRequestArgs() = default;

void LiveRequestArgs::validate()
{
}

web::json::value LiveRequestArgs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }

    return val;
}
bool LiveRequestArgs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    return ok;
}


std::string LiveRequestArgs::getDelay() const
{
    return delay_;
}

void LiveRequestArgs::setDelay(const std::string& value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool LiveRequestArgs::delayIsSet() const
{
    return delayIsSet_;
}

void LiveRequestArgs::unsetdelay()
{
    delayIsSet_ = false;
}

std::string LiveRequestArgs::getUnit() const
{
    return unit_;
}

void LiveRequestArgs::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool LiveRequestArgs::unitIsSet() const
{
    return unitIsSet_;
}

void LiveRequestArgs::unsetunit()
{
    unitIsSet_ = false;
}

}
}
}
}
}


