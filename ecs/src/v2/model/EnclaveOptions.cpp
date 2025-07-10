

#include "huaweicloud/ecs/v2/model/EnclaveOptions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




EnclaveOptions::EnclaveOptions()
{
    enabled_ = false;
    enabledIsSet_ = false;
}

EnclaveOptions::~EnclaveOptions() = default;

void EnclaveOptions::validate()
{
}

web::json::value EnclaveOptions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}
bool EnclaveOptions::fromJson(const web::json::value& val)
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


bool EnclaveOptions::isEnabled() const
{
    return enabled_;
}

void EnclaveOptions::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool EnclaveOptions::enabledIsSet() const
{
    return enabledIsSet_;
}

void EnclaveOptions::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


