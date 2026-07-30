

#include "huaweicloud/modelarts/v1/model/ShowTrainingJobFlavorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainingJobFlavorsRequest::ShowTrainingJobFlavorsRequest()
{
    flavorType_ = "";
    flavorTypeIsSet_ = false;
}

ShowTrainingJobFlavorsRequest::~ShowTrainingJobFlavorsRequest() = default;

void ShowTrainingJobFlavorsRequest::validate()
{
}

web::json::value ShowTrainingJobFlavorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorTypeIsSet_) {
        val[utility::conversions::to_string_t("flavor_type")] = ModelBase::toJson(flavorType_);
    }

    return val;
}
bool ShowTrainingJobFlavorsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorType(refVal);
        }
    }
    return ok;
}


std::string ShowTrainingJobFlavorsRequest::getFlavorType() const
{
    return flavorType_;
}

void ShowTrainingJobFlavorsRequest::setFlavorType(const std::string& value)
{
    flavorType_ = value;
    flavorTypeIsSet_ = true;
}

bool ShowTrainingJobFlavorsRequest::flavorTypeIsSet() const
{
    return flavorTypeIsSet_;
}

void ShowTrainingJobFlavorsRequest::unsetflavorType()
{
    flavorTypeIsSet_ = false;
}

}
}
}
}
}


