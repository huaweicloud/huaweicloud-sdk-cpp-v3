

#include "huaweicloud/codeartspipeline/v2/model/CustomVariable.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CustomVariable::CustomVariable()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
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
    runtimeValue_ = "";
    runtimeValueIsSet_ = false;
}

CustomVariable::~CustomVariable() = default;

void CustomVariable::validate()
{
}

web::json::value CustomVariable::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
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
    if(runtimeValueIsSet_) {
        val[utility::conversions::to_string_t("runtime_value")] = ModelBase::toJson(runtimeValue_);
    }

    return val;
}
bool CustomVariable::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pipeline_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineId(refVal);
        }
    }
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
            std::vector<Object> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("runtime_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntimeValue(refVal);
        }
    }
    return ok;
}


std::string CustomVariable::getPipelineId() const
{
    return pipelineId_;
}

void CustomVariable::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool CustomVariable::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void CustomVariable::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string CustomVariable::getName() const
{
    return name_;
}

void CustomVariable::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CustomVariable::nameIsSet() const
{
    return nameIsSet_;
}

void CustomVariable::unsetname()
{
    nameIsSet_ = false;
}

int32_t CustomVariable::getSequence() const
{
    return sequence_;
}

void CustomVariable::setSequence(int32_t value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool CustomVariable::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void CustomVariable::unsetsequence()
{
    sequenceIsSet_ = false;
}

std::string CustomVariable::getType() const
{
    return type_;
}

void CustomVariable::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CustomVariable::typeIsSet() const
{
    return typeIsSet_;
}

void CustomVariable::unsettype()
{
    typeIsSet_ = false;
}

std::string CustomVariable::getValue() const
{
    return value_;
}

void CustomVariable::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CustomVariable::valueIsSet() const
{
    return valueIsSet_;
}

void CustomVariable::unsetvalue()
{
    valueIsSet_ = false;
}

bool CustomVariable::isIsSecret() const
{
    return isSecret_;
}

void CustomVariable::setIsSecret(bool value)
{
    isSecret_ = value;
    isSecretIsSet_ = true;
}

bool CustomVariable::isSecretIsSet() const
{
    return isSecretIsSet_;
}

void CustomVariable::unsetisSecret()
{
    isSecretIsSet_ = false;
}

std::string CustomVariable::getDescription() const
{
    return description_;
}

void CustomVariable::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CustomVariable::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CustomVariable::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool CustomVariable::isIsRuntime() const
{
    return isRuntime_;
}

void CustomVariable::setIsRuntime(bool value)
{
    isRuntime_ = value;
    isRuntimeIsSet_ = true;
}

bool CustomVariable::isRuntimeIsSet() const
{
    return isRuntimeIsSet_;
}

void CustomVariable::unsetisRuntime()
{
    isRuntimeIsSet_ = false;
}

std::vector<Object>& CustomVariable::getLimits()
{
    return limits_;
}

void CustomVariable::setLimits(const std::vector<Object>& value)
{
    limits_ = value;
    limitsIsSet_ = true;
}

bool CustomVariable::limitsIsSet() const
{
    return limitsIsSet_;
}

void CustomVariable::unsetlimits()
{
    limitsIsSet_ = false;
}

bool CustomVariable::isIsReset() const
{
    return isReset_;
}

void CustomVariable::setIsReset(bool value)
{
    isReset_ = value;
    isResetIsSet_ = true;
}

bool CustomVariable::isResetIsSet() const
{
    return isResetIsSet_;
}

void CustomVariable::unsetisReset()
{
    isResetIsSet_ = false;
}

std::string CustomVariable::getLatestValue() const
{
    return latestValue_;
}

void CustomVariable::setLatestValue(const std::string& value)
{
    latestValue_ = value;
    latestValueIsSet_ = true;
}

bool CustomVariable::latestValueIsSet() const
{
    return latestValueIsSet_;
}

void CustomVariable::unsetlatestValue()
{
    latestValueIsSet_ = false;
}

std::string CustomVariable::getRuntimeValue() const
{
    return runtimeValue_;
}

void CustomVariable::setRuntimeValue(const std::string& value)
{
    runtimeValue_ = value;
    runtimeValueIsSet_ = true;
}

bool CustomVariable::runtimeValueIsSet() const
{
    return runtimeValueIsSet_;
}

void CustomVariable::unsetruntimeValue()
{
    runtimeValueIsSet_ = false;
}

}
}
}
}
}


