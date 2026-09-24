

#include "huaweicloud/ims/v2/model/PageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




PageInfo::PageInfo()
{
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

    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextMarker(refVal);
        }
    }
    return ok;
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


