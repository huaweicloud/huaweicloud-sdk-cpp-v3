

#include "huaweicloud/ecs/v2/model/ShowFlavorCapacityResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowFlavorCapacityResponse::ShowFlavorCapacityResponse()
{
    resourcesIsSet_ = false;
}

ShowFlavorCapacityResponse::~ShowFlavorCapacityResponse() = default;

void ShowFlavorCapacityResponse::validate()
{
}

web::json::value ShowFlavorCapacityResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool ShowFlavorCapacityResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryFlavorCapacityAzInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


std::vector<QueryFlavorCapacityAzInfo>& ShowFlavorCapacityResponse::getResources()
{
    return resources_;
}

void ShowFlavorCapacityResponse::setResources(const std::vector<QueryFlavorCapacityAzInfo>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ShowFlavorCapacityResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ShowFlavorCapacityResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


