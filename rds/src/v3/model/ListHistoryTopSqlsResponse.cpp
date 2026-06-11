

#include "huaweicloud/rds/v3/model/ListHistoryTopSqlsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListHistoryTopSqlsResponse::ListHistoryTopSqlsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    topSqlsIsSet_ = false;
}

ListHistoryTopSqlsResponse::~ListHistoryTopSqlsResponse() = default;

void ListHistoryTopSqlsResponse::validate()
{
}

web::json::value ListHistoryTopSqlsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(topSqlsIsSet_) {
        val[utility::conversions::to_string_t("top_sqls")] = ModelBase::toJson(topSqls_);
    }

    return val;
}
bool ListHistoryTopSqlsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top_sqls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_sqls"));
        if(!fieldValue.is_null())
        {
            std::vector<TopSql> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopSqls(refVal);
        }
    }
    return ok;
}


int32_t ListHistoryTopSqlsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListHistoryTopSqlsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListHistoryTopSqlsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListHistoryTopSqlsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<TopSql>& ListHistoryTopSqlsResponse::getTopSqls()
{
    return topSqls_;
}

void ListHistoryTopSqlsResponse::setTopSqls(const std::vector<TopSql>& value)
{
    topSqls_ = value;
    topSqlsIsSet_ = true;
}

bool ListHistoryTopSqlsResponse::topSqlsIsSet() const
{
    return topSqlsIsSet_;
}

void ListHistoryTopSqlsResponse::unsettopSqls()
{
    topSqlsIsSet_ = false;
}

}
}
}
}
}


