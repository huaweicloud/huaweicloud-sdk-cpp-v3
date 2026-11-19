

#include "huaweicloud/gaussdb/v3/model/ColdTableWaitingTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ColdTableWaitingTask::ColdTableWaitingTask()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    partitionName_ = "";
    partitionNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createAt_ = 0L;
    createAtIsSet_ = false;
}

ColdTableWaitingTask::~ColdTableWaitingTask() = default;

void ColdTableWaitingTask::validate()
{
}

web::json::value ColdTableWaitingTask::toJson() const
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }

    return val;
}
bool ColdTableWaitingTask::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    return ok;
}


std::string ColdTableWaitingTask::getDbName() const
{
    return dbName_;
}

void ColdTableWaitingTask::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ColdTableWaitingTask::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ColdTableWaitingTask::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string ColdTableWaitingTask::getTableName() const
{
    return tableName_;
}

void ColdTableWaitingTask::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ColdTableWaitingTask::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ColdTableWaitingTask::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string ColdTableWaitingTask::getPartitionName() const
{
    return partitionName_;
}

void ColdTableWaitingTask::setPartitionName(const std::string& value)
{
    partitionName_ = value;
    partitionNameIsSet_ = true;
}

bool ColdTableWaitingTask::partitionNameIsSet() const
{
    return partitionNameIsSet_;
}

void ColdTableWaitingTask::unsetpartitionName()
{
    partitionNameIsSet_ = false;
}

std::string ColdTableWaitingTask::getStatus() const
{
    return status_;
}

void ColdTableWaitingTask::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ColdTableWaitingTask::statusIsSet() const
{
    return statusIsSet_;
}

void ColdTableWaitingTask::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t ColdTableWaitingTask::getCreateAt() const
{
    return createAt_;
}

void ColdTableWaitingTask::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ColdTableWaitingTask::createAtIsSet() const
{
    return createAtIsSet_;
}

void ColdTableWaitingTask::unsetcreateAt()
{
    createAtIsSet_ = false;
}

}
}
}
}
}


