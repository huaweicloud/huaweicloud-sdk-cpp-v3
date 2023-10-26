

#include "huaweicloud/antiddos/v1/model/ShowDDosRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




ShowDDosRequest::ShowDDosRequest()
{
    floatingIpId_ = "";
    floatingIpIdIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
}

ShowDDosRequest::~ShowDDosRequest() = default;

void ShowDDosRequest::validate()
{
}

web::json::value ShowDDosRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(floatingIpIdIsSet_) {
        val[utility::conversions::to_string_t("floating_ip_id")] = ModelBase::toJson(floatingIpId_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }

    return val;
}
bool ShowDDosRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowDDosRequest::getFloatingIpId() const
{
    return floatingIpId_;
}

void ShowDDosRequest::setFloatingIpId(const std::string& value)
{
    floatingIpId_ = value;
    floatingIpIdIsSet_ = true;
}

bool ShowDDosRequest::floatingIpIdIsSet() const
{
    return floatingIpIdIsSet_;
}

void ShowDDosRequest::unsetfloatingIpId()
{
    floatingIpIdIsSet_ = false;
}

std::string ShowDDosRequest::getIp() const
{
    return ip_;
}

void ShowDDosRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ShowDDosRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ShowDDosRequest::unsetip()
{
    ipIsSet_ = false;
}

}
}
}
}
}


