

#include "huaweicloud/gaussdbfornosql/v3/model/UpdateConfigurationRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdateConfigurationRequestBody::UpdateConfigurationRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    valuesIsSet_ = false;
}

UpdateConfigurationRequestBody::~UpdateConfigurationRequestBody() = default;

void UpdateConfigurationRequestBody::validate()
{
}

web::json::value UpdateConfigurationRequestBody::toJson() const
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

bool UpdateConfigurationRequestBody::fromJson(const web::json::value& val)
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

std::string UpdateConfigurationRequestBody::getName() const
{
    return name_;
}

void UpdateConfigurationRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateConfigurationRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateConfigurationRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateConfigurationRequestBody::getDescription() const
{
    return description_;
}

void UpdateConfigurationRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateConfigurationRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateConfigurationRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::map<std::string, std::string>& UpdateConfigurationRequestBody::getValues()
{
    return values_;
}

void UpdateConfigurationRequestBody::setValues(const std::map<std::string, std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool UpdateConfigurationRequestBody::valuesIsSet() const
{
    return valuesIsSet_;
}

void UpdateConfigurationRequestBody::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


