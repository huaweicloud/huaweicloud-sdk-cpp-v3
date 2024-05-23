

#include "huaweicloud/ram/v1/model/AssociatedPermission.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




AssociatedPermission::AssociatedPermission()
{
    permissionId_ = "";
    permissionIdIsSet_ = false;
    permissionName_ = "";
    permissionNameIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

AssociatedPermission::~AssociatedPermission() = default;

void AssociatedPermission::validate()
{
}

web::json::value AssociatedPermission::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionIdIsSet_) {
        val[utility::conversions::to_string_t("permission_id")] = ModelBase::toJson(permissionId_);
    }
    if(permissionNameIsSet_) {
        val[utility::conversions::to_string_t("permission_name")] = ModelBase::toJson(permissionName_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool AssociatedPermission::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permission_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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


std::string AssociatedPermission::getPermissionId() const
{
    return permissionId_;
}

void AssociatedPermission::setPermissionId(const std::string& value)
{
    permissionId_ = value;
    permissionIdIsSet_ = true;
}

bool AssociatedPermission::permissionIdIsSet() const
{
    return permissionIdIsSet_;
}

void AssociatedPermission::unsetpermissionId()
{
    permissionIdIsSet_ = false;
}

std::string AssociatedPermission::getPermissionName() const
{
    return permissionName_;
}

void AssociatedPermission::setPermissionName(const std::string& value)
{
    permissionName_ = value;
    permissionNameIsSet_ = true;
}

bool AssociatedPermission::permissionNameIsSet() const
{
    return permissionNameIsSet_;
}

void AssociatedPermission::unsetpermissionName()
{
    permissionNameIsSet_ = false;
}

std::string AssociatedPermission::getResourceType() const
{
    return resourceType_;
}

void AssociatedPermission::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool AssociatedPermission::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void AssociatedPermission::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string AssociatedPermission::getStatus() const
{
    return status_;
}

void AssociatedPermission::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AssociatedPermission::statusIsSet() const
{
    return statusIsSet_;
}

void AssociatedPermission::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime AssociatedPermission::getCreatedAt() const
{
    return createdAt_;
}

void AssociatedPermission::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool AssociatedPermission::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void AssociatedPermission::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime AssociatedPermission::getUpdatedAt() const
{
    return updatedAt_;
}

void AssociatedPermission::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool AssociatedPermission::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void AssociatedPermission::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


