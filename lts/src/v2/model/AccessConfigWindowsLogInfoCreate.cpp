

#include "huaweicloud/lts/v2/model/AccessConfigWindowsLogInfoCreate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigWindowsLogInfoCreate::AccessConfigWindowsLogInfoCreate()
{
    categorysIsSet_ = false;
    timeOffsetIsSet_ = false;
    eventLevelIsSet_ = false;
}

AccessConfigWindowsLogInfoCreate::~AccessConfigWindowsLogInfoCreate() = default;

void AccessConfigWindowsLogInfoCreate::validate()
{
}

web::json::value AccessConfigWindowsLogInfoCreate::toJson() const
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

bool AccessConfigWindowsLogInfoCreate::fromJson(const web::json::value& val)
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

std::vector<std::string>& AccessConfigWindowsLogInfoCreate::getCategorys()
{
    return categorys_;
}

void AccessConfigWindowsLogInfoCreate::setCategorys(const std::vector<std::string>& value)
{
    categorys_ = value;
    categorysIsSet_ = true;
}

bool AccessConfigWindowsLogInfoCreate::categorysIsSet() const
{
    return categorysIsSet_;
}

void AccessConfigWindowsLogInfoCreate::unsetcategorys()
{
    categorysIsSet_ = false;
}

AccessConfigTimeOffsetCreate AccessConfigWindowsLogInfoCreate::getTimeOffset() const
{
    return timeOffset_;
}

void AccessConfigWindowsLogInfoCreate::setTimeOffset(const AccessConfigTimeOffsetCreate& value)
{
    timeOffset_ = value;
    timeOffsetIsSet_ = true;
}

bool AccessConfigWindowsLogInfoCreate::timeOffsetIsSet() const
{
    return timeOffsetIsSet_;
}

void AccessConfigWindowsLogInfoCreate::unsettimeOffset()
{
    timeOffsetIsSet_ = false;
}

std::vector<std::string>& AccessConfigWindowsLogInfoCreate::getEventLevel()
{
    return eventLevel_;
}

void AccessConfigWindowsLogInfoCreate::setEventLevel(const std::vector<std::string>& value)
{
    eventLevel_ = value;
    eventLevelIsSet_ = true;
}

bool AccessConfigWindowsLogInfoCreate::eventLevelIsSet() const
{
    return eventLevelIsSet_;
}

void AccessConfigWindowsLogInfoCreate::unseteventLevel()
{
    eventLevelIsSet_ = false;
}

}
}
}
}
}


