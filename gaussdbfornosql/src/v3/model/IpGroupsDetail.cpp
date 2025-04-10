

#include "huaweicloud/gaussdbfornosql/v3/model/IpGroupsDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




IpGroupsDetail::IpGroupsDetail()
{
    ip_ = "";
    ipIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

IpGroupsDetail::~IpGroupsDetail() = default;

void IpGroupsDetail::validate()
{
}

web::json::value IpGroupsDetail::toJson() const
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
bool IpGroupsDetail::fromJson(const web::json::value& val)
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


std::string IpGroupsDetail::getIp() const
{
    return ip_;
}

void IpGroupsDetail::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool IpGroupsDetail::ipIsSet() const
{
    return ipIsSet_;
}

void IpGroupsDetail::unsetip()
{
    ipIsSet_ = false;
}

std::string IpGroupsDetail::getDescription() const
{
    return description_;
}

void IpGroupsDetail::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IpGroupsDetail::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IpGroupsDetail::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


