

#include "huaweicloud/gaussdbforopengauss/v3/model/ResourceTime.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ResourceTime::ResourceTime()
{
    allTime_ = 0L;
    allTimeIsSet_ = false;
    resourceTimeDetailsIsSet_ = false;
}

ResourceTime::~ResourceTime() = default;

void ResourceTime::validate()
{
}

web::json::value ResourceTime::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allTimeIsSet_) {
        val[utility::conversions::to_string_t("all_time")] = ModelBase::toJson(allTime_);
    }
    if(resourceTimeDetailsIsSet_) {
        val[utility::conversions::to_string_t("resource_time_details")] = ModelBase::toJson(resourceTimeDetails_);
    }

    return val;
}
bool ResourceTime::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_time_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_time_details"));
        if(!fieldValue.is_null())
        {
            ResourceTimeDetails refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceTimeDetails(refVal);
        }
    }
    return ok;
}


int64_t ResourceTime::getAllTime() const
{
    return allTime_;
}

void ResourceTime::setAllTime(int64_t value)
{
    allTime_ = value;
    allTimeIsSet_ = true;
}

bool ResourceTime::allTimeIsSet() const
{
    return allTimeIsSet_;
}

void ResourceTime::unsetallTime()
{
    allTimeIsSet_ = false;
}

ResourceTimeDetails ResourceTime::getResourceTimeDetails() const
{
    return resourceTimeDetails_;
}

void ResourceTime::setResourceTimeDetails(const ResourceTimeDetails& value)
{
    resourceTimeDetails_ = value;
    resourceTimeDetailsIsSet_ = true;
}

bool ResourceTime::resourceTimeDetailsIsSet() const
{
    return resourceTimeDetailsIsSet_;
}

void ResourceTime::unsetresourceTimeDetails()
{
    resourceTimeDetailsIsSet_ = false;
}

}
}
}
}
}


