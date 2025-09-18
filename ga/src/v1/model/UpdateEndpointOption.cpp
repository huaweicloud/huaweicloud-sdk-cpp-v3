

#include "huaweicloud/ga/v1/model/UpdateEndpointOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateEndpointOption::UpdateEndpointOption()
{
    weight_ = 0;
    weightIsSet_ = false;
}

UpdateEndpointOption::~UpdateEndpointOption() = default;

void UpdateEndpointOption::validate()
{
}

web::json::value UpdateEndpointOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }

    return val;
}
bool UpdateEndpointOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
        }
    }
    return ok;
}


int32_t UpdateEndpointOption::getWeight() const
{
    return weight_;
}

void UpdateEndpointOption::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool UpdateEndpointOption::weightIsSet() const
{
    return weightIsSet_;
}

void UpdateEndpointOption::unsetweight()
{
    weightIsSet_ = false;
}

}
}
}
}
}


