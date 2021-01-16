

#include "huaweicloud/ecs/v2/model/PostPaidServerNic.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PostPaidServerNic::PostPaidServerNic()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    ipv6Enable_ = false;
    ipv6EnableIsSet_ = false;
    ipv6BandwidthIsSet_ = false;
}

PostPaidServerNic::~PostPaidServerNic() = default;

void PostPaidServerNic::validate()
{
}

web::json::value PostPaidServerNic::toJson() const
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

bool PostPaidServerNic::fromJson(const web::json::value& val)
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
            PostPaidServerIpv6Bandwidth refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6Bandwidth(refVal);
        }
    }
    return ok;
}


std::string PostPaidServerNic::getSubnetId() const
{
    return subnetId_;
}

void PostPaidServerNic::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool PostPaidServerNic::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void PostPaidServerNic::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string PostPaidServerNic::getIpAddress() const
{
    return ipAddress_;
}

void PostPaidServerNic::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool PostPaidServerNic::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void PostPaidServerNic::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

bool PostPaidServerNic::isIpv6Enable() const
{
    return ipv6Enable_;
}

void PostPaidServerNic::setIpv6Enable(bool value)
{
    ipv6Enable_ = value;
    ipv6EnableIsSet_ = true;
}

bool PostPaidServerNic::ipv6EnableIsSet() const
{
    return ipv6EnableIsSet_;
}

void PostPaidServerNic::unsetipv6Enable()
{
    ipv6EnableIsSet_ = false;
}

PostPaidServerIpv6Bandwidth PostPaidServerNic::getIpv6Bandwidth() const
{
    return ipv6Bandwidth_;
}

void PostPaidServerNic::setIpv6Bandwidth(const PostPaidServerIpv6Bandwidth& value)
{
    ipv6Bandwidth_ = value;
    ipv6BandwidthIsSet_ = true;
}

bool PostPaidServerNic::ipv6BandwidthIsSet() const
{
    return ipv6BandwidthIsSet_;
}

void PostPaidServerNic::unsetipv6Bandwidth()
{
    ipv6BandwidthIsSet_ = false;
}

}
}
}
}
}


