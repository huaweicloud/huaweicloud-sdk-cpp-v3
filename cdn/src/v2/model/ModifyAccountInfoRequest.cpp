

#include "huaweicloud/cdn/v2/model/ModifyAccountInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ModifyAccountInfoRequest::ModifyAccountInfoRequest()
{
    bodyIsSet_ = false;
}

ModifyAccountInfoRequest::~ModifyAccountInfoRequest() = default;

void ModifyAccountInfoRequest::validate()
{
}

web::json::value ModifyAccountInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyAccountInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AccountConfigModifyRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AccountConfigModifyRequest ModifyAccountInfoRequest::getBody() const
{
    return body_;
}

void ModifyAccountInfoRequest::setBody(const AccountConfigModifyRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyAccountInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyAccountInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


