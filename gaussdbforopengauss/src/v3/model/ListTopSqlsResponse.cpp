

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTopSqlsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTopSqlsResponse::ListTopSqlsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    topSqlInfosIsSet_ = false;
}

ListTopSqlsResponse::~ListTopSqlsResponse() = default;

void ListTopSqlsResponse::validate()
{
}

web::json::value ListTopSqlsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(topSqlInfosIsSet_) {
        val[utility::conversions::to_string_t("top_sql_infos")] = ModelBase::toJson(topSqlInfos_);
    }

    return val;
}
bool ListTopSqlsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("top_sql_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_sql_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<TopSQLInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopSqlInfos(refVal);
        }
    }
    return ok;
}


int32_t ListTopSqlsResponse::getTotal() const
{
    return total_;
}

void ListTopSqlsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListTopSqlsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListTopSqlsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<TopSQLInfoResult>& ListTopSqlsResponse::getTopSqlInfos()
{
    return topSqlInfos_;
}

void ListTopSqlsResponse::setTopSqlInfos(const std::vector<TopSQLInfoResult>& value)
{
    topSqlInfos_ = value;
    topSqlInfosIsSet_ = true;
}

bool ListTopSqlsResponse::topSqlInfosIsSet() const
{
    return topSqlInfosIsSet_;
}

void ListTopSqlsResponse::unsettopSqlInfos()
{
    topSqlInfosIsSet_ = false;
}

}
}
}
}
}


