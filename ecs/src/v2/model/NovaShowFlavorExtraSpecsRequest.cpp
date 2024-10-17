

#include "huaweicloud/ecs/v2/model/NovaShowFlavorExtraSpecsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaShowFlavorExtraSpecsRequest::NovaShowFlavorExtraSpecsRequest()
{
    flavorId_ = "";
    flavorIdIsSet_ = false;
}

NovaShowFlavorExtraSpecsRequest::~NovaShowFlavorExtraSpecsRequest() = default;

void NovaShowFlavorExtraSpecsRequest::validate()
{
}

web::json::value NovaShowFlavorExtraSpecsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }

    return val;
}
bool NovaShowFlavorExtraSpecsRequest::fromJson(const web::json::value& val)
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


std::string NovaShowFlavorExtraSpecsRequest::getFlavorId() const
{
    return flavorId_;
}

void NovaShowFlavorExtraSpecsRequest::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool NovaShowFlavorExtraSpecsRequest::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void NovaShowFlavorExtraSpecsRequest::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

}
}
}
}
}


