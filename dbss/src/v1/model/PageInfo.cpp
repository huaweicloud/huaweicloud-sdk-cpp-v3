

#include "huaweicloud/dbss/v1/model/PageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




PageInfo::PageInfo()
{
    currentCount_ = 0;
    currentCountIsSet_ = false;
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
}

PageInfo::~PageInfo() = default;

void PageInfo::validate()
{
}

web::json::value PageInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(currentCountIsSet_) {
        val[utility::conversions::to_string_t("current_count")] = ModelBase::toJson(currentCount_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }

    return val;
}
bool PageInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("current_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextMarker(refVal);
        }
    }
    return ok;
}


int32_t PageInfo::getCurrentCount() const
{
    return currentCount_;
}

void PageInfo::setCurrentCount(int32_t value)
{
    currentCount_ = value;
    currentCountIsSet_ = true;
}

bool PageInfo::currentCountIsSet() const
{
    return currentCountIsSet_;
}

void PageInfo::unsetcurrentCount()
{
    currentCountIsSet_ = false;
}

std::string PageInfo::getNextMarker() const
{
    return nextMarker_;
}

void PageInfo::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool PageInfo::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void PageInfo::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

}
}
}
}
}


