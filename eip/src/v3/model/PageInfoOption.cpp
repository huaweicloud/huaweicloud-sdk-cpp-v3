

#include "huaweicloud/eip/v3/model/PageInfoOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




PageInfoOption::PageInfoOption()
{
    previousMarker_ = "";
    previousMarkerIsSet_ = false;
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
    currentCount_ = 0;
    currentCountIsSet_ = false;
}

PageInfoOption::~PageInfoOption() = default;

void PageInfoOption::validate()
{
}

web::json::value PageInfoOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(previousMarkerIsSet_) {
        val[utility::conversions::to_string_t("previous_marker")] = ModelBase::toJson(previousMarker_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }
    if(currentCountIsSet_) {
        val[utility::conversions::to_string_t("current_count")] = ModelBase::toJson(currentCount_);
    }

    return val;
}

bool PageInfoOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("previous_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("previous_marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreviousMarker(refVal);
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


std::string PageInfoOption::getPreviousMarker() const
{
    return previousMarker_;
}

void PageInfoOption::setPreviousMarker(const std::string& value)
{
    previousMarker_ = value;
    previousMarkerIsSet_ = true;
}

bool PageInfoOption::previousMarkerIsSet() const
{
    return previousMarkerIsSet_;
}

void PageInfoOption::unsetpreviousMarker()
{
    previousMarkerIsSet_ = false;
}

std::string PageInfoOption::getNextMarker() const
{
    return nextMarker_;
}

void PageInfoOption::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool PageInfoOption::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void PageInfoOption::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

int32_t PageInfoOption::getCurrentCount() const
{
    return currentCount_;
}

void PageInfoOption::setCurrentCount(int32_t value)
{
    currentCount_ = value;
    currentCountIsSet_ = true;
}

bool PageInfoOption::currentCountIsSet() const
{
    return currentCountIsSet_;
}

void PageInfoOption::unsetcurrentCount()
{
    currentCountIsSet_ = false;
}

}
}
}
}
}


