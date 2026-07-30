

#include "huaweicloud/modelarts/v1/model/DataRequirement.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DataRequirement::DataRequirement()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    conditionsIsSet_ = false;
    valueIsSet_ = false;
    usedStepsIsSet_ = false;
    delay_ = false;
    delayIsSet_ = false;
}

DataRequirement::~DataRequirement() = default;

void DataRequirement::validate()
{
}

web::json::value DataRequirement::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(conditionsIsSet_) {
        val[utility::conversions::to_string_t("conditions")] = ModelBase::toJson(conditions_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(usedStepsIsSet_) {
        val[utility::conversions::to_string_t("used_steps")] = ModelBase::toJson(usedSteps_);
    }
    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }

    return val;
}
bool DataRequirement::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conditions"));
        if(!fieldValue.is_null())
        {
            std::vector<Constraint> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_steps"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    return ok;
}


std::string DataRequirement::getName() const
{
    return name_;
}

void DataRequirement::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DataRequirement::nameIsSet() const
{
    return nameIsSet_;
}

void DataRequirement::unsetname()
{
    nameIsSet_ = false;
}

std::string DataRequirement::getType() const
{
    return type_;
}

void DataRequirement::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DataRequirement::typeIsSet() const
{
    return typeIsSet_;
}

void DataRequirement::unsettype()
{
    typeIsSet_ = false;
}

std::vector<Constraint>& DataRequirement::getConditions()
{
    return conditions_;
}

void DataRequirement::setConditions(const std::vector<Constraint>& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool DataRequirement::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void DataRequirement::unsetconditions()
{
    conditionsIsSet_ = false;
}

std::map<std::string, Object>& DataRequirement::getValue()
{
    return value_;
}

void DataRequirement::setValue(const std::map<std::string, Object>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool DataRequirement::valueIsSet() const
{
    return valueIsSet_;
}

void DataRequirement::unsetvalue()
{
    valueIsSet_ = false;
}

std::vector<std::string>& DataRequirement::getUsedSteps()
{
    return usedSteps_;
}

void DataRequirement::setUsedSteps(const std::vector<std::string>& value)
{
    usedSteps_ = value;
    usedStepsIsSet_ = true;
}

bool DataRequirement::usedStepsIsSet() const
{
    return usedStepsIsSet_;
}

void DataRequirement::unsetusedSteps()
{
    usedStepsIsSet_ = false;
}

bool DataRequirement::isDelay() const
{
    return delay_;
}

void DataRequirement::setDelay(bool value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool DataRequirement::delayIsSet() const
{
    return delayIsSet_;
}

void DataRequirement::unsetdelay()
{
    delayIsSet_ = false;
}

}
}
}
}
}


