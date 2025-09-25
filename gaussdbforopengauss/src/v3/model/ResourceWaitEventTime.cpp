

#include "huaweicloud/gaussdbforopengauss/v3/model/ResourceWaitEventTime.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ResourceWaitEventTime::ResourceWaitEventTime()
{
    allTime_ = 0L;
    allTimeIsSet_ = false;
    resourceWaitEventTimeDetailsIsSet_ = false;
    otherTime_ = 0L;
    otherTimeIsSet_ = false;
}

ResourceWaitEventTime::~ResourceWaitEventTime() = default;

void ResourceWaitEventTime::validate()
{
}

web::json::value ResourceWaitEventTime::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allTimeIsSet_) {
        val[utility::conversions::to_string_t("all_time")] = ModelBase::toJson(allTime_);
    }
    if(resourceWaitEventTimeDetailsIsSet_) {
        val[utility::conversions::to_string_t("resource_wait_event_time_details")] = ModelBase::toJson(resourceWaitEventTimeDetails_);
    }
    if(otherTimeIsSet_) {
        val[utility::conversions::to_string_t("other_time")] = ModelBase::toJson(otherTime_);
    }

    return val;
}
bool ResourceWaitEventTime::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("all_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_wait_event_time_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_wait_event_time_details"));
        if(!fieldValue.is_null())
        {
            ResourceWaitEvenTimeDetails refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceWaitEventTimeDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("other_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("other_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOtherTime(refVal);
        }
    }
    return ok;
}


int64_t ResourceWaitEventTime::getAllTime() const
{
    return allTime_;
}

void ResourceWaitEventTime::setAllTime(int64_t value)
{
    allTime_ = value;
    allTimeIsSet_ = true;
}

bool ResourceWaitEventTime::allTimeIsSet() const
{
    return allTimeIsSet_;
}

void ResourceWaitEventTime::unsetallTime()
{
    allTimeIsSet_ = false;
}

ResourceWaitEvenTimeDetails ResourceWaitEventTime::getResourceWaitEventTimeDetails() const
{
    return resourceWaitEventTimeDetails_;
}

void ResourceWaitEventTime::setResourceWaitEventTimeDetails(const ResourceWaitEvenTimeDetails& value)
{
    resourceWaitEventTimeDetails_ = value;
    resourceWaitEventTimeDetailsIsSet_ = true;
}

bool ResourceWaitEventTime::resourceWaitEventTimeDetailsIsSet() const
{
    return resourceWaitEventTimeDetailsIsSet_;
}

void ResourceWaitEventTime::unsetresourceWaitEventTimeDetails()
{
    resourceWaitEventTimeDetailsIsSet_ = false;
}

int64_t ResourceWaitEventTime::getOtherTime() const
{
    return otherTime_;
}

void ResourceWaitEventTime::setOtherTime(int64_t value)
{
    otherTime_ = value;
    otherTimeIsSet_ = true;
}

bool ResourceWaitEventTime::otherTimeIsSet() const
{
    return otherTimeIsSet_;
}

void ResourceWaitEventTime::unsetotherTime()
{
    otherTimeIsSet_ = false;
}

}
}
}
}
}


