

#include "huaweicloud/dds/v3/model/ConfigurationParametersResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ConfigurationParametersResult::ConfigurationParametersResult()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    valueRange_ = "";
    valueRangeIsSet_ = false;
    restartRequired_ = false;
    restartRequiredIsSet_ = false;
    readonly_ = false;
    readonlyIsSet_ = false;
}

ConfigurationParametersResult::~ConfigurationParametersResult() = default;

void ConfigurationParametersResult::validate()
{
}

web::json::value ConfigurationParametersResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(valueRangeIsSet_) {
        val[utility::conversions::to_string_t("value_range")] = ModelBase::toJson(valueRange_);
    }
    if(restartRequiredIsSet_) {
        val[utility::conversions::to_string_t("restart_required")] = ModelBase::toJson(restartRequired_);
    }
    if(readonlyIsSet_) {
        val[utility::conversions::to_string_t("readonly")] = ModelBase::toJson(readonly_);
    }

    return val;
}

bool ConfigurationParametersResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("value_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_range"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueRange(refVal);
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
    return ok;
}

std::string ConfigurationParametersResult::getName() const
{
    return name_;
}

void ConfigurationParametersResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ConfigurationParametersResult::nameIsSet() const
{
    return nameIsSet_;
}

void ConfigurationParametersResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ConfigurationParametersResult::getValue() const
{
    return value_;
}

void ConfigurationParametersResult::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ConfigurationParametersResult::valueIsSet() const
{
    return valueIsSet_;
}

void ConfigurationParametersResult::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ConfigurationParametersResult::getDescription() const
{
    return description_;
}

void ConfigurationParametersResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ConfigurationParametersResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ConfigurationParametersResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ConfigurationParametersResult::getType() const
{
    return type_;
}

void ConfigurationParametersResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ConfigurationParametersResult::typeIsSet() const
{
    return typeIsSet_;
}

void ConfigurationParametersResult::unsettype()
{
    typeIsSet_ = false;
}

std::string ConfigurationParametersResult::getValueRange() const
{
    return valueRange_;
}

void ConfigurationParametersResult::setValueRange(const std::string& value)
{
    valueRange_ = value;
    valueRangeIsSet_ = true;
}

bool ConfigurationParametersResult::valueRangeIsSet() const
{
    return valueRangeIsSet_;
}

void ConfigurationParametersResult::unsetvalueRange()
{
    valueRangeIsSet_ = false;
}

bool ConfigurationParametersResult::isRestartRequired() const
{
    return restartRequired_;
}

void ConfigurationParametersResult::setRestartRequired(bool value)
{
    restartRequired_ = value;
    restartRequiredIsSet_ = true;
}

bool ConfigurationParametersResult::restartRequiredIsSet() const
{
    return restartRequiredIsSet_;
}

void ConfigurationParametersResult::unsetrestartRequired()
{
    restartRequiredIsSet_ = false;
}

bool ConfigurationParametersResult::isReadonly() const
{
    return readonly_;
}

void ConfigurationParametersResult::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool ConfigurationParametersResult::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void ConfigurationParametersResult::unsetreadonly()
{
    readonlyIsSet_ = false;
}

}
}
}
}
}


