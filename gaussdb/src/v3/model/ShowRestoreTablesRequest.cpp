

#include "huaweicloud/gaussdb/v3/model/ShowRestoreTablesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowRestoreTablesRequest::ShowRestoreTablesRequest()
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

ShowRestoreTablesRequest::~ShowRestoreTablesRequest() = default;

void ShowRestoreTablesRequest::validate()
{
}

web::json::value ShowRestoreTablesRequest::toJson() const
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
bool ShowRestoreTablesRequest::fromJson(const web::json::value& val)
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


std::string ShowRestoreTablesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowRestoreTablesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowRestoreTablesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowRestoreTablesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowRestoreTablesRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowRestoreTablesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowRestoreTablesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowRestoreTablesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowRestoreTablesRequest::getRestoreTime() const
{
    return restoreTime_;
}

void ShowRestoreTablesRequest::setRestoreTime(const std::string& value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool ShowRestoreTablesRequest::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void ShowRestoreTablesRequest::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

std::string ShowRestoreTablesRequest::getLastTableInfo() const
{
    return lastTableInfo_;
}

void ShowRestoreTablesRequest::setLastTableInfo(const std::string& value)
{
    lastTableInfo_ = value;
    lastTableInfoIsSet_ = true;
}

bool ShowRestoreTablesRequest::lastTableInfoIsSet() const
{
    return lastTableInfoIsSet_;
}

void ShowRestoreTablesRequest::unsetlastTableInfo()
{
    lastTableInfoIsSet_ = false;
}

std::string ShowRestoreTablesRequest::getDatabaseName() const
{
    return databaseName_;
}

void ShowRestoreTablesRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ShowRestoreTablesRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ShowRestoreTablesRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ShowRestoreTablesRequest::getTableName() const
{
    return tableName_;
}

void ShowRestoreTablesRequest::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ShowRestoreTablesRequest::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ShowRestoreTablesRequest::unsettableName()
{
    tableNameIsSet_ = false;
}

}
}
}
}
}


