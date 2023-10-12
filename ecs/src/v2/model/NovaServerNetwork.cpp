

#include "huaweicloud/ecs/v2/model/NovaServerNetwork.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaServerNetwork::NovaServerNetwork()
{
    port_ = "";
    portIsSet_ = false;
    uuid_ = "";
    uuidIsSet_ = false;
    fixedIp_ = "";
    fixedIpIsSet_ = false;
}

NovaServerNetwork::~NovaServerNetwork() = default;

void NovaServerNetwork::validate()
{
}

web::json::value NovaServerNetwork::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(fixedIpIsSet_) {
        val[utility::conversions::to_string_t("fixed_ip")] = ModelBase::toJson(fixedIp_);
    }

    return val;
}
bool NovaServerNetwork::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fixed_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedIp(refVal);
        }
    }
    return ok;
}


std::string NovaServerNetwork::getPort() const
{
    return port_;
}

void NovaServerNetwork::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool NovaServerNetwork::portIsSet() const
{
    return portIsSet_;
}

void NovaServerNetwork::unsetport()
{
    portIsSet_ = false;
}

std::string NovaServerNetwork::getUuid() const
{
    return uuid_;
}

void NovaServerNetwork::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool NovaServerNetwork::uuidIsSet() const
{
    return uuidIsSet_;
}

void NovaServerNetwork::unsetuuid()
{
    uuidIsSet_ = false;
}

std::string NovaServerNetwork::getFixedIp() const
{
    return fixedIp_;
}

void NovaServerNetwork::setFixedIp(const std::string& value)
{
    fixedIp_ = value;
    fixedIpIsSet_ = true;
}

bool NovaServerNetwork::fixedIpIsSet() const
{
    return fixedIpIsSet_;
}

void NovaServerNetwork::unsetfixedIp()
{
    fixedIpIsSet_ = false;
}

}
}
}
}
}


