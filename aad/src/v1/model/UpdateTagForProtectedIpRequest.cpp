

#include "huaweicloud/aad/v1/model/UpdateTagForProtectedIpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




UpdateTagForProtectedIpRequest::UpdateTagForProtectedIpRequest()
{
    bodyIsSet_ = false;
}

UpdateTagForProtectedIpRequest::~UpdateTagForProtectedIpRequest() = default;

void UpdateTagForProtectedIpRequest::validate()
{
}

web::json::value UpdateTagForProtectedIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateTagForProtectedIpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateProtectedIpBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateProtectedIpBody UpdateTagForProtectedIpRequest::getBody() const
{
    return body_;
}

void UpdateTagForProtectedIpRequest::setBody(const UpdateProtectedIpBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTagForProtectedIpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTagForProtectedIpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


