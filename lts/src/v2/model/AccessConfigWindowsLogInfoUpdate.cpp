

#include "huaweicloud/lts/v2/model/AccessConfigWindowsLogInfoUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigWindowsLogInfoUpdate::AccessConfigWindowsLogInfoUpdate()
{
    categorysIsSet_ = false;
    timeOffsetIsSet_ = false;
    eventLevelIsSet_ = false;
}

AccessConfigWindowsLogInfoUpdate::~AccessConfigWindowsLogInfoUpdate() = default;

void AccessConfigWindowsLogInfoUpdate::validate()
{
}

web::json::value AccessConfigWindowsLogInfoUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categorysIsSet_) {
        val[utility::conversions::to_string_t("categorys")] = ModelBase::toJson(categorys_);
    }
    if(timeOffsetIsSet_) {
        val[utility::conversions::to_string_t("time_offset")] = ModelBase::toJson(timeOffset_);
    }
    if(eventLevelIsSet_) {
        val[utility::conversions::to_string_t("event_level")] = ModelBase::toJson(eventLevel_);
    }

    return val;
}
bool AccessConfigWindowsLogInfoUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("categorys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("categorys"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategorys(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_offset"));
        if(!fieldValue.is_null())
        {
            AccessConfigTimeOffsetCreate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_level"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventLevel(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& AccessConfigWindowsLogInfoUpdate::getCategorys()
{
    return categorys_;
}

void AccessConfigWindowsLogInfoUpdate::setCategorys(const std::vector<std::string>& value)
{
    categorys_ = value;
    categorysIsSet_ = true;
}

bool AccessConfigWindowsLogInfoUpdate::categorysIsSet() const
{
    return categorysIsSet_;
}

void AccessConfigWindowsLogInfoUpdate::unsetcategorys()
{
    categorysIsSet_ = false;
}

AccessConfigTimeOffsetCreate AccessConfigWindowsLogInfoUpdate::getTimeOffset() const
{
    return timeOffset_;
}

void AccessConfigWindowsLogInfoUpdate::setTimeOffset(const AccessConfigTimeOffsetCreate& value)
{
    timeOffset_ = value;
    timeOffsetIsSet_ = true;
}

bool AccessConfigWindowsLogInfoUpdate::timeOffsetIsSet() const
{
    return timeOffsetIsSet_;
}

void AccessConfigWindowsLogInfoUpdate::unsettimeOffset()
{
    timeOffsetIsSet_ = false;
}

std::vector<std::string>& AccessConfigWindowsLogInfoUpdate::getEventLevel()
{
    return eventLevel_;
}

void AccessConfigWindowsLogInfoUpdate::setEventLevel(const std::vector<std::string>& value)
{
    eventLevel_ = value;
    eventLevelIsSet_ = true;
}

bool AccessConfigWindowsLogInfoUpdate::eventLevelIsSet() const
{
    return eventLevelIsSet_;
}

void AccessConfigWindowsLogInfoUpdate::unseteventLevel()
{
    eventLevelIsSet_ = false;
}

}
}
}
}
}


