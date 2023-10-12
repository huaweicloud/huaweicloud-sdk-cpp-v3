

#include "huaweicloud/csms/v1/model/UpdateSecretEventRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateSecretEventRequest::UpdateSecretEventRequest()
{
    eventName_ = "";
    eventNameIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSecretEventRequest::~UpdateSecretEventRequest() = default;

void UpdateSecretEventRequest::validate()
{
}

web::json::value UpdateSecretEventRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventNameIsSet_) {
        val[utility::conversions::to_string_t("event_name")] = ModelBase::toJson(eventName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateSecretEventRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateSecretEventRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateSecretEventRequest::getEventName() const
{
    return eventName_;
}

void UpdateSecretEventRequest::setEventName(const std::string& value)
{
    eventName_ = value;
    eventNameIsSet_ = true;
}

bool UpdateSecretEventRequest::eventNameIsSet() const
{
    return eventNameIsSet_;
}

void UpdateSecretEventRequest::unseteventName()
{
    eventNameIsSet_ = false;
}

UpdateSecretEventRequestBody UpdateSecretEventRequest::getBody() const
{
    return body_;
}

void UpdateSecretEventRequest::setBody(const UpdateSecretEventRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSecretEventRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSecretEventRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


