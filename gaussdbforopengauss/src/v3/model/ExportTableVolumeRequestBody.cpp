

#include "huaweicloud/gaussdbforopengauss/v3/model/ExportTableVolumeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExportTableVolumeRequestBody::ExportTableVolumeRequestBody()
{
    databaseName_ = "";
    databaseNameIsSet_ = false;
    schemaNamesIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortOrder_ = "";
    sortOrderIsSet_ = false;
}

ExportTableVolumeRequestBody::~ExportTableVolumeRequestBody() = default;

void ExportTableVolumeRequestBody::validate()
{
}

web::json::value ExportTableVolumeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(schemaNamesIsSet_) {
        val[utility::conversions::to_string_t("schema_names")] = ModelBase::toJson(schemaNames_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortOrderIsSet_) {
        val[utility::conversions::to_string_t("sort_order")] = ModelBase::toJson(sortOrder_);
    }

    return val;
}
bool ExportTableVolumeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaNames(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortOrder(refVal);
        }
    }
    return ok;
}


std::string ExportTableVolumeRequestBody::getDatabaseName() const
{
    return databaseName_;
}

void ExportTableVolumeRequestBody::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ExportTableVolumeRequestBody::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ExportTableVolumeRequestBody::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::vector<std::string>& ExportTableVolumeRequestBody::getSchemaNames()
{
    return schemaNames_;
}

void ExportTableVolumeRequestBody::setSchemaNames(const std::vector<std::string>& value)
{
    schemaNames_ = value;
    schemaNamesIsSet_ = true;
}

bool ExportTableVolumeRequestBody::schemaNamesIsSet() const
{
    return schemaNamesIsSet_;
}

void ExportTableVolumeRequestBody::unsetschemaNames()
{
    schemaNamesIsSet_ = false;
}

std::string ExportTableVolumeRequestBody::getTableName() const
{
    return tableName_;
}

void ExportTableVolumeRequestBody::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ExportTableVolumeRequestBody::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ExportTableVolumeRequestBody::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string ExportTableVolumeRequestBody::getUserName() const
{
    return userName_;
}

void ExportTableVolumeRequestBody::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ExportTableVolumeRequestBody::userNameIsSet() const
{
    return userNameIsSet_;
}

void ExportTableVolumeRequestBody::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ExportTableVolumeRequestBody::getSortKey() const
{
    return sortKey_;
}

void ExportTableVolumeRequestBody::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ExportTableVolumeRequestBody::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ExportTableVolumeRequestBody::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ExportTableVolumeRequestBody::getSortOrder() const
{
    return sortOrder_;
}

void ExportTableVolumeRequestBody::setSortOrder(const std::string& value)
{
    sortOrder_ = value;
    sortOrderIsSet_ = true;
}

bool ExportTableVolumeRequestBody::sortOrderIsSet() const
{
    return sortOrderIsSet_;
}

void ExportTableVolumeRequestBody::unsetsortOrder()
{
    sortOrderIsSet_ = false;
}

}
}
}
}
}


