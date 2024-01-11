

#include "huaweicloud/drs/v5/model/ParameterConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ParameterConfig::ParameterConfig()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    defaultValue_ = "";
    defaultValueIsSet_ = false;
    valueRange_ = "";
    valueRangeIsSet_ = false;
    isNeedRestart_ = false;
    isNeedRestartIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

ParameterConfig::~ParameterConfig() = default;

void ParameterConfig::validate()
{
}

web::json::value ParameterConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(defaultValueIsSet_) {
        val[utility::conversions::to_string_t("default_value")] = ModelBase::toJson(defaultValue_);
    }
    if(valueRangeIsSet_) {
        val[utility::conversions::to_string_t("value_range")] = ModelBase::toJson(valueRange_);
    }
    if(isNeedRestartIsSet_) {
        val[utility::conversions::to_string_t("is_need_restart")] = ModelBase::toJson(isNeedRestart_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool ParameterConfig::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("default_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_need_restart"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_need_restart"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsNeedRestart(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string ParameterConfig::getName() const
{
    return name_;
}

void ParameterConfig::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ParameterConfig::nameIsSet() const
{
    return nameIsSet_;
}

void ParameterConfig::unsetname()
{
    nameIsSet_ = false;
}

std::string ParameterConfig::getValue() const
{
    return value_;
}

void ParameterConfig::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ParameterConfig::valueIsSet() const
{
    return valueIsSet_;
}

void ParameterConfig::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ParameterConfig::getDefaultValue() const
{
    return defaultValue_;
}

void ParameterConfig::setDefaultValue(const std::string& value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool ParameterConfig::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void ParameterConfig::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

std::string ParameterConfig::getValueRange() const
{
    return valueRange_;
}

void ParameterConfig::setValueRange(const std::string& value)
{
    valueRange_ = value;
    valueRangeIsSet_ = true;
}

bool ParameterConfig::valueRangeIsSet() const
{
    return valueRangeIsSet_;
}

void ParameterConfig::unsetvalueRange()
{
    valueRangeIsSet_ = false;
}

bool ParameterConfig::isIsNeedRestart() const
{
    return isNeedRestart_;
}

void ParameterConfig::setIsNeedRestart(bool value)
{
    isNeedRestart_ = value;
    isNeedRestartIsSet_ = true;
}

bool ParameterConfig::isNeedRestartIsSet() const
{
    return isNeedRestartIsSet_;
}

void ParameterConfig::unsetisNeedRestart()
{
    isNeedRestartIsSet_ = false;
}

std::string ParameterConfig::getDescription() const
{
    return description_;
}

void ParameterConfig::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ParameterConfig::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ParameterConfig::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ParameterConfig::getCreatedAt() const
{
    return createdAt_;
}

void ParameterConfig::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ParameterConfig::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ParameterConfig::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ParameterConfig::getUpdatedAt() const
{
    return updatedAt_;
}

void ParameterConfig::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ParameterConfig::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ParameterConfig::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


