

#include "huaweicloud/live/v1/model/ModifyOttChannelGeneral.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyOttChannelGeneral::ModifyOttChannelGeneral()
{
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ModifyOttChannelGeneral::~ModifyOttChannelGeneral() = default;

void ModifyOttChannelGeneral::validate()
{
}

web::json::value ModifyOttChannelGeneral::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ModifyOttChannelGeneral::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ModifyOttChannelGeneral::getDomain() const
{
    return domain_;
}

void ModifyOttChannelGeneral::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ModifyOttChannelGeneral::domainIsSet() const
{
    return domainIsSet_;
}

void ModifyOttChannelGeneral::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ModifyOttChannelGeneral::getAppName() const
{
    return appName_;
}

void ModifyOttChannelGeneral::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ModifyOttChannelGeneral::appNameIsSet() const
{
    return appNameIsSet_;
}

void ModifyOttChannelGeneral::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ModifyOttChannelGeneral::getId() const
{
    return id_;
}

void ModifyOttChannelGeneral::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ModifyOttChannelGeneral::idIsSet() const
{
    return idIsSet_;
}

void ModifyOttChannelGeneral::unsetid()
{
    idIsSet_ = false;
}

std::string ModifyOttChannelGeneral::getName() const
{
    return name_;
}

void ModifyOttChannelGeneral::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ModifyOttChannelGeneral::nameIsSet() const
{
    return nameIsSet_;
}

void ModifyOttChannelGeneral::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


