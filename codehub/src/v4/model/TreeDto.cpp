

#include "huaweicloud/codehub/v4/model/TreeDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




TreeDto::TreeDto()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    level_ = 0;
    levelIsSet_ = false;
    isShownDropDown_ = false;
    isShownDropDownIsSet_ = false;
    folder_ = false;
    folderIsSet_ = false;
    childrenIsSet_ = false;
    submoduleLink_ = "";
    submoduleLinkIsSet_ = false;
}

TreeDto::~TreeDto() = default;

void TreeDto::validate()
{
}

web::json::value TreeDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(isShownDropDownIsSet_) {
        val[utility::conversions::to_string_t("isShownDropDown")] = ModelBase::toJson(isShownDropDown_);
    }
    if(folderIsSet_) {
        val[utility::conversions::to_string_t("folder")] = ModelBase::toJson(folder_);
    }
    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(*children_);
    }
    if(submoduleLinkIsSet_) {
        val[utility::conversions::to_string_t("submodule_link")] = ModelBase::toJson(submoduleLink_);
    }

    return val;
}
bool TreeDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isShownDropDown"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isShownDropDown"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsShownDropDown(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("folder"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("folder"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFolder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<TreeDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("submodule_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("submodule_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubmoduleLink(refVal);
        }
    }
    return ok;
}


std::string TreeDto::getId() const
{
    return id_;
}

void TreeDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TreeDto::idIsSet() const
{
    return idIsSet_;
}

void TreeDto::unsetid()
{
    idIsSet_ = false;
}

std::string TreeDto::getName() const
{
    return name_;
}

void TreeDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TreeDto::nameIsSet() const
{
    return nameIsSet_;
}

void TreeDto::unsetname()
{
    nameIsSet_ = false;
}

std::string TreeDto::getType() const
{
    return type_;
}

void TreeDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TreeDto::typeIsSet() const
{
    return typeIsSet_;
}

void TreeDto::unsettype()
{
    typeIsSet_ = false;
}

std::string TreeDto::getPath() const
{
    return path_;
}

void TreeDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool TreeDto::pathIsSet() const
{
    return pathIsSet_;
}

void TreeDto::unsetpath()
{
    pathIsSet_ = false;
}

int32_t TreeDto::getLevel() const
{
    return level_;
}

void TreeDto::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool TreeDto::levelIsSet() const
{
    return levelIsSet_;
}

void TreeDto::unsetlevel()
{
    levelIsSet_ = false;
}

bool TreeDto::isIsShownDropDown() const
{
    return isShownDropDown_;
}

void TreeDto::setIsShownDropDown(bool value)
{
    isShownDropDown_ = value;
    isShownDropDownIsSet_ = true;
}

bool TreeDto::isShownDropDownIsSet() const
{
    return isShownDropDownIsSet_;
}

void TreeDto::unsetisShownDropDown()
{
    isShownDropDownIsSet_ = false;
}

bool TreeDto::isFolder() const
{
    return folder_;
}

void TreeDto::setFolder(bool value)
{
    folder_ = value;
    folderIsSet_ = true;
}

bool TreeDto::folderIsSet() const
{
    return folderIsSet_;
}

void TreeDto::unsetfolder()
{
    folderIsSet_ = false;
}

std::vector<TreeDto>& TreeDto::getChildren()
{
    return *children_;
}

void TreeDto::setChildren(const std::vector<TreeDto>& value)
{
    *children_ = value;
    childrenIsSet_ = true;
}

bool TreeDto::childrenIsSet() const
{
    return childrenIsSet_;
}

void TreeDto::unsetchildren()
{
    childrenIsSet_ = false;
}

std::string TreeDto::getSubmoduleLink() const
{
    return submoduleLink_;
}

void TreeDto::setSubmoduleLink(const std::string& value)
{
    submoduleLink_ = value;
    submoduleLinkIsSet_ = true;
}

bool TreeDto::submoduleLinkIsSet() const
{
    return submoduleLinkIsSet_;
}

void TreeDto::unsetsubmoduleLink()
{
    submoduleLinkIsSet_ = false;
}

}
}
}
}
}


