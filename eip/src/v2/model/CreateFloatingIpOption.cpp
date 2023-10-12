

#include "huaweicloud/eip/v2/model/CreateFloatingIpOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CreateFloatingIpOption::CreateFloatingIpOption()
{
    floatingIpAddress_ = "";
    floatingIpAddressIsSet_ = false;
    floatingNetworkId_ = "";
    floatingNetworkIdIsSet_ = false;
    portId_ = "";
    portIdIsSet_ = false;
    fixedIpAddress_ = "";
    fixedIpAddressIsSet_ = false;
}

CreateFloatingIpOption::~CreateFloatingIpOption() = default;

void CreateFloatingIpOption::validate()
{
}

web::json::value CreateFloatingIpOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(floatingIpAddressIsSet_) {
        val[utility::conversions::to_string_t("floating_ip_address")] = ModelBase::toJson(floatingIpAddress_);
    }
    if(floatingNetworkIdIsSet_) {
        val[utility::conversions::to_string_t("floating_network_id")] = ModelBase::toJson(floatingNetworkId_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(fixedIpAddressIsSet_) {
        val[utility::conversions::to_string_t("fixed_ip_address")] = ModelBase::toJson(fixedIpAddress_);
    }

    return val;
}
bool CreateFloatingIpOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("floating_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floating_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("floating_network_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floating_network_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingNetworkId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fixed_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedIpAddress(refVal);
        }
    }
    return ok;
}


std::string CreateFloatingIpOption::getFloatingIpAddress() const
{
    return floatingIpAddress_;
}

void CreateFloatingIpOption::setFloatingIpAddress(const std::string& value)
{
    floatingIpAddress_ = value;
    floatingIpAddressIsSet_ = true;
}

bool CreateFloatingIpOption::floatingIpAddressIsSet() const
{
    return floatingIpAddressIsSet_;
}

void CreateFloatingIpOption::unsetfloatingIpAddress()
{
    floatingIpAddressIsSet_ = false;
}

std::string CreateFloatingIpOption::getFloatingNetworkId() const
{
    return floatingNetworkId_;
}

void CreateFloatingIpOption::setFloatingNetworkId(const std::string& value)
{
    floatingNetworkId_ = value;
    floatingNetworkIdIsSet_ = true;
}

bool CreateFloatingIpOption::floatingNetworkIdIsSet() const
{
    return floatingNetworkIdIsSet_;
}

void CreateFloatingIpOption::unsetfloatingNetworkId()
{
    floatingNetworkIdIsSet_ = false;
}

std::string CreateFloatingIpOption::getPortId() const
{
    return portId_;
}

void CreateFloatingIpOption::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool CreateFloatingIpOption::portIdIsSet() const
{
    return portIdIsSet_;
}

void CreateFloatingIpOption::unsetportId()
{
    portIdIsSet_ = false;
}

std::string CreateFloatingIpOption::getFixedIpAddress() const
{
    return fixedIpAddress_;
}

void CreateFloatingIpOption::setFixedIpAddress(const std::string& value)
{
    fixedIpAddress_ = value;
    fixedIpAddressIsSet_ = true;
}

bool CreateFloatingIpOption::fixedIpAddressIsSet() const
{
    return fixedIpAddressIsSet_;
}

void CreateFloatingIpOption::unsetfixedIpAddress()
{
    fixedIpAddressIsSet_ = false;
}

}
}
}
}
}


