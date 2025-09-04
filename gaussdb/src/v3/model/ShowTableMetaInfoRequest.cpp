

#include "huaweicloud/gaussdb/v3/model/ShowTableMetaInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowTableMetaInfoRequest::ShowTableMetaInfoRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
}

ShowTableMetaInfoRequest::~ShowTableMetaInfoRequest() = default;

void ShowTableMetaInfoRequest::validate()
{
}

web::json::value ShowTableMetaInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }

    return val;
}
bool ShowTableMetaInfoRequest::fromJson(const web::json::value& val)
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


std::string ShowTableMetaInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowTableMetaInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowTableMetaInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowTableMetaInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowTableMetaInfoRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowTableMetaInfoRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowTableMetaInfoRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowTableMetaInfoRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowTableMetaInfoRequest::getDatabaseName() const
{
    return databaseName_;
}

void ShowTableMetaInfoRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ShowTableMetaInfoRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ShowTableMetaInfoRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ShowTableMetaInfoRequest::getTableName() const
{
    return tableName_;
}

void ShowTableMetaInfoRequest::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ShowTableMetaInfoRequest::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ShowTableMetaInfoRequest::unsettableName()
{
    tableNameIsSet_ = false;
}

}
}
}
}
}


