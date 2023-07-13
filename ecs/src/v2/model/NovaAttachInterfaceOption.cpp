

#include "huaweicloud/ecs/v2/model/NovaAttachInterfaceOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaAttachInterfaceOption::NovaAttachInterfaceOption()
{
    fixedIpsIsSet_ = false;
    netId_ = "";
    netIdIsSet_ = false;
    portId_ = "";
    portIdIsSet_ = false;
}

NovaAttachInterfaceOption::~NovaAttachInterfaceOption() = default;

void NovaAttachInterfaceOption::validate()
{
}

web::json::value NovaAttachInterfaceOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fixedIpsIsSet_) {
        val[utility::conversions::to_string_t("fixed_ips")] = ModelBase::toJson(fixedIps_);
    }
    if(netIdIsSet_) {
        val[utility::conversions::to_string_t("net_id")] = ModelBase::toJson(netId_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }

    return val;
}

bool NovaAttachInterfaceOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fixed_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaAttachInterfaceFixedIp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("net_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetId(refVal);
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
    return ok;
}

std::vector<NovaAttachInterfaceFixedIp>& NovaAttachInterfaceOption::getFixedIps()
{
    return fixedIps_;
}

void NovaAttachInterfaceOption::setFixedIps(const std::vector<NovaAttachInterfaceFixedIp>& value)
{
    fixedIps_ = value;
    fixedIpsIsSet_ = true;
}

bool NovaAttachInterfaceOption::fixedIpsIsSet() const
{
    return fixedIpsIsSet_;
}

void NovaAttachInterfaceOption::unsetfixedIps()
{
    fixedIpsIsSet_ = false;
}

std::string NovaAttachInterfaceOption::getNetId() const
{
    return netId_;
}

void NovaAttachInterfaceOption::setNetId(const std::string& value)
{
    netId_ = value;
    netIdIsSet_ = true;
}

bool NovaAttachInterfaceOption::netIdIsSet() const
{
    return netIdIsSet_;
}

void NovaAttachInterfaceOption::unsetnetId()
{
    netIdIsSet_ = false;
}

std::string NovaAttachInterfaceOption::getPortId() const
{
    return portId_;
}

void NovaAttachInterfaceOption::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool NovaAttachInterfaceOption::portIdIsSet() const
{
    return portIdIsSet_;
}

void NovaAttachInterfaceOption::unsetportId()
{
    portIdIsSet_ = false;
}

}
}
}
}
}


