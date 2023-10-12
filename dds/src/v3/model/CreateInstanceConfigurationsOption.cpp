

#include "huaweicloud/dds/v3/model/CreateInstanceConfigurationsOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CreateInstanceConfigurationsOption::CreateInstanceConfigurationsOption()
{
    type_ = "";
    typeIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
}

CreateInstanceConfigurationsOption::~CreateInstanceConfigurationsOption() = default;

void CreateInstanceConfigurationsOption::validate()
{
}

web::json::value CreateInstanceConfigurationsOption::toJson() const
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
bool CreateInstanceConfigurationsOption::fromJson(const web::json::value& val)
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


std::string CreateInstanceConfigurationsOption::getType() const
{
    return type_;
}

void CreateInstanceConfigurationsOption::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateInstanceConfigurationsOption::typeIsSet() const
{
    return typeIsSet_;
}

void CreateInstanceConfigurationsOption::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateInstanceConfigurationsOption::getConfigurationId() const
{
    return configurationId_;
}

void CreateInstanceConfigurationsOption::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool CreateInstanceConfigurationsOption::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void CreateInstanceConfigurationsOption::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

}
}
}
}
}


