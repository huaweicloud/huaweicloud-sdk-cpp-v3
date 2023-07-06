

#include "huaweicloud/ecs/v2/model/ListFlavorSellPoliciesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListFlavorSellPoliciesRequest::ListFlavorSellPoliciesRequest()
{
    flavorId_ = "";
    flavorIdIsSet_ = false;
    sellStatus_ = "";
    sellStatusIsSet_ = false;
    sellMode_ = "";
    sellModeIsSet_ = false;
    availabilityZoneId_ = "";
    availabilityZoneIdIsSet_ = false;
    longestSpotDurationHoursGt_ = 0;
    longestSpotDurationHoursGtIsSet_ = false;
    largestSpotDurationCountGt_ = 0;
    largestSpotDurationCountGtIsSet_ = false;
    longestSpotDurationHours_ = 0;
    longestSpotDurationHoursIsSet_ = false;
    largestSpotDurationCount_ = 0;
    largestSpotDurationCountIsSet_ = false;
    interruptionPolicy_ = "";
    interruptionPolicyIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListFlavorSellPoliciesRequest::~ListFlavorSellPoliciesRequest() = default;

void ListFlavorSellPoliciesRequest::validate()
{
}

web::json::value ListFlavorSellPoliciesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }
    if(sellStatusIsSet_) {
        val[utility::conversions::to_string_t("sell_status")] = ModelBase::toJson(sellStatus_);
    }
    if(sellModeIsSet_) {
        val[utility::conversions::to_string_t("sell_mode")] = ModelBase::toJson(sellMode_);
    }
    if(availabilityZoneIdIsSet_) {
        val[utility::conversions::to_string_t("availability_zone_id")] = ModelBase::toJson(availabilityZoneId_);
    }
    if(longestSpotDurationHoursGtIsSet_) {
        val[utility::conversions::to_string_t("longest_spot_duration_hours_gt")] = ModelBase::toJson(longestSpotDurationHoursGt_);
    }
    if(largestSpotDurationCountGtIsSet_) {
        val[utility::conversions::to_string_t("largest_spot_duration_count_gt")] = ModelBase::toJson(largestSpotDurationCountGt_);
    }
    if(longestSpotDurationHoursIsSet_) {
        val[utility::conversions::to_string_t("longest_spot_duration_hours")] = ModelBase::toJson(longestSpotDurationHours_);
    }
    if(largestSpotDurationCountIsSet_) {
        val[utility::conversions::to_string_t("largest_spot_duration_count")] = ModelBase::toJson(largestSpotDurationCount_);
    }
    if(interruptionPolicyIsSet_) {
        val[utility::conversions::to_string_t("interruption_policy")] = ModelBase::toJson(interruptionPolicy_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}

bool ListFlavorSellPoliciesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sell_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sell_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSellStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sell_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sell_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSellMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZoneId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("longest_spot_duration_hours_gt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("longest_spot_duration_hours_gt"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLongestSpotDurationHoursGt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("largest_spot_duration_count_gt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("largest_spot_duration_count_gt"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLargestSpotDurationCountGt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("longest_spot_duration_hours"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("longest_spot_duration_hours"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLongestSpotDurationHours(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("largest_spot_duration_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("largest_spot_duration_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLargestSpotDurationCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interruption_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interruption_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterruptionPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    return ok;
}

std::string ListFlavorSellPoliciesRequest::getFlavorId() const
{
    return flavorId_;
}

void ListFlavorSellPoliciesRequest::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool ListFlavorSellPoliciesRequest::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void ListFlavorSellPoliciesRequest::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

std::string ListFlavorSellPoliciesRequest::getSellStatus() const
{
    return sellStatus_;
}

void ListFlavorSellPoliciesRequest::setSellStatus(const std::string& value)
{
    sellStatus_ = value;
    sellStatusIsSet_ = true;
}

bool ListFlavorSellPoliciesRequest::sellStatusIsSet() const
{
    return sellStatusIsSet_;
}

void ListFlavorSellPoliciesRequest::unsetsellStatus()
{
    sellStatusIsSet_ = false;
}

std::string ListFlavorSellPoliciesRequest::getSellMode() const
{
    return sellMode_;
}

void ListFlavorSellPoliciesRequest::setSellMode(const std::string& value)
{
    sellMode_ = value;
    sellModeIsSet_ = true;
}

bool ListFlavorSellPoliciesRequest::sellModeIsSet() const
{
    return sellModeIsSet_;
}

void ListFlavorSellPoliciesRequest::unsetsellMode()
{
    sellModeIsSet_ = false;
}

std::string ListFlavorSellPoliciesRequest::getAvailabilityZoneId() const
{
    return availabilityZoneId_;
}

void ListFlavorSellPoliciesRequest::setAvailabilityZoneId(const std::string& value)
{
    availabilityZoneId_ = value;
    availabilityZoneIdIsSet_ = true;
}

bool ListFlavorSellPoliciesRequest::availabilityZoneIdIsSet() const
{
    return availabilityZoneIdIsSet_;
}

void ListFlavorSellPoliciesRequest::unsetavailabilityZoneId()
{
    availabilityZoneIdIsSet_ = false;
}

int32_t ListFlavorSellPoliciesRequest::getLongestSpotDurationHoursGt() const
{
    return longestSpotDurationHoursGt_;
}

void ListFlavorSellPoliciesRequest::setLongestSpotDurationHoursGt(int32_t value)
{
    longestSpotDurationHoursGt_ = value;
    longestSpotDurationHoursGtIsSet_ = true;
}

bool ListFlavorSellPoliciesRequest::longestSpotDurationHoursGtIsSet() const
{
    return longestSpotDurationHoursGtIsSet_;
}

void ListFlavorSellPoliciesRequest::unsetlongestSpotDurationHoursGt()
{
    longestSpotDurationHoursGtIsSet_ = false;
}

int32_t ListFlavorSellPoliciesRequest::getLargestSpotDurationCountGt() const
{
    return largestSpotDurationCountGt_;
}

void ListFlavorSellPoliciesRequest::setLargestSpotDurationCountGt(int32_t value)
{
    largestSpotDurationCountGt_ = value;
    largestSpotDurationCountGtIsSet_ = true;
}

bool ListFlavorSellPoliciesRequest::largestSpotDurationCountGtIsSet() const
{
    return largestSpotDurationCountGtIsSet_;
}

void ListFlavorSellPoliciesRequest::unsetlargestSpotDurationCountGt()
{
    largestSpotDurationCountGtIsSet_ = false;
}

int32_t ListFlavorSellPoliciesRequest::getLongestSpotDurationHours() const
{
    return longestSpotDurationHours_;
}

void ListFlavorSellPoliciesRequest::setLongestSpotDurationHours(int32_t value)
{
    longestSpotDurationHours_ = value;
    longestSpotDurationHoursIsSet_ = true;
}

bool ListFlavorSellPoliciesRequest::longestSpotDurationHoursIsSet() const
{
    return longestSpotDurationHoursIsSet_;
}

void ListFlavorSellPoliciesRequest::unsetlongestSpotDurationHours()
{
    longestSpotDurationHoursIsSet_ = false;
}

int32_t ListFlavorSellPoliciesRequest::getLargestSpotDurationCount() const
{
    return largestSpotDurationCount_;
}

void ListFlavorSellPoliciesRequest::setLargestSpotDurationCount(int32_t value)
{
    largestSpotDurationCount_ = value;
    largestSpotDurationCountIsSet_ = true;
}

bool ListFlavorSellPoliciesRequest::largestSpotDurationCountIsSet() const
{
    return largestSpotDurationCountIsSet_;
}

void ListFlavorSellPoliciesRequest::unsetlargestSpotDurationCount()
{
    largestSpotDurationCountIsSet_ = false;
}

std::string ListFlavorSellPoliciesRequest::getInterruptionPolicy() const
{
    return interruptionPolicy_;
}

void ListFlavorSellPoliciesRequest::setInterruptionPolicy(const std::string& value)
{
    interruptionPolicy_ = value;
    interruptionPolicyIsSet_ = true;
}

bool ListFlavorSellPoliciesRequest::interruptionPolicyIsSet() const
{
    return interruptionPolicyIsSet_;
}

void ListFlavorSellPoliciesRequest::unsetinterruptionPolicy()
{
    interruptionPolicyIsSet_ = false;
}

int32_t ListFlavorSellPoliciesRequest::getLimit() const
{
    return limit_;
}

void ListFlavorSellPoliciesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFlavorSellPoliciesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListFlavorSellPoliciesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListFlavorSellPoliciesRequest::getMarker() const
{
    return marker_;
}

void ListFlavorSellPoliciesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListFlavorSellPoliciesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListFlavorSellPoliciesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


