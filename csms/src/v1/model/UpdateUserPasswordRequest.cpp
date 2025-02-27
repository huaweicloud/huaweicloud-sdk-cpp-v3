

#include "huaweicloud/csms/v1/model/UpdateUserPasswordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateUserPasswordRequest::UpdateUserPasswordRequest()
{
    bodyIsSet_ = false;
}

UpdateUserPasswordRequest::~UpdateUserPasswordRequest() = default;

void UpdateUserPasswordRequest::validate()
{
}

web::json::value UpdateUserPasswordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateUserPasswordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ChangeUsersPassword refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ChangeUsersPassword UpdateUserPasswordRequest::getBody() const
{
    return body_;
}

void UpdateUserPasswordRequest::setBody(const ChangeUsersPassword& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateUserPasswordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateUserPasswordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


