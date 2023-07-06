

#include "huaweicloud/tms/v1/model/PageInfoTagValues.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




PageInfoTagValues::PageInfoTagValues()
{
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
    currentCount_ = 0;
    currentCountIsSet_ = false;
}

PageInfoTagValues::~PageInfoTagValues() = default;

void PageInfoTagValues::validate()
{
}

web::json::value PageInfoTagValues::toJson() const
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

bool PageInfoTagValues::fromJson(const web::json::value& val)
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

std::string PageInfoTagValues::getNextMarker() const
{
    return nextMarker_;
}

void PageInfoTagValues::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool PageInfoTagValues::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void PageInfoTagValues::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

int32_t PageInfoTagValues::getCurrentCount() const
{
    return currentCount_;
}

void PageInfoTagValues::setCurrentCount(int32_t value)
{
    currentCount_ = value;
    currentCountIsSet_ = true;
}

bool PageInfoTagValues::currentCountIsSet() const
{
    return currentCountIsSet_;
}

void PageInfoTagValues::unsetcurrentCount()
{
    currentCountIsSet_ = false;
}

}
}
}
}
}


