

#include "huaweicloud/gaussdb/v3/model/TableConfigCheckResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




TableConfigCheckResult::TableConfigCheckResult()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    tableConfig_ = "";
    tableConfigIsSet_ = false;
    checkResult_ = "";
    checkResultIsSet_ = false;
}

TableConfigCheckResult::~TableConfigCheckResult() = default;

void TableConfigCheckResult::validate()
{
}

web::json::value TableConfigCheckResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(tableConfigIsSet_) {
        val[utility::conversions::to_string_t("table_config")] = ModelBase::toJson(tableConfig_);
    }
    if(checkResultIsSet_) {
        val[utility::conversions::to_string_t("check_result")] = ModelBase::toJson(checkResult_);
    }

    return val;
}
bool TableConfigCheckResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("check_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckResult(refVal);
        }
    }
    return ok;
}


std::string TableConfigCheckResult::getTableName() const
{
    return tableName_;
}

void TableConfigCheckResult::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool TableConfigCheckResult::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void TableConfigCheckResult::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string TableConfigCheckResult::getTableConfig() const
{
    return tableConfig_;
}

void TableConfigCheckResult::setTableConfig(const std::string& value)
{
    tableConfig_ = value;
    tableConfigIsSet_ = true;
}

bool TableConfigCheckResult::tableConfigIsSet() const
{
    return tableConfigIsSet_;
}

void TableConfigCheckResult::unsettableConfig()
{
    tableConfigIsSet_ = false;
}

std::string TableConfigCheckResult::getCheckResult() const
{
    return checkResult_;
}

void TableConfigCheckResult::setCheckResult(const std::string& value)
{
    checkResult_ = value;
    checkResultIsSet_ = true;
}

bool TableConfigCheckResult::checkResultIsSet() const
{
    return checkResultIsSet_;
}

void TableConfigCheckResult::unsetcheckResult()
{
    checkResultIsSet_ = false;
}

}
}
}
}
}


