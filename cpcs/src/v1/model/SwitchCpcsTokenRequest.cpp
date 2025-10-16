

#include "huaweicloud/cpcs/v1/model/SwitchCpcsTokenRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




SwitchCpcsTokenRequest::SwitchCpcsTokenRequest()
{
    bodyIsSet_ = false;
}

SwitchCpcsTokenRequest::~SwitchCpcsTokenRequest() = default;

void SwitchCpcsTokenRequest::validate()
{
}

web::json::value SwitchCpcsTokenRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SwitchCpcsTokenRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AuthObject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AuthObject SwitchCpcsTokenRequest::getBody() const
{
    return body_;
}

void SwitchCpcsTokenRequest::setBody(const AuthObject& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchCpcsTokenRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchCpcsTokenRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


