

#include "huaweicloud/drs/v5/model/DeleteSubscriptionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DeleteSubscriptionResponse::DeleteSubscriptionResponse()
{
    bodyIsSet_ = false;
}

DeleteSubscriptionResponse::~DeleteSubscriptionResponse() = default;

void DeleteSubscriptionResponse::validate()
{
}

web::json::value DeleteSubscriptionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteSubscriptionResponse::fromJson(const web::json::value& val)
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


Object DeleteSubscriptionResponse::getBody() const
{
    return body_;
}

void DeleteSubscriptionResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteSubscriptionResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteSubscriptionResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


