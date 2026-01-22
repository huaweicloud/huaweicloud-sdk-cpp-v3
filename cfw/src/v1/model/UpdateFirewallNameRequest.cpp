

#include "huaweicloud/cfw/v1/model/UpdateFirewallNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateFirewallNameRequest::UpdateFirewallNameRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateFirewallNameRequest::~UpdateFirewallNameRequest() = default;

void UpdateFirewallNameRequest::validate()
{
}

web::json::value UpdateFirewallNameRequest::toJson() const
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
bool UpdateFirewallNameRequest::fromJson(const web::json::value& val)
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
            UpdateFirewallNameDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateFirewallNameRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void UpdateFirewallNameRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool UpdateFirewallNameRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void UpdateFirewallNameRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

UpdateFirewallNameDto UpdateFirewallNameRequest::getBody() const
{
    return body_;
}

void UpdateFirewallNameRequest::setBody(const UpdateFirewallNameDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateFirewallNameRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateFirewallNameRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


