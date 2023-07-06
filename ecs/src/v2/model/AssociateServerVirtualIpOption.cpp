

#include "huaweicloud/ecs/v2/model/AssociateServerVirtualIpOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




AssociateServerVirtualIpOption::AssociateServerVirtualIpOption()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    reverseBinding_ = false;
    reverseBindingIsSet_ = false;
}

AssociateServerVirtualIpOption::~AssociateServerVirtualIpOption() = default;

void AssociateServerVirtualIpOption::validate()
{
}

web::json::value AssociateServerVirtualIpOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(reverseBindingIsSet_) {
        val[utility::conversions::to_string_t("reverse_binding")] = ModelBase::toJson(reverseBinding_);
    }

    return val;
}

bool AssociateServerVirtualIpOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("reverse_binding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reverse_binding"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReverseBinding(refVal);
        }
    }
    return ok;
}

std::string AssociateServerVirtualIpOption::getSubnetId() const
{
    return subnetId_;
}

void AssociateServerVirtualIpOption::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool AssociateServerVirtualIpOption::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void AssociateServerVirtualIpOption::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string AssociateServerVirtualIpOption::getIpAddress() const
{
    return ipAddress_;
}

void AssociateServerVirtualIpOption::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool AssociateServerVirtualIpOption::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void AssociateServerVirtualIpOption::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

bool AssociateServerVirtualIpOption::isReverseBinding() const
{
    return reverseBinding_;
}

void AssociateServerVirtualIpOption::setReverseBinding(bool value)
{
    reverseBinding_ = value;
    reverseBindingIsSet_ = true;
}

bool AssociateServerVirtualIpOption::reverseBindingIsSet() const
{
    return reverseBindingIsSet_;
}

void AssociateServerVirtualIpOption::unsetreverseBinding()
{
    reverseBindingIsSet_ = false;
}

}
}
}
}
}


