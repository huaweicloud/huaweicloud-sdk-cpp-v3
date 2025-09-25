

#include "huaweicloud/codeartspipeline/v2/model/PipelineVariable.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineVariable::PipelineVariable()
{
    name_ = "";
    nameIsSet_ = false;
    sequence_ = 0;
    sequenceIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    isSecret_ = false;
    isSecretIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    isRuntime_ = false;
    isRuntimeIsSet_ = false;
    limitsIsSet_ = false;
    isReset_ = false;
    isResetIsSet_ = false;
    latestValue_ = "";
    latestValueIsSet_ = false;
}

PipelineVariable::~PipelineVariable() = default;

void PipelineVariable::validate()
{
}

web::json::value PipelineVariable::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(isSecretIsSet_) {
        val[utility::conversions::to_string_t("is_secret")] = ModelBase::toJson(isSecret_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(isRuntimeIsSet_) {
        val[utility::conversions::to_string_t("is_runtime")] = ModelBase::toJson(isRuntime_);
    }
    if(limitsIsSet_) {
        val[utility::conversions::to_string_t("limits")] = ModelBase::toJson(limits_);
    }
    if(isResetIsSet_) {
        val[utility::conversions::to_string_t("is_reset")] = ModelBase::toJson(isReset_);
    }
    if(latestValueIsSet_) {
        val[utility::conversions::to_string_t("latest_value")] = ModelBase::toJson(latestValue_);
    }

    return val;
}
bool PipelineVariable::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_secret"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSecret(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_runtime"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRuntime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limits"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimits(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_reset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_reset"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsReset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latest_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latest_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatestValue(refVal);
        }
    }
    return ok;
}


std::string PipelineVariable::getName() const
{
    return name_;
}

void PipelineVariable::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PipelineVariable::nameIsSet() const
{
    return nameIsSet_;
}

void PipelineVariable::unsetname()
{
    nameIsSet_ = false;
}

int32_t PipelineVariable::getSequence() const
{
    return sequence_;
}

void PipelineVariable::setSequence(int32_t value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool PipelineVariable::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void PipelineVariable::unsetsequence()
{
    sequenceIsSet_ = false;
}

std::string PipelineVariable::getType() const
{
    return type_;
}

void PipelineVariable::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PipelineVariable::typeIsSet() const
{
    return typeIsSet_;
}

void PipelineVariable::unsettype()
{
    typeIsSet_ = false;
}

std::string PipelineVariable::getValue() const
{
    return value_;
}

void PipelineVariable::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool PipelineVariable::valueIsSet() const
{
    return valueIsSet_;
}

void PipelineVariable::unsetvalue()
{
    valueIsSet_ = false;
}

bool PipelineVariable::isIsSecret() const
{
    return isSecret_;
}

void PipelineVariable::setIsSecret(bool value)
{
    isSecret_ = value;
    isSecretIsSet_ = true;
}

bool PipelineVariable::isSecretIsSet() const
{
    return isSecretIsSet_;
}

void PipelineVariable::unsetisSecret()
{
    isSecretIsSet_ = false;
}

std::string PipelineVariable::getDescription() const
{
    return description_;
}

void PipelineVariable::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PipelineVariable::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PipelineVariable::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool PipelineVariable::isIsRuntime() const
{
    return isRuntime_;
}

void PipelineVariable::setIsRuntime(bool value)
{
    isRuntime_ = value;
    isRuntimeIsSet_ = true;
}

bool PipelineVariable::isRuntimeIsSet() const
{
    return isRuntimeIsSet_;
}

void PipelineVariable::unsetisRuntime()
{
    isRuntimeIsSet_ = false;
}

std::vector<std::string>& PipelineVariable::getLimits()
{
    return limits_;
}

void PipelineVariable::setLimits(const std::vector<std::string>& value)
{
    limits_ = value;
    limitsIsSet_ = true;
}

bool PipelineVariable::limitsIsSet() const
{
    return limitsIsSet_;
}

void PipelineVariable::unsetlimits()
{
    limitsIsSet_ = false;
}

bool PipelineVariable::isIsReset() const
{
    return isReset_;
}

void PipelineVariable::setIsReset(bool value)
{
    isReset_ = value;
    isResetIsSet_ = true;
}

bool PipelineVariable::isResetIsSet() const
{
    return isResetIsSet_;
}

void PipelineVariable::unsetisReset()
{
    isResetIsSet_ = false;
}

std::string PipelineVariable::getLatestValue() const
{
    return latestValue_;
}

void PipelineVariable::setLatestValue(const std::string& value)
{
    latestValue_ = value;
    latestValueIsSet_ = true;
}

bool PipelineVariable::latestValueIsSet() const
{
    return latestValueIsSet_;
}

void PipelineVariable::unsetlatestValue()
{
    latestValueIsSet_ = false;
}

}
}
}
}
}


