

#include "huaweicloud/cce/v3/model/PackageConfiguration.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PackageConfiguration::PackageConfiguration()
{
    name_ = "";
    nameIsSet_ = false;
    configurationsIsSet_ = false;
}

PackageConfiguration::~PackageConfiguration() = default;

void PackageConfiguration::validate()
{
}

web::json::value PackageConfiguration::toJson() const
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
bool PackageConfiguration::fromJson(const web::json::value& val)
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


std::string PackageConfiguration::getName() const
{
    return name_;
}

void PackageConfiguration::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PackageConfiguration::nameIsSet() const
{
    return nameIsSet_;
}

void PackageConfiguration::unsetname()
{
    nameIsSet_ = false;
}

std::vector<ConfigurationItem>& PackageConfiguration::getConfigurations()
{
    return configurations_;
}

void PackageConfiguration::setConfigurations(const std::vector<ConfigurationItem>& value)
{
    configurations_ = value;
    configurationsIsSet_ = true;
}

bool PackageConfiguration::configurationsIsSet() const
{
    return configurationsIsSet_;
}

void PackageConfiguration::unsetconfigurations()
{
    configurationsIsSet_ = false;
}

}
}
}
}
}


