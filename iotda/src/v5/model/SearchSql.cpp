

#include "huaweicloud/iotda/v5/model/SearchSql.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




SearchSql::SearchSql()
{
    sql_ = "";
    sqlIsSet_ = false;
}

SearchSql::~SearchSql() = default;

void SearchSql::validate()
{
}

web::json::value SearchSql::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlIsSet_) {
        val[utility::conversions::to_string_t("sql")] = ModelBase::toJson(sql_);
    }

    return val;
}
bool SearchSql::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSql(refVal);
        }
    }
    return ok;
}


std::string SearchSql::getSql() const
{
    return sql_;
}

void SearchSql::setSql(const std::string& value)
{
    sql_ = value;
    sqlIsSet_ = true;
}

bool SearchSql::sqlIsSet() const
{
    return sqlIsSet_;
}

void SearchSql::unsetsql()
{
    sqlIsSet_ = false;
}

}
}
}
}
}


