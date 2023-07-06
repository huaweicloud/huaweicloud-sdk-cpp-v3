

#include "huaweicloud/drs/v3/model/DatabaseObjectInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




DatabaseObjectInfo::DatabaseObjectInfo()
{
    id_ = "";
    idIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    aliasName_ = "";
    aliasNameIsSet_ = false;
}

DatabaseObjectInfo::~DatabaseObjectInfo() = default;

void DatabaseObjectInfo::validate()
{
}

web::json::value DatabaseObjectInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(aliasNameIsSet_) {
        val[utility::conversions::to_string_t("alias_name")] = ModelBase::toJson(aliasName_);
    }

    return val;
}

bool DatabaseObjectInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alias_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAliasName(refVal);
        }
    }
    return ok;
}

std::string DatabaseObjectInfo::getId() const
{
    return id_;
}

void DatabaseObjectInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DatabaseObjectInfo::idIsSet() const
{
    return idIsSet_;
}

void DatabaseObjectInfo::unsetid()
{
    idIsSet_ = false;
}

std::string DatabaseObjectInfo::getParentId() const
{
    return parentId_;
}

void DatabaseObjectInfo::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool DatabaseObjectInfo::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void DatabaseObjectInfo::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string DatabaseObjectInfo::getType() const
{
    return type_;
}

void DatabaseObjectInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DatabaseObjectInfo::typeIsSet() const
{
    return typeIsSet_;
}

void DatabaseObjectInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string DatabaseObjectInfo::getName() const
{
    return name_;
}

void DatabaseObjectInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DatabaseObjectInfo::nameIsSet() const
{
    return nameIsSet_;
}

void DatabaseObjectInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string DatabaseObjectInfo::getAliasName() const
{
    return aliasName_;
}

void DatabaseObjectInfo::setAliasName(const std::string& value)
{
    aliasName_ = value;
    aliasNameIsSet_ = true;
}

bool DatabaseObjectInfo::aliasNameIsSet() const
{
    return aliasNameIsSet_;
}

void DatabaseObjectInfo::unsetaliasName()
{
    aliasNameIsSet_ = false;
}

}
}
}
}
}


