

#include "huaweicloud/ram/v1/model/CreateResourceShareReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




CreateResourceShareReqBody::CreateResourceShareReqBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    allowExternalPrincipals_ = false;
    allowExternalPrincipalsIsSet_ = false;
    permissionIdsIsSet_ = false;
    principalsIsSet_ = false;
    resourceUrnsIsSet_ = false;
    tagsIsSet_ = false;
}

CreateResourceShareReqBody::~CreateResourceShareReqBody() = default;

void CreateResourceShareReqBody::validate()
{
}

web::json::value CreateResourceShareReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(allowExternalPrincipalsIsSet_) {
        val[utility::conversions::to_string_t("allow_external_principals")] = ModelBase::toJson(allowExternalPrincipals_);
    }
    if(permissionIdsIsSet_) {
        val[utility::conversions::to_string_t("permission_ids")] = ModelBase::toJson(permissionIds_);
    }
    if(principalsIsSet_) {
        val[utility::conversions::to_string_t("principals")] = ModelBase::toJson(principals_);
    }
    if(resourceUrnsIsSet_) {
        val[utility::conversions::to_string_t("resource_urns")] = ModelBase::toJson(resourceUrns_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool CreateResourceShareReqBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("permission_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("principals"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principals"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipals(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_urns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_urns"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceUrns(refVal);
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
    return ok;
}


std::string CreateResourceShareReqBody::getName() const
{
    return name_;
}

void CreateResourceShareReqBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateResourceShareReqBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateResourceShareReqBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateResourceShareReqBody::getDescription() const
{
    return description_;
}

void CreateResourceShareReqBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateResourceShareReqBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateResourceShareReqBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool CreateResourceShareReqBody::isAllowExternalPrincipals() const
{
    return allowExternalPrincipals_;
}

void CreateResourceShareReqBody::setAllowExternalPrincipals(bool value)
{
    allowExternalPrincipals_ = value;
    allowExternalPrincipalsIsSet_ = true;
}

bool CreateResourceShareReqBody::allowExternalPrincipalsIsSet() const
{
    return allowExternalPrincipalsIsSet_;
}

void CreateResourceShareReqBody::unsetallowExternalPrincipals()
{
    allowExternalPrincipalsIsSet_ = false;
}

std::vector<std::string>& CreateResourceShareReqBody::getPermissionIds()
{
    return permissionIds_;
}

void CreateResourceShareReqBody::setPermissionIds(const std::vector<std::string>& value)
{
    permissionIds_ = value;
    permissionIdsIsSet_ = true;
}

bool CreateResourceShareReqBody::permissionIdsIsSet() const
{
    return permissionIdsIsSet_;
}

void CreateResourceShareReqBody::unsetpermissionIds()
{
    permissionIdsIsSet_ = false;
}

std::vector<std::string>& CreateResourceShareReqBody::getPrincipals()
{
    return principals_;
}

void CreateResourceShareReqBody::setPrincipals(const std::vector<std::string>& value)
{
    principals_ = value;
    principalsIsSet_ = true;
}

bool CreateResourceShareReqBody::principalsIsSet() const
{
    return principalsIsSet_;
}

void CreateResourceShareReqBody::unsetprincipals()
{
    principalsIsSet_ = false;
}

std::vector<std::string>& CreateResourceShareReqBody::getResourceUrns()
{
    return resourceUrns_;
}

void CreateResourceShareReqBody::setResourceUrns(const std::vector<std::string>& value)
{
    resourceUrns_ = value;
    resourceUrnsIsSet_ = true;
}

bool CreateResourceShareReqBody::resourceUrnsIsSet() const
{
    return resourceUrnsIsSet_;
}

void CreateResourceShareReqBody::unsetresourceUrns()
{
    resourceUrnsIsSet_ = false;
}

std::vector<Tag>& CreateResourceShareReqBody::getTags()
{
    return tags_;
}

void CreateResourceShareReqBody::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateResourceShareReqBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateResourceShareReqBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


