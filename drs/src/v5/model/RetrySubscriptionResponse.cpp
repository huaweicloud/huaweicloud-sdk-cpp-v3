

#include "huaweicloud/drs/v5/model/RetrySubscriptionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




RetrySubscriptionResponse::RetrySubscriptionResponse()
{
    bodyIsSet_ = false;
}

RetrySubscriptionResponse::~RetrySubscriptionResponse() = default;

void RetrySubscriptionResponse::validate()
{
}

web::json::value RetrySubscriptionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RetrySubscriptionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object RetrySubscriptionResponse::getBody() const
{
    return body_;
}

void RetrySubscriptionResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RetrySubscriptionResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void RetrySubscriptionResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


