

#include "huaweicloud/gaussdb/v3/model/ColdTableTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ColdTableTask::ColdTableTask()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    partitionName_ = "";
    partitionNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    targetStorage_ = "";
    targetStorageIsSet_ = false;
    percent_ = 0.0;
    percentIsSet_ = false;
    totalCnt_ = 0.0;
    totalCntIsSet_ = false;
    spaceId_ = "";
    spaceIdIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

ColdTableTask::~ColdTableTask() = default;

void ColdTableTask::validate()
{
}

web::json::value ColdTableTask::toJson() const
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
    if(targetStorageIsSet_) {
        val[utility::conversions::to_string_t("target_storage")] = ModelBase::toJson(targetStorage_);
    }
    if(percentIsSet_) {
        val[utility::conversions::to_string_t("percent")] = ModelBase::toJson(percent_);
    }
    if(totalCntIsSet_) {
        val[utility::conversions::to_string_t("total_cnt")] = ModelBase::toJson(totalCnt_);
    }
    if(spaceIdIsSet_) {
        val[utility::conversions::to_string_t("space_id")] = ModelBase::toJson(spaceId_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool ColdTableTask::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("target_storage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_storage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetStorage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("percent"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_cnt"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCnt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("space_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("space_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


std::string ColdTableTask::getDbName() const
{
    return dbName_;
}

void ColdTableTask::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ColdTableTask::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ColdTableTask::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string ColdTableTask::getTableName() const
{
    return tableName_;
}

void ColdTableTask::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ColdTableTask::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ColdTableTask::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string ColdTableTask::getPartitionName() const
{
    return partitionName_;
}

void ColdTableTask::setPartitionName(const std::string& value)
{
    partitionName_ = value;
    partitionNameIsSet_ = true;
}

bool ColdTableTask::partitionNameIsSet() const
{
    return partitionNameIsSet_;
}

void ColdTableTask::unsetpartitionName()
{
    partitionNameIsSet_ = false;
}

std::string ColdTableTask::getStatus() const
{
    return status_;
}

void ColdTableTask::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ColdTableTask::statusIsSet() const
{
    return statusIsSet_;
}

void ColdTableTask::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ColdTableTask::getTargetStorage() const
{
    return targetStorage_;
}

void ColdTableTask::setTargetStorage(const std::string& value)
{
    targetStorage_ = value;
    targetStorageIsSet_ = true;
}

bool ColdTableTask::targetStorageIsSet() const
{
    return targetStorageIsSet_;
}

void ColdTableTask::unsettargetStorage()
{
    targetStorageIsSet_ = false;
}

double ColdTableTask::getPercent() const
{
    return percent_;
}

void ColdTableTask::setPercent(double value)
{
    percent_ = value;
    percentIsSet_ = true;
}

bool ColdTableTask::percentIsSet() const
{
    return percentIsSet_;
}

void ColdTableTask::unsetpercent()
{
    percentIsSet_ = false;
}

double ColdTableTask::getTotalCnt() const
{
    return totalCnt_;
}

void ColdTableTask::setTotalCnt(double value)
{
    totalCnt_ = value;
    totalCntIsSet_ = true;
}

bool ColdTableTask::totalCntIsSet() const
{
    return totalCntIsSet_;
}

void ColdTableTask::unsettotalCnt()
{
    totalCntIsSet_ = false;
}

std::string ColdTableTask::getSpaceId() const
{
    return spaceId_;
}

void ColdTableTask::setSpaceId(const std::string& value)
{
    spaceId_ = value;
    spaceIdIsSet_ = true;
}

bool ColdTableTask::spaceIdIsSet() const
{
    return spaceIdIsSet_;
}

void ColdTableTask::unsetspaceId()
{
    spaceIdIsSet_ = false;
}

std::string ColdTableTask::getVersion() const
{
    return version_;
}

void ColdTableTask::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ColdTableTask::versionIsSet() const
{
    return versionIsSet_;
}

void ColdTableTask::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


