

#include "huaweicloud/vpc/model/NeutronCreateFirewallPolicyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateFirewallPolicyRequest::NeutronCreateFirewallPolicyRequest()
{
    bodyIsSet_ = false;
}

NeutronCreateFirewallPolicyRequest::~NeutronCreateFirewallPolicyRequest() = default;

void NeutronCreateFirewallPolicyRequest::validate()
{
}

web::json::value NeutronCreateFirewallPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool NeutronCreateFirewallPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NeutronCreateFirewallPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


NeutronCreateFirewallPolicyRequestBody NeutronCreateFirewallPolicyRequest::getBody() const
{
    return body_;
}

void NeutronCreateFirewallPolicyRequest::setBody(const NeutronCreateFirewallPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronCreateFirewallPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronCreateFirewallPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


