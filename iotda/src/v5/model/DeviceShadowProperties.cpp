

#include "huaweicloud/iotda/v5/model/DeviceShadowProperties.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeviceShadowProperties::DeviceShadowProperties()
{
    propertiesIsSet_ = false;
    eventTime_ = "";
    eventTimeIsSet_ = false;
}

DeviceShadowProperties::~DeviceShadowProperties() = default;

void DeviceShadowProperties::validate()
{
}

web::json::value DeviceShadowProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }
    if(eventTimeIsSet_) {
        val[utility::conversions::to_string_t("event_time")] = ModelBase::toJson(eventTime_);
    }

    return val;
}
bool DeviceShadowProperties::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventTime(refVal);
        }
    }
    return ok;
}


Object DeviceShadowProperties::getProperties() const
{
    return properties_;
}

void DeviceShadowProperties::setProperties(const Object& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool DeviceShadowProperties::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void DeviceShadowProperties::unsetproperties()
{
    propertiesIsSet_ = false;
}

std::string DeviceShadowProperties::getEventTime() const
{
    return eventTime_;
}

void DeviceShadowProperties::setEventTime(const std::string& value)
{
    eventTime_ = value;
    eventTimeIsSet_ = true;
}

bool DeviceShadowProperties::eventTimeIsSet() const
{
    return eventTimeIsSet_;
}

void DeviceShadowProperties::unseteventTime()
{
    eventTimeIsSet_ = false;
}

}
}
}
}
}


