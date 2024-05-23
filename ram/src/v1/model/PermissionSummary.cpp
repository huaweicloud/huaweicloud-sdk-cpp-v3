

#include "huaweicloud/ram/v1/model/PermissionSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




PermissionSummary::PermissionSummary()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
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

PermissionSummary::~PermissionSummary() = default;

void PermissionSummary::validate()
{
}

web::json::value PermissionSummary::toJson() const
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
bool PermissionSummary::fromJson(const web::json::value& val)
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


std::string PermissionSummary::getId() const
{
    return id_;
}

void PermissionSummary::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PermissionSummary::idIsSet() const
{
    return idIsSet_;
}

void PermissionSummary::unsetid()
{
    idIsSet_ = false;
}

std::string PermissionSummary::getName() const
{
    return name_;
}

void PermissionSummary::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PermissionSummary::nameIsSet() const
{
    return nameIsSet_;
}

void PermissionSummary::unsetname()
{
    nameIsSet_ = false;
}

std::string PermissionSummary::getResourceType() const
{
    return resourceType_;
}

void PermissionSummary::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool PermissionSummary::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void PermissionSummary::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

bool PermissionSummary::isIsResourceTypeDefault() const
{
    return isResourceTypeDefault_;
}

void PermissionSummary::setIsResourceTypeDefault(bool value)
{
    isResourceTypeDefault_ = value;
    isResourceTypeDefaultIsSet_ = true;
}

bool PermissionSummary::isResourceTypeDefaultIsSet() const
{
    return isResourceTypeDefaultIsSet_;
}

void PermissionSummary::unsetisResourceTypeDefault()
{
    isResourceTypeDefaultIsSet_ = false;
}

utility::datetime PermissionSummary::getCreatedAt() const
{
    return createdAt_;
}

void PermissionSummary::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool PermissionSummary::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void PermissionSummary::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime PermissionSummary::getUpdatedAt() const
{
    return updatedAt_;
}

void PermissionSummary::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool PermissionSummary::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void PermissionSummary::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string PermissionSummary::getPermissionUrn() const
{
    return permissionUrn_;
}

void PermissionSummary::setPermissionUrn(const std::string& value)
{
    permissionUrn_ = value;
    permissionUrnIsSet_ = true;
}

bool PermissionSummary::permissionUrnIsSet() const
{
    return permissionUrnIsSet_;
}

void PermissionSummary::unsetpermissionUrn()
{
    permissionUrnIsSet_ = false;
}

std::string PermissionSummary::getPermissionType() const
{
    return permissionType_;
}

void PermissionSummary::setPermissionType(const std::string& value)
{
    permissionType_ = value;
    permissionTypeIsSet_ = true;
}

bool PermissionSummary::permissionTypeIsSet() const
{
    return permissionTypeIsSet_;
}

void PermissionSummary::unsetpermissionType()
{
    permissionTypeIsSet_ = false;
}

bool PermissionSummary::isDefaultVersion() const
{
    return defaultVersion_;
}

void PermissionSummary::setDefaultVersion(bool value)
{
    defaultVersion_ = value;
    defaultVersionIsSet_ = true;
}

bool PermissionSummary::defaultVersionIsSet() const
{
    return defaultVersionIsSet_;
}

void PermissionSummary::unsetdefaultVersion()
{
    defaultVersionIsSet_ = false;
}

int32_t PermissionSummary::getVersion() const
{
    return version_;
}

void PermissionSummary::setVersion(int32_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool PermissionSummary::versionIsSet() const
{
    return versionIsSet_;
}

void PermissionSummary::unsetversion()
{
    versionIsSet_ = false;
}

std::string PermissionSummary::getStatus() const
{
    return status_;
}

void PermissionSummary::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PermissionSummary::statusIsSet() const
{
    return statusIsSet_;
}

void PermissionSummary::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


