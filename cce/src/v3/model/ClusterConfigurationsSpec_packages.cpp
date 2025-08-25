

#include "huaweicloud/cce/v3/model/ClusterConfigurationsSpec_packages.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterConfigurationsSpec_packages::ClusterConfigurationsSpec_packages()
{
    name_ = "";
    nameIsSet_ = false;
    configurationsIsSet_ = false;
}

ClusterConfigurationsSpec_packages::~ClusterConfigurationsSpec_packages() = default;

void ClusterConfigurationsSpec_packages::validate()
{
}

web::json::value ClusterConfigurationsSpec_packages::toJson() const
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
bool ClusterConfigurationsSpec_packages::fromJson(const web::json::value& val)
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
            std::vector<ConfigurationItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurations(refVal);
        }
    }
    return ok;
}


std::string ClusterConfigurationsSpec_packages::getName() const
{
    return name_;
}

void ClusterConfigurationsSpec_packages::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ClusterConfigurationsSpec_packages::nameIsSet() const
{
    return nameIsSet_;
}

void ClusterConfigurationsSpec_packages::unsetname()
{
    nameIsSet_ = false;
}

std::vector<ConfigurationItem>& ClusterConfigurationsSpec_packages::getConfigurations()
{
    return configurations_;
}

void ClusterConfigurationsSpec_packages::setConfigurations(const std::vector<ConfigurationItem>& value)
{
    configurations_ = value;
    configurationsIsSet_ = true;
}

bool ClusterConfigurationsSpec_packages::configurationsIsSet() const
{
    return configurationsIsSet_;
}

void ClusterConfigurationsSpec_packages::unsetconfigurations()
{
    configurationsIsSet_ = false;
}

}
}
}
}
}


