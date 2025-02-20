

#include "huaweicloud/smnglobal/v2/model/CreateSubscriptionUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




CreateSubscriptionUserRequest::CreateSubscriptionUserRequest()
{
    bodyIsSet_ = false;
}

CreateSubscriptionUserRequest::~CreateSubscriptionUserRequest() = default;

void CreateSubscriptionUserRequest::validate()
{
}

web::json::value CreateSubscriptionUserRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateSubscriptionUserRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateSubscriptionUserRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateSubscriptionUserRequestBody CreateSubscriptionUserRequest::getBody() const
{
    return body_;
}

void CreateSubscriptionUserRequest::setBody(const CreateSubscriptionUserRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSubscriptionUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSubscriptionUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


