

#include "huaweicloud/dds/v3/model/ShowSecondLevelMonitoringStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowSecondLevelMonitoringStatusResponse::ShowSecondLevelMonitoringStatusResponse()
{
    enabled_ = false;
    enabledIsSet_ = false;
}

ShowSecondLevelMonitoringStatusResponse::~ShowSecondLevelMonitoringStatusResponse() = default;

void ShowSecondLevelMonitoringStatusResponse::validate()
{
}

web::json::value ShowSecondLevelMonitoringStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}
bool ShowSecondLevelMonitoringStatusResponse::fromJson(const web::json::value& val)
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


bool ShowSecondLevelMonitoringStatusResponse::isEnabled() const
{
    return enabled_;
}

void ShowSecondLevelMonitoringStatusResponse::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ShowSecondLevelMonitoringStatusResponse::enabledIsSet() const
{
    return enabledIsSet_;
}

void ShowSecondLevelMonitoringStatusResponse::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


