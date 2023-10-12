

#include "huaweicloud/cts/v3/model/ListTrackersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




ListTrackersResponse::ListTrackersResponse()
{
    trackersIsSet_ = false;
}

ListTrackersResponse::~ListTrackersResponse() = default;

void ListTrackersResponse::validate()
{
}

web::json::value ListTrackersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trackersIsSet_) {
        val[utility::conversions::to_string_t("trackers")] = ModelBase::toJson(trackers_);
    }

    return val;
}
bool ListTrackersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trackers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trackers"));
        if(!fieldValue.is_null())
        {
            std::vector<TrackerResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackers(refVal);
        }
    }
    return ok;
}


std::vector<TrackerResponseBody>& ListTrackersResponse::getTrackers()
{
    return trackers_;
}

void ListTrackersResponse::setTrackers(const std::vector<TrackerResponseBody>& value)
{
    trackers_ = value;
    trackersIsSet_ = true;
}

bool ListTrackersResponse::trackersIsSet() const
{
    return trackersIsSet_;
}

void ListTrackersResponse::unsettrackers()
{
    trackersIsSet_ = false;
}

}
}
}
}
}


