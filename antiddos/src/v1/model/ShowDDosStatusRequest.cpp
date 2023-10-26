

#include "huaweicloud/antiddos/v1/model/ShowDDosStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




ShowDDosStatusRequest::ShowDDosStatusRequest()
{
    floatingIpId_ = "";
    floatingIpIdIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
}

ShowDDosStatusRequest::~ShowDDosStatusRequest() = default;

void ShowDDosStatusRequest::validate()
{
}

web::json::value ShowDDosStatusRequest::toJson() const
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
bool ShowDDosStatusRequest::fromJson(const web::json::value& val)
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


std::string ShowDDosStatusRequest::getFloatingIpId() const
{
    return floatingIpId_;
}

void ShowDDosStatusRequest::setFloatingIpId(const std::string& value)
{
    floatingIpId_ = value;
    floatingIpIdIsSet_ = true;
}

bool ShowDDosStatusRequest::floatingIpIdIsSet() const
{
    return floatingIpIdIsSet_;
}

void ShowDDosStatusRequest::unsetfloatingIpId()
{
    floatingIpIdIsSet_ = false;
}

std::string ShowDDosStatusRequest::getIp() const
{
    return ip_;
}

void ShowDDosStatusRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ShowDDosStatusRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ShowDDosStatusRequest::unsetip()
{
    ipIsSet_ = false;
}

}
}
}
}
}


