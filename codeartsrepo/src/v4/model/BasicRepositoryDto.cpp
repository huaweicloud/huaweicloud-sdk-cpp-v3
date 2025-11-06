

#include "huaweicloud/codeartsrepo/v4/model/BasicRepositoryDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




BasicRepositoryDto::BasicRepositoryDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    developMode_ = "";
    developModeIsSet_ = false;
    visibility_ = "";
    visibilityIsSet_ = false;
    security_ = "";
    securityIsSet_ = false;
    nameWithNamespace_ = "";
    nameWithNamespaceIsSet_ = false;
    archived_ = false;
    archivedIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

BasicRepositoryDto::~BasicRepositoryDto() = default;

void BasicRepositoryDto::validate()
{
}

web::json::value BasicRepositoryDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(developModeIsSet_) {
        val[utility::conversions::to_string_t("develop_mode")] = ModelBase::toJson(developMode_);
    }
    if(visibilityIsSet_) {
        val[utility::conversions::to_string_t("visibility")] = ModelBase::toJson(visibility_);
    }
    if(securityIsSet_) {
        val[utility::conversions::to_string_t("security")] = ModelBase::toJson(security_);
    }
    if(nameWithNamespaceIsSet_) {
        val[utility::conversions::to_string_t("name_with_namespace")] = ModelBase::toJson(nameWithNamespace_);
    }
    if(archivedIsSet_) {
        val[utility::conversions::to_string_t("archived")] = ModelBase::toJson(archived_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool BasicRepositoryDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("develop_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("develop_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevelopMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visibility"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibility(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_with_namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_with_namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameWithNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("archived"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("archived"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchived(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


int32_t BasicRepositoryDto::getId() const
{
    return id_;
}

void BasicRepositoryDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BasicRepositoryDto::idIsSet() const
{
    return idIsSet_;
}

void BasicRepositoryDto::unsetid()
{
    idIsSet_ = false;
}

std::string BasicRepositoryDto::getName() const
{
    return name_;
}

void BasicRepositoryDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BasicRepositoryDto::nameIsSet() const
{
    return nameIsSet_;
}

void BasicRepositoryDto::unsetname()
{
    nameIsSet_ = false;
}

std::string BasicRepositoryDto::getNamespace() const
{
    return namespace_;
}

void BasicRepositoryDto::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool BasicRepositoryDto::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void BasicRepositoryDto::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string BasicRepositoryDto::getPath() const
{
    return path_;
}

void BasicRepositoryDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool BasicRepositoryDto::pathIsSet() const
{
    return pathIsSet_;
}

void BasicRepositoryDto::unsetpath()
{
    pathIsSet_ = false;
}

std::string BasicRepositoryDto::getDevelopMode() const
{
    return developMode_;
}

void BasicRepositoryDto::setDevelopMode(const std::string& value)
{
    developMode_ = value;
    developModeIsSet_ = true;
}

bool BasicRepositoryDto::developModeIsSet() const
{
    return developModeIsSet_;
}

void BasicRepositoryDto::unsetdevelopMode()
{
    developModeIsSet_ = false;
}

std::string BasicRepositoryDto::getVisibility() const
{
    return visibility_;
}

void BasicRepositoryDto::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool BasicRepositoryDto::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void BasicRepositoryDto::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string BasicRepositoryDto::getSecurity() const
{
    return security_;
}

void BasicRepositoryDto::setSecurity(const std::string& value)
{
    security_ = value;
    securityIsSet_ = true;
}

bool BasicRepositoryDto::securityIsSet() const
{
    return securityIsSet_;
}

void BasicRepositoryDto::unsetsecurity()
{
    securityIsSet_ = false;
}

std::string BasicRepositoryDto::getNameWithNamespace() const
{
    return nameWithNamespace_;
}

void BasicRepositoryDto::setNameWithNamespace(const std::string& value)
{
    nameWithNamespace_ = value;
    nameWithNamespaceIsSet_ = true;
}

bool BasicRepositoryDto::nameWithNamespaceIsSet() const
{
    return nameWithNamespaceIsSet_;
}

void BasicRepositoryDto::unsetnameWithNamespace()
{
    nameWithNamespaceIsSet_ = false;
}

bool BasicRepositoryDto::isArchived() const
{
    return archived_;
}

void BasicRepositoryDto::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool BasicRepositoryDto::archivedIsSet() const
{
    return archivedIsSet_;
}

void BasicRepositoryDto::unsetarchived()
{
    archivedIsSet_ = false;
}

std::string BasicRepositoryDto::getStatus() const
{
    return status_;
}

void BasicRepositoryDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BasicRepositoryDto::statusIsSet() const
{
    return statusIsSet_;
}

void BasicRepositoryDto::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


