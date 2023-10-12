

#include "huaweicloud/vpc/v2/model/NeutronCreateFirewallGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateFirewallGroupRequest::NeutronCreateFirewallGroupRequest()
{
    bodyIsSet_ = false;
}

NeutronCreateFirewallGroupRequest::~NeutronCreateFirewallGroupRequest() = default;

void NeutronCreateFirewallGroupRequest::validate()
{
}

web::json::value NeutronCreateFirewallGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool NeutronCreateFirewallGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NeutronCreateFirewallGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


NeutronCreateFirewallGroupRequestBody NeutronCreateFirewallGroupRequest::getBody() const
{
    return body_;
}

void NeutronCreateFirewallGroupRequest::setBody(const NeutronCreateFirewallGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronCreateFirewallGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronCreateFirewallGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


