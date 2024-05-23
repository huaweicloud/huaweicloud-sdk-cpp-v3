

#include "huaweicloud/ram/v1/model/Permission.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




Permission::Permission()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    isResourceTypeDefault_ = false;
    isResourceTypeDefaultIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    permissionUrn_ = "";
    permissionUrnIsSet_ = false;
    permissionType_ = "";
    permissionTypeIsSet_ = false;
    defaultVersion_ = false;
    defaultVersionIsSet_ = false;
    version_ = 0;
    versionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

Permission::~Permission() = default;

void Permission::validate()
{
}

web::json::value Permission::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(isResourceTypeDefaultIsSet_) {
        val[utility::conversions::to_string_t("is_resource_type_default")] = ModelBase::toJson(isResourceTypeDefault_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(permissionUrnIsSet_) {
        val[utility::conversions::to_string_t("permission_urn")] = ModelBase::toJson(permissionUrn_);
    }
    if(permissionTypeIsSet_) {
        val[utility::conversions::to_string_t("permission_type")] = ModelBase::toJson(permissionType_);
    }
    if(defaultVersionIsSet_) {
        val[utility::conversions::to_string_t("default_version")] = ModelBase::toJson(defaultVersion_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool Permission::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_resource_type_default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_resource_type_default"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsResourceTypeDefault(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("permission_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_version"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
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


std::string Permission::getId() const
{
    return id_;
}

void Permission::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Permission::idIsSet() const
{
    return idIsSet_;
}

void Permission::unsetid()
{
    idIsSet_ = false;
}

std::string Permission::getName() const
{
    return name_;
}

void Permission::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Permission::nameIsSet() const
{
    return nameIsSet_;
}

void Permission::unsetname()
{
    nameIsSet_ = false;
}

std::string Permission::getResourceType() const
{
    return resourceType_;
}

void Permission::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool Permission::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void Permission::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string Permission::getContent() const
{
    return content_;
}

void Permission::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool Permission::contentIsSet() const
{
    return contentIsSet_;
}

void Permission::unsetcontent()
{
    contentIsSet_ = false;
}

bool Permission::isIsResourceTypeDefault() const
{
    return isResourceTypeDefault_;
}

void Permission::setIsResourceTypeDefault(bool value)
{
    isResourceTypeDefault_ = value;
    isResourceTypeDefaultIsSet_ = true;
}

bool Permission::isResourceTypeDefaultIsSet() const
{
    return isResourceTypeDefaultIsSet_;
}

void Permission::unsetisResourceTypeDefault()
{
    isResourceTypeDefaultIsSet_ = false;
}

utility::datetime Permission::getCreatedAt() const
{
    return createdAt_;
}

void Permission::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool Permission::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void Permission::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime Permission::getUpdatedAt() const
{
    return updatedAt_;
}

void Permission::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool Permission::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void Permission::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string Permission::getPermissionUrn() const
{
    return permissionUrn_;
}

void Permission::setPermissionUrn(const std::string& value)
{
    permissionUrn_ = value;
    permissionUrnIsSet_ = true;
}

bool Permission::permissionUrnIsSet() const
{
    return permissionUrnIsSet_;
}

void Permission::unsetpermissionUrn()
{
    permissionUrnIsSet_ = false;
}

std::string Permission::getPermissionType() const
{
    return permissionType_;
}

void Permission::setPermissionType(const std::string& value)
{
    permissionType_ = value;
    permissionTypeIsSet_ = true;
}

bool Permission::permissionTypeIsSet() const
{
    return permissionTypeIsSet_;
}

void Permission::unsetpermissionType()
{
    permissionTypeIsSet_ = false;
}

bool Permission::isDefaultVersion() const
{
    return defaultVersion_;
}

void Permission::setDefaultVersion(bool value)
{
    defaultVersion_ = value;
    defaultVersionIsSet_ = true;
}

bool Permission::defaultVersionIsSet() const
{
    return defaultVersionIsSet_;
}

void Permission::unsetdefaultVersion()
{
    defaultVersionIsSet_ = false;
}

int32_t Permission::getVersion() const
{
    return version_;
}

void Permission::setVersion(int32_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool Permission::versionIsSet() const
{
    return versionIsSet_;
}

void Permission::unsetversion()
{
    versionIsSet_ = false;
}

std::string Permission::getStatus() const
{
    return status_;
}

void Permission::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Permission::statusIsSet() const
{
    return statusIsSet_;
}

void Permission::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


