

#include "huaweicloud/lts/v2/model/AccessConfigWindowsLogInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigWindowsLogInfo::AccessConfigWindowsLogInfo()
{
    categorysIsSet_ = false;
    timeOffsetIsSet_ = false;
    eventLevelIsSet_ = false;
}

AccessConfigWindowsLogInfo::~AccessConfigWindowsLogInfo() = default;

void AccessConfigWindowsLogInfo::validate()
{
}

web::json::value AccessConfigWindowsLogInfo::toJson() const
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

bool AccessConfigWindowsLogInfo::fromJson(const web::json::value& val)
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
            AccessConfigTimeOffset refVal;
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

std::vector<std::string>& AccessConfigWindowsLogInfo::getCategorys()
{
    return categorys_;
}

void AccessConfigWindowsLogInfo::setCategorys(const std::vector<std::string>& value)
{
    categorys_ = value;
    categorysIsSet_ = true;
}

bool AccessConfigWindowsLogInfo::categorysIsSet() const
{
    return categorysIsSet_;
}

void AccessConfigWindowsLogInfo::unsetcategorys()
{
    categorysIsSet_ = false;
}

AccessConfigTimeOffset AccessConfigWindowsLogInfo::getTimeOffset() const
{
    return timeOffset_;
}

void AccessConfigWindowsLogInfo::setTimeOffset(const AccessConfigTimeOffset& value)
{
    timeOffset_ = value;
    timeOffsetIsSet_ = true;
}

bool AccessConfigWindowsLogInfo::timeOffsetIsSet() const
{
    return timeOffsetIsSet_;
}

void AccessConfigWindowsLogInfo::unsettimeOffset()
{
    timeOffsetIsSet_ = false;
}

std::vector<std::string>& AccessConfigWindowsLogInfo::getEventLevel()
{
    return eventLevel_;
}

void AccessConfigWindowsLogInfo::setEventLevel(const std::vector<std::string>& value)
{
    eventLevel_ = value;
    eventLevelIsSet_ = true;
}

bool AccessConfigWindowsLogInfo::eventLevelIsSet() const
{
    return eventLevelIsSet_;
}

void AccessConfigWindowsLogInfo::unseteventLevel()
{
    eventLevelIsSet_ = false;
}

}
}
}
}
}


