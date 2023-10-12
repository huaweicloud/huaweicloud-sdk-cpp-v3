

#include "huaweicloud/rds/v3/model/DeletePostgresqlDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeletePostgresqlDatabaseRequest::DeletePostgresqlDatabaseRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
}

DeletePostgresqlDatabaseRequest::~DeletePostgresqlDatabaseRequest() = default;

void DeletePostgresqlDatabaseRequest::validate()
{
}

web::json::value DeletePostgresqlDatabaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }

    return val;
}
bool DeletePostgresqlDatabaseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    return ok;
}


std::string DeletePostgresqlDatabaseRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeletePostgresqlDatabaseRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeletePostgresqlDatabaseRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeletePostgresqlDatabaseRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeletePostgresqlDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void DeletePostgresqlDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeletePostgresqlDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeletePostgresqlDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeletePostgresqlDatabaseRequest::getDbName() const
{
    return dbName_;
}

void DeletePostgresqlDatabaseRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool DeletePostgresqlDatabaseRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void DeletePostgresqlDatabaseRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

}
}
}
}
}


