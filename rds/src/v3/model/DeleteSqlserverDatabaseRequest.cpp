

#include "huaweicloud/rds/v3/model/DeleteSqlserverDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteSqlserverDatabaseRequest::DeleteSqlserverDatabaseRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteSqlserverDatabaseRequest::~DeleteSqlserverDatabaseRequest() = default;

void DeleteSqlserverDatabaseRequest::validate()
{
}

web::json::value DeleteSqlserverDatabaseRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteSqlserverDatabaseRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DropDatabaseV3Req refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteSqlserverDatabaseRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteSqlserverDatabaseRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteSqlserverDatabaseRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteSqlserverDatabaseRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteSqlserverDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteSqlserverDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteSqlserverDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteSqlserverDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteSqlserverDatabaseRequest::getDbName() const
{
    return dbName_;
}

void DeleteSqlserverDatabaseRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool DeleteSqlserverDatabaseRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void DeleteSqlserverDatabaseRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

DropDatabaseV3Req DeleteSqlserverDatabaseRequest::getBody() const
{
    return body_;
}

void DeleteSqlserverDatabaseRequest::setBody(const DropDatabaseV3Req& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteSqlserverDatabaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteSqlserverDatabaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


