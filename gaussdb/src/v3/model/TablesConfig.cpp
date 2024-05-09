

#include "huaweicloud/gaussdb/v3/model/TablesConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




TablesConfig::TablesConfig()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    tableConfig_ = "";
    tableConfigIsSet_ = false;
}

TablesConfig::~TablesConfig() = default;

void TablesConfig::validate()
{
}

web::json::value TablesConfig::toJson() const
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
bool TablesConfig::fromJson(const web::json::value& val)
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


std::string TablesConfig::getTableName() const
{
    return tableName_;
}

void TablesConfig::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool TablesConfig::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void TablesConfig::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string TablesConfig::getTableConfig() const
{
    return tableConfig_;
}

void TablesConfig::setTableConfig(const std::string& value)
{
    tableConfig_ = value;
    tableConfigIsSet_ = true;
}

bool TablesConfig::tableConfigIsSet() const
{
    return tableConfigIsSet_;
}

void TablesConfig::unsettableConfig()
{
    tableConfigIsSet_ = false;
}

}
}
}
}
}


