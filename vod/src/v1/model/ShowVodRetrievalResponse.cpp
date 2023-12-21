

#include "huaweicloud/vod/v1/model/ShowVodRetrievalResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowVodRetrievalResponse::ShowVodRetrievalResponse()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
    sampleDataIsSet_ = false;
}

ShowVodRetrievalResponse::~ShowVodRetrievalResponse() = default;

void ShowVodRetrievalResponse::validate()
{
}

web::json::value ShowVodRetrievalResponse::toJson() const
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
bool ShowVodRetrievalResponse::fromJson(const web::json::value& val)
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
            std::vector<VodRetrievalData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSampleData(refVal);
        }
    }
    return ok;
}


std::string ShowVodRetrievalResponse::getStartTime() const
{
    return startTime_;
}

void ShowVodRetrievalResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowVodRetrievalResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowVodRetrievalResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t ShowVodRetrievalResponse::getInterval() const
{
    return interval_;
}

void ShowVodRetrievalResponse::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ShowVodRetrievalResponse::intervalIsSet() const
{
    return intervalIsSet_;
}

void ShowVodRetrievalResponse::unsetinterval()
{
    intervalIsSet_ = false;
}

std::vector<VodRetrievalData>& ShowVodRetrievalResponse::getSampleData()
{
    return sampleData_;
}

void ShowVodRetrievalResponse::setSampleData(const std::vector<VodRetrievalData>& value)
{
    sampleData_ = value;
    sampleDataIsSet_ = true;
}

bool ShowVodRetrievalResponse::sampleDataIsSet() const
{
    return sampleDataIsSet_;
}

void ShowVodRetrievalResponse::unsetsampleData()
{
    sampleDataIsSet_ = false;
}

}
}
}
}
}


