

#include "huaweicloud/ram/v1/model/PageInfoMarkerByKey.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




PageInfoMarkerByKey::PageInfoMarkerByKey()
{
    previousMarker_ = "";
    previousMarkerIsSet_ = false;
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
    currentCount_ = 0;
    currentCountIsSet_ = false;
}

PageInfoMarkerByKey::~PageInfoMarkerByKey() = default;

void PageInfoMarkerByKey::validate()
{
}

web::json::value PageInfoMarkerByKey::toJson() const
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
bool PageInfoMarkerByKey::fromJson(const web::json::value& val)
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


std::string PageInfoMarkerByKey::getPreviousMarker() const
{
    return previousMarker_;
}

void PageInfoMarkerByKey::setPreviousMarker(const std::string& value)
{
    previousMarker_ = value;
    previousMarkerIsSet_ = true;
}

bool PageInfoMarkerByKey::previousMarkerIsSet() const
{
    return previousMarkerIsSet_;
}

void PageInfoMarkerByKey::unsetpreviousMarker()
{
    previousMarkerIsSet_ = false;
}

std::string PageInfoMarkerByKey::getNextMarker() const
{
    return nextMarker_;
}

void PageInfoMarkerByKey::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool PageInfoMarkerByKey::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void PageInfoMarkerByKey::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

int32_t PageInfoMarkerByKey::getCurrentCount() const
{
    return currentCount_;
}

void PageInfoMarkerByKey::setCurrentCount(int32_t value)
{
    currentCount_ = value;
    currentCountIsSet_ = true;
}

bool PageInfoMarkerByKey::currentCountIsSet() const
{
    return currentCountIsSet_;
}

void PageInfoMarkerByKey::unsetcurrentCount()
{
    currentCountIsSet_ = false;
}

}
}
}
}
}


