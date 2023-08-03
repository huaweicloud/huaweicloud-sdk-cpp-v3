

#include "huaweicloud/rds/v3/model/ConfigurationForCreation.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ConfigurationForCreation::ConfigurationForCreation()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    datastoreIsSet_ = false;
    valuesIsSet_ = false;
}

ConfigurationForCreation::~ConfigurationForCreation() = default;

void ConfigurationForCreation::validate()
{
}

web::json::value ConfigurationForCreation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}

bool ConfigurationForCreation::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            ParaGroupDatastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
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

std::string ConfigurationForCreation::getName() const
{
    return name_;
}

void ConfigurationForCreation::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ConfigurationForCreation::nameIsSet() const
{
    return nameIsSet_;
}

void ConfigurationForCreation::unsetname()
{
    nameIsSet_ = false;
}

std::string ConfigurationForCreation::getDescription() const
{
    return description_;
}

void ConfigurationForCreation::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ConfigurationForCreation::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ConfigurationForCreation::unsetdescription()
{
    descriptionIsSet_ = false;
}

ParaGroupDatastore ConfigurationForCreation::getDatastore() const
{
    return datastore_;
}

void ConfigurationForCreation::setDatastore(const ParaGroupDatastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool ConfigurationForCreation::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void ConfigurationForCreation::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::map<std::string, std::string>& ConfigurationForCreation::getValues()
{
    return values_;
}

void ConfigurationForCreation::setValues(const std::map<std::string, std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ConfigurationForCreation::valuesIsSet() const
{
    return valuesIsSet_;
}

void ConfigurationForCreation::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


