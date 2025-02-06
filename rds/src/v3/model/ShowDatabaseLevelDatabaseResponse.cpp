

#include "huaweicloud/rds/v3/model/ShowDatabaseLevelDatabaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowDatabaseLevelDatabaseResponse::ShowDatabaseLevelDatabaseResponse()
{
    databasesIsSet_ = false;
    databaseLimit_ = 0;
    databaseLimitIsSet_ = false;
    bucketName_ = "";
    bucketNameIsSet_ = false;
}

ShowDatabaseLevelDatabaseResponse::~ShowDatabaseLevelDatabaseResponse() = default;

void ShowDatabaseLevelDatabaseResponse::validate()
{
}

web::json::value ShowDatabaseLevelDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }
    if(databaseLimitIsSet_) {
        val[utility::conversions::to_string_t("database_limit")] = ModelBase::toJson(databaseLimit_);
    }
    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }

    return val;
}
bool ShowDatabaseLevelDatabaseResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<DatabaseBackupInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketName(refVal);
        }
    }
    return ok;
}


std::vector<DatabaseBackupInfo>& ShowDatabaseLevelDatabaseResponse::getDatabases()
{
    return databases_;
}

void ShowDatabaseLevelDatabaseResponse::setDatabases(const std::vector<DatabaseBackupInfo>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ShowDatabaseLevelDatabaseResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void ShowDatabaseLevelDatabaseResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t ShowDatabaseLevelDatabaseResponse::getDatabaseLimit() const
{
    return databaseLimit_;
}

void ShowDatabaseLevelDatabaseResponse::setDatabaseLimit(int32_t value)
{
    databaseLimit_ = value;
    databaseLimitIsSet_ = true;
}

bool ShowDatabaseLevelDatabaseResponse::databaseLimitIsSet() const
{
    return databaseLimitIsSet_;
}

void ShowDatabaseLevelDatabaseResponse::unsetdatabaseLimit()
{
    databaseLimitIsSet_ = false;
}

std::string ShowDatabaseLevelDatabaseResponse::getBucketName() const
{
    return bucketName_;
}

void ShowDatabaseLevelDatabaseResponse::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool ShowDatabaseLevelDatabaseResponse::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void ShowDatabaseLevelDatabaseResponse::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

}
}
}
}
}


