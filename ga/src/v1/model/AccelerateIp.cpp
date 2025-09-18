

#include "huaweicloud/ga/v1/model/AccelerateIp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




AccelerateIp::AccelerateIp()
{
    ipType_ = "";
    ipTypeIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    areaIsSet_ = false;
}

AccelerateIp::~AccelerateIp() = default;

void AccelerateIp::validate()
{
}

web::json::value AccelerateIp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipTypeIsSet_) {
        val[utility::conversions::to_string_t("ip_type")] = ModelBase::toJson(ipType_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(areaIsSet_) {
        val[utility::conversions::to_string_t("area")] = ModelBase::toJson(area_);
    }

    return val;
}
bool AccelerateIp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("area"));
        if(!fieldValue.is_null())
        {
            Area refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArea(refVal);
        }
    }
    return ok;
}


std::string AccelerateIp::getIpType() const
{
    return ipType_;
}

void AccelerateIp::setIpType(const std::string& value)
{
    ipType_ = value;
    ipTypeIsSet_ = true;
}

bool AccelerateIp::ipTypeIsSet() const
{
    return ipTypeIsSet_;
}

void AccelerateIp::unsetipType()
{
    ipTypeIsSet_ = false;
}

std::string AccelerateIp::getIpAddress() const
{
    return ipAddress_;
}

void AccelerateIp::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool AccelerateIp::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void AccelerateIp::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

Area AccelerateIp::getArea() const
{
    return area_;
}

void AccelerateIp::setArea(const Area& value)
{
    area_ = value;
    areaIsSet_ = true;
}

bool AccelerateIp::areaIsSet() const
{
    return areaIsSet_;
}

void AccelerateIp::unsetarea()
{
    areaIsSet_ = false;
}

}
}
}
}
}


