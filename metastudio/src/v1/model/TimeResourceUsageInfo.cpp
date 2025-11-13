

#include "huaweicloud/metastudio/v1/model/TimeResourceUsageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TimeResourceUsageInfo::TimeResourceUsageInfo()
{
    time_ = "";
    timeIsSet_ = false;
    resourcesUsageIsSet_ = false;
}

TimeResourceUsageInfo::~TimeResourceUsageInfo() = default;

void TimeResourceUsageInfo::validate()
{
}

web::json::value TimeResourceUsageInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(resourcesUsageIsSet_) {
        val[utility::conversions::to_string_t("resources_usage")] = ModelBase::toJson(resourcesUsage_);
    }

    return val;
}
bool TimeResourceUsageInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources_usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources_usage"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceUsageInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourcesUsage(refVal);
        }
    }
    return ok;
}


std::string TimeResourceUsageInfo::getTime() const
{
    return time_;
}

void TimeResourceUsageInfo::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool TimeResourceUsageInfo::timeIsSet() const
{
    return timeIsSet_;
}

void TimeResourceUsageInfo::unsettime()
{
    timeIsSet_ = false;
}

std::vector<ResourceUsageInfo>& TimeResourceUsageInfo::getResourcesUsage()
{
    return resourcesUsage_;
}

void TimeResourceUsageInfo::setResourcesUsage(const std::vector<ResourceUsageInfo>& value)
{
    resourcesUsage_ = value;
    resourcesUsageIsSet_ = true;
}

bool TimeResourceUsageInfo::resourcesUsageIsSet() const
{
    return resourcesUsageIsSet_;
}

void TimeResourceUsageInfo::unsetresourcesUsage()
{
    resourcesUsageIsSet_ = false;
}

}
}
}
}
}


