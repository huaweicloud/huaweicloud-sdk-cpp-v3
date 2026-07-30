

#include "huaweicloud/modelarts/v1/model/DataRequirementResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DataRequirementResp::DataRequirementResp()
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

DataRequirementResp::~DataRequirementResp() = default;

void DataRequirementResp::validate()
{
}

web::json::value DataRequirementResp::toJson() const
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
bool DataRequirementResp::fromJson(const web::json::value& val)
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
            std::vector<ConstraintResp> refVal;
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


std::string DataRequirementResp::getName() const
{
    return name_;
}

void DataRequirementResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DataRequirementResp::nameIsSet() const
{
    return nameIsSet_;
}

void DataRequirementResp::unsetname()
{
    nameIsSet_ = false;
}

std::string DataRequirementResp::getType() const
{
    return type_;
}

void DataRequirementResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DataRequirementResp::typeIsSet() const
{
    return typeIsSet_;
}

void DataRequirementResp::unsettype()
{
    typeIsSet_ = false;
}

std::vector<ConstraintResp>& DataRequirementResp::getConditions()
{
    return conditions_;
}

void DataRequirementResp::setConditions(const std::vector<ConstraintResp>& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool DataRequirementResp::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void DataRequirementResp::unsetconditions()
{
    conditionsIsSet_ = false;
}

std::map<std::string, Object>& DataRequirementResp::getValue()
{
    return value_;
}

void DataRequirementResp::setValue(const std::map<std::string, Object>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool DataRequirementResp::valueIsSet() const
{
    return valueIsSet_;
}

void DataRequirementResp::unsetvalue()
{
    valueIsSet_ = false;
}

std::vector<std::string>& DataRequirementResp::getUsedSteps()
{
    return usedSteps_;
}

void DataRequirementResp::setUsedSteps(const std::vector<std::string>& value)
{
    usedSteps_ = value;
    usedStepsIsSet_ = true;
}

bool DataRequirementResp::usedStepsIsSet() const
{
    return usedStepsIsSet_;
}

void DataRequirementResp::unsetusedSteps()
{
    usedStepsIsSet_ = false;
}

bool DataRequirementResp::isDelay() const
{
    return delay_;
}

void DataRequirementResp::setDelay(bool value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool DataRequirementResp::delayIsSet() const
{
    return delayIsSet_;
}

void DataRequirementResp::unsetdelay()
{
    delayIsSet_ = false;
}

}
}
}
}
}


