

#include "huaweicloud/cdn/v2/model/CreateSubscriptionTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CreateSubscriptionTaskRequest::CreateSubscriptionTaskRequest()
{
    bodyIsSet_ = false;
}

CreateSubscriptionTaskRequest::~CreateSubscriptionTaskRequest() = default;

void CreateSubscriptionTaskRequest::validate()
{
}

web::json::value CreateSubscriptionTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateSubscriptionTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


SubscriptionTaskVo CreateSubscriptionTaskRequest::getBody() const
{
    return body_;
}

void CreateSubscriptionTaskRequest::setBody(const SubscriptionTaskVo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSubscriptionTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSubscriptionTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


