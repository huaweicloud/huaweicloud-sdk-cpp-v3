

#include "huaweicloud/ecs/v2/model/ServerRemoteConsole.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerRemoteConsole::ServerRemoteConsole()
{
    protocol_ = "";
    protocolIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

ServerRemoteConsole::~ServerRemoteConsole() = default;

void ServerRemoteConsole::validate()
{
}

web::json::value ServerRemoteConsole::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}

bool ServerRemoteConsole::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    return ok;
}


std::string ServerRemoteConsole::getProtocol() const
{
    return protocol_;
}

void ServerRemoteConsole::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ServerRemoteConsole::protocolIsSet() const
{
    return protocolIsSet_;
}

void ServerRemoteConsole::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string ServerRemoteConsole::getType() const
{
    return type_;
}

void ServerRemoteConsole::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ServerRemoteConsole::typeIsSet() const
{
    return typeIsSet_;
}

void ServerRemoteConsole::unsettype()
{
    typeIsSet_ = false;
}

std::string ServerRemoteConsole::getUrl() const
{
    return url_;
}

void ServerRemoteConsole::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ServerRemoteConsole::urlIsSet() const
{
    return urlIsSet_;
}

void ServerRemoteConsole::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


