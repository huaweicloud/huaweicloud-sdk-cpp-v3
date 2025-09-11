

#include "huaweicloud/dbss/v1/model/ShowSqlDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowSqlDetailResponse::ShowSqlDetailResponse()
{
    sqlIsSet_ = false;
}

ShowSqlDetailResponse::~ShowSqlDetailResponse() = default;

void ShowSqlDetailResponse::validate()
{
}

web::json::value ShowSqlDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlIsSet_) {
        val[utility::conversions::to_string_t("sql")] = ModelBase::toJson(sql_);
    }

    return val;
}
bool ShowSqlDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql"));
        if(!fieldValue.is_null())
        {
            SqlDetailBean refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSql(refVal);
        }
    }
    return ok;
}


SqlDetailBean ShowSqlDetailResponse::getSql() const
{
    return sql_;
}

void ShowSqlDetailResponse::setSql(const SqlDetailBean& value)
{
    sql_ = value;
    sqlIsSet_ = true;
}

bool ShowSqlDetailResponse::sqlIsSet() const
{
    return sqlIsSet_;
}

void ShowSqlDetailResponse::unsetsql()
{
    sqlIsSet_ = false;
}

}
}
}
}
}


