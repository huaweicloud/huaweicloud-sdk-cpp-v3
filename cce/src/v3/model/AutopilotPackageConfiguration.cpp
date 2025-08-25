

#include "huaweicloud/cce/v3/model/AutopilotPackageConfiguration.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotPackageConfiguration::AutopilotPackageConfiguration()
{
    name_ = "";
    nameIsSet_ = false;
    configurationsIsSet_ = false;
}

AutopilotPackageConfiguration::~AutopilotPackageConfiguration() = default;

void AutopilotPackageConfiguration::validate()
{
}

web::json::value AutopilotPackageConfiguration::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(configurationsIsSet_) {
        val[utility::conversions::to_string_t("configurations")] = ModelBase::toJson(configurations_);
    }

    return val;
}
bool AutopilotPackageConfiguration::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configurations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurations"));
        if(!fieldValue.is_null())
        {
            std::vector<AutopilotConfigurationItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurations(refVal);
        }
    }
    return ok;
}


std::string AutopilotPackageConfiguration::getName() const
{
    return name_;
}

void AutopilotPackageConfiguration::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AutopilotPackageConfiguration::nameIsSet() const
{
    return nameIsSet_;
}

void AutopilotPackageConfiguration::unsetname()
{
    nameIsSet_ = false;
}

std::vector<AutopilotConfigurationItem>& AutopilotPackageConfiguration::getConfigurations()
{
    return configurations_;
}

void AutopilotPackageConfiguration::setConfigurations(const std::vector<AutopilotConfigurationItem>& value)
{
    configurations_ = value;
    configurationsIsSet_ = true;
}

bool AutopilotPackageConfiguration::configurationsIsSet() const
{
    return configurationsIsSet_;
}

void AutopilotPackageConfiguration::unsetconfigurations()
{
    configurationsIsSet_ = false;
}

}
}
}
}
}


