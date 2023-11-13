

#include "huaweicloud/rds/v3/model/PostgreSQLHistoryTableRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgreSQLHistoryTableRequest::PostgreSQLHistoryTableRequest()
{
    instanceIdsIsSet_ = false;
    restoreTime_ = 0L;
    restoreTimeIsSet_ = false;
    databaseNameLike_ = "";
    databaseNameLikeIsSet_ = false;
    tableNameLike_ = "";
    tableNameLikeIsSet_ = false;
    instanceNameLike_ = "";
    instanceNameLikeIsSet_ = false;
}

PostgreSQLHistoryTableRequest::~PostgreSQLHistoryTableRequest() = default;

void PostgreSQLHistoryTableRequest::validate()
{
}

web::json::value PostgreSQLHistoryTableRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }
    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }
    if(databaseNameLikeIsSet_) {
        val[utility::conversions::to_string_t("database_name_like")] = ModelBase::toJson(databaseNameLike_);
    }
    if(tableNameLikeIsSet_) {
        val[utility::conversions::to_string_t("table_name_like")] = ModelBase::toJson(tableNameLike_);
    }
    if(instanceNameLikeIsSet_) {
        val[utility::conversions::to_string_t("instance_name_like")] = ModelBase::toJson(instanceNameLike_);
    }

    return val;
}
bool PostgreSQLHistoryTableRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_name_like"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name_like"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseNameLike(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_name_like"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name_like"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableNameLike(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name_like"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name_like"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceNameLike(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& PostgreSQLHistoryTableRequest::getInstanceIds()
{
    return instanceIds_;
}

void PostgreSQLHistoryTableRequest::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool PostgreSQLHistoryTableRequest::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void PostgreSQLHistoryTableRequest::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

int64_t PostgreSQLHistoryTableRequest::getRestoreTime() const
{
    return restoreTime_;
}

void PostgreSQLHistoryTableRequest::setRestoreTime(int64_t value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool PostgreSQLHistoryTableRequest::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void PostgreSQLHistoryTableRequest::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

std::string PostgreSQLHistoryTableRequest::getDatabaseNameLike() const
{
    return databaseNameLike_;
}

void PostgreSQLHistoryTableRequest::setDatabaseNameLike(const std::string& value)
{
    databaseNameLike_ = value;
    databaseNameLikeIsSet_ = true;
}

bool PostgreSQLHistoryTableRequest::databaseNameLikeIsSet() const
{
    return databaseNameLikeIsSet_;
}

void PostgreSQLHistoryTableRequest::unsetdatabaseNameLike()
{
    databaseNameLikeIsSet_ = false;
}

std::string PostgreSQLHistoryTableRequest::getTableNameLike() const
{
    return tableNameLike_;
}

void PostgreSQLHistoryTableRequest::setTableNameLike(const std::string& value)
{
    tableNameLike_ = value;
    tableNameLikeIsSet_ = true;
}

bool PostgreSQLHistoryTableRequest::tableNameLikeIsSet() const
{
    return tableNameLikeIsSet_;
}

void PostgreSQLHistoryTableRequest::unsettableNameLike()
{
    tableNameLikeIsSet_ = false;
}

std::string PostgreSQLHistoryTableRequest::getInstanceNameLike() const
{
    return instanceNameLike_;
}

void PostgreSQLHistoryTableRequest::setInstanceNameLike(const std::string& value)
{
    instanceNameLike_ = value;
    instanceNameLikeIsSet_ = true;
}

bool PostgreSQLHistoryTableRequest::instanceNameLikeIsSet() const
{
    return instanceNameLikeIsSet_;
}

void PostgreSQLHistoryTableRequest::unsetinstanceNameLike()
{
    instanceNameLikeIsSet_ = false;
}

}
}
}
}
}


