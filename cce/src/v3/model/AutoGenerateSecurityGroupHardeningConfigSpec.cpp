

#include "huaweicloud/cce/v3/model/AutoGenerateSecurityGroupHardeningConfigSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutoGenerateSecurityGroupHardeningConfigSpec::AutoGenerateSecurityGroupHardeningConfigSpec()
{
    portsToDisableIsSet_ = false;
}

AutoGenerateSecurityGroupHardeningConfigSpec::~AutoGenerateSecurityGroupHardeningConfigSpec() = default;

void AutoGenerateSecurityGroupHardeningConfigSpec::validate()
{
}

web::json::value AutoGenerateSecurityGroupHardeningConfigSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portsToDisableIsSet_) {
        val[utility::conversions::to_string_t("portsToDisable")] = ModelBase::toJson(portsToDisable_);
    }

    return val;
}
bool AutoGenerateSecurityGroupHardeningConfigSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("portsToDisable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("portsToDisable"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortsToDisable(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& AutoGenerateSecurityGroupHardeningConfigSpec::getPortsToDisable()
{
    return portsToDisable_;
}

void AutoGenerateSecurityGroupHardeningConfigSpec::setPortsToDisable(const std::vector<std::string>& value)
{
    portsToDisable_ = value;
    portsToDisableIsSet_ = true;
}

bool AutoGenerateSecurityGroupHardeningConfigSpec::portsToDisableIsSet() const
{
    return portsToDisableIsSet_;
}

void AutoGenerateSecurityGroupHardeningConfigSpec::unsetportsToDisable()
{
    portsToDisableIsSet_ = false;
}

}
}
}
}
}


