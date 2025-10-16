

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSessionTopSqlStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSessionTopSqlStatisticsResponse::ListSessionTopSqlStatisticsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    topSqlInfoIsSet_ = false;
}

ListSessionTopSqlStatisticsResponse::~ListSessionTopSqlStatisticsResponse() = default;

void ListSessionTopSqlStatisticsResponse::validate()
{
}

web::json::value ListSessionTopSqlStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(topSqlInfoIsSet_) {
        val[utility::conversions::to_string_t("top_sql_info")] = ModelBase::toJson(topSqlInfo_);
    }

    return val;
}
bool ListSessionTopSqlStatisticsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("top_sql_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_sql_info"));
        if(!fieldValue.is_null())
        {
            std::vector<SessionTopSqlStatisticInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopSqlInfo(refVal);
        }
    }
    return ok;
}


int32_t ListSessionTopSqlStatisticsResponse::getTotal() const
{
    return total_;
}

void ListSessionTopSqlStatisticsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSessionTopSqlStatisticsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSessionTopSqlStatisticsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<SessionTopSqlStatisticInfo>& ListSessionTopSqlStatisticsResponse::getTopSqlInfo()
{
    return topSqlInfo_;
}

void ListSessionTopSqlStatisticsResponse::setTopSqlInfo(const std::vector<SessionTopSqlStatisticInfo>& value)
{
    topSqlInfo_ = value;
    topSqlInfoIsSet_ = true;
}

bool ListSessionTopSqlStatisticsResponse::topSqlInfoIsSet() const
{
    return topSqlInfoIsSet_;
}

void ListSessionTopSqlStatisticsResponse::unsettopSqlInfo()
{
    topSqlInfoIsSet_ = false;
}

}
}
}
}
}


