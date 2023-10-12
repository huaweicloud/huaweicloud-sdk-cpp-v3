

#include "huaweicloud/tms/v1/model/PageInfoTagKeys.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




PageInfoTagKeys::PageInfoTagKeys()
{
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
    currentCount_ = 0;
    currentCountIsSet_ = false;
}

PageInfoTagKeys::~PageInfoTagKeys() = default;

void PageInfoTagKeys::validate()
{
}

web::json::value PageInfoTagKeys::toJson() const
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
bool PageInfoTagKeys::fromJson(const web::json::value& val)
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


std::string PageInfoTagKeys::getNextMarker() const
{
    return nextMarker_;
}

void PageInfoTagKeys::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool PageInfoTagKeys::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void PageInfoTagKeys::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

int32_t PageInfoTagKeys::getCurrentCount() const
{
    return currentCount_;
}

void PageInfoTagKeys::setCurrentCount(int32_t value)
{
    currentCount_ = value;
    currentCountIsSet_ = true;
}

bool PageInfoTagKeys::currentCountIsSet() const
{
    return currentCountIsSet_;
}

void PageInfoTagKeys::unsetcurrentCount()
{
    currentCountIsSet_ = false;
}

}
}
}
}
}


