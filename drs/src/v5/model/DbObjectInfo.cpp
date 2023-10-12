

#include "huaweicloud/drs/v5/model/DbObjectInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DbObjectInfo::DbObjectInfo()
{
    sourceDbName_ = "";
    sourceDbNameIsSet_ = false;
    sourceSchemaName_ = "";
    sourceSchemaNameIsSet_ = false;
    sourceTableName_ = "";
    sourceTableNameIsSet_ = false;
    targetDbName_ = "";
    targetDbNameIsSet_ = false;
    targetSchemaName_ = "";
    targetSchemaNameIsSet_ = false;
    targetTableName_ = "";
    targetTableNameIsSet_ = false;
    hasColumnInfo_ = false;
    hasColumnInfoIsSet_ = false;
}

DbObjectInfo::~DbObjectInfo() = default;

void DbObjectInfo::validate()
{
}

web::json::value DbObjectInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDbNameIsSet_) {
        val[utility::conversions::to_string_t("source_db_name")] = ModelBase::toJson(sourceDbName_);
    }
    if(sourceSchemaNameIsSet_) {
        val[utility::conversions::to_string_t("source_schema_name")] = ModelBase::toJson(sourceSchemaName_);
    }
    if(sourceTableNameIsSet_) {
        val[utility::conversions::to_string_t("source_table_name")] = ModelBase::toJson(sourceTableName_);
    }
    if(targetDbNameIsSet_) {
        val[utility::conversions::to_string_t("target_db_name")] = ModelBase::toJson(targetDbName_);
    }
    if(targetSchemaNameIsSet_) {
        val[utility::conversions::to_string_t("target_schema_name")] = ModelBase::toJson(targetSchemaName_);
    }
    if(targetTableNameIsSet_) {
        val[utility::conversions::to_string_t("target_table_name")] = ModelBase::toJson(targetTableName_);
    }
    if(hasColumnInfoIsSet_) {
        val[utility::conversions::to_string_t("has_column_info")] = ModelBase::toJson(hasColumnInfo_);
    }

    return val;
}
bool DbObjectInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceSchemaName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetSchemaName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("has_column_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_column_info"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasColumnInfo(refVal);
        }
    }
    return ok;
}


std::string DbObjectInfo::getSourceDbName() const
{
    return sourceDbName_;
}

void DbObjectInfo::setSourceDbName(const std::string& value)
{
    sourceDbName_ = value;
    sourceDbNameIsSet_ = true;
}

bool DbObjectInfo::sourceDbNameIsSet() const
{
    return sourceDbNameIsSet_;
}

void DbObjectInfo::unsetsourceDbName()
{
    sourceDbNameIsSet_ = false;
}

std::string DbObjectInfo::getSourceSchemaName() const
{
    return sourceSchemaName_;
}

void DbObjectInfo::setSourceSchemaName(const std::string& value)
{
    sourceSchemaName_ = value;
    sourceSchemaNameIsSet_ = true;
}

bool DbObjectInfo::sourceSchemaNameIsSet() const
{
    return sourceSchemaNameIsSet_;
}

void DbObjectInfo::unsetsourceSchemaName()
{
    sourceSchemaNameIsSet_ = false;
}

std::string DbObjectInfo::getSourceTableName() const
{
    return sourceTableName_;
}

void DbObjectInfo::setSourceTableName(const std::string& value)
{
    sourceTableName_ = value;
    sourceTableNameIsSet_ = true;
}

bool DbObjectInfo::sourceTableNameIsSet() const
{
    return sourceTableNameIsSet_;
}

void DbObjectInfo::unsetsourceTableName()
{
    sourceTableNameIsSet_ = false;
}

std::string DbObjectInfo::getTargetDbName() const
{
    return targetDbName_;
}

void DbObjectInfo::setTargetDbName(const std::string& value)
{
    targetDbName_ = value;
    targetDbNameIsSet_ = true;
}

bool DbObjectInfo::targetDbNameIsSet() const
{
    return targetDbNameIsSet_;
}

void DbObjectInfo::unsettargetDbName()
{
    targetDbNameIsSet_ = false;
}

std::string DbObjectInfo::getTargetSchemaName() const
{
    return targetSchemaName_;
}

void DbObjectInfo::setTargetSchemaName(const std::string& value)
{
    targetSchemaName_ = value;
    targetSchemaNameIsSet_ = true;
}

bool DbObjectInfo::targetSchemaNameIsSet() const
{
    return targetSchemaNameIsSet_;
}

void DbObjectInfo::unsettargetSchemaName()
{
    targetSchemaNameIsSet_ = false;
}

std::string DbObjectInfo::getTargetTableName() const
{
    return targetTableName_;
}

void DbObjectInfo::setTargetTableName(const std::string& value)
{
    targetTableName_ = value;
    targetTableNameIsSet_ = true;
}

bool DbObjectInfo::targetTableNameIsSet() const
{
    return targetTableNameIsSet_;
}

void DbObjectInfo::unsettargetTableName()
{
    targetTableNameIsSet_ = false;
}

bool DbObjectInfo::isHasColumnInfo() const
{
    return hasColumnInfo_;
}

void DbObjectInfo::setHasColumnInfo(bool value)
{
    hasColumnInfo_ = value;
    hasColumnInfoIsSet_ = true;
}

bool DbObjectInfo::hasColumnInfoIsSet() const
{
    return hasColumnInfoIsSet_;
}

void DbObjectInfo::unsethasColumnInfo()
{
    hasColumnInfoIsSet_ = false;
}

}
}
}
}
}


