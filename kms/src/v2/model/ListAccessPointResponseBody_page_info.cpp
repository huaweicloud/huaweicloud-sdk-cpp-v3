

#include "huaweicloud/kms/v2/model/ListAccessPointResponseBody_page_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListAccessPointResponseBody_page_info::ListAccessPointResponseBody_page_info()
{
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
    currentCount_ = 0;
    currentCountIsSet_ = false;
}

ListAccessPointResponseBody_page_info::~ListAccessPointResponseBody_page_info() = default;

void ListAccessPointResponseBody_page_info::validate()
{
}

web::json::value ListAccessPointResponseBody_page_info::toJson() const
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
bool ListAccessPointResponseBody_page_info::fromJson(const web::json::value& val)
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


std::string ListAccessPointResponseBody_page_info::getNextMarker() const
{
    return nextMarker_;
}

void ListAccessPointResponseBody_page_info::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListAccessPointResponseBody_page_info::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListAccessPointResponseBody_page_info::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

int32_t ListAccessPointResponseBody_page_info::getCurrentCount() const
{
    return currentCount_;
}

void ListAccessPointResponseBody_page_info::setCurrentCount(int32_t value)
{
    currentCount_ = value;
    currentCountIsSet_ = true;
}

bool ListAccessPointResponseBody_page_info::currentCountIsSet() const
{
    return currentCountIsSet_;
}

void ListAccessPointResponseBody_page_info::unsetcurrentCount()
{
    currentCountIsSet_ = false;
}

}
}
}
}
}


