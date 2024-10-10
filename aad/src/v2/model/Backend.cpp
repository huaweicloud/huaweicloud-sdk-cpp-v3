

#include "huaweicloud/aad/v2/model/Backend.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




Backend::Backend()
{
    protocol_ = "";
    protocolIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
}

Backend::~Backend() = default;

void Backend::validate()
{
}

web::json::value Backend::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(hostIsSet_) {
        val[utility::conversions::to_string_t("host")] = ModelBase::toJson(host_);
    }

    return val;
}
bool Backend::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHost(refVal);
        }
    }
    return ok;
}


std::string Backend::getProtocol() const
{
    return protocol_;
}

void Backend::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool Backend::protocolIsSet() const
{
    return protocolIsSet_;
}

void Backend::unsetprotocol()
{
    protocolIsSet_ = false;
}

int32_t Backend::getPort() const
{
    return port_;
}

void Backend::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool Backend::portIsSet() const
{
    return portIsSet_;
}

void Backend::unsetport()
{
    portIsSet_ = false;
}

std::string Backend::getHost() const
{
    return host_;
}

void Backend::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool Backend::hostIsSet() const
{
    return hostIsSet_;
}

void Backend::unsethost()
{
    hostIsSet_ = false;
}

}
}
}
}
}


