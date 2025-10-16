

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSessionWaitEventStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSessionWaitEventStatisticsResponse::ListSessionWaitEventStatisticsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    waitEventInfoIsSet_ = false;
}

ListSessionWaitEventStatisticsResponse::~ListSessionWaitEventStatisticsResponse() = default;

void ListSessionWaitEventStatisticsResponse::validate()
{
}

web::json::value ListSessionWaitEventStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(waitEventInfoIsSet_) {
        val[utility::conversions::to_string_t("wait_event_info")] = ModelBase::toJson(waitEventInfo_);
    }

    return val;
}
bool ListSessionWaitEventStatisticsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("wait_event_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wait_event_info"));
        if(!fieldValue.is_null())
        {
            std::vector<SessionWaitEventStatisticInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitEventInfo(refVal);
        }
    }
    return ok;
}


int32_t ListSessionWaitEventStatisticsResponse::getTotal() const
{
    return total_;
}

void ListSessionWaitEventStatisticsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSessionWaitEventStatisticsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSessionWaitEventStatisticsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<SessionWaitEventStatisticInfo>& ListSessionWaitEventStatisticsResponse::getWaitEventInfo()
{
    return waitEventInfo_;
}

void ListSessionWaitEventStatisticsResponse::setWaitEventInfo(const std::vector<SessionWaitEventStatisticInfo>& value)
{
    waitEventInfo_ = value;
    waitEventInfoIsSet_ = true;
}

bool ListSessionWaitEventStatisticsResponse::waitEventInfoIsSet() const
{
    return waitEventInfoIsSet_;
}

void ListSessionWaitEventStatisticsResponse::unsetwaitEventInfo()
{
    waitEventInfoIsSet_ = false;
}

}
}
}
}
}


