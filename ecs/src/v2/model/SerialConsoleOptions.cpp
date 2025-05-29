

#include "huaweicloud/ecs/v2/model/SerialConsoleOptions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




SerialConsoleOptions::SerialConsoleOptions()
{
    enabled_ = false;
    enabledIsSet_ = false;
}

SerialConsoleOptions::~SerialConsoleOptions() = default;

void SerialConsoleOptions::validate()
{
}

web::json::value SerialConsoleOptions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}
bool SerialConsoleOptions::fromJson(const web::json::value& val)
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


bool SerialConsoleOptions::isEnabled() const
{
    return enabled_;
}

void SerialConsoleOptions::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool SerialConsoleOptions::enabledIsSet() const
{
    return enabledIsSet_;
}

void SerialConsoleOptions::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


