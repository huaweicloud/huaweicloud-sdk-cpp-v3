

#include "huaweicloud/rgc/v1/model/ShowHomeRegionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowHomeRegionResponse::ShowHomeRegionResponse()
{
    homeRegion_ = "";
    homeRegionIsSet_ = false;
}

ShowHomeRegionResponse::~ShowHomeRegionResponse() = default;

void ShowHomeRegionResponse::validate()
{
}

web::json::value ShowHomeRegionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(homeRegionIsSet_) {
        val[utility::conversions::to_string_t("home_region")] = ModelBase::toJson(homeRegion_);
    }

    return val;
}
bool ShowHomeRegionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("home_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("home_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHomeRegion(refVal);
        }
    }
    return ok;
}


std::string ShowHomeRegionResponse::getHomeRegion() const
{
    return homeRegion_;
}

void ShowHomeRegionResponse::setHomeRegion(const std::string& value)
{
    homeRegion_ = value;
    homeRegionIsSet_ = true;
}

bool ShowHomeRegionResponse::homeRegionIsSet() const
{
    return homeRegionIsSet_;
}

void ShowHomeRegionResponse::unsethomeRegion()
{
    homeRegionIsSet_ = false;
}

}
}
}
}
}


