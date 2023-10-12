

#include "huaweicloud/csms/v1/model/DeleteSecretEventRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




DeleteSecretEventRequest::DeleteSecretEventRequest()
{
    eventName_ = "";
    eventNameIsSet_ = false;
}

DeleteSecretEventRequest::~DeleteSecretEventRequest() = default;

void DeleteSecretEventRequest::validate()
{
}

web::json::value DeleteSecretEventRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventNameIsSet_) {
        val[utility::conversions::to_string_t("event_name")] = ModelBase::toJson(eventName_);
    }

    return val;
}
bool DeleteSecretEventRequest::fromJson(const web::json::value& val)
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


std::string DeleteSecretEventRequest::getEventName() const
{
    return eventName_;
}

void DeleteSecretEventRequest::setEventName(const std::string& value)
{
    eventName_ = value;
    eventNameIsSet_ = true;
}

bool DeleteSecretEventRequest::eventNameIsSet() const
{
    return eventNameIsSet_;
}

void DeleteSecretEventRequest::unseteventName()
{
    eventNameIsSet_ = false;
}

}
}
}
}
}


