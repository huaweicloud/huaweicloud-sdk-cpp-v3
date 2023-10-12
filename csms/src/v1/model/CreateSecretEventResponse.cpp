

#include "huaweicloud/csms/v1/model/CreateSecretEventResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CreateSecretEventResponse::CreateSecretEventResponse()
{
    eventIsSet_ = false;
}

CreateSecretEventResponse::~CreateSecretEventResponse() = default;

void CreateSecretEventResponse::validate()
{
}

web::json::value CreateSecretEventResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventIsSet_) {
        val[utility::conversions::to_string_t("event")] = ModelBase::toJson(event_);
    }

    return val;
}
bool CreateSecretEventResponse::fromJson(const web::json::value& val)
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


Event CreateSecretEventResponse::getEvent() const
{
    return event_;
}

void CreateSecretEventResponse::setEvent(const Event& value)
{
    event_ = value;
    eventIsSet_ = true;
}

bool CreateSecretEventResponse::eventIsSet() const
{
    return eventIsSet_;
}

void CreateSecretEventResponse::unsetevent()
{
    eventIsSet_ = false;
}

}
}
}
}
}


