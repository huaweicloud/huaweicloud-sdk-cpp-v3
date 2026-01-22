

#include "huaweicloud/cfw/v1/model/SwitchFirewallEipProtectionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




SwitchFirewallEipProtectionRequest::SwitchFirewallEipProtectionRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchFirewallEipProtectionRequest::~SwitchFirewallEipProtectionRequest() = default;

void SwitchFirewallEipProtectionRequest::validate()
{
}

web::json::value SwitchFirewallEipProtectionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SwitchFirewallEipProtectionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            EipBypassDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchFirewallEipProtectionRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void SwitchFirewallEipProtectionRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool SwitchFirewallEipProtectionRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void SwitchFirewallEipProtectionRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

EipBypassDto SwitchFirewallEipProtectionRequest::getBody() const
{
    return body_;
}

void SwitchFirewallEipProtectionRequest::setBody(const EipBypassDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchFirewallEipProtectionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchFirewallEipProtectionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


