

#include "huaweicloud/dds/v3/model/EntityConfigurationParametersResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




EntityConfigurationParametersResult::EntityConfigurationParametersResult()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    valueRange_ = "";
    valueRangeIsSet_ = false;
    restartRequired_ = false;
    restartRequiredIsSet_ = false;
    readonly_ = false;
    readonlyIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

EntityConfigurationParametersResult::~EntityConfigurationParametersResult() = default;

void EntityConfigurationParametersResult::validate()
{
}

web::json::value EntityConfigurationParametersResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool EntityConfigurationParametersResult::fromJson(const web::json::value& val)
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

std::string EntityConfigurationParametersResult::getName() const
{
    return name_;
}

void EntityConfigurationParametersResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EntityConfigurationParametersResult::nameIsSet() const
{
    return nameIsSet_;
}

void EntityConfigurationParametersResult::unsetname()
{
    nameIsSet_ = false;
}

std::string EntityConfigurationParametersResult::getValue() const
{
    return value_;
}

void EntityConfigurationParametersResult::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool EntityConfigurationParametersResult::valueIsSet() const
{
    return valueIsSet_;
}

void EntityConfigurationParametersResult::unsetvalue()
{
    valueIsSet_ = false;
}

std::string EntityConfigurationParametersResult::getValueRange() const
{
    return valueRange_;
}

void EntityConfigurationParametersResult::setValueRange(const std::string& value)
{
    valueRange_ = value;
    valueRangeIsSet_ = true;
}

bool EntityConfigurationParametersResult::valueRangeIsSet() const
{
    return valueRangeIsSet_;
}

void EntityConfigurationParametersResult::unsetvalueRange()
{
    valueRangeIsSet_ = false;
}

bool EntityConfigurationParametersResult::isRestartRequired() const
{
    return restartRequired_;
}

void EntityConfigurationParametersResult::setRestartRequired(bool value)
{
    restartRequired_ = value;
    restartRequiredIsSet_ = true;
}

bool EntityConfigurationParametersResult::restartRequiredIsSet() const
{
    return restartRequiredIsSet_;
}

void EntityConfigurationParametersResult::unsetrestartRequired()
{
    restartRequiredIsSet_ = false;
}

bool EntityConfigurationParametersResult::isReadonly() const
{
    return readonly_;
}

void EntityConfigurationParametersResult::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool EntityConfigurationParametersResult::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void EntityConfigurationParametersResult::unsetreadonly()
{
    readonlyIsSet_ = false;
}

std::string EntityConfigurationParametersResult::getType() const
{
    return type_;
}

void EntityConfigurationParametersResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool EntityConfigurationParametersResult::typeIsSet() const
{
    return typeIsSet_;
}

void EntityConfigurationParametersResult::unsettype()
{
    typeIsSet_ = false;
}

std::string EntityConfigurationParametersResult::getDescription() const
{
    return description_;
}

void EntityConfigurationParametersResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool EntityConfigurationParametersResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void EntityConfigurationParametersResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


