

#include "huaweicloud/gaussdb/v3/model/UpdateConfigurationParameterRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateConfigurationParameterRequestBody::UpdateConfigurationParameterRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    parameterValuesIsSet_ = false;
}

UpdateConfigurationParameterRequestBody::~UpdateConfigurationParameterRequestBody() = default;

void UpdateConfigurationParameterRequestBody::validate()
{
}

web::json::value UpdateConfigurationParameterRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(parameterValuesIsSet_) {
        val[utility::conversions::to_string_t("parameter_values")] = ModelBase::toJson(parameterValues_);
    }

    return val;
}

bool UpdateConfigurationParameterRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("parameter_values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter_values"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameterValues(refVal);
        }
    }
    return ok;
}

std::string UpdateConfigurationParameterRequestBody::getName() const
{
    return name_;
}

void UpdateConfigurationParameterRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateConfigurationParameterRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateConfigurationParameterRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateConfigurationParameterRequestBody::getDescription() const
{
    return description_;
}

void UpdateConfigurationParameterRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateConfigurationParameterRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateConfigurationParameterRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::map<std::string, std::string>& UpdateConfigurationParameterRequestBody::getParameterValues()
{
    return parameterValues_;
}

void UpdateConfigurationParameterRequestBody::setParameterValues(const std::map<std::string, std::string>& value)
{
    parameterValues_ = value;
    parameterValuesIsSet_ = true;
}

bool UpdateConfigurationParameterRequestBody::parameterValuesIsSet() const
{
    return parameterValuesIsSet_;
}

void UpdateConfigurationParameterRequestBody::unsetparameterValues()
{
    parameterValuesIsSet_ = false;
}

}
}
}
}
}


