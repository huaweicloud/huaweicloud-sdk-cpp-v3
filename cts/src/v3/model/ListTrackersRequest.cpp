

#include "huaweicloud/cts/v3/model/ListTrackersRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




ListTrackersRequest::ListTrackersRequest()
{
    trackerName_ = "";
    trackerNameIsSet_ = false;
    trackerType_ = "";
    trackerTypeIsSet_ = false;
}

ListTrackersRequest::~ListTrackersRequest() = default;

void ListTrackersRequest::validate()
{
}

web::json::value ListTrackersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trackerNameIsSet_) {
        val[utility::conversions::to_string_t("tracker_name")] = ModelBase::toJson(trackerName_);
    }
    if(trackerTypeIsSet_) {
        val[utility::conversions::to_string_t("tracker_type")] = ModelBase::toJson(trackerType_);
    }

    return val;
}

bool ListTrackersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tracker_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerType(refVal);
        }
    }
    return ok;
}

std::string ListTrackersRequest::getTrackerName() const
{
    return trackerName_;
}

void ListTrackersRequest::setTrackerName(const std::string& value)
{
    trackerName_ = value;
    trackerNameIsSet_ = true;
}

bool ListTrackersRequest::trackerNameIsSet() const
{
    return trackerNameIsSet_;
}

void ListTrackersRequest::unsettrackerName()
{
    trackerNameIsSet_ = false;
}

std::string ListTrackersRequest::getTrackerType() const
{
    return trackerType_;
}

void ListTrackersRequest::setTrackerType(const std::string& value)
{
    trackerType_ = value;
    trackerTypeIsSet_ = true;
}

bool ListTrackersRequest::trackerTypeIsSet() const
{
    return trackerTypeIsSet_;
}

void ListTrackersRequest::unsettrackerType()
{
    trackerTypeIsSet_ = false;
}

}
}
}
}
}


