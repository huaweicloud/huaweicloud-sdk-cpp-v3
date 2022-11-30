

#include "huaweicloud/vod/v1/model/ShowVodStatisticsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowVodStatisticsResponse::ShowVodStatisticsResponse()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
    sampleDataIsSet_ = false;
}

ShowVodStatisticsResponse::~ShowVodStatisticsResponse() = default;

void ShowVodStatisticsResponse::validate()
{
}

web::json::value ShowVodStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }
    if(sampleDataIsSet_) {
        val[utility::conversions::to_string_t("sample_data")] = ModelBase::toJson(sampleData_);
    }

    return val;
}

bool ShowVodStatisticsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sample_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sample_data"));
        if(!fieldValue.is_null())
        {
            std::vector<VodSampleData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSampleData(refVal);
        }
    }
    return ok;
}


std::string ShowVodStatisticsResponse::getStartTime() const
{
    return startTime_;
}

void ShowVodStatisticsResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowVodStatisticsResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowVodStatisticsResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t ShowVodStatisticsResponse::getInterval() const
{
    return interval_;
}

void ShowVodStatisticsResponse::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ShowVodStatisticsResponse::intervalIsSet() const
{
    return intervalIsSet_;
}

void ShowVodStatisticsResponse::unsetinterval()
{
    intervalIsSet_ = false;
}

std::vector<VodSampleData>& ShowVodStatisticsResponse::getSampleData()
{
    return sampleData_;
}

void ShowVodStatisticsResponse::setSampleData(const std::vector<VodSampleData>& value)
{
    sampleData_ = value;
    sampleDataIsSet_ = true;
}

bool ShowVodStatisticsResponse::sampleDataIsSet() const
{
    return sampleDataIsSet_;
}

void ShowVodStatisticsResponse::unsetsampleData()
{
    sampleDataIsSet_ = false;
}

}
}
}
}
}


