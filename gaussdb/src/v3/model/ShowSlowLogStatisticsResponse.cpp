

#include "huaweicloud/gaussdb/v3/model/ShowSlowLogStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowSlowLogStatisticsResponse::ShowSlowLogStatisticsResponse()
{
    slowLogListIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowSlowLogStatisticsResponse::~ShowSlowLogStatisticsResponse() = default;

void ShowSlowLogStatisticsResponse::validate()
{
}

web::json::value ShowSlowLogStatisticsResponse::toJson() const
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
bool ShowSlowLogStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("slow_log_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_log_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowSlowLogStatisticsItem> refVal;
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


std::vector<ShowSlowLogStatisticsItem>& ShowSlowLogStatisticsResponse::getSlowLogList()
{
    return slowLogList_;
}

void ShowSlowLogStatisticsResponse::setSlowLogList(const std::vector<ShowSlowLogStatisticsItem>& value)
{
    slowLogList_ = value;
    slowLogListIsSet_ = true;
}

bool ShowSlowLogStatisticsResponse::slowLogListIsSet() const
{
    return slowLogListIsSet_;
}

void ShowSlowLogStatisticsResponse::unsetslowLogList()
{
    slowLogListIsSet_ = false;
}

int32_t ShowSlowLogStatisticsResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowSlowLogStatisticsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowSlowLogStatisticsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowSlowLogStatisticsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


