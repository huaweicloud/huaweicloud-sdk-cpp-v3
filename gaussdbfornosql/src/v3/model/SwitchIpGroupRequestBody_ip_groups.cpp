

#include "huaweicloud/gaussdbfornosql/v3/model/SwitchIpGroupRequestBody_ip_groups.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SwitchIpGroupRequestBody_ip_groups::SwitchIpGroupRequestBody_ip_groups()
{
    ip_ = "";
    ipIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

SwitchIpGroupRequestBody_ip_groups::~SwitchIpGroupRequestBody_ip_groups() = default;

void SwitchIpGroupRequestBody_ip_groups::validate()
{
}

web::json::value SwitchIpGroupRequestBody_ip_groups::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool SwitchIpGroupRequestBody_ip_groups::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string SwitchIpGroupRequestBody_ip_groups::getIp() const
{
    return ip_;
}

void SwitchIpGroupRequestBody_ip_groups::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool SwitchIpGroupRequestBody_ip_groups::ipIsSet() const
{
    return ipIsSet_;
}

void SwitchIpGroupRequestBody_ip_groups::unsetip()
{
    ipIsSet_ = false;
}

std::string SwitchIpGroupRequestBody_ip_groups::getDescription() const
{
    return description_;
}

void SwitchIpGroupRequestBody_ip_groups::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool SwitchIpGroupRequestBody_ip_groups::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void SwitchIpGroupRequestBody_ip_groups::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


