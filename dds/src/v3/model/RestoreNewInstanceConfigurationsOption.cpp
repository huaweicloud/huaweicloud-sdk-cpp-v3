

#include "huaweicloud/dds/v3/model/RestoreNewInstanceConfigurationsOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




RestoreNewInstanceConfigurationsOption::RestoreNewInstanceConfigurationsOption()
{
    type_ = "";
    typeIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
}

RestoreNewInstanceConfigurationsOption::~RestoreNewInstanceConfigurationsOption() = default;

void RestoreNewInstanceConfigurationsOption::validate()
{
}

web::json::value RestoreNewInstanceConfigurationsOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }

    return val;
}
bool RestoreNewInstanceConfigurationsOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configuration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationId(refVal);
        }
    }
    return ok;
}


std::string RestoreNewInstanceConfigurationsOption::getType() const
{
    return type_;
}

void RestoreNewInstanceConfigurationsOption::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RestoreNewInstanceConfigurationsOption::typeIsSet() const
{
    return typeIsSet_;
}

void RestoreNewInstanceConfigurationsOption::unsettype()
{
    typeIsSet_ = false;
}

std::string RestoreNewInstanceConfigurationsOption::getConfigurationId() const
{
    return configurationId_;
}

void RestoreNewInstanceConfigurationsOption::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool RestoreNewInstanceConfigurationsOption::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void RestoreNewInstanceConfigurationsOption::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

}
}
}
}
}


