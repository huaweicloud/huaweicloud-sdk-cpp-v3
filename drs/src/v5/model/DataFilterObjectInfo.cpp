

#include "huaweicloud/drs/v5/model/DataFilterObjectInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DataFilterObjectInfo::DataFilterObjectInfo()
{
    id_ = "";
    idIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    objectName_ = "";
    objectNameIsSet_ = false;
    objectAliasName_ = "";
    objectAliasNameIsSet_ = false;
    objectType_ = "";
    objectTypeIsSet_ = false;
}

DataFilterObjectInfo::~DataFilterObjectInfo() = default;

void DataFilterObjectInfo::validate()
{
}

web::json::value DataFilterObjectInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(objectNameIsSet_) {
        val[utility::conversions::to_string_t("object_name")] = ModelBase::toJson(objectName_);
    }
    if(objectAliasNameIsSet_) {
        val[utility::conversions::to_string_t("object_alias_name")] = ModelBase::toJson(objectAliasName_);
    }
    if(objectTypeIsSet_) {
        val[utility::conversions::to_string_t("object_type")] = ModelBase::toJson(objectType_);
    }

    return val;
}
bool DataFilterObjectInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("object_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectType(refVal);
        }
    }
    return ok;
}


std::string DataFilterObjectInfo::getId() const
{
    return id_;
}

void DataFilterObjectInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DataFilterObjectInfo::idIsSet() const
{
    return idIsSet_;
}

void DataFilterObjectInfo::unsetid()
{
    idIsSet_ = false;
}

std::string DataFilterObjectInfo::getParentId() const
{
    return parentId_;
}

void DataFilterObjectInfo::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool DataFilterObjectInfo::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void DataFilterObjectInfo::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string DataFilterObjectInfo::getObjectName() const
{
    return objectName_;
}

void DataFilterObjectInfo::setObjectName(const std::string& value)
{
    objectName_ = value;
    objectNameIsSet_ = true;
}

bool DataFilterObjectInfo::objectNameIsSet() const
{
    return objectNameIsSet_;
}

void DataFilterObjectInfo::unsetobjectName()
{
    objectNameIsSet_ = false;
}

std::string DataFilterObjectInfo::getObjectAliasName() const
{
    return objectAliasName_;
}

void DataFilterObjectInfo::setObjectAliasName(const std::string& value)
{
    objectAliasName_ = value;
    objectAliasNameIsSet_ = true;
}

bool DataFilterObjectInfo::objectAliasNameIsSet() const
{
    return objectAliasNameIsSet_;
}

void DataFilterObjectInfo::unsetobjectAliasName()
{
    objectAliasNameIsSet_ = false;
}

std::string DataFilterObjectInfo::getObjectType() const
{
    return objectType_;
}

void DataFilterObjectInfo::setObjectType(const std::string& value)
{
    objectType_ = value;
    objectTypeIsSet_ = true;
}

bool DataFilterObjectInfo::objectTypeIsSet() const
{
    return objectTypeIsSet_;
}

void DataFilterObjectInfo::unsetobjectType()
{
    objectTypeIsSet_ = false;
}

}
}
}
}
}


