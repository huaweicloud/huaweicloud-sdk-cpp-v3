

#include "huaweicloud/geip/v3/model/ListGlobalEipsResponseBody_page_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGlobalEipsResponseBody_page_info::ListGlobalEipsResponseBody_page_info()
{
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
    previousMarker_ = "";
    previousMarkerIsSet_ = false;
    currentCount_ = 0;
    currentCountIsSet_ = false;
}

ListGlobalEipsResponseBody_page_info::~ListGlobalEipsResponseBody_page_info() = default;

void ListGlobalEipsResponseBody_page_info::validate()
{
}

web::json::value ListGlobalEipsResponseBody_page_info::toJson() const
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
bool ListGlobalEipsResponseBody_page_info::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("previous_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("previous_marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreviousMarker(refVal);
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


std::string ListGlobalEipsResponseBody_page_info::getNextMarker() const
{
    return nextMarker_;
}

void ListGlobalEipsResponseBody_page_info::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListGlobalEipsResponseBody_page_info::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListGlobalEipsResponseBody_page_info::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

std::string ListGlobalEipsResponseBody_page_info::getPreviousMarker() const
{
    return previousMarker_;
}

void ListGlobalEipsResponseBody_page_info::setPreviousMarker(const std::string& value)
{
    previousMarker_ = value;
    previousMarkerIsSet_ = true;
}

bool ListGlobalEipsResponseBody_page_info::previousMarkerIsSet() const
{
    return previousMarkerIsSet_;
}

void ListGlobalEipsResponseBody_page_info::unsetpreviousMarker()
{
    previousMarkerIsSet_ = false;
}

int32_t ListGlobalEipsResponseBody_page_info::getCurrentCount() const
{
    return currentCount_;
}

void ListGlobalEipsResponseBody_page_info::setCurrentCount(int32_t value)
{
    currentCount_ = value;
    currentCountIsSet_ = true;
}

bool ListGlobalEipsResponseBody_page_info::currentCountIsSet() const
{
    return currentCountIsSet_;
}

void ListGlobalEipsResponseBody_page_info::unsetcurrentCount()
{
    currentCountIsSet_ = false;
}

}
}
}
}
}


