

#include "huaweicloud/ecs/v2/model/GetServerRemoteConsoleOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




GetServerRemoteConsoleOption::GetServerRemoteConsoleOption()
{
    protocol_ = "";
    protocolIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

GetServerRemoteConsoleOption::~GetServerRemoteConsoleOption() = default;

void GetServerRemoteConsoleOption::validate()
{
}

web::json::value GetServerRemoteConsoleOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool GetServerRemoteConsoleOption::fromJson(const web::json::value& val)
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
    return ok;
}


std::string GetServerRemoteConsoleOption::getProtocol() const
{
    return protocol_;
}

void GetServerRemoteConsoleOption::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool GetServerRemoteConsoleOption::protocolIsSet() const
{
    return protocolIsSet_;
}

void GetServerRemoteConsoleOption::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string GetServerRemoteConsoleOption::getType() const
{
    return type_;
}

void GetServerRemoteConsoleOption::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool GetServerRemoteConsoleOption::typeIsSet() const
{
    return typeIsSet_;
}

void GetServerRemoteConsoleOption::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


