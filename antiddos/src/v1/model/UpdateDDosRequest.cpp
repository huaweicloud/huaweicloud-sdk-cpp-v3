

#include "huaweicloud/antiddos/v1/model/UpdateDDosRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




UpdateDDosRequest::UpdateDDosRequest()
{
    floatingIpId_ = "";
    floatingIpIdIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDDosRequest::~UpdateDDosRequest() = default;

void UpdateDDosRequest::validate()
{
}

web::json::value UpdateDDosRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(floatingIpIdIsSet_) {
        val[utility::conversions::to_string_t("floating_ip_id")] = ModelBase::toJson(floatingIpId_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDDosRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateAntiDDosServiceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDDosRequest::getFloatingIpId() const
{
    return floatingIpId_;
}

void UpdateDDosRequest::setFloatingIpId(const std::string& value)
{
    floatingIpId_ = value;
    floatingIpIdIsSet_ = true;
}

bool UpdateDDosRequest::floatingIpIdIsSet() const
{
    return floatingIpIdIsSet_;
}

void UpdateDDosRequest::unsetfloatingIpId()
{
    floatingIpIdIsSet_ = false;
}

std::string UpdateDDosRequest::getIp() const
{
    return ip_;
}

void UpdateDDosRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool UpdateDDosRequest::ipIsSet() const
{
    return ipIsSet_;
}

void UpdateDDosRequest::unsetip()
{
    ipIsSet_ = false;
}

UpdateAntiDDosServiceRequestBody UpdateDDosRequest::getBody() const
{
    return body_;
}

void UpdateDDosRequest::setBody(const UpdateAntiDDosServiceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDDosRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDDosRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


