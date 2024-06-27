

#include "huaweicloud/gaussdb/v3/model/DeleteClickHouseDataBaseReplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteClickHouseDataBaseReplicationRequest::DeleteClickHouseDataBaseReplicationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

DeleteClickHouseDataBaseReplicationRequest::~DeleteClickHouseDataBaseReplicationRequest() = default;

void DeleteClickHouseDataBaseReplicationRequest::validate()
{
}

web::json::value DeleteClickHouseDataBaseReplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool DeleteClickHouseDataBaseReplicationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string DeleteClickHouseDataBaseReplicationRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteClickHouseDataBaseReplicationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteClickHouseDataBaseReplicationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteClickHouseDataBaseReplicationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteClickHouseDataBaseReplicationRequest::getDatabaseName() const
{
    return databaseName_;
}

void DeleteClickHouseDataBaseReplicationRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool DeleteClickHouseDataBaseReplicationRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void DeleteClickHouseDataBaseReplicationRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string DeleteClickHouseDataBaseReplicationRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteClickHouseDataBaseReplicationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteClickHouseDataBaseReplicationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteClickHouseDataBaseReplicationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


