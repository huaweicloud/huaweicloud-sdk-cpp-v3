

#include "huaweicloud/gaussdbfornosql/v3/model/SwitchSlowlogDesensitizationRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SwitchSlowlogDesensitizationRequestBody::SwitchSlowlogDesensitizationRequestBody()
{
    desensitizationStatus_ = "";
    desensitizationStatusIsSet_ = false;
}

SwitchSlowlogDesensitizationRequestBody::~SwitchSlowlogDesensitizationRequestBody() = default;

void SwitchSlowlogDesensitizationRequestBody::validate()
{
}

web::json::value SwitchSlowlogDesensitizationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(desensitizationStatusIsSet_) {
        val[utility::conversions::to_string_t("desensitization_status")] = ModelBase::toJson(desensitizationStatus_);
    }

    return val;
}

bool SwitchSlowlogDesensitizationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("desensitization_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desensitization_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesensitizationStatus(refVal);
        }
    }
    return ok;
}

std::string SwitchSlowlogDesensitizationRequestBody::getDesensitizationStatus() const
{
    return desensitizationStatus_;
}

void SwitchSlowlogDesensitizationRequestBody::setDesensitizationStatus(const std::string& value)
{
    desensitizationStatus_ = value;
    desensitizationStatusIsSet_ = true;
}

bool SwitchSlowlogDesensitizationRequestBody::desensitizationStatusIsSet() const
{
    return desensitizationStatusIsSet_;
}

void SwitchSlowlogDesensitizationRequestBody::unsetdesensitizationStatus()
{
    desensitizationStatusIsSet_ = false;
}

}
}
}
}
}


