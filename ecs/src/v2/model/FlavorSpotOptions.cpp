

#include "huaweicloud/ecs/v2/model/FlavorSpotOptions.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




FlavorSpotOptions::FlavorSpotOptions()
{
    longestSpotDurationHours_ = 0;
    longestSpotDurationHoursIsSet_ = false;
    largestSpotDurationCount_ = 0;
    largestSpotDurationCountIsSet_ = false;
    interruptionPolicy_ = "";
    interruptionPolicyIsSet_ = false;
}

FlavorSpotOptions::~FlavorSpotOptions() = default;

void FlavorSpotOptions::validate()
{
}

web::json::value FlavorSpotOptions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(longestSpotDurationHoursIsSet_) {
        val[utility::conversions::to_string_t("longest_spot_duration_hours")] = ModelBase::toJson(longestSpotDurationHours_);
    }
    if(largestSpotDurationCountIsSet_) {
        val[utility::conversions::to_string_t("largest_spot_duration_count")] = ModelBase::toJson(largestSpotDurationCount_);
    }
    if(interruptionPolicyIsSet_) {
        val[utility::conversions::to_string_t("interruption_policy")] = ModelBase::toJson(interruptionPolicy_);
    }

    return val;
}

bool FlavorSpotOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}

int32_t FlavorSpotOptions::getLongestSpotDurationHours() const
{
    return longestSpotDurationHours_;
}

void FlavorSpotOptions::setLongestSpotDurationHours(int32_t value)
{
    longestSpotDurationHours_ = value;
    longestSpotDurationHoursIsSet_ = true;
}

bool FlavorSpotOptions::longestSpotDurationHoursIsSet() const
{
    return longestSpotDurationHoursIsSet_;
}

void FlavorSpotOptions::unsetlongestSpotDurationHours()
{
    longestSpotDurationHoursIsSet_ = false;
}

int32_t FlavorSpotOptions::getLargestSpotDurationCount() const
{
    return largestSpotDurationCount_;
}

void FlavorSpotOptions::setLargestSpotDurationCount(int32_t value)
{
    largestSpotDurationCount_ = value;
    largestSpotDurationCountIsSet_ = true;
}

bool FlavorSpotOptions::largestSpotDurationCountIsSet() const
{
    return largestSpotDurationCountIsSet_;
}

void FlavorSpotOptions::unsetlargestSpotDurationCount()
{
    largestSpotDurationCountIsSet_ = false;
}

std::string FlavorSpotOptions::getInterruptionPolicy() const
{
    return interruptionPolicy_;
}

void FlavorSpotOptions::setInterruptionPolicy(const std::string& value)
{
    interruptionPolicy_ = value;
    interruptionPolicyIsSet_ = true;
}

bool FlavorSpotOptions::interruptionPolicyIsSet() const
{
    return interruptionPolicyIsSet_;
}

void FlavorSpotOptions::unsetinterruptionPolicy()
{
    interruptionPolicyIsSet_ = false;
}

}
}
}
}
}


