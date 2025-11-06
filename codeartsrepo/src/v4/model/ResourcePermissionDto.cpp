

#include "huaweicloud/codeartsrepo/v4/model/ResourcePermissionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ResourcePermissionDto::ResourcePermissionDto()
{
    permissionId_ = 0;
    permissionIdIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    displayNameCn_ = "";
    displayNameCnIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    editable_ = false;
    editableIsSet_ = false;
}

ResourcePermissionDto::~ResourcePermissionDto() = default;

void ResourcePermissionDto::validate()
{
}

web::json::value ResourcePermissionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionIdIsSet_) {
        val[utility::conversions::to_string_t("permission_id")] = ModelBase::toJson(permissionId_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(displayNameCnIsSet_) {
        val[utility::conversions::to_string_t("display_name_cn")] = ModelBase::toJson(displayNameCn_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(editableIsSet_) {
        val[utility::conversions::to_string_t("editable")] = ModelBase::toJson(editable_);
    }

    return val;
}
bool ResourcePermissionDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permission_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayNameCn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("editable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("editable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEditable(refVal);
        }
    }
    return ok;
}


int32_t ResourcePermissionDto::getPermissionId() const
{
    return permissionId_;
}

void ResourcePermissionDto::setPermissionId(int32_t value)
{
    permissionId_ = value;
    permissionIdIsSet_ = true;
}

bool ResourcePermissionDto::permissionIdIsSet() const
{
    return permissionIdIsSet_;
}

void ResourcePermissionDto::unsetpermissionId()
{
    permissionIdIsSet_ = false;
}

std::string ResourcePermissionDto::getAction() const
{
    return action_;
}

void ResourcePermissionDto::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ResourcePermissionDto::actionIsSet() const
{
    return actionIsSet_;
}

void ResourcePermissionDto::unsetaction()
{
    actionIsSet_ = false;
}

std::string ResourcePermissionDto::getDisplayName() const
{
    return displayName_;
}

void ResourcePermissionDto::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool ResourcePermissionDto::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void ResourcePermissionDto::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string ResourcePermissionDto::getDisplayNameCn() const
{
    return displayNameCn_;
}

void ResourcePermissionDto::setDisplayNameCn(const std::string& value)
{
    displayNameCn_ = value;
    displayNameCnIsSet_ = true;
}

bool ResourcePermissionDto::displayNameCnIsSet() const
{
    return displayNameCnIsSet_;
}

void ResourcePermissionDto::unsetdisplayNameCn()
{
    displayNameCnIsSet_ = false;
}

bool ResourcePermissionDto::isEnabled() const
{
    return enabled_;
}

void ResourcePermissionDto::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ResourcePermissionDto::enabledIsSet() const
{
    return enabledIsSet_;
}

void ResourcePermissionDto::unsetenabled()
{
    enabledIsSet_ = false;
}

bool ResourcePermissionDto::isEditable() const
{
    return editable_;
}

void ResourcePermissionDto::setEditable(bool value)
{
    editable_ = value;
    editableIsSet_ = true;
}

bool ResourcePermissionDto::editableIsSet() const
{
    return editableIsSet_;
}

void ResourcePermissionDto::unseteditable()
{
    editableIsSet_ = false;
}

}
}
}
}
}


