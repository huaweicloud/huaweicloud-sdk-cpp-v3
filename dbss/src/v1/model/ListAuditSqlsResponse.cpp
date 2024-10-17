

#include "huaweicloud/dbss/v1/model/ListAuditSqlsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditSqlsResponse::ListAuditSqlsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    sqlsIsSet_ = false;
}

ListAuditSqlsResponse::~ListAuditSqlsResponse() = default;

void ListAuditSqlsResponse::validate()
{
}

web::json::value ListAuditSqlsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(sqlsIsSet_) {
        val[utility::conversions::to_string_t("sqls")] = ModelBase::toJson(sqls_);
    }

    return val;
}
bool ListAuditSqlsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sqls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sqls"));
        if(!fieldValue.is_null())
        {
            std::vector<AuditSqlResponse_sqls> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqls(refVal);
        }
    }
    return ok;
}


int32_t ListAuditSqlsResponse::getTotal() const
{
    return total_;
}

void ListAuditSqlsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAuditSqlsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAuditSqlsResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ListAuditSqlsResponse::getCount() const
{
    return count_;
}

void ListAuditSqlsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListAuditSqlsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListAuditSqlsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<AuditSqlResponse_sqls>& ListAuditSqlsResponse::getSqls()
{
    return sqls_;
}

void ListAuditSqlsResponse::setSqls(const std::vector<AuditSqlResponse_sqls>& value)
{
    sqls_ = value;
    sqlsIsSet_ = true;
}

bool ListAuditSqlsResponse::sqlsIsSet() const
{
    return sqlsIsSet_;
}

void ListAuditSqlsResponse::unsetsqls()
{
    sqlsIsSet_ = false;
}

}
}
}
}
}


