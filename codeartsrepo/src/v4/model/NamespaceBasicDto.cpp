

#include "huaweicloud/codeartsrepo/v4/model/NamespaceBasicDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




NamespaceBasicDto::NamespaceBasicDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    developMode_ = "";
    developModeIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    fullPath_ = "";
    fullPathIsSet_ = false;
    fullName_ = "";
    fullNameIsSet_ = false;
    parentId_ = 0;
    parentIdIsSet_ = false;
    visibilityLevel_ = 0;
    visibilityLevelIsSet_ = false;
    enableFileControl_ = false;
    enableFileControlIsSet_ = false;
    ownerId_ = 0;
    ownerIdIsSet_ = false;
}

NamespaceBasicDto::~NamespaceBasicDto() = default;

void NamespaceBasicDto::validate()
{
}

web::json::value NamespaceBasicDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(developModeIsSet_) {
        val[utility::conversions::to_string_t("develop_mode")] = ModelBase::toJson(developMode_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(fullPathIsSet_) {
        val[utility::conversions::to_string_t("full_path")] = ModelBase::toJson(fullPath_);
    }
    if(fullNameIsSet_) {
        val[utility::conversions::to_string_t("full_name")] = ModelBase::toJson(fullName_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(visibilityLevelIsSet_) {
        val[utility::conversions::to_string_t("visibility_level")] = ModelBase::toJson(visibilityLevel_);
    }
    if(enableFileControlIsSet_) {
        val[utility::conversions::to_string_t("enable_file_control")] = ModelBase::toJson(enableFileControl_);
    }
    if(ownerIdIsSet_) {
        val[utility::conversions::to_string_t("owner_id")] = ModelBase::toJson(ownerId_);
    }

    return val;
}
bool NamespaceBasicDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("full_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("full_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visibility_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibilityLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_file_control"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_file_control"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableFileControl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerId(refVal);
        }
    }
    return ok;
}


int32_t NamespaceBasicDto::getId() const
{
    return id_;
}

void NamespaceBasicDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NamespaceBasicDto::idIsSet() const
{
    return idIsSet_;
}

void NamespaceBasicDto::unsetid()
{
    idIsSet_ = false;
}

std::string NamespaceBasicDto::getName() const
{
    return name_;
}

void NamespaceBasicDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NamespaceBasicDto::nameIsSet() const
{
    return nameIsSet_;
}

void NamespaceBasicDto::unsetname()
{
    nameIsSet_ = false;
}

std::string NamespaceBasicDto::getPath() const
{
    return path_;
}

void NamespaceBasicDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool NamespaceBasicDto::pathIsSet() const
{
    return pathIsSet_;
}

void NamespaceBasicDto::unsetpath()
{
    pathIsSet_ = false;
}

std::string NamespaceBasicDto::getDevelopMode() const
{
    return developMode_;
}

void NamespaceBasicDto::setDevelopMode(const std::string& value)
{
    developMode_ = value;
    developModeIsSet_ = true;
}

bool NamespaceBasicDto::developModeIsSet() const
{
    return developModeIsSet_;
}

void NamespaceBasicDto::unsetdevelopMode()
{
    developModeIsSet_ = false;
}

std::string NamespaceBasicDto::getKind() const
{
    return kind_;
}

void NamespaceBasicDto::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool NamespaceBasicDto::kindIsSet() const
{
    return kindIsSet_;
}

void NamespaceBasicDto::unsetkind()
{
    kindIsSet_ = false;
}

std::string NamespaceBasicDto::getFullPath() const
{
    return fullPath_;
}

void NamespaceBasicDto::setFullPath(const std::string& value)
{
    fullPath_ = value;
    fullPathIsSet_ = true;
}

bool NamespaceBasicDto::fullPathIsSet() const
{
    return fullPathIsSet_;
}

void NamespaceBasicDto::unsetfullPath()
{
    fullPathIsSet_ = false;
}

std::string NamespaceBasicDto::getFullName() const
{
    return fullName_;
}

void NamespaceBasicDto::setFullName(const std::string& value)
{
    fullName_ = value;
    fullNameIsSet_ = true;
}

bool NamespaceBasicDto::fullNameIsSet() const
{
    return fullNameIsSet_;
}

void NamespaceBasicDto::unsetfullName()
{
    fullNameIsSet_ = false;
}

int32_t NamespaceBasicDto::getParentId() const
{
    return parentId_;
}

void NamespaceBasicDto::setParentId(int32_t value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool NamespaceBasicDto::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void NamespaceBasicDto::unsetparentId()
{
    parentIdIsSet_ = false;
}

int32_t NamespaceBasicDto::getVisibilityLevel() const
{
    return visibilityLevel_;
}

void NamespaceBasicDto::setVisibilityLevel(int32_t value)
{
    visibilityLevel_ = value;
    visibilityLevelIsSet_ = true;
}

bool NamespaceBasicDto::visibilityLevelIsSet() const
{
    return visibilityLevelIsSet_;
}

void NamespaceBasicDto::unsetvisibilityLevel()
{
    visibilityLevelIsSet_ = false;
}

bool NamespaceBasicDto::isEnableFileControl() const
{
    return enableFileControl_;
}

void NamespaceBasicDto::setEnableFileControl(bool value)
{
    enableFileControl_ = value;
    enableFileControlIsSet_ = true;
}

bool NamespaceBasicDto::enableFileControlIsSet() const
{
    return enableFileControlIsSet_;
}

void NamespaceBasicDto::unsetenableFileControl()
{
    enableFileControlIsSet_ = false;
}

int32_t NamespaceBasicDto::getOwnerId() const
{
    return ownerId_;
}

void NamespaceBasicDto::setOwnerId(int32_t value)
{
    ownerId_ = value;
    ownerIdIsSet_ = true;
}

bool NamespaceBasicDto::ownerIdIsSet() const
{
    return ownerIdIsSet_;
}

void NamespaceBasicDto::unsetownerId()
{
    ownerIdIsSet_ = false;
}

}
}
}
}
}


