

#include "huaweicloud/codeartsrepo/v4/model/PermissionResourcesDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




PermissionResourcesDto::PermissionResourcesDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nameCn_ = "";
    nameCnIsSet_ = false;
    resourceNameDisplay_ = "";
    resourceNameDisplayIsSet_ = false;
    resourceNameCnDisplay_ = "";
    resourceNameCnDisplayIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    scope_ = "";
    scopeIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

PermissionResourcesDto::~PermissionResourcesDto() = default;

void PermissionResourcesDto::validate()
{
}

web::json::value PermissionResourcesDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nameCnIsSet_) {
        val[utility::conversions::to_string_t("name_cn")] = ModelBase::toJson(nameCn_);
    }
    if(resourceNameDisplayIsSet_) {
        val[utility::conversions::to_string_t("resource_name_display")] = ModelBase::toJson(resourceNameDisplay_);
    }
    if(resourceNameCnDisplayIsSet_) {
        val[utility::conversions::to_string_t("resource_name_cn_display")] = ModelBase::toJson(resourceNameCnDisplay_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool PermissionResourcesDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameCn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_name_display"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name_display"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceNameDisplay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_name_cn_display"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name_cn_display"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceNameCnDisplay(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


int32_t PermissionResourcesDto::getId() const
{
    return id_;
}

void PermissionResourcesDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PermissionResourcesDto::idIsSet() const
{
    return idIsSet_;
}

void PermissionResourcesDto::unsetid()
{
    idIsSet_ = false;
}

std::string PermissionResourcesDto::getName() const
{
    return name_;
}

void PermissionResourcesDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PermissionResourcesDto::nameIsSet() const
{
    return nameIsSet_;
}

void PermissionResourcesDto::unsetname()
{
    nameIsSet_ = false;
}

std::string PermissionResourcesDto::getNameCn() const
{
    return nameCn_;
}

void PermissionResourcesDto::setNameCn(const std::string& value)
{
    nameCn_ = value;
    nameCnIsSet_ = true;
}

bool PermissionResourcesDto::nameCnIsSet() const
{
    return nameCnIsSet_;
}

void PermissionResourcesDto::unsetnameCn()
{
    nameCnIsSet_ = false;
}

std::string PermissionResourcesDto::getResourceNameDisplay() const
{
    return resourceNameDisplay_;
}

void PermissionResourcesDto::setResourceNameDisplay(const std::string& value)
{
    resourceNameDisplay_ = value;
    resourceNameDisplayIsSet_ = true;
}

bool PermissionResourcesDto::resourceNameDisplayIsSet() const
{
    return resourceNameDisplayIsSet_;
}

void PermissionResourcesDto::unsetresourceNameDisplay()
{
    resourceNameDisplayIsSet_ = false;
}

std::string PermissionResourcesDto::getResourceNameCnDisplay() const
{
    return resourceNameCnDisplay_;
}

void PermissionResourcesDto::setResourceNameCnDisplay(const std::string& value)
{
    resourceNameCnDisplay_ = value;
    resourceNameCnDisplayIsSet_ = true;
}

bool PermissionResourcesDto::resourceNameCnDisplayIsSet() const
{
    return resourceNameCnDisplayIsSet_;
}

void PermissionResourcesDto::unsetresourceNameCnDisplay()
{
    resourceNameCnDisplayIsSet_ = false;
}

std::string PermissionResourcesDto::getPath() const
{
    return path_;
}

void PermissionResourcesDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool PermissionResourcesDto::pathIsSet() const
{
    return pathIsSet_;
}

void PermissionResourcesDto::unsetpath()
{
    pathIsSet_ = false;
}

std::string PermissionResourcesDto::getScope() const
{
    return scope_;
}

void PermissionResourcesDto::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool PermissionResourcesDto::scopeIsSet() const
{
    return scopeIsSet_;
}

void PermissionResourcesDto::unsetscope()
{
    scopeIsSet_ = false;
}

std::string PermissionResourcesDto::getCreatedAt() const
{
    return createdAt_;
}

void PermissionResourcesDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool PermissionResourcesDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void PermissionResourcesDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string PermissionResourcesDto::getUpdatedAt() const
{
    return updatedAt_;
}

void PermissionResourcesDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool PermissionResourcesDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void PermissionResourcesDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


