

#include "huaweicloud/ram/v1/model/ResourceShare.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ResourceShare::ResourceShare()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    allowExternalPrincipals_ = false;
    allowExternalPrincipalsIsSet_ = false;
    owningAccountId_ = "";
    owningAccountIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tagsIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

ResourceShare::~ResourceShare() = default;

void ResourceShare::validate()
{
}

web::json::value ResourceShare::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(allowExternalPrincipalsIsSet_) {
        val[utility::conversions::to_string_t("allow_external_principals")] = ModelBase::toJson(allowExternalPrincipals_);
    }
    if(owningAccountIdIsSet_) {
        val[utility::conversions::to_string_t("owning_account_id")] = ModelBase::toJson(owningAccountId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool ResourceShare::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("allow_external_principals"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_external_principals"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowExternalPrincipals(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owning_account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owning_account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwningAccountId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string ResourceShare::getId() const
{
    return id_;
}

void ResourceShare::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ResourceShare::idIsSet() const
{
    return idIsSet_;
}

void ResourceShare::unsetid()
{
    idIsSet_ = false;
}

std::string ResourceShare::getName() const
{
    return name_;
}

void ResourceShare::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ResourceShare::nameIsSet() const
{
    return nameIsSet_;
}

void ResourceShare::unsetname()
{
    nameIsSet_ = false;
}

std::string ResourceShare::getDescription() const
{
    return description_;
}

void ResourceShare::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ResourceShare::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ResourceShare::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool ResourceShare::isAllowExternalPrincipals() const
{
    return allowExternalPrincipals_;
}

void ResourceShare::setAllowExternalPrincipals(bool value)
{
    allowExternalPrincipals_ = value;
    allowExternalPrincipalsIsSet_ = true;
}

bool ResourceShare::allowExternalPrincipalsIsSet() const
{
    return allowExternalPrincipalsIsSet_;
}

void ResourceShare::unsetallowExternalPrincipals()
{
    allowExternalPrincipalsIsSet_ = false;
}

std::string ResourceShare::getOwningAccountId() const
{
    return owningAccountId_;
}

void ResourceShare::setOwningAccountId(const std::string& value)
{
    owningAccountId_ = value;
    owningAccountIdIsSet_ = true;
}

bool ResourceShare::owningAccountIdIsSet() const
{
    return owningAccountIdIsSet_;
}

void ResourceShare::unsetowningAccountId()
{
    owningAccountIdIsSet_ = false;
}

std::string ResourceShare::getStatus() const
{
    return status_;
}

void ResourceShare::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ResourceShare::statusIsSet() const
{
    return statusIsSet_;
}

void ResourceShare::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<Tag>& ResourceShare::getTags()
{
    return tags_;
}

void ResourceShare::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ResourceShare::tagsIsSet() const
{
    return tagsIsSet_;
}

void ResourceShare::unsettags()
{
    tagsIsSet_ = false;
}

utility::datetime ResourceShare::getCreatedAt() const
{
    return createdAt_;
}

void ResourceShare::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ResourceShare::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ResourceShare::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime ResourceShare::getUpdatedAt() const
{
    return updatedAt_;
}

void ResourceShare::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ResourceShare::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ResourceShare::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


