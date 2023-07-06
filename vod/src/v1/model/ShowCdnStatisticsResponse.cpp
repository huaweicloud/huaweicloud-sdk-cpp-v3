

#include "huaweicloud/vod/v1/model/ShowCdnStatisticsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowCdnStatisticsResponse::ShowCdnStatisticsResponse()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
    valuesIsSet_ = false;
}

ShowCdnStatisticsResponse::~ShowCdnStatisticsResponse() = default;

void ShowCdnStatisticsResponse::validate()
{
}

web::json::value ShowCdnStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}

bool ShowCdnStatisticsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<int64_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}

std::string ShowCdnStatisticsResponse::getStartTime() const
{
    return startTime_;
}

void ShowCdnStatisticsResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowCdnStatisticsResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowCdnStatisticsResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t ShowCdnStatisticsResponse::getInterval() const
{
    return interval_;
}

void ShowCdnStatisticsResponse::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ShowCdnStatisticsResponse::intervalIsSet() const
{
    return intervalIsSet_;
}

void ShowCdnStatisticsResponse::unsetinterval()
{
    intervalIsSet_ = false;
}

std::vector<int64_t>& ShowCdnStatisticsResponse::getValues()
{
    return values_;
}

void ShowCdnStatisticsResponse::setValues(std::vector<int64_t> value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ShowCdnStatisticsResponse::valuesIsSet() const
{
    return valuesIsSet_;
}

void ShowCdnStatisticsResponse::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


