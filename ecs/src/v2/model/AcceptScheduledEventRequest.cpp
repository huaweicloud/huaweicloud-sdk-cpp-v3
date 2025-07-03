

#include "huaweicloud/ecs/v2/model/AcceptScheduledEventRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




AcceptScheduledEventRequest::AcceptScheduledEventRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

AcceptScheduledEventRequest::~AcceptScheduledEventRequest() = default;

void AcceptScheduledEventRequest::validate()
{
}

web::json::value AcceptScheduledEventRequest::toJson() const
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
bool AcceptScheduledEventRequest::fromJson(const web::json::value& val)
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
            ScheduledEventAcceptBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AcceptScheduledEventRequest::getId() const
{
    return id_;
}

void AcceptScheduledEventRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AcceptScheduledEventRequest::idIsSet() const
{
    return idIsSet_;
}

void AcceptScheduledEventRequest::unsetid()
{
    idIsSet_ = false;
}

ScheduledEventAcceptBody AcceptScheduledEventRequest::getBody() const
{
    return body_;
}

void AcceptScheduledEventRequest::setBody(const ScheduledEventAcceptBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AcceptScheduledEventRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AcceptScheduledEventRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


