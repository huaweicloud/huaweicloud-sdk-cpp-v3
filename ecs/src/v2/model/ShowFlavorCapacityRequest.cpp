

#include "huaweicloud/ecs/v2/model/ShowFlavorCapacityRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowFlavorCapacityRequest::ShowFlavorCapacityRequest()
{
    flavorId_ = "";
    flavorIdIsSet_ = false;
}

ShowFlavorCapacityRequest::~ShowFlavorCapacityRequest() = default;

void ShowFlavorCapacityRequest::validate()
{
}

web::json::value ShowFlavorCapacityRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }

    return val;
}
bool ShowFlavorCapacityRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
        }
    }
    return ok;
}


std::string ShowFlavorCapacityRequest::getFlavorId() const
{
    return flavorId_;
}

void ShowFlavorCapacityRequest::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool ShowFlavorCapacityRequest::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void ShowFlavorCapacityRequest::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

}
}
}
}
}


