

#include "huaweicloud/drs/v5/model/ShowTimelineResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowTimelineResponse::ShowTimelineResponse()
{
    count_ = 0L;
    countIsSet_ = false;
    timelinesIsSet_ = false;
}

ShowTimelineResponse::~ShowTimelineResponse() = default;

void ShowTimelineResponse::validate()
{
}

web::json::value ShowTimelineResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(timelinesIsSet_) {
        val[utility::conversions::to_string_t("timelines")] = ModelBase::toJson(timelines_);
    }

    return val;
}
bool ShowTimelineResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timelines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timelines"));
        if(!fieldValue.is_null())
        {
            std::vector<TimelineInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimelines(refVal);
        }
    }
    return ok;
}


int64_t ShowTimelineResponse::getCount() const
{
    return count_;
}

void ShowTimelineResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowTimelineResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowTimelineResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<TimelineInfo>& ShowTimelineResponse::getTimelines()
{
    return timelines_;
}

void ShowTimelineResponse::setTimelines(const std::vector<TimelineInfo>& value)
{
    timelines_ = value;
    timelinesIsSet_ = true;
}

bool ShowTimelineResponse::timelinesIsSet() const
{
    return timelinesIsSet_;
}

void ShowTimelineResponse::unsettimelines()
{
    timelinesIsSet_ = false;
}

}
}
}
}
}


