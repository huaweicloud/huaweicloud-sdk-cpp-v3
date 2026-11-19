

#include "huaweicloud/gaussdb/v3/model/FailedItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




FailedItem::FailedItem()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    partitionName_ = "";
    partitionNameIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
}

FailedItem::~FailedItem() = default;

void FailedItem::validate()
{
}

web::json::value FailedItem::toJson() const
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
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }

    return val;
}
bool FailedItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    return ok;
}


std::string FailedItem::getDbName() const
{
    return dbName_;
}

void FailedItem::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool FailedItem::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void FailedItem::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string FailedItem::getTableName() const
{
    return tableName_;
}

void FailedItem::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool FailedItem::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void FailedItem::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string FailedItem::getPartitionName() const
{
    return partitionName_;
}

void FailedItem::setPartitionName(const std::string& value)
{
    partitionName_ = value;
    partitionNameIsSet_ = true;
}

bool FailedItem::partitionNameIsSet() const
{
    return partitionNameIsSet_;
}

void FailedItem::unsetpartitionName()
{
    partitionNameIsSet_ = false;
}

std::string FailedItem::getReason() const
{
    return reason_;
}

void FailedItem::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool FailedItem::reasonIsSet() const
{
    return reasonIsSet_;
}

void FailedItem::unsetreason()
{
    reasonIsSet_ = false;
}

}
}
}
}
}


