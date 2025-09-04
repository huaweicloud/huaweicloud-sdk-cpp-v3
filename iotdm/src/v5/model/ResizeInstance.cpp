

#include "huaweicloud/iotdm/v5/model/ResizeInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




ResizeInstance::ResizeInstance()
{
    flavorIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
    delay_ = false;
    delayIsSet_ = false;
}

ResizeInstance::~ResizeInstance() = default;

void ResizeInstance::validate()
{
}

web::json::value ResizeInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }
    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }

    return val;
}
bool ResizeInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            Flavor refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    return ok;
}


Flavor ResizeInstance::getFlavor() const
{
    return flavor_;
}

void ResizeInstance::setFlavor(const Flavor& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool ResizeInstance::flavorIsSet() const
{
    return flavorIsSet_;
}

void ResizeInstance::unsetflavor()
{
    flavorIsSet_ = false;
}

bool ResizeInstance::isIsAutoPay() const
{
    return isAutoPay_;
}

void ResizeInstance::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ResizeInstance::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ResizeInstance::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

bool ResizeInstance::isDelay() const
{
    return delay_;
}

void ResizeInstance::setDelay(bool value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool ResizeInstance::delayIsSet() const
{
    return delayIsSet_;
}

void ResizeInstance::unsetdelay()
{
    delayIsSet_ = false;
}

}
}
}
}
}


