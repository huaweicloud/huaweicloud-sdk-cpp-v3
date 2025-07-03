

#include "huaweicloud/ecs/v2/model/ResponsePageInfoV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ResponsePageInfoV3::ResponsePageInfoV3()
{
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
    previousMarker_ = "";
    previousMarkerIsSet_ = false;
}

ResponsePageInfoV3::~ResponsePageInfoV3() = default;

void ResponsePageInfoV3::validate()
{
}

web::json::value ResponsePageInfoV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }
    if(previousMarkerIsSet_) {
        val[utility::conversions::to_string_t("previous_marker")] = ModelBase::toJson(previousMarker_);
    }

    return val;
}
bool ResponsePageInfoV3::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ResponsePageInfoV3::getNextMarker() const
{
    return nextMarker_;
}

void ResponsePageInfoV3::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ResponsePageInfoV3::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ResponsePageInfoV3::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

std::string ResponsePageInfoV3::getPreviousMarker() const
{
    return previousMarker_;
}

void ResponsePageInfoV3::setPreviousMarker(const std::string& value)
{
    previousMarker_ = value;
    previousMarkerIsSet_ = true;
}

bool ResponsePageInfoV3::previousMarkerIsSet() const
{
    return previousMarkerIsSet_;
}

void ResponsePageInfoV3::unsetpreviousMarker()
{
    previousMarkerIsSet_ = false;
}

}
}
}
}
}


