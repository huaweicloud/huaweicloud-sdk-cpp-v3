

#include "huaweicloud/gaussdb/v3/model/CancelColdTableWaitingTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CancelColdTableWaitingTask::CancelColdTableWaitingTask()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    partitionName_ = "";
    partitionNameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

CancelColdTableWaitingTask::~CancelColdTableWaitingTask() = default;

void CancelColdTableWaitingTask::validate()
{
}

web::json::value CancelColdTableWaitingTask::toJson() const
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool CancelColdTableWaitingTask::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string CancelColdTableWaitingTask::getDbName() const
{
    return dbName_;
}

void CancelColdTableWaitingTask::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool CancelColdTableWaitingTask::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void CancelColdTableWaitingTask::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string CancelColdTableWaitingTask::getTableName() const
{
    return tableName_;
}

void CancelColdTableWaitingTask::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool CancelColdTableWaitingTask::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void CancelColdTableWaitingTask::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string CancelColdTableWaitingTask::getPartitionName() const
{
    return partitionName_;
}

void CancelColdTableWaitingTask::setPartitionName(const std::string& value)
{
    partitionName_ = value;
    partitionNameIsSet_ = true;
}

bool CancelColdTableWaitingTask::partitionNameIsSet() const
{
    return partitionNameIsSet_;
}

void CancelColdTableWaitingTask::unsetpartitionName()
{
    partitionNameIsSet_ = false;
}

std::string CancelColdTableWaitingTask::getType() const
{
    return type_;
}

void CancelColdTableWaitingTask::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CancelColdTableWaitingTask::typeIsSet() const
{
    return typeIsSet_;
}

void CancelColdTableWaitingTask::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


