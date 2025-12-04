

#include "huaweicloud/vod/v1/model/ListCdnStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListCdnStatisticsResponse::ListCdnStatisticsResponse()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
    resultIsSet_ = false;
}

ListCdnStatisticsResponse::~ListCdnStatisticsResponse() = default;

void ListCdnStatisticsResponse::validate()
{
}

web::json::value ListCdnStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ListCdnStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::vector<int64_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListCdnStatisticsResponse::getStartTime() const
{
    return startTime_;
}

void ListCdnStatisticsResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListCdnStatisticsResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListCdnStatisticsResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t ListCdnStatisticsResponse::getInterval() const
{
    return interval_;
}

void ListCdnStatisticsResponse::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ListCdnStatisticsResponse::intervalIsSet() const
{
    return intervalIsSet_;
}

void ListCdnStatisticsResponse::unsetinterval()
{
    intervalIsSet_ = false;
}

std::map<std::string, std::vector<int64_t>>& ListCdnStatisticsResponse::getResult()
{
    return result_;
}

void ListCdnStatisticsResponse::setResult(const std::map<std::string, std::vector<int64_t>>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListCdnStatisticsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListCdnStatisticsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


