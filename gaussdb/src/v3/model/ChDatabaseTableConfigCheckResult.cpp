

#include "huaweicloud/gaussdb/v3/model/ChDatabaseTableConfigCheckResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChDatabaseTableConfigCheckResult::ChDatabaseTableConfigCheckResult()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    tableConfig_ = "";
    tableConfigIsSet_ = false;
    checkResult_ = "";
    checkResultIsSet_ = false;
}

ChDatabaseTableConfigCheckResult::~ChDatabaseTableConfigCheckResult() = default;

void ChDatabaseTableConfigCheckResult::validate()
{
}

web::json::value ChDatabaseTableConfigCheckResult::toJson() const
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
bool ChDatabaseTableConfigCheckResult::fromJson(const web::json::value& val)
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


std::string ChDatabaseTableConfigCheckResult::getTableName() const
{
    return tableName_;
}

void ChDatabaseTableConfigCheckResult::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ChDatabaseTableConfigCheckResult::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ChDatabaseTableConfigCheckResult::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string ChDatabaseTableConfigCheckResult::getTableConfig() const
{
    return tableConfig_;
}

void ChDatabaseTableConfigCheckResult::setTableConfig(const std::string& value)
{
    tableConfig_ = value;
    tableConfigIsSet_ = true;
}

bool ChDatabaseTableConfigCheckResult::tableConfigIsSet() const
{
    return tableConfigIsSet_;
}

void ChDatabaseTableConfigCheckResult::unsettableConfig()
{
    tableConfigIsSet_ = false;
}

std::string ChDatabaseTableConfigCheckResult::getCheckResult() const
{
    return checkResult_;
}

void ChDatabaseTableConfigCheckResult::setCheckResult(const std::string& value)
{
    checkResult_ = value;
    checkResultIsSet_ = true;
}

bool ChDatabaseTableConfigCheckResult::checkResultIsSet() const
{
    return checkResultIsSet_;
}

void ChDatabaseTableConfigCheckResult::unsetcheckResult()
{
    checkResultIsSet_ = false;
}

}
}
}
}
}


