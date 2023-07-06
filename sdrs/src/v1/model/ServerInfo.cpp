

#include "huaweicloud/sdrs/v1/model/ServerInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ServerInfo::ServerInfo()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
}

ServerInfo::~ServerInfo() = default;

void ServerInfo::validate()
{
}

web::json::value ServerInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavorRef")] = ModelBase::toJson(flavorRef_);
    }

    return val;
}

bool ServerInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavorRef"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavorRef"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
        }
    }
    return ok;
}

std::string ServerInfo::getServerId() const
{
    return serverId_;
}

void ServerInfo::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ServerInfo::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ServerInfo::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::string ServerInfo::getFlavorRef() const
{
    return flavorRef_;
}

void ServerInfo::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool ServerInfo::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void ServerInfo::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

}
}
}
}
}


