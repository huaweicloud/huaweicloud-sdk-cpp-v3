

#include "huaweicloud/gaussdbforopengauss/v3/model/DatabaseForListTableResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DatabaseForListTableResult::DatabaseForListTableResult()
{
    tableName_ = "";
    tableNameIsSet_ = false;
}

DatabaseForListTableResult::~DatabaseForListTableResult() = default;

void DatabaseForListTableResult::validate()
{
}

web::json::value DatabaseForListTableResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }

    return val;
}
bool DatabaseForListTableResult::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DatabaseForListTableResult::getTableName() const
{
    return tableName_;
}

void DatabaseForListTableResult::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool DatabaseForListTableResult::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void DatabaseForListTableResult::unsettableName()
{
    tableNameIsSet_ = false;
}

}
}
}
}
}


