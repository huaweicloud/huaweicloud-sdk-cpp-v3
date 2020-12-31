

#include "huaweicloud/vpc/model/NeutronCreateFirewallRuleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateFirewallRuleRequest::NeutronCreateFirewallRuleRequest()
{
    bodyIsSet_ = false;
}

NeutronCreateFirewallRuleRequest::~NeutronCreateFirewallRuleRequest() = default;

void NeutronCreateFirewallRuleRequest::validate()
{
}

web::json::value NeutronCreateFirewallRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool NeutronCreateFirewallRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NeutronCreateFirewallRuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


NeutronCreateFirewallRuleRequestBody NeutronCreateFirewallRuleRequest::getBody() const
{
    return body_;
}

void NeutronCreateFirewallRuleRequest::setBody(const NeutronCreateFirewallRuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronCreateFirewallRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronCreateFirewallRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


