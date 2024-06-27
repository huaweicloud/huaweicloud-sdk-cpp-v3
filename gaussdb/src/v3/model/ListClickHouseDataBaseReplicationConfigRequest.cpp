

#include "huaweicloud/gaussdb/v3/model/ListClickHouseDataBaseReplicationConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListClickHouseDataBaseReplicationConfigRequest::ListClickHouseDataBaseReplicationConfigRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListClickHouseDataBaseReplicationConfigRequest::~ListClickHouseDataBaseReplicationConfigRequest() = default;

void ListClickHouseDataBaseReplicationConfigRequest::validate()
{
}

web::json::value ListClickHouseDataBaseReplicationConfigRequest::toJson() const
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
bool ListClickHouseDataBaseReplicationConfigRequest::fromJson(const web::json::value& val)
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


std::string ListClickHouseDataBaseReplicationConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void ListClickHouseDataBaseReplicationConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListClickHouseDataBaseReplicationConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListClickHouseDataBaseReplicationConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListClickHouseDataBaseReplicationConfigRequest::getDatabaseName() const
{
    return databaseName_;
}

void ListClickHouseDataBaseReplicationConfigRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ListClickHouseDataBaseReplicationConfigRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ListClickHouseDataBaseReplicationConfigRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ListClickHouseDataBaseReplicationConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListClickHouseDataBaseReplicationConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListClickHouseDataBaseReplicationConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListClickHouseDataBaseReplicationConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


