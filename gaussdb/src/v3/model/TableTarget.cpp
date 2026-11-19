

#include "huaweicloud/gaussdb/v3/model/TableTarget.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




TableTarget::TableTarget()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    partitionName_ = "";
    partitionNameIsSet_ = false;
}

TableTarget::~TableTarget() = default;

void TableTarget::validate()
{
}

web::json::value TableTarget::toJson() const
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

    return val;
}
bool TableTarget::fromJson(const web::json::value& val)
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
    return ok;
}


std::string TableTarget::getDbName() const
{
    return dbName_;
}

void TableTarget::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool TableTarget::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void TableTarget::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string TableTarget::getTableName() const
{
    return tableName_;
}

void TableTarget::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool TableTarget::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void TableTarget::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string TableTarget::getPartitionName() const
{
    return partitionName_;
}

void TableTarget::setPartitionName(const std::string& value)
{
    partitionName_ = value;
    partitionNameIsSet_ = true;
}

bool TableTarget::partitionNameIsSet() const
{
    return partitionNameIsSet_;
}

void TableTarget::unsetpartitionName()
{
    partitionNameIsSet_ = false;
}

}
}
}
}
}


