

#include "huaweicloud/gaussdbforopengauss/v3/model/RedistributionParameterResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RedistributionParameterResult::RedistributionParameterResult()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    restartRequired_ = false;
    restartRequiredIsSet_ = false;
    valueRange_ = "";
    valueRangeIsSet_ = false;
    typeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

RedistributionParameterResult::~RedistributionParameterResult() = default;

void RedistributionParameterResult::validate()
{
}

web::json::value RedistributionParameterResult::toJson() const
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
bool RedistributionParameterResult::fromJson(const web::json::value& val)
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
            Object refVal;
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


std::string RedistributionParameterResult::getName() const
{
    return name_;
}

void RedistributionParameterResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RedistributionParameterResult::nameIsSet() const
{
    return nameIsSet_;
}

void RedistributionParameterResult::unsetname()
{
    nameIsSet_ = false;
}

std::string RedistributionParameterResult::getValue() const
{
    return value_;
}

void RedistributionParameterResult::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool RedistributionParameterResult::valueIsSet() const
{
    return valueIsSet_;
}

void RedistributionParameterResult::unsetvalue()
{
    valueIsSet_ = false;
}

bool RedistributionParameterResult::isRestartRequired() const
{
    return restartRequired_;
}

void RedistributionParameterResult::setRestartRequired(bool value)
{
    restartRequired_ = value;
    restartRequiredIsSet_ = true;
}

bool RedistributionParameterResult::restartRequiredIsSet() const
{
    return restartRequiredIsSet_;
}

void RedistributionParameterResult::unsetrestartRequired()
{
    restartRequiredIsSet_ = false;
}

std::string RedistributionParameterResult::getValueRange() const
{
    return valueRange_;
}

void RedistributionParameterResult::setValueRange(const std::string& value)
{
    valueRange_ = value;
    valueRangeIsSet_ = true;
}

bool RedistributionParameterResult::valueRangeIsSet() const
{
    return valueRangeIsSet_;
}

void RedistributionParameterResult::unsetvalueRange()
{
    valueRangeIsSet_ = false;
}

Object RedistributionParameterResult::getType() const
{
    return type_;
}

void RedistributionParameterResult::setType(const Object& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RedistributionParameterResult::typeIsSet() const
{
    return typeIsSet_;
}

void RedistributionParameterResult::unsettype()
{
    typeIsSet_ = false;
}

std::string RedistributionParameterResult::getDescription() const
{
    return description_;
}

void RedistributionParameterResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RedistributionParameterResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RedistributionParameterResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


