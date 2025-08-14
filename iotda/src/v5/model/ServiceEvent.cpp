

#include "huaweicloud/iotda/v5/model/ServiceEvent.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ServiceEvent::ServiceEvent()
{
    eventType_ = "";
    eventTypeIsSet_ = false;
    parasIsSet_ = false;
}

ServiceEvent::~ServiceEvent() = default;

void ServiceEvent::validate()
{
}

web::json::value ServiceEvent::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventTypeIsSet_) {
        val[utility::conversions::to_string_t("event_type")] = ModelBase::toJson(eventType_);
    }
    if(parasIsSet_) {
        val[utility::conversions::to_string_t("paras")] = ModelBase::toJson(paras_);
    }

    return val;
}
bool ServiceEvent::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("paras"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("paras"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceCommandPara> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParas(refVal);
        }
    }
    return ok;
}


std::string ServiceEvent::getEventType() const
{
    return eventType_;
}

void ServiceEvent::setEventType(const std::string& value)
{
    eventType_ = value;
    eventTypeIsSet_ = true;
}

bool ServiceEvent::eventTypeIsSet() const
{
    return eventTypeIsSet_;
}

void ServiceEvent::unseteventType()
{
    eventTypeIsSet_ = false;
}

std::vector<ServiceCommandPara>& ServiceEvent::getParas()
{
    return paras_;
}

void ServiceEvent::setParas(const std::vector<ServiceCommandPara>& value)
{
    paras_ = value;
    parasIsSet_ = true;
}

bool ServiceEvent::parasIsSet() const
{
    return parasIsSet_;
}

void ServiceEvent::unsetparas()
{
    parasIsSet_ = false;
}

}
}
}
}
}


