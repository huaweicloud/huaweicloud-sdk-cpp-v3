

#include "huaweicloud/functiongraph/v2/model/PageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




PageInfo::PageInfo()
{
    nextMarker_ = 0L;
    nextMarkerIsSet_ = false;
    previousMarker_ = 0L;
    previousMarkerIsSet_ = false;
    currentCount_ = 0L;
    currentCountIsSet_ = false;
}

PageInfo::~PageInfo() = default;

void PageInfo::validate()
{
}

web::json::value PageInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }
    if(previousMarkerIsSet_) {
        val[utility::conversions::to_string_t("previous_marker")] = ModelBase::toJson(previousMarker_);
    }
    if(currentCountIsSet_) {
        val[utility::conversions::to_string_t("current_count")] = ModelBase::toJson(currentCount_);
    }

    return val;
}
bool PageInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("next_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_marker"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("previous_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("previous_marker"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreviousMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentCount(refVal);
        }
    }
    return ok;
}


int64_t PageInfo::getNextMarker() const
{
    return nextMarker_;
}

void PageInfo::setNextMarker(int64_t value)
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

int64_t PageInfo::getPreviousMarker() const
{
    return previousMarker_;
}

void PageInfo::setPreviousMarker(int64_t value)
{
    previousMarker_ = value;
    previousMarkerIsSet_ = true;
}

bool PageInfo::previousMarkerIsSet() const
{
    return previousMarkerIsSet_;
}

void PageInfo::unsetpreviousMarker()
{
    previousMarkerIsSet_ = false;
}

int64_t PageInfo::getCurrentCount() const
{
    return currentCount_;
}

void PageInfo::setCurrentCount(int64_t value)
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

}
}
}
}
}


