

#include "huaweicloud/aad/v1/model/ModifyDomainWebSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ModifyDomainWebSwitchRequest::ModifyDomainWebSwitchRequest()
{
    bodyIsSet_ = false;
}

ModifyDomainWebSwitchRequest::~ModifyDomainWebSwitchRequest() = default;

void ModifyDomainWebSwitchRequest::validate()
{
}

web::json::value ModifyDomainWebSwitchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyDomainWebSwitchRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CadDomainSwitchRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CadDomainSwitchRequest ModifyDomainWebSwitchRequest::getBody() const
{
    return body_;
}

void ModifyDomainWebSwitchRequest::setBody(const CadDomainSwitchRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyDomainWebSwitchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyDomainWebSwitchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


