

#include "huaweicloud/iotda/v5/model/RoutingRuleSubject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




RoutingRuleSubject::RoutingRuleSubject()
{
    resource_ = "";
    resourceIsSet_ = false;
    event_ = "";
    eventIsSet_ = false;
}

RoutingRuleSubject::~RoutingRuleSubject() = default;

void RoutingRuleSubject::validate()
{
}

web::json::value RoutingRuleSubject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(eventIsSet_) {
        val[utility::conversions::to_string_t("event")] = ModelBase::toJson(event_);
    }

    return val;
}
bool RoutingRuleSubject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvent(refVal);
        }
    }
    return ok;
}


std::string RoutingRuleSubject::getResource() const
{
    return resource_;
}

void RoutingRuleSubject::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool RoutingRuleSubject::resourceIsSet() const
{
    return resourceIsSet_;
}

void RoutingRuleSubject::unsetresource()
{
    resourceIsSet_ = false;
}

std::string RoutingRuleSubject::getEvent() const
{
    return event_;
}

void RoutingRuleSubject::setEvent(const std::string& value)
{
    event_ = value;
    eventIsSet_ = true;
}

bool RoutingRuleSubject::eventIsSet() const
{
    return eventIsSet_;
}

void RoutingRuleSubject::unsetevent()
{
    eventIsSet_ = false;
}

}
}
}
}
}


