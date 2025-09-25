

#include "huaweicloud/gaussdbforopengauss/v3/model/ExpansionParameterResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExpansionParameterResult::ExpansionParameterResult()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    restartRequired_ = false;
    restartRequiredIsSet_ = false;
    valueRange_ = "";
    valueRangeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ExpansionParameterResult::~ExpansionParameterResult() = default;

void ExpansionParameterResult::validate()
{
}

web::json::value ExpansionParameterResult::toJson() const
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
bool ExpansionParameterResult::fromJson(const web::json::value& val)
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


std::string ExpansionParameterResult::getName() const
{
    return name_;
}

void ExpansionParameterResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ExpansionParameterResult::nameIsSet() const
{
    return nameIsSet_;
}

void ExpansionParameterResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ExpansionParameterResult::getValue() const
{
    return value_;
}

void ExpansionParameterResult::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ExpansionParameterResult::valueIsSet() const
{
    return valueIsSet_;
}

void ExpansionParameterResult::unsetvalue()
{
    valueIsSet_ = false;
}

bool ExpansionParameterResult::isRestartRequired() const
{
    return restartRequired_;
}

void ExpansionParameterResult::setRestartRequired(bool value)
{
    restartRequired_ = value;
    restartRequiredIsSet_ = true;
}

bool ExpansionParameterResult::restartRequiredIsSet() const
{
    return restartRequiredIsSet_;
}

void ExpansionParameterResult::unsetrestartRequired()
{
    restartRequiredIsSet_ = false;
}

std::string ExpansionParameterResult::getValueRange() const
{
    return valueRange_;
}

void ExpansionParameterResult::setValueRange(const std::string& value)
{
    valueRange_ = value;
    valueRangeIsSet_ = true;
}

bool ExpansionParameterResult::valueRangeIsSet() const
{
    return valueRangeIsSet_;
}

void ExpansionParameterResult::unsetvalueRange()
{
    valueRangeIsSet_ = false;
}

std::string ExpansionParameterResult::getType() const
{
    return type_;
}

void ExpansionParameterResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ExpansionParameterResult::typeIsSet() const
{
    return typeIsSet_;
}

void ExpansionParameterResult::unsettype()
{
    typeIsSet_ = false;
}

std::string ExpansionParameterResult::getDescription() const
{
    return description_;
}

void ExpansionParameterResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ExpansionParameterResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ExpansionParameterResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


