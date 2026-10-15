

#include "huaweicloud/drs/v5/model/StartSubscriptionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




StartSubscriptionResponse::StartSubscriptionResponse()
{
    bodyIsSet_ = false;
}

StartSubscriptionResponse::~StartSubscriptionResponse() = default;

void StartSubscriptionResponse::validate()
{
}

web::json::value StartSubscriptionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool StartSubscriptionResponse::fromJson(const web::json::value& val)
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


Object StartSubscriptionResponse::getBody() const
{
    return body_;
}

void StartSubscriptionResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartSubscriptionResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartSubscriptionResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


