

#include "huaweicloud/rds/v3/model/ConfigurationForUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ConfigurationForUpdate::ConfigurationForUpdate()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    valuesIsSet_ = false;
}

ConfigurationForUpdate::~ConfigurationForUpdate() = default;

void ConfigurationForUpdate::validate()
{
}

web::json::value ConfigurationForUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool ConfigurationForUpdate::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


std::string ConfigurationForUpdate::getName() const
{
    return name_;
}

void ConfigurationForUpdate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ConfigurationForUpdate::nameIsSet() const
{
    return nameIsSet_;
}

void ConfigurationForUpdate::unsetname()
{
    nameIsSet_ = false;
}

std::string ConfigurationForUpdate::getDescription() const
{
    return description_;
}

void ConfigurationForUpdate::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ConfigurationForUpdate::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ConfigurationForUpdate::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::map<std::string, std::string>& ConfigurationForUpdate::getValues()
{
    return values_;
}

void ConfigurationForUpdate::setValues(const std::map<std::string, std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ConfigurationForUpdate::valuesIsSet() const
{
    return valuesIsSet_;
}

void ConfigurationForUpdate::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


