

#include "huaweicloud/drs/v5/model/UpdateSubscriptionInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateSubscriptionInfoResponse::UpdateSubscriptionInfoResponse()
{
    bodyIsSet_ = false;
}

UpdateSubscriptionInfoResponse::~UpdateSubscriptionInfoResponse() = default;

void UpdateSubscriptionInfoResponse::validate()
{
}

web::json::value UpdateSubscriptionInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateSubscriptionInfoResponse::fromJson(const web::json::value& val)
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


Object UpdateSubscriptionInfoResponse::getBody() const
{
    return body_;
}

void UpdateSubscriptionInfoResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSubscriptionInfoResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSubscriptionInfoResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


