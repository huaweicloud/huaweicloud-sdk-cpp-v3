

#include "huaweicloud/gaussdbfornosql/v3/model/ShowSlowLogDesensitizationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowSlowLogDesensitizationResponse::ShowSlowLogDesensitizationResponse()
{
    desensitizationStatus_ = "";
    desensitizationStatusIsSet_ = false;
}

ShowSlowLogDesensitizationResponse::~ShowSlowLogDesensitizationResponse() = default;

void ShowSlowLogDesensitizationResponse::validate()
{
}

web::json::value ShowSlowLogDesensitizationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(desensitizationStatusIsSet_) {
        val[utility::conversions::to_string_t("desensitization_status")] = ModelBase::toJson(desensitizationStatus_);
    }

    return val;
}

bool ShowSlowLogDesensitizationResponse::fromJson(const web::json::value& val)
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

std::string ShowSlowLogDesensitizationResponse::getDesensitizationStatus() const
{
    return desensitizationStatus_;
}

void ShowSlowLogDesensitizationResponse::setDesensitizationStatus(const std::string& value)
{
    desensitizationStatus_ = value;
    desensitizationStatusIsSet_ = true;
}

bool ShowSlowLogDesensitizationResponse::desensitizationStatusIsSet() const
{
    return desensitizationStatusIsSet_;
}

void ShowSlowLogDesensitizationResponse::unsetdesensitizationStatus()
{
    desensitizationStatusIsSet_ = false;
}

}
}
}
}
}


