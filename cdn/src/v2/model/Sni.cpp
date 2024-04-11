

#include "huaweicloud/cdn/v2/model/Sni.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




Sni::Sni()
{
    status_ = "";
    statusIsSet_ = false;
    serverName_ = "";
    serverNameIsSet_ = false;
}

Sni::~Sni() = default;

void Sni::validate()
{
}

web::json::value Sni::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(serverNameIsSet_) {
        val[utility::conversions::to_string_t("server_name")] = ModelBase::toJson(serverName_);
    }

    return val;
}
bool Sni::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerName(refVal);
        }
    }
    return ok;
}


std::string Sni::getStatus() const
{
    return status_;
}

void Sni::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Sni::statusIsSet() const
{
    return statusIsSet_;
}

void Sni::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Sni::getServerName() const
{
    return serverName_;
}

void Sni::setServerName(const std::string& value)
{
    serverName_ = value;
    serverNameIsSet_ = true;
}

bool Sni::serverNameIsSet() const
{
    return serverNameIsSet_;
}

void Sni::unsetserverName()
{
    serverNameIsSet_ = false;
}

}
}
}
}
}


