

#include "huaweicloud/identitycenter/v1/model/PageInfoDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




PageInfoDto::PageInfoDto()
{
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
    currentCount_ = 0;
    currentCountIsSet_ = false;
}

PageInfoDto::~PageInfoDto() = default;

void PageInfoDto::validate()
{
}

web::json::value PageInfoDto::toJson() const
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
bool PageInfoDto::fromJson(const web::json::value& val)
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


std::string PageInfoDto::getNextMarker() const
{
    return nextMarker_;
}

void PageInfoDto::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool PageInfoDto::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void PageInfoDto::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

int32_t PageInfoDto::getCurrentCount() const
{
    return currentCount_;
}

void PageInfoDto::setCurrentCount(int32_t value)
{
    currentCount_ = value;
    currentCountIsSet_ = true;
}

bool PageInfoDto::currentCountIsSet() const
{
    return currentCountIsSet_;
}

void PageInfoDto::unsetcurrentCount()
{
    currentCountIsSet_ = false;
}

}
}
}
}
}


