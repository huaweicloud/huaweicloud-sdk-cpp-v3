

#include "huaweicloud/gaussdb/v3/model/ChDatabaseTablesConfigsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChDatabaseTablesConfigsInfo::ChDatabaseTablesConfigsInfo()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    tableConfig_ = "";
    tableConfigIsSet_ = false;
}

ChDatabaseTablesConfigsInfo::~ChDatabaseTablesConfigsInfo() = default;

void ChDatabaseTablesConfigsInfo::validate()
{
}

web::json::value ChDatabaseTablesConfigsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(tableConfigIsSet_) {
        val[utility::conversions::to_string_t("table_config")] = ModelBase::toJson(tableConfig_);
    }

    return val;
}
bool ChDatabaseTablesConfigsInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_config"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableConfig(refVal);
        }
    }
    return ok;
}


std::string ChDatabaseTablesConfigsInfo::getTableName() const
{
    return tableName_;
}

void ChDatabaseTablesConfigsInfo::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ChDatabaseTablesConfigsInfo::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ChDatabaseTablesConfigsInfo::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string ChDatabaseTablesConfigsInfo::getTableConfig() const
{
    return tableConfig_;
}

void ChDatabaseTablesConfigsInfo::setTableConfig(const std::string& value)
{
    tableConfig_ = value;
    tableConfigIsSet_ = true;
}

bool ChDatabaseTablesConfigsInfo::tableConfigIsSet() const
{
    return tableConfigIsSet_;
}

void ChDatabaseTablesConfigsInfo::unsettableConfig()
{
    tableConfigIsSet_ = false;
}

}
}
}
}
}


