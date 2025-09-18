

#include "huaweicloud/codeartscheck/v2/model/CheckConfigInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CheckConfigInfo::CheckConfigInfo()
{
    name_ = "";
    nameIsSet_ = false;
    cfgKey_ = "";
    cfgKeyIsSet_ = false;
    defaultValue_ = "";
    defaultValueIsSet_ = false;
    optionValue_ = "";
    optionValueIsSet_ = false;
    isRequired_ = 0;
    isRequiredIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

CheckConfigInfo::~CheckConfigInfo() = default;

void CheckConfigInfo::validate()
{
}

web::json::value CheckConfigInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(cfgKeyIsSet_) {
        val[utility::conversions::to_string_t("cfg_key")] = ModelBase::toJson(cfgKey_);
    }
    if(defaultValueIsSet_) {
        val[utility::conversions::to_string_t("default_value")] = ModelBase::toJson(defaultValue_);
    }
    if(optionValueIsSet_) {
        val[utility::conversions::to_string_t("option_value")] = ModelBase::toJson(optionValue_);
    }
    if(isRequiredIsSet_) {
        val[utility::conversions::to_string_t("is_required")] = ModelBase::toJson(isRequired_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool CheckConfigInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cfg_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cfg_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCfgKey(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("option_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("option_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptionValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_required"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRequired(refVal);
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    return ok;
}


std::string CheckConfigInfo::getName() const
{
    return name_;
}

void CheckConfigInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CheckConfigInfo::nameIsSet() const
{
    return nameIsSet_;
}

void CheckConfigInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string CheckConfigInfo::getCfgKey() const
{
    return cfgKey_;
}

void CheckConfigInfo::setCfgKey(const std::string& value)
{
    cfgKey_ = value;
    cfgKeyIsSet_ = true;
}

bool CheckConfigInfo::cfgKeyIsSet() const
{
    return cfgKeyIsSet_;
}

void CheckConfigInfo::unsetcfgKey()
{
    cfgKeyIsSet_ = false;
}

std::string CheckConfigInfo::getDefaultValue() const
{
    return defaultValue_;
}

void CheckConfigInfo::setDefaultValue(const std::string& value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool CheckConfigInfo::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void CheckConfigInfo::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

std::string CheckConfigInfo::getOptionValue() const
{
    return optionValue_;
}

void CheckConfigInfo::setOptionValue(const std::string& value)
{
    optionValue_ = value;
    optionValueIsSet_ = true;
}

bool CheckConfigInfo::optionValueIsSet() const
{
    return optionValueIsSet_;
}

void CheckConfigInfo::unsetoptionValue()
{
    optionValueIsSet_ = false;
}

int32_t CheckConfigInfo::getIsRequired() const
{
    return isRequired_;
}

void CheckConfigInfo::setIsRequired(int32_t value)
{
    isRequired_ = value;
    isRequiredIsSet_ = true;
}

bool CheckConfigInfo::isRequiredIsSet() const
{
    return isRequiredIsSet_;
}

void CheckConfigInfo::unsetisRequired()
{
    isRequiredIsSet_ = false;
}

std::string CheckConfigInfo::getDescription() const
{
    return description_;
}

void CheckConfigInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CheckConfigInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CheckConfigInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t CheckConfigInfo::getType() const
{
    return type_;
}

void CheckConfigInfo::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CheckConfigInfo::typeIsSet() const
{
    return typeIsSet_;
}

void CheckConfigInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string CheckConfigInfo::getStatus() const
{
    return status_;
}

void CheckConfigInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CheckConfigInfo::statusIsSet() const
{
    return statusIsSet_;
}

void CheckConfigInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CheckConfigInfo::getValue() const
{
    return value_;
}

void CheckConfigInfo::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CheckConfigInfo::valueIsSet() const
{
    return valueIsSet_;
}

void CheckConfigInfo::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


