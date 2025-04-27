

#include "huaweicloud/gaussdb/v3/model/ShowRestoreAvailableTablesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowRestoreAvailableTablesRequest::ShowRestoreAvailableTablesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    restoreTime_ = "";
    restoreTimeIsSet_ = false;
    lastTableInfo_ = "";
    lastTableInfoIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
}

ShowRestoreAvailableTablesRequest::~ShowRestoreAvailableTablesRequest() = default;

void ShowRestoreAvailableTablesRequest::validate()
{
}

web::json::value ShowRestoreAvailableTablesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }
    if(lastTableInfoIsSet_) {
        val[utility::conversions::to_string_t("last_table_info")] = ModelBase::toJson(lastTableInfo_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }

    return val;
}
bool ShowRestoreAvailableTablesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_table_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_table_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastTableInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableName(refVal);
        }
    }
    return ok;
}


std::string ShowRestoreAvailableTablesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowRestoreAvailableTablesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowRestoreAvailableTablesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowRestoreAvailableTablesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowRestoreAvailableTablesRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowRestoreAvailableTablesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowRestoreAvailableTablesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowRestoreAvailableTablesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowRestoreAvailableTablesRequest::getRestoreTime() const
{
    return restoreTime_;
}

void ShowRestoreAvailableTablesRequest::setRestoreTime(const std::string& value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool ShowRestoreAvailableTablesRequest::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void ShowRestoreAvailableTablesRequest::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

std::string ShowRestoreAvailableTablesRequest::getLastTableInfo() const
{
    return lastTableInfo_;
}

void ShowRestoreAvailableTablesRequest::setLastTableInfo(const std::string& value)
{
    lastTableInfo_ = value;
    lastTableInfoIsSet_ = true;
}

bool ShowRestoreAvailableTablesRequest::lastTableInfoIsSet() const
{
    return lastTableInfoIsSet_;
}

void ShowRestoreAvailableTablesRequest::unsetlastTableInfo()
{
    lastTableInfoIsSet_ = false;
}

std::string ShowRestoreAvailableTablesRequest::getDatabaseName() const
{
    return databaseName_;
}

void ShowRestoreAvailableTablesRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ShowRestoreAvailableTablesRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ShowRestoreAvailableTablesRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ShowRestoreAvailableTablesRequest::getTableName() const
{
    return tableName_;
}

void ShowRestoreAvailableTablesRequest::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ShowRestoreAvailableTablesRequest::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ShowRestoreAvailableTablesRequest::unsettableName()
{
    tableNameIsSet_ = false;
}

}
}
}
}
}


