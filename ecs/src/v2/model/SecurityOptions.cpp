

#include "huaweicloud/ecs/v2/model/SecurityOptions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




SecurityOptions::SecurityOptions()
{
    secureBootEnabled_ = false;
    secureBootEnabledIsSet_ = false;
    tpmEnabled_ = false;
    tpmEnabledIsSet_ = false;
}

SecurityOptions::~SecurityOptions() = default;

void SecurityOptions::validate()
{
}

web::json::value SecurityOptions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secureBootEnabledIsSet_) {
        val[utility::conversions::to_string_t("secure_boot_enabled")] = ModelBase::toJson(secureBootEnabled_);
    }
    if(tpmEnabledIsSet_) {
        val[utility::conversions::to_string_t("tpm_enabled")] = ModelBase::toJson(tpmEnabled_);
    }

    return val;
}
bool SecurityOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secure_boot_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secure_boot_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecureBootEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tpm_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tpm_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTpmEnabled(refVal);
        }
    }
    return ok;
}


bool SecurityOptions::isSecureBootEnabled() const
{
    return secureBootEnabled_;
}

void SecurityOptions::setSecureBootEnabled(bool value)
{
    secureBootEnabled_ = value;
    secureBootEnabledIsSet_ = true;
}

bool SecurityOptions::secureBootEnabledIsSet() const
{
    return secureBootEnabledIsSet_;
}

void SecurityOptions::unsetsecureBootEnabled()
{
    secureBootEnabledIsSet_ = false;
}

bool SecurityOptions::isTpmEnabled() const
{
    return tpmEnabled_;
}

void SecurityOptions::setTpmEnabled(bool value)
{
    tpmEnabled_ = value;
    tpmEnabledIsSet_ = true;
}

bool SecurityOptions::tpmEnabledIsSet() const
{
    return tpmEnabledIsSet_;
}

void SecurityOptions::unsettpmEnabled()
{
    tpmEnabledIsSet_ = false;
}

}
}
}
}
}


