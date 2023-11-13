

#include "huaweicloud/rds/v3/model/PostgreSQLHistoryDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgreSQLHistoryDatabaseRequest::PostgreSQLHistoryDatabaseRequest()
{
    instanceIdsIsSet_ = false;
    restoreTime_ = 0L;
    restoreTimeIsSet_ = false;
    databaseNameLike_ = "";
    databaseNameLikeIsSet_ = false;
    instanceNameLike_ = "";
    instanceNameLikeIsSet_ = false;
}

PostgreSQLHistoryDatabaseRequest::~PostgreSQLHistoryDatabaseRequest() = default;

void PostgreSQLHistoryDatabaseRequest::validate()
{
}

web::json::value PostgreSQLHistoryDatabaseRequest::toJson() const
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
    if(instanceNameLikeIsSet_) {
        val[utility::conversions::to_string_t("instance_name_like")] = ModelBase::toJson(instanceNameLike_);
    }

    return val;
}
bool PostgreSQLHistoryDatabaseRequest::fromJson(const web::json::value& val)
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


std::vector<std::string>& PostgreSQLHistoryDatabaseRequest::getInstanceIds()
{
    return instanceIds_;
}

void PostgreSQLHistoryDatabaseRequest::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool PostgreSQLHistoryDatabaseRequest::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void PostgreSQLHistoryDatabaseRequest::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

int64_t PostgreSQLHistoryDatabaseRequest::getRestoreTime() const
{
    return restoreTime_;
}

void PostgreSQLHistoryDatabaseRequest::setRestoreTime(int64_t value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool PostgreSQLHistoryDatabaseRequest::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void PostgreSQLHistoryDatabaseRequest::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

std::string PostgreSQLHistoryDatabaseRequest::getDatabaseNameLike() const
{
    return databaseNameLike_;
}

void PostgreSQLHistoryDatabaseRequest::setDatabaseNameLike(const std::string& value)
{
    databaseNameLike_ = value;
    databaseNameLikeIsSet_ = true;
}

bool PostgreSQLHistoryDatabaseRequest::databaseNameLikeIsSet() const
{
    return databaseNameLikeIsSet_;
}

void PostgreSQLHistoryDatabaseRequest::unsetdatabaseNameLike()
{
    databaseNameLikeIsSet_ = false;
}

std::string PostgreSQLHistoryDatabaseRequest::getInstanceNameLike() const
{
    return instanceNameLike_;
}

void PostgreSQLHistoryDatabaseRequest::setInstanceNameLike(const std::string& value)
{
    instanceNameLike_ = value;
    instanceNameLikeIsSet_ = true;
}

bool PostgreSQLHistoryDatabaseRequest::instanceNameLikeIsSet() const
{
    return instanceNameLikeIsSet_;
}

void PostgreSQLHistoryDatabaseRequest::unsetinstanceNameLike()
{
    instanceNameLikeIsSet_ = false;
}

}
}
}
}
}


