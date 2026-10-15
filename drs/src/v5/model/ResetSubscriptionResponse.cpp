

#include "huaweicloud/drs/v5/model/ResetSubscriptionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ResetSubscriptionResponse::ResetSubscriptionResponse()
{
    bodyIsSet_ = false;
}

ResetSubscriptionResponse::~ResetSubscriptionResponse() = default;

void ResetSubscriptionResponse::validate()
{
}

web::json::value ResetSubscriptionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ResetSubscriptionResponse::fromJson(const web::json::value& val)
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


Object ResetSubscriptionResponse::getBody() const
{
    return body_;
}

void ResetSubscriptionResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetSubscriptionResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetSubscriptionResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


