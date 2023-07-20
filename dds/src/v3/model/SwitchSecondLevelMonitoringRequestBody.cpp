

#include "huaweicloud/dds/v3/model/SwitchSecondLevelMonitoringRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SwitchSecondLevelMonitoringRequestBody::SwitchSecondLevelMonitoringRequestBody()
{
    enabled_ = false;
    enabledIsSet_ = false;
}

SwitchSecondLevelMonitoringRequestBody::~SwitchSecondLevelMonitoringRequestBody() = default;

void SwitchSecondLevelMonitoringRequestBody::validate()
{
}

web::json::value SwitchSecondLevelMonitoringRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}

bool SwitchSecondLevelMonitoringRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    return ok;
}

bool SwitchSecondLevelMonitoringRequestBody::isEnabled() const
{
    return enabled_;
}

void SwitchSecondLevelMonitoringRequestBody::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool SwitchSecondLevelMonitoringRequestBody::enabledIsSet() const
{
    return enabledIsSet_;
}

void SwitchSecondLevelMonitoringRequestBody::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


