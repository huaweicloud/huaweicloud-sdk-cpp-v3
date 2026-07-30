

#include "huaweicloud/modelarts/v1/model/ServerScaleDownRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerScaleDownRequest::ServerScaleDownRequest()
{
    id_ = "";
    idIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    serverIdsIsSet_ = false;
    resourceFlavor_ = "";
    resourceFlavorIsSet_ = false;
}

ServerScaleDownRequest::~ServerScaleDownRequest() = default;

void ServerScaleDownRequest::validate()
{
}

web::json::value ServerScaleDownRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(serverIdsIsSet_) {
        val[utility::conversions::to_string_t("server_ids")] = ModelBase::toJson(serverIds_);
    }
    if(resourceFlavorIsSet_) {
        val[utility::conversions::to_string_t("resource_flavor")] = ModelBase::toJson(resourceFlavor_);
    }

    return val;
}
bool ServerScaleDownRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceFlavor(refVal);
        }
    }
    return ok;
}


std::string ServerScaleDownRequest::getId() const
{
    return id_;
}

void ServerScaleDownRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServerScaleDownRequest::idIsSet() const
{
    return idIsSet_;
}

void ServerScaleDownRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ServerScaleDownRequest::getFlavor() const
{
    return flavor_;
}

void ServerScaleDownRequest::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool ServerScaleDownRequest::flavorIsSet() const
{
    return flavorIsSet_;
}

void ServerScaleDownRequest::unsetflavor()
{
    flavorIsSet_ = false;
}

std::vector<std::string>& ServerScaleDownRequest::getServerIds()
{
    return serverIds_;
}

void ServerScaleDownRequest::setServerIds(const std::vector<std::string>& value)
{
    serverIds_ = value;
    serverIdsIsSet_ = true;
}

bool ServerScaleDownRequest::serverIdsIsSet() const
{
    return serverIdsIsSet_;
}

void ServerScaleDownRequest::unsetserverIds()
{
    serverIdsIsSet_ = false;
}

std::string ServerScaleDownRequest::getResourceFlavor() const
{
    return resourceFlavor_;
}

void ServerScaleDownRequest::setResourceFlavor(const std::string& value)
{
    resourceFlavor_ = value;
    resourceFlavorIsSet_ = true;
}

bool ServerScaleDownRequest::resourceFlavorIsSet() const
{
    return resourceFlavorIsSet_;
}

void ServerScaleDownRequest::unsetresourceFlavor()
{
    resourceFlavorIsSet_ = false;
}

}
}
}
}
}


