

#include "huaweicloud/csms/v1/model/ShowSecretEventResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ShowSecretEventResponse::ShowSecretEventResponse()
{
    eventIsSet_ = false;
}

ShowSecretEventResponse::~ShowSecretEventResponse() = default;

void ShowSecretEventResponse::validate()
{
}

web::json::value ShowSecretEventResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventIsSet_) {
        val[utility::conversions::to_string_t("event")] = ModelBase::toJson(event_);
    }

    return val;
}

bool ShowSecretEventResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event"));
        if(!fieldValue.is_null())
        {
            Event refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvent(refVal);
        }
    }
    return ok;
}

Event ShowSecretEventResponse::getEvent() const
{
    return event_;
}

void ShowSecretEventResponse::setEvent(const Event& value)
{
    event_ = value;
    eventIsSet_ = true;
}

bool ShowSecretEventResponse::eventIsSet() const
{
    return eventIsSet_;
}

void ShowSecretEventResponse::unsetevent()
{
    eventIsSet_ = false;
}

}
}
}
}
}


