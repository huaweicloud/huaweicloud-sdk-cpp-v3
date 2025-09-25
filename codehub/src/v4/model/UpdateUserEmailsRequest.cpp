

#include "huaweicloud/codehub/v4/model/UpdateUserEmailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateUserEmailsRequest::UpdateUserEmailsRequest()
{
    bodyIsSet_ = false;
}

UpdateUserEmailsRequest::~UpdateUserEmailsRequest() = default;

void UpdateUserEmailsRequest::validate()
{
}

web::json::value UpdateUserEmailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateUserEmailsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyEmailAddressDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ModifyEmailAddressDto UpdateUserEmailsRequest::getBody() const
{
    return body_;
}

void UpdateUserEmailsRequest::setBody(const ModifyEmailAddressDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateUserEmailsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateUserEmailsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


