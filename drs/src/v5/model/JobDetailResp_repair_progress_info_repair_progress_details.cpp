

#include "huaweicloud/drs/v5/model/JobDetailResp_repair_progress_info_repair_progress_details.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




JobDetailResp_repair_progress_info_repair_progress_details::JobDetailResp_repair_progress_info_repair_progress_details()
{
    queryId_ = "";
    queryIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    totalRowCount_ = 0;
    totalRowCountIsSet_ = false;
    completeRowCount_ = 0;
    completeRowCountIsSet_ = false;
    filterRowCount_ = 0;
    filterRowCountIsSet_ = false;
    repairedRowCount_ = 0;
    repairedRowCountIsSet_ = false;
    failedRowCount_ = 0;
    failedRowCountIsSet_ = false;
    repairStatus_ = 0;
    repairStatusIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

JobDetailResp_repair_progress_info_repair_progress_details::~JobDetailResp_repair_progress_info_repair_progress_details() = default;

void JobDetailResp_repair_progress_info_repair_progress_details::validate()
{
}

web::json::value JobDetailResp_repair_progress_info_repair_progress_details::toJson() const
{
    web::json::value val = web::json::value::object();

    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(totalRowCountIsSet_) {
        val[utility::conversions::to_string_t("total_row_count")] = ModelBase::toJson(totalRowCount_);
    }
    if(completeRowCountIsSet_) {
        val[utility::conversions::to_string_t("complete_row_count")] = ModelBase::toJson(completeRowCount_);
    }
    if(filterRowCountIsSet_) {
        val[utility::conversions::to_string_t("filter_row_count")] = ModelBase::toJson(filterRowCount_);
    }
    if(repairedRowCountIsSet_) {
        val[utility::conversions::to_string_t("repaired_row_count")] = ModelBase::toJson(repairedRowCount_);
    }
    if(failedRowCountIsSet_) {
        val[utility::conversions::to_string_t("failed_row_count")] = ModelBase::toJson(failedRowCount_);
    }
    if(repairStatusIsSet_) {
        val[utility::conversions::to_string_t("repair_status")] = ModelBase::toJson(repairStatus_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool JobDetailResp_repair_progress_info_repair_progress_details::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("query_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("total_row_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_row_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRowCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("complete_row_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("complete_row_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompleteRowCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter_row_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_row_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterRowCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repaired_row_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repaired_row_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepairedRowCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_row_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_row_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedRowCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repair_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repair_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepairStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string JobDetailResp_repair_progress_info_repair_progress_details::getQueryId() const
{
    return queryId_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::setQueryId(const std::string& value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool JobDetailResp_repair_progress_info_repair_progress_details::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::unsetqueryId()
{
    queryIdIsSet_ = false;
}

std::string JobDetailResp_repair_progress_info_repair_progress_details::getDbName() const
{
    return dbName_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool JobDetailResp_repair_progress_info_repair_progress_details::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string JobDetailResp_repair_progress_info_repair_progress_details::getSchemaName() const
{
    return schemaName_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool JobDetailResp_repair_progress_info_repair_progress_details::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string JobDetailResp_repair_progress_info_repair_progress_details::getTableName() const
{
    return tableName_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool JobDetailResp_repair_progress_info_repair_progress_details::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::unsettableName()
{
    tableNameIsSet_ = false;
}

int32_t JobDetailResp_repair_progress_info_repair_progress_details::getTotalRowCount() const
{
    return totalRowCount_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::setTotalRowCount(int32_t value)
{
    totalRowCount_ = value;
    totalRowCountIsSet_ = true;
}

bool JobDetailResp_repair_progress_info_repair_progress_details::totalRowCountIsSet() const
{
    return totalRowCountIsSet_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::unsettotalRowCount()
{
    totalRowCountIsSet_ = false;
}

int32_t JobDetailResp_repair_progress_info_repair_progress_details::getCompleteRowCount() const
{
    return completeRowCount_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::setCompleteRowCount(int32_t value)
{
    completeRowCount_ = value;
    completeRowCountIsSet_ = true;
}

bool JobDetailResp_repair_progress_info_repair_progress_details::completeRowCountIsSet() const
{
    return completeRowCountIsSet_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::unsetcompleteRowCount()
{
    completeRowCountIsSet_ = false;
}

int32_t JobDetailResp_repair_progress_info_repair_progress_details::getFilterRowCount() const
{
    return filterRowCount_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::setFilterRowCount(int32_t value)
{
    filterRowCount_ = value;
    filterRowCountIsSet_ = true;
}

bool JobDetailResp_repair_progress_info_repair_progress_details::filterRowCountIsSet() const
{
    return filterRowCountIsSet_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::unsetfilterRowCount()
{
    filterRowCountIsSet_ = false;
}

int32_t JobDetailResp_repair_progress_info_repair_progress_details::getRepairedRowCount() const
{
    return repairedRowCount_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::setRepairedRowCount(int32_t value)
{
    repairedRowCount_ = value;
    repairedRowCountIsSet_ = true;
}

bool JobDetailResp_repair_progress_info_repair_progress_details::repairedRowCountIsSet() const
{
    return repairedRowCountIsSet_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::unsetrepairedRowCount()
{
    repairedRowCountIsSet_ = false;
}

int32_t JobDetailResp_repair_progress_info_repair_progress_details::getFailedRowCount() const
{
    return failedRowCount_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::setFailedRowCount(int32_t value)
{
    failedRowCount_ = value;
    failedRowCountIsSet_ = true;
}

bool JobDetailResp_repair_progress_info_repair_progress_details::failedRowCountIsSet() const
{
    return failedRowCountIsSet_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::unsetfailedRowCount()
{
    failedRowCountIsSet_ = false;
}

int32_t JobDetailResp_repair_progress_info_repair_progress_details::getRepairStatus() const
{
    return repairStatus_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::setRepairStatus(int32_t value)
{
    repairStatus_ = value;
    repairStatusIsSet_ = true;
}

bool JobDetailResp_repair_progress_info_repair_progress_details::repairStatusIsSet() const
{
    return repairStatusIsSet_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::unsetrepairStatus()
{
    repairStatusIsSet_ = false;
}

std::string JobDetailResp_repair_progress_info_repair_progress_details::getStartTime() const
{
    return startTime_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool JobDetailResp_repair_progress_info_repair_progress_details::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string JobDetailResp_repair_progress_info_repair_progress_details::getUpdateTime() const
{
    return updateTime_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool JobDetailResp_repair_progress_info_repair_progress_details::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void JobDetailResp_repair_progress_info_repair_progress_details::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


