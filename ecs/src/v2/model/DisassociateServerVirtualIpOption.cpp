

#include "huaweicloud/ecs/v2/model/DisassociateServerVirtualIpOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




DisassociateServerVirtualIpOption::DisassociateServerVirtualIpOption()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    reverseBinding_ = false;
    reverseBindingIsSet_ = false;
}

DisassociateServerVirtualIpOption::~DisassociateServerVirtualIpOption() = default;

void DisassociateServerVirtualIpOption::validate()
{
}

web::json::value DisassociateServerVirtualIpOption::toJson() const
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

bool DisassociateServerVirtualIpOption::fromJson(const web::json::value& val)
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


std::string DisassociateServerVirtualIpOption::getSubnetId() const
{
    return subnetId_;
}

void DisassociateServerVirtualIpOption::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool DisassociateServerVirtualIpOption::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void DisassociateServerVirtualIpOption::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string DisassociateServerVirtualIpOption::getIpAddress() const
{
    return ipAddress_;
}

void DisassociateServerVirtualIpOption::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool DisassociateServerVirtualIpOption::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void DisassociateServerVirtualIpOption::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

bool DisassociateServerVirtualIpOption::isReverseBinding() const
{
    return reverseBinding_;
}

void DisassociateServerVirtualIpOption::setReverseBinding(bool value)
{
    reverseBinding_ = value;
    reverseBindingIsSet_ = true;
}

bool DisassociateServerVirtualIpOption::reverseBindingIsSet() const
{
    return reverseBindingIsSet_;
}

void DisassociateServerVirtualIpOption::unsetreverseBinding()
{
    reverseBindingIsSet_ = false;
}

}
}
}
}
}


