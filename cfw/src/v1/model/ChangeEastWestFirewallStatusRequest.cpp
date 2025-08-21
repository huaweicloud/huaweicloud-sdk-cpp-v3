

#include "huaweicloud/cfw/v1/model/ChangeEastWestFirewallStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeEastWestFirewallStatusRequest::ChangeEastWestFirewallStatusRequest()
{
    bodyIsSet_ = false;
}

ChangeEastWestFirewallStatusRequest::~ChangeEastWestFirewallStatusRequest() = default;

void ChangeEastWestFirewallStatusRequest::validate()
{
}

web::json::value ChangeEastWestFirewallStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ChangeEastWestFirewallStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ChangeProtectStatusRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ChangeProtectStatusRequestBody ChangeEastWestFirewallStatusRequest::getBody() const
{
    return body_;
}

void ChangeEastWestFirewallStatusRequest::setBody(const ChangeProtectStatusRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeEastWestFirewallStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeEastWestFirewallStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


