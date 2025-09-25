

#include "huaweicloud/codehub/v4/model/TreeObjectDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




TreeObjectDto::TreeObjectDto()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    submoduleLink_ = "";
    submoduleLinkIsSet_ = false;
    submoduleBranch_ = "";
    submoduleBranchIsSet_ = false;
    md5_ = "";
    md5IsSet_ = false;
}

TreeObjectDto::~TreeObjectDto() = default;

void TreeObjectDto::validate()
{
}

web::json::value TreeObjectDto::toJson() const
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
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(submoduleLinkIsSet_) {
        val[utility::conversions::to_string_t("submodule_link")] = ModelBase::toJson(submoduleLink_);
    }
    if(submoduleBranchIsSet_) {
        val[utility::conversions::to_string_t("submodule_branch")] = ModelBase::toJson(submoduleBranch_);
    }
    if(md5IsSet_) {
        val[utility::conversions::to_string_t("md5")] = ModelBase::toJson(md5_);
    }

    return val;
}
bool TreeObjectDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("submodule_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("submodule_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubmoduleBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("md5"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("md5"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMd5(refVal);
        }
    }
    return ok;
}


std::string TreeObjectDto::getId() const
{
    return id_;
}

void TreeObjectDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TreeObjectDto::idIsSet() const
{
    return idIsSet_;
}

void TreeObjectDto::unsetid()
{
    idIsSet_ = false;
}

std::string TreeObjectDto::getName() const
{
    return name_;
}

void TreeObjectDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TreeObjectDto::nameIsSet() const
{
    return nameIsSet_;
}

void TreeObjectDto::unsetname()
{
    nameIsSet_ = false;
}

std::string TreeObjectDto::getType() const
{
    return type_;
}

void TreeObjectDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TreeObjectDto::typeIsSet() const
{
    return typeIsSet_;
}

void TreeObjectDto::unsettype()
{
    typeIsSet_ = false;
}

std::string TreeObjectDto::getPath() const
{
    return path_;
}

void TreeObjectDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool TreeObjectDto::pathIsSet() const
{
    return pathIsSet_;
}

void TreeObjectDto::unsetpath()
{
    pathIsSet_ = false;
}

std::string TreeObjectDto::getMode() const
{
    return mode_;
}

void TreeObjectDto::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool TreeObjectDto::modeIsSet() const
{
    return modeIsSet_;
}

void TreeObjectDto::unsetmode()
{
    modeIsSet_ = false;
}

std::string TreeObjectDto::getSubmoduleLink() const
{
    return submoduleLink_;
}

void TreeObjectDto::setSubmoduleLink(const std::string& value)
{
    submoduleLink_ = value;
    submoduleLinkIsSet_ = true;
}

bool TreeObjectDto::submoduleLinkIsSet() const
{
    return submoduleLinkIsSet_;
}

void TreeObjectDto::unsetsubmoduleLink()
{
    submoduleLinkIsSet_ = false;
}

std::string TreeObjectDto::getSubmoduleBranch() const
{
    return submoduleBranch_;
}

void TreeObjectDto::setSubmoduleBranch(const std::string& value)
{
    submoduleBranch_ = value;
    submoduleBranchIsSet_ = true;
}

bool TreeObjectDto::submoduleBranchIsSet() const
{
    return submoduleBranchIsSet_;
}

void TreeObjectDto::unsetsubmoduleBranch()
{
    submoduleBranchIsSet_ = false;
}

std::string TreeObjectDto::getMd5() const
{
    return md5_;
}

void TreeObjectDto::setMd5(const std::string& value)
{
    md5_ = value;
    md5IsSet_ = true;
}

bool TreeObjectDto::md5IsSet() const
{
    return md5IsSet_;
}

void TreeObjectDto::unsetmd5()
{
    md5IsSet_ = false;
}

}
}
}
}
}


