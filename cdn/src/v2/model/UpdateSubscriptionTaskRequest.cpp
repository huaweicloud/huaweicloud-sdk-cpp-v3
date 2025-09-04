

#include "huaweicloud/cdn/v2/model/UpdateSubscriptionTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




UpdateSubscriptionTaskRequest::UpdateSubscriptionTaskRequest()
{
    id_ = 0L;
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSubscriptionTaskRequest::~UpdateSubscriptionTaskRequest() = default;

void UpdateSubscriptionTaskRequest::validate()
{
}

web::json::value UpdateSubscriptionTaskRequest::toJson() const
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
bool UpdateSubscriptionTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SubscriptionTaskVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int64_t UpdateSubscriptionTaskRequest::getId() const
{
    return id_;
}

void UpdateSubscriptionTaskRequest::setId(int64_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateSubscriptionTaskRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateSubscriptionTaskRequest::unsetid()
{
    idIsSet_ = false;
}

SubscriptionTaskVo UpdateSubscriptionTaskRequest::getBody() const
{
    return body_;
}

void UpdateSubscriptionTaskRequest::setBody(const SubscriptionTaskVo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSubscriptionTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSubscriptionTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


