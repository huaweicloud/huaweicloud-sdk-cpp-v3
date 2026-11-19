

#include "huaweicloud/gaussdb/v3/model/ArchivableTable.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ArchivableTable::ArchivableTable()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    partitionName_ = "";
    partitionNameIsSet_ = false;
    restricted_ = false;
    restrictedIsSet_ = false;
}

ArchivableTable::~ArchivableTable() = default;

void ArchivableTable::validate()
{
}

web::json::value ArchivableTable::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(partitionNameIsSet_) {
        val[utility::conversions::to_string_t("partition_name")] = ModelBase::toJson(partitionName_);
    }
    if(restrictedIsSet_) {
        val[utility::conversions::to_string_t("restricted")] = ModelBase::toJson(restricted_);
    }

    return val;
}
bool ArchivableTable::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partition_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partition_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartitionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restricted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restricted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestricted(refVal);
        }
    }
    return ok;
}


std::string ArchivableTable::getDbName() const
{
    return dbName_;
}

void ArchivableTable::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ArchivableTable::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ArchivableTable::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string ArchivableTable::getTableName() const
{
    return tableName_;
}

void ArchivableTable::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ArchivableTable::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ArchivableTable::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string ArchivableTable::getPartitionName() const
{
    return partitionName_;
}

void ArchivableTable::setPartitionName(const std::string& value)
{
    partitionName_ = value;
    partitionNameIsSet_ = true;
}

bool ArchivableTable::partitionNameIsSet() const
{
    return partitionNameIsSet_;
}

void ArchivableTable::unsetpartitionName()
{
    partitionNameIsSet_ = false;
}

bool ArchivableTable::isRestricted() const
{
    return restricted_;
}

void ArchivableTable::setRestricted(bool value)
{
    restricted_ = value;
    restrictedIsSet_ = true;
}

bool ArchivableTable::restrictedIsSet() const
{
    return restrictedIsSet_;
}

void ArchivableTable::unsetrestricted()
{
    restrictedIsSet_ = false;
}

}
}
}
}
}


