

#include "huaweicloud/csms/v1/model/UpdateSecretEventResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateSecretEventResponse::UpdateSecretEventResponse()
{
    eventIsSet_ = false;
}

UpdateSecretEventResponse::~UpdateSecretEventResponse() = default;

void UpdateSecretEventResponse::validate()
{
}

web::json::value UpdateSecretEventResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventIsSet_) {
        val[utility::conversions::to_string_t("event")] = ModelBase::toJson(event_);
    }

    return val;
}

bool UpdateSecretEventResponse::fromJson(const web::json::value& val)
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

Event UpdateSecretEventResponse::getEvent() const
{
    return event_;
}

void UpdateSecretEventResponse::setEvent(const Event& value)
{
    event_ = value;
    eventIsSet_ = true;
}

bool UpdateSecretEventResponse::eventIsSet() const
{
    return eventIsSet_;
}

void UpdateSecretEventResponse::unsetevent()
{
    eventIsSet_ = false;
}

}
}
}
}
}


