

#include "huaweicloud/gaussdbfornosql/v3/model/ConfigurationParameterResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ConfigurationParameterResult::ConfigurationParameterResult()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    restartRequired_ = false;
    restartRequiredIsSet_ = false;
    readonly_ = false;
    readonlyIsSet_ = false;
    valueRange_ = "";
    valueRangeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ConfigurationParameterResult::~ConfigurationParameterResult() = default;

void ConfigurationParameterResult::validate()
{
}

web::json::value ConfigurationParameterResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(restartRequiredIsSet_) {
        val[utility::conversions::to_string_t("restart_required")] = ModelBase::toJson(restartRequired_);
    }
    if(readonlyIsSet_) {
        val[utility::conversions::to_string_t("readonly")] = ModelBase::toJson(readonly_);
    }
    if(valueRangeIsSet_) {
        val[utility::conversions::to_string_t("value_range")] = ModelBase::toJson(valueRange_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool ConfigurationParameterResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restart_required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restart_required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestartRequired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readonly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonly(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_range"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueRange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    return ok;
}


std::string ConfigurationParameterResult::getName() const
{
    return name_;
}

void ConfigurationParameterResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ConfigurationParameterResult::nameIsSet() const
{
    return nameIsSet_;
}

void ConfigurationParameterResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ConfigurationParameterResult::getValue() const
{
    return value_;
}

void ConfigurationParameterResult::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ConfigurationParameterResult::valueIsSet() const
{
    return valueIsSet_;
}

void ConfigurationParameterResult::unsetvalue()
{
    valueIsSet_ = false;
}

bool ConfigurationParameterResult::isRestartRequired() const
{
    return restartRequired_;
}

void ConfigurationParameterResult::setRestartRequired(bool value)
{
    restartRequired_ = value;
    restartRequiredIsSet_ = true;
}

bool ConfigurationParameterResult::restartRequiredIsSet() const
{
    return restartRequiredIsSet_;
}

void ConfigurationParameterResult::unsetrestartRequired()
{
    restartRequiredIsSet_ = false;
}

bool ConfigurationParameterResult::isReadonly() const
{
    return readonly_;
}

void ConfigurationParameterResult::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool ConfigurationParameterResult::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void ConfigurationParameterResult::unsetreadonly()
{
    readonlyIsSet_ = false;
}

std::string ConfigurationParameterResult::getValueRange() const
{
    return valueRange_;
}

void ConfigurationParameterResult::setValueRange(const std::string& value)
{
    valueRange_ = value;
    valueRangeIsSet_ = true;
}

bool ConfigurationParameterResult::valueRangeIsSet() const
{
    return valueRangeIsSet_;
}

void ConfigurationParameterResult::unsetvalueRange()
{
    valueRangeIsSet_ = false;
}

std::string ConfigurationParameterResult::getType() const
{
    return type_;
}

void ConfigurationParameterResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ConfigurationParameterResult::typeIsSet() const
{
    return typeIsSet_;
}

void ConfigurationParameterResult::unsettype()
{
    typeIsSet_ = false;
}

std::string ConfigurationParameterResult::getDescription() const
{
    return description_;
}

void ConfigurationParameterResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ConfigurationParameterResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ConfigurationParameterResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


