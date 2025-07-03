

#include "huaweicloud/ecs/v2/model/UpdateScheduledEventRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateScheduledEventRequest::UpdateScheduledEventRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateScheduledEventRequest::~UpdateScheduledEventRequest() = default;

void UpdateScheduledEventRequest::validate()
{
}

web::json::value UpdateScheduledEventRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateScheduledEventRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ScheduledEventUpdateBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateScheduledEventRequest::getId() const
{
    return id_;
}

void UpdateScheduledEventRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateScheduledEventRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateScheduledEventRequest::unsetid()
{
    idIsSet_ = false;
}

ScheduledEventUpdateBody UpdateScheduledEventRequest::getBody() const
{
    return body_;
}

void UpdateScheduledEventRequest::setBody(const ScheduledEventUpdateBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateScheduledEventRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateScheduledEventRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


