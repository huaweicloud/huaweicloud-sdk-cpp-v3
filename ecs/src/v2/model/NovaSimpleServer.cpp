

#include "huaweicloud/ecs/v2/model/NovaSimpleServer.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaSimpleServer::NovaSimpleServer()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    linksIsSet_ = false;
}

NovaSimpleServer::~NovaSimpleServer() = default;

void NovaSimpleServer::validate()
{
}

web::json::value NovaSimpleServer::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }

    return val;
}
bool NovaSimpleServer::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("links"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
        }
    }
    return ok;
}


std::string NovaSimpleServer::getName() const
{
    return name_;
}

void NovaSimpleServer::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NovaSimpleServer::nameIsSet() const
{
    return nameIsSet_;
}

void NovaSimpleServer::unsetname()
{
    nameIsSet_ = false;
}

std::string NovaSimpleServer::getId() const
{
    return id_;
}

void NovaSimpleServer::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NovaSimpleServer::idIsSet() const
{
    return idIsSet_;
}

void NovaSimpleServer::unsetid()
{
    idIsSet_ = false;
}

std::vector<NovaLink>& NovaSimpleServer::getLinks()
{
    return links_;
}

void NovaSimpleServer::setLinks(const std::vector<NovaLink>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool NovaSimpleServer::linksIsSet() const
{
    return linksIsSet_;
}

void NovaSimpleServer::unsetlinks()
{
    linksIsSet_ = false;
}

}
}
}
}
}


