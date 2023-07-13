

#include "huaweicloud/cbr/v1/model/ProjectsListInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ProjectsListInfo::ProjectsListInfo()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    isDomain_ = false;
    isDomainIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    linksIsSet_ = false;
}

ProjectsListInfo::~ProjectsListInfo() = default;

void ProjectsListInfo::validate()
{
}

web::json::value ProjectsListInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(isDomainIsSet_) {
        val[utility::conversions::to_string_t("is_domain")] = ModelBase::toJson(isDomain_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }

    return val;
}

bool ProjectsListInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_domain"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("links"));
        if(!fieldValue.is_null())
        {
            SelfLinksInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
        }
    }
    return ok;
}

std::string ProjectsListInfo::getDomainId() const
{
    return domainId_;
}

void ProjectsListInfo::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ProjectsListInfo::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ProjectsListInfo::unsetdomainId()
{
    domainIdIsSet_ = false;
}

bool ProjectsListInfo::isIsDomain() const
{
    return isDomain_;
}

void ProjectsListInfo::setIsDomain(bool value)
{
    isDomain_ = value;
    isDomainIsSet_ = true;
}

bool ProjectsListInfo::isDomainIsSet() const
{
    return isDomainIsSet_;
}

void ProjectsListInfo::unsetisDomain()
{
    isDomainIsSet_ = false;
}

std::string ProjectsListInfo::getParentId() const
{
    return parentId_;
}

void ProjectsListInfo::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool ProjectsListInfo::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void ProjectsListInfo::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string ProjectsListInfo::getName() const
{
    return name_;
}

void ProjectsListInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProjectsListInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ProjectsListInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ProjectsListInfo::getDescription() const
{
    return description_;
}

void ProjectsListInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ProjectsListInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ProjectsListInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ProjectsListInfo::getId() const
{
    return id_;
}

void ProjectsListInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProjectsListInfo::idIsSet() const
{
    return idIsSet_;
}

void ProjectsListInfo::unsetid()
{
    idIsSet_ = false;
}

bool ProjectsListInfo::isEnabled() const
{
    return enabled_;
}

void ProjectsListInfo::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ProjectsListInfo::enabledIsSet() const
{
    return enabledIsSet_;
}

void ProjectsListInfo::unsetenabled()
{
    enabledIsSet_ = false;
}

SelfLinksInfo ProjectsListInfo::getLinks() const
{
    return links_;
}

void ProjectsListInfo::setLinks(const SelfLinksInfo& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool ProjectsListInfo::linksIsSet() const
{
    return linksIsSet_;
}

void ProjectsListInfo::unsetlinks()
{
    linksIsSet_ = false;
}

}
}
}
}
}


