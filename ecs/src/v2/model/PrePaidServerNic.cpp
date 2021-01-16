

#include "huaweicloud/ecs/v2/model/PrePaidServerNic.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PrePaidServerNic::PrePaidServerNic()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    ipv6Enable_ = false;
    ipv6EnableIsSet_ = false;
    ipv6BandwidthIsSet_ = false;
}

PrePaidServerNic::~PrePaidServerNic() = default;

void PrePaidServerNic::validate()
{
}

web::json::value PrePaidServerNic::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(ipv6EnableIsSet_) {
        val[utility::conversions::to_string_t("ipv6_enable")] = ModelBase::toJson(ipv6Enable_);
    }
    if(ipv6BandwidthIsSet_) {
        val[utility::conversions::to_string_t("ipv6_bandwidth")] = ModelBase::toJson(ipv6Bandwidth_);
    }

    return val;
}

bool PrePaidServerNic::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ipv6_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6Enable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipv6_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6_bandwidth"));
        if(!fieldValue.is_null())
        {
            PrePaidServerIpv6Bandwidth refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6Bandwidth(refVal);
        }
    }
    return ok;
}


std::string PrePaidServerNic::getSubnetId() const
{
    return subnetId_;
}

void PrePaidServerNic::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool PrePaidServerNic::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void PrePaidServerNic::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string PrePaidServerNic::getIpAddress() const
{
    return ipAddress_;
}

void PrePaidServerNic::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool PrePaidServerNic::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void PrePaidServerNic::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

bool PrePaidServerNic::isIpv6Enable() const
{
    return ipv6Enable_;
}

void PrePaidServerNic::setIpv6Enable(bool value)
{
    ipv6Enable_ = value;
    ipv6EnableIsSet_ = true;
}

bool PrePaidServerNic::ipv6EnableIsSet() const
{
    return ipv6EnableIsSet_;
}

void PrePaidServerNic::unsetipv6Enable()
{
    ipv6EnableIsSet_ = false;
}

PrePaidServerIpv6Bandwidth PrePaidServerNic::getIpv6Bandwidth() const
{
    return ipv6Bandwidth_;
}

void PrePaidServerNic::setIpv6Bandwidth(const PrePaidServerIpv6Bandwidth& value)
{
    ipv6Bandwidth_ = value;
    ipv6BandwidthIsSet_ = true;
}

bool PrePaidServerNic::ipv6BandwidthIsSet() const
{
    return ipv6BandwidthIsSet_;
}

void PrePaidServerNic::unsetipv6Bandwidth()
{
    ipv6BandwidthIsSet_ = false;
}

}
}
}
}
}


