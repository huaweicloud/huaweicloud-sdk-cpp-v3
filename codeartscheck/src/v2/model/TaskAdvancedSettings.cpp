

#include "huaweicloud/codeartscheck/v2/model/TaskAdvancedSettings.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




TaskAdvancedSettings::TaskAdvancedSettings()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    optionValue_ = "";
    optionValueIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

TaskAdvancedSettings::~TaskAdvancedSettings() = default;

void TaskAdvancedSettings::validate()
{
}

web::json::value TaskAdvancedSettings::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(optionValueIsSet_) {
        val[utility::conversions::to_string_t("option_value")] = ModelBase::toJson(optionValue_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool TaskAdvancedSettings::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("option_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("option_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptionValue(refVal);
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


std::string TaskAdvancedSettings::getKey() const
{
    return key_;
}

void TaskAdvancedSettings::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TaskAdvancedSettings::keyIsSet() const
{
    return keyIsSet_;
}

void TaskAdvancedSettings::unsetkey()
{
    keyIsSet_ = false;
}

std::string TaskAdvancedSettings::getValue() const
{
    return value_;
}

void TaskAdvancedSettings::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TaskAdvancedSettings::valueIsSet() const
{
    return valueIsSet_;
}

void TaskAdvancedSettings::unsetvalue()
{
    valueIsSet_ = false;
}

std::string TaskAdvancedSettings::getOptionValue() const
{
    return optionValue_;
}

void TaskAdvancedSettings::setOptionValue(const std::string& value)
{
    optionValue_ = value;
    optionValueIsSet_ = true;
}

bool TaskAdvancedSettings::optionValueIsSet() const
{
    return optionValueIsSet_;
}

void TaskAdvancedSettings::unsetoptionValue()
{
    optionValueIsSet_ = false;
}

std::string TaskAdvancedSettings::getDescription() const
{
    return description_;
}

void TaskAdvancedSettings::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TaskAdvancedSettings::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TaskAdvancedSettings::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


