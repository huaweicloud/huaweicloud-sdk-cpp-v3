

#include "huaweicloud/antiddos/v1/model/EnableDefensePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




EnableDefensePolicyRequest::EnableDefensePolicyRequest()
{
    floatingIpId_ = "";
    floatingIpIdIsSet_ = false;
    bodyIsSet_ = false;
}

EnableDefensePolicyRequest::~EnableDefensePolicyRequest() = default;

void EnableDefensePolicyRequest::validate()
{
}

web::json::value EnableDefensePolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(floatingIpIdIsSet_) {
        val[utility::conversions::to_string_t("floating_ip_id")] = ModelBase::toJson(floatingIpId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool EnableDefensePolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("floating_ip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floating_ip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingIpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            OpenAntiDDosServiceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string EnableDefensePolicyRequest::getFloatingIpId() const
{
    return floatingIpId_;
}

void EnableDefensePolicyRequest::setFloatingIpId(const std::string& value)
{
    floatingIpId_ = value;
    floatingIpIdIsSet_ = true;
}

bool EnableDefensePolicyRequest::floatingIpIdIsSet() const
{
    return floatingIpIdIsSet_;
}

void EnableDefensePolicyRequest::unsetfloatingIpId()
{
    floatingIpIdIsSet_ = false;
}

OpenAntiDDosServiceRequestBody EnableDefensePolicyRequest::getBody() const
{
    return body_;
}

void EnableDefensePolicyRequest::setBody(const OpenAntiDDosServiceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool EnableDefensePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void EnableDefensePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


