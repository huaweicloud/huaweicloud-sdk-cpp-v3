

#include "huaweicloud/rgc/v1/model/PermissionSet.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




PermissionSet::PermissionSet()
{
    permissionSetId_ = "";
    permissionSetIdIsSet_ = false;
    permissionSetName_ = "";
    permissionSetNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

PermissionSet::~PermissionSet() = default;

void PermissionSet::validate()
{
}

web::json::value PermissionSet::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionSetIdIsSet_) {
        val[utility::conversions::to_string_t("permission_set_id")] = ModelBase::toJson(permissionSetId_);
    }
    if(permissionSetNameIsSet_) {
        val[utility::conversions::to_string_t("permission_set_name")] = ModelBase::toJson(permissionSetName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool PermissionSet::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permission_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission_set_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_set_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionSetName(refVal);
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
    return ok;
}


std::string PermissionSet::getPermissionSetId() const
{
    return permissionSetId_;
}

void PermissionSet::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool PermissionSet::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void PermissionSet::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

std::string PermissionSet::getPermissionSetName() const
{
    return permissionSetName_;
}

void PermissionSet::setPermissionSetName(const std::string& value)
{
    permissionSetName_ = value;
    permissionSetNameIsSet_ = true;
}

bool PermissionSet::permissionSetNameIsSet() const
{
    return permissionSetNameIsSet_;
}

void PermissionSet::unsetpermissionSetName()
{
    permissionSetNameIsSet_ = false;
}

std::string PermissionSet::getDescription() const
{
    return description_;
}

void PermissionSet::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PermissionSet::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PermissionSet::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


