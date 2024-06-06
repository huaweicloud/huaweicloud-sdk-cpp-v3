

#include "huaweicloud/gaussdb/v3/model/IpGroupItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




IpGroupItem::IpGroupItem()
{
    ip_ = "";
    ipIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

IpGroupItem::~IpGroupItem() = default;

void IpGroupItem::validate()
{
}

web::json::value IpGroupItem::toJson() const
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
bool IpGroupItem::fromJson(const web::json::value& val)
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


std::string IpGroupItem::getIp() const
{
    return ip_;
}

void IpGroupItem::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool IpGroupItem::ipIsSet() const
{
    return ipIsSet_;
}

void IpGroupItem::unsetip()
{
    ipIsSet_ = false;
}

std::string IpGroupItem::getDescription() const
{
    return description_;
}

void IpGroupItem::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IpGroupItem::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IpGroupItem::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


