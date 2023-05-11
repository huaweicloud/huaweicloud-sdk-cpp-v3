

#include "huaweicloud/cts/v3/model/DeleteTrackerRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




DeleteTrackerRequest::DeleteTrackerRequest()
{
    trackerName_ = "";
    trackerNameIsSet_ = false;
    trackerType_ = "";
    trackerTypeIsSet_ = false;
}

DeleteTrackerRequest::~DeleteTrackerRequest() = default;

void DeleteTrackerRequest::validate()
{
}

web::json::value DeleteTrackerRequest::toJson() const
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

bool DeleteTrackerRequest::fromJson(const web::json::value& val)
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


std::string DeleteTrackerRequest::getTrackerName() const
{
    return trackerName_;
}

void DeleteTrackerRequest::setTrackerName(const std::string& value)
{
    trackerName_ = value;
    trackerNameIsSet_ = true;
}

bool DeleteTrackerRequest::trackerNameIsSet() const
{
    return trackerNameIsSet_;
}

void DeleteTrackerRequest::unsettrackerName()
{
    trackerNameIsSet_ = false;
}

std::string DeleteTrackerRequest::getTrackerType() const
{
    return trackerType_;
}

void DeleteTrackerRequest::setTrackerType(const std::string& value)
{
    trackerType_ = value;
    trackerTypeIsSet_ = true;
}

bool DeleteTrackerRequest::trackerTypeIsSet() const
{
    return trackerTypeIsSet_;
}

void DeleteTrackerRequest::unsettrackerType()
{
    trackerTypeIsSet_ = false;
}

}
}
}
}
}


