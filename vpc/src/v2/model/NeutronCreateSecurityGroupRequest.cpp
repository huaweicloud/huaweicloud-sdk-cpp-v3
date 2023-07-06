

#include "huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateSecurityGroupRequest::NeutronCreateSecurityGroupRequest()
{
    bodyIsSet_ = false;
}

NeutronCreateSecurityGroupRequest::~NeutronCreateSecurityGroupRequest() = default;

void NeutronCreateSecurityGroupRequest::validate()
{
}

web::json::value NeutronCreateSecurityGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool NeutronCreateSecurityGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NeutronCreateSecurityGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

NeutronCreateSecurityGroupRequestBody NeutronCreateSecurityGroupRequest::getBody() const
{
    return body_;
}

void NeutronCreateSecurityGroupRequest::setBody(const NeutronCreateSecurityGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronCreateSecurityGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronCreateSecurityGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


