

#include "huaweicloud/smnglobal/v2/model/UpdateSubscriptionUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




UpdateSubscriptionUserRequest::UpdateSubscriptionUserRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSubscriptionUserRequest::~UpdateSubscriptionUserRequest() = default;

void UpdateSubscriptionUserRequest::validate()
{
}

web::json::value UpdateSubscriptionUserRequest::toJson() const
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
bool UpdateSubscriptionUserRequest::fromJson(const web::json::value& val)
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
            UpdateSubscriptionUserRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateSubscriptionUserRequest::getId() const
{
    return id_;
}

void UpdateSubscriptionUserRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateSubscriptionUserRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateSubscriptionUserRequest::unsetid()
{
    idIsSet_ = false;
}

UpdateSubscriptionUserRequestBody UpdateSubscriptionUserRequest::getBody() const
{
    return body_;
}

void UpdateSubscriptionUserRequest::setBody(const UpdateSubscriptionUserRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSubscriptionUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSubscriptionUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


