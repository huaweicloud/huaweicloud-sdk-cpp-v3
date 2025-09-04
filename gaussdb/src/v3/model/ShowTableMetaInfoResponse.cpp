

#include "huaweicloud/gaussdb/v3/model/ShowTableMetaInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowTableMetaInfoResponse::ShowTableMetaInfoResponse()
{
    tableMetaInfosIsSet_ = false;
    tableNamesIsSet_ = false;
    databaseNamesIsSet_ = false;
}

ShowTableMetaInfoResponse::~ShowTableMetaInfoResponse() = default;

void ShowTableMetaInfoResponse::validate()
{
}

web::json::value ShowTableMetaInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableMetaInfosIsSet_) {
        val[utility::conversions::to_string_t("table_meta_infos")] = ModelBase::toJson(tableMetaInfos_);
    }
    if(tableNamesIsSet_) {
        val[utility::conversions::to_string_t("table_names")] = ModelBase::toJson(tableNames_);
    }
    if(databaseNamesIsSet_) {
        val[utility::conversions::to_string_t("database_names")] = ModelBase::toJson(databaseNames_);
    }

    return val;
}
bool ShowTableMetaInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("table_meta_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_meta_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<TableMetaInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableMetaInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseNames(refVal);
        }
    }
    return ok;
}


std::vector<TableMetaInfo>& ShowTableMetaInfoResponse::getTableMetaInfos()
{
    return tableMetaInfos_;
}

void ShowTableMetaInfoResponse::setTableMetaInfos(const std::vector<TableMetaInfo>& value)
{
    tableMetaInfos_ = value;
    tableMetaInfosIsSet_ = true;
}

bool ShowTableMetaInfoResponse::tableMetaInfosIsSet() const
{
    return tableMetaInfosIsSet_;
}

void ShowTableMetaInfoResponse::unsettableMetaInfos()
{
    tableMetaInfosIsSet_ = false;
}

std::vector<std::string>& ShowTableMetaInfoResponse::getTableNames()
{
    return tableNames_;
}

void ShowTableMetaInfoResponse::setTableNames(const std::vector<std::string>& value)
{
    tableNames_ = value;
    tableNamesIsSet_ = true;
}

bool ShowTableMetaInfoResponse::tableNamesIsSet() const
{
    return tableNamesIsSet_;
}

void ShowTableMetaInfoResponse::unsettableNames()
{
    tableNamesIsSet_ = false;
}

std::vector<std::string>& ShowTableMetaInfoResponse::getDatabaseNames()
{
    return databaseNames_;
}

void ShowTableMetaInfoResponse::setDatabaseNames(const std::vector<std::string>& value)
{
    databaseNames_ = value;
    databaseNamesIsSet_ = true;
}

bool ShowTableMetaInfoResponse::databaseNamesIsSet() const
{
    return databaseNamesIsSet_;
}

void ShowTableMetaInfoResponse::unsetdatabaseNames()
{
    databaseNamesIsSet_ = false;
}

}
}
}
}
}


