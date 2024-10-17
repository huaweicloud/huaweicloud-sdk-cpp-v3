

#include "huaweicloud/dbss/v1/model/AuditSqlResponse_sqls.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AuditSqlResponse_sqls::AuditSqlResponse_sqls()
{
    sqlIsSet_ = false;
}

AuditSqlResponse_sqls::~AuditSqlResponse_sqls() = default;

void AuditSqlResponse_sqls::validate()
{
}

web::json::value AuditSqlResponse_sqls::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlIsSet_) {
        val[utility::conversions::to_string_t("sql")] = ModelBase::toJson(sql_);
    }

    return val;
}
bool AuditSqlResponse_sqls::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql"));
        if(!fieldValue.is_null())
        {
            AuditSqlResponse_sql refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSql(refVal);
        }
    }
    return ok;
}


AuditSqlResponse_sql AuditSqlResponse_sqls::getSql() const
{
    return sql_;
}

void AuditSqlResponse_sqls::setSql(const AuditSqlResponse_sql& value)
{
    sql_ = value;
    sqlIsSet_ = true;
}

bool AuditSqlResponse_sqls::sqlIsSet() const
{
    return sqlIsSet_;
}

void AuditSqlResponse_sqls::unsetsql()
{
    sqlIsSet_ = false;
}

}
}
}
}
}


