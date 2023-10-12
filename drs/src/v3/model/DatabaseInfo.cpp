

#include "huaweicloud/drs/v3/model/DatabaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




DatabaseInfo::DatabaseInfo()
{
    id_ = "";
    idIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    objectType_ = "";
    objectTypeIsSet_ = false;
    objectName_ = "";
    objectNameIsSet_ = false;
    objectAliasName_ = "";
    objectAliasNameIsSet_ = false;
    select_ = "";
    selectIsSet_ = false;
}

DatabaseInfo::~DatabaseInfo() = default;

void DatabaseInfo::validate()
{
}

web::json::value DatabaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(objectTypeIsSet_) {
        val[utility::conversions::to_string_t("object_type")] = ModelBase::toJson(objectType_);
    }
    if(objectNameIsSet_) {
        val[utility::conversions::to_string_t("object_name")] = ModelBase::toJson(objectName_);
    }
    if(objectAliasNameIsSet_) {
        val[utility::conversions::to_string_t("object_alias_name")] = ModelBase::toJson(objectAliasName_);
    }
    if(selectIsSet_) {
        val[utility::conversions::to_string_t("select")] = ModelBase::toJson(select_);
    }

    return val;
}
bool DatabaseInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("object_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_alias_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_alias_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectAliasName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("select"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("select"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelect(refVal);
        }
    }
    return ok;
}


std::string DatabaseInfo::getId() const
{
    return id_;
}

void DatabaseInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DatabaseInfo::idIsSet() const
{
    return idIsSet_;
}

void DatabaseInfo::unsetid()
{
    idIsSet_ = false;
}

std::string DatabaseInfo::getParentId() const
{
    return parentId_;
}

void DatabaseInfo::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool DatabaseInfo::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void DatabaseInfo::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string DatabaseInfo::getObjectType() const
{
    return objectType_;
}

void DatabaseInfo::setObjectType(const std::string& value)
{
    objectType_ = value;
    objectTypeIsSet_ = true;
}

bool DatabaseInfo::objectTypeIsSet() const
{
    return objectTypeIsSet_;
}

void DatabaseInfo::unsetobjectType()
{
    objectTypeIsSet_ = false;
}

std::string DatabaseInfo::getObjectName() const
{
    return objectName_;
}

void DatabaseInfo::setObjectName(const std::string& value)
{
    objectName_ = value;
    objectNameIsSet_ = true;
}

bool DatabaseInfo::objectNameIsSet() const
{
    return objectNameIsSet_;
}

void DatabaseInfo::unsetobjectName()
{
    objectNameIsSet_ = false;
}

std::string DatabaseInfo::getObjectAliasName() const
{
    return objectAliasName_;
}

void DatabaseInfo::setObjectAliasName(const std::string& value)
{
    objectAliasName_ = value;
    objectAliasNameIsSet_ = true;
}

bool DatabaseInfo::objectAliasNameIsSet() const
{
    return objectAliasNameIsSet_;
}

void DatabaseInfo::unsetobjectAliasName()
{
    objectAliasNameIsSet_ = false;
}

std::string DatabaseInfo::getSelect() const
{
    return select_;
}

void DatabaseInfo::setSelect(const std::string& value)
{
    select_ = value;
    selectIsSet_ = true;
}

bool DatabaseInfo::selectIsSet() const
{
    return selectIsSet_;
}

void DatabaseInfo::unsetselect()
{
    selectIsSet_ = false;
}

}
}
}
}
}


