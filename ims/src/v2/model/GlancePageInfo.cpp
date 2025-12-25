

#include "huaweicloud/ims/v2/model/GlancePageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlancePageInfo::GlancePageInfo()
{
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
    currentCount_ = 0;
    currentCountIsSet_ = false;
}

GlancePageInfo::~GlancePageInfo() = default;

void GlancePageInfo::validate()
{
}

web::json::value GlancePageInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }
    if(currentCountIsSet_) {
        val[utility::conversions::to_string_t("current_count")] = ModelBase::toJson(currentCount_);
    }

    return val;
}
bool GlancePageInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("next_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentCount(refVal);
        }
    }
    return ok;
}


std::string GlancePageInfo::getNextMarker() const
{
    return nextMarker_;
}

void GlancePageInfo::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool GlancePageInfo::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void GlancePageInfo::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

int32_t GlancePageInfo::getCurrentCount() const
{
    return currentCount_;
}

void GlancePageInfo::setCurrentCount(int32_t value)
{
    currentCount_ = value;
    currentCountIsSet_ = true;
}

bool GlancePageInfo::currentCountIsSet() const
{
    return currentCountIsSet_;
}

void GlancePageInfo::unsetcurrentCount()
{
    currentCountIsSet_ = false;
}

}
}
}
}
}


