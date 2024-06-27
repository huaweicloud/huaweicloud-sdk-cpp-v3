

#include "huaweicloud/gaussdb/v3/model/DeleteClickHouseDataBaseConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteClickHouseDataBaseConfigRequest::DeleteClickHouseDataBaseConfigRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
}

DeleteClickHouseDataBaseConfigRequest::~DeleteClickHouseDataBaseConfigRequest() = default;

void DeleteClickHouseDataBaseConfigRequest::validate()
{
}

web::json::value DeleteClickHouseDataBaseConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }

    return val;
}
bool DeleteClickHouseDataBaseConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
        }
    }
    return ok;
}


std::string DeleteClickHouseDataBaseConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteClickHouseDataBaseConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteClickHouseDataBaseConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteClickHouseDataBaseConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteClickHouseDataBaseConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteClickHouseDataBaseConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteClickHouseDataBaseConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteClickHouseDataBaseConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteClickHouseDataBaseConfigRequest::getDatabase() const
{
    return database_;
}

void DeleteClickHouseDataBaseConfigRequest::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool DeleteClickHouseDataBaseConfigRequest::databaseIsSet() const
{
    return databaseIsSet_;
}

void DeleteClickHouseDataBaseConfigRequest::unsetdatabase()
{
    databaseIsSet_ = false;
}

}
}
}
}
}


