

#include "huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateSecurityGroupRuleRequest::NeutronCreateSecurityGroupRuleRequest()
{
    bodyIsSet_ = false;
}

NeutronCreateSecurityGroupRuleRequest::~NeutronCreateSecurityGroupRuleRequest() = default;

void NeutronCreateSecurityGroupRuleRequest::validate()
{
}

web::json::value NeutronCreateSecurityGroupRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool NeutronCreateSecurityGroupRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NeutronCreateSecurityGroupRuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


NeutronCreateSecurityGroupRuleRequestBody NeutronCreateSecurityGroupRuleRequest::getBody() const
{
    return body_;
}

void NeutronCreateSecurityGroupRuleRequest::setBody(const NeutronCreateSecurityGroupRuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronCreateSecurityGroupRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronCreateSecurityGroupRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


