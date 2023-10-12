

#include "huaweicloud/csms/v1/model/ShowSecretEventRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ShowSecretEventRequest::ShowSecretEventRequest()
{
    eventName_ = "";
    eventNameIsSet_ = false;
}

ShowSecretEventRequest::~ShowSecretEventRequest() = default;

void ShowSecretEventRequest::validate()
{
}

web::json::value ShowSecretEventRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventNameIsSet_) {
        val[utility::conversions::to_string_t("event_name")] = ModelBase::toJson(eventName_);
    }

    return val;
}
bool ShowSecretEventRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventName(refVal);
        }
    }
    return ok;
}


std::string ShowSecretEventRequest::getEventName() const
{
    return eventName_;
}

void ShowSecretEventRequest::setEventName(const std::string& value)
{
    eventName_ = value;
    eventNameIsSet_ = true;
}

bool ShowSecretEventRequest::eventNameIsSet() const
{
    return eventNameIsSet_;
}

void ShowSecretEventRequest::unseteventName()
{
    eventNameIsSet_ = false;
}

}
}
}
}
}


