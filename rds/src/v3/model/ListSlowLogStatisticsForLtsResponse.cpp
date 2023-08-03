

#include "huaweicloud/rds/v3/model/ListSlowLogStatisticsForLtsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSlowLogStatisticsForLtsResponse::ListSlowLogStatisticsForLtsResponse()
{
    slowLogListIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListSlowLogStatisticsForLtsResponse::~ListSlowLogStatisticsForLtsResponse() = default;

void ListSlowLogStatisticsForLtsResponse::validate()
{
}

web::json::value ListSlowLogStatisticsForLtsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(slowLogListIsSet_) {
        val[utility::conversions::to_string_t("slow_log_list")] = ModelBase::toJson(slowLogList_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool ListSlowLogStatisticsForLtsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("slow_log_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_log_list"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlSlowLogStatisticsItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowLogList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}

std::vector<MysqlSlowLogStatisticsItem>& ListSlowLogStatisticsForLtsResponse::getSlowLogList()
{
    return slowLogList_;
}

void ListSlowLogStatisticsForLtsResponse::setSlowLogList(const std::vector<MysqlSlowLogStatisticsItem>& value)
{
    slowLogList_ = value;
    slowLogListIsSet_ = true;
}

bool ListSlowLogStatisticsForLtsResponse::slowLogListIsSet() const
{
    return slowLogListIsSet_;
}

void ListSlowLogStatisticsForLtsResponse::unsetslowLogList()
{
    slowLogListIsSet_ = false;
}

int32_t ListSlowLogStatisticsForLtsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListSlowLogStatisticsForLtsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListSlowLogStatisticsForLtsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListSlowLogStatisticsForLtsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


