

#include "huaweicloud/codeartspipeline/v2/model/PipelineByTemplateDTO_variables.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineByTemplateDTO_variables::PipelineByTemplateDTO_variables()
{
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
    isReset_ = false;
    isResetIsSet_ = false;
    latestValue_ = "";
    latestValueIsSet_ = false;
    limitsIsSet_ = false;
}

PipelineByTemplateDTO_variables::~PipelineByTemplateDTO_variables() = default;

void PipelineByTemplateDTO_variables::validate()
{
}

web::json::value PipelineByTemplateDTO_variables::toJson() const
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
    if(isResetIsSet_) {
        val[utility::conversions::to_string_t("is_reset")] = ModelBase::toJson(isReset_);
    }
    if(latestValueIsSet_) {
        val[utility::conversions::to_string_t("latest_value")] = ModelBase::toJson(latestValue_);
    }
    if(limitsIsSet_) {
        val[utility::conversions::to_string_t("limits")] = ModelBase::toJson(limits_);
    }

    return val;
}
bool PipelineByTemplateDTO_variables::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            Object refVal;
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
    if(val.has_field(utility::conversions::to_string_t("limits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limits"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimits(refVal);
        }
    }
    return ok;
}


Object PipelineByTemplateDTO_variables::getName() const
{
    return name_;
}

void PipelineByTemplateDTO_variables::setName(const Object& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PipelineByTemplateDTO_variables::nameIsSet() const
{
    return nameIsSet_;
}

void PipelineByTemplateDTO_variables::unsetname()
{
    nameIsSet_ = false;
}

int32_t PipelineByTemplateDTO_variables::getSequence() const
{
    return sequence_;
}

void PipelineByTemplateDTO_variables::setSequence(int32_t value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool PipelineByTemplateDTO_variables::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void PipelineByTemplateDTO_variables::unsetsequence()
{
    sequenceIsSet_ = false;
}

std::string PipelineByTemplateDTO_variables::getType() const
{
    return type_;
}

void PipelineByTemplateDTO_variables::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PipelineByTemplateDTO_variables::typeIsSet() const
{
    return typeIsSet_;
}

void PipelineByTemplateDTO_variables::unsettype()
{
    typeIsSet_ = false;
}

std::string PipelineByTemplateDTO_variables::getValue() const
{
    return value_;
}

void PipelineByTemplateDTO_variables::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool PipelineByTemplateDTO_variables::valueIsSet() const
{
    return valueIsSet_;
}

void PipelineByTemplateDTO_variables::unsetvalue()
{
    valueIsSet_ = false;
}

bool PipelineByTemplateDTO_variables::isIsSecret() const
{
    return isSecret_;
}

void PipelineByTemplateDTO_variables::setIsSecret(bool value)
{
    isSecret_ = value;
    isSecretIsSet_ = true;
}

bool PipelineByTemplateDTO_variables::isSecretIsSet() const
{
    return isSecretIsSet_;
}

void PipelineByTemplateDTO_variables::unsetisSecret()
{
    isSecretIsSet_ = false;
}

std::string PipelineByTemplateDTO_variables::getDescription() const
{
    return description_;
}

void PipelineByTemplateDTO_variables::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PipelineByTemplateDTO_variables::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PipelineByTemplateDTO_variables::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool PipelineByTemplateDTO_variables::isIsRuntime() const
{
    return isRuntime_;
}

void PipelineByTemplateDTO_variables::setIsRuntime(bool value)
{
    isRuntime_ = value;
    isRuntimeIsSet_ = true;
}

bool PipelineByTemplateDTO_variables::isRuntimeIsSet() const
{
    return isRuntimeIsSet_;
}

void PipelineByTemplateDTO_variables::unsetisRuntime()
{
    isRuntimeIsSet_ = false;
}

bool PipelineByTemplateDTO_variables::isIsReset() const
{
    return isReset_;
}

void PipelineByTemplateDTO_variables::setIsReset(bool value)
{
    isReset_ = value;
    isResetIsSet_ = true;
}

bool PipelineByTemplateDTO_variables::isResetIsSet() const
{
    return isResetIsSet_;
}

void PipelineByTemplateDTO_variables::unsetisReset()
{
    isResetIsSet_ = false;
}

std::string PipelineByTemplateDTO_variables::getLatestValue() const
{
    return latestValue_;
}

void PipelineByTemplateDTO_variables::setLatestValue(const std::string& value)
{
    latestValue_ = value;
    latestValueIsSet_ = true;
}

bool PipelineByTemplateDTO_variables::latestValueIsSet() const
{
    return latestValueIsSet_;
}

void PipelineByTemplateDTO_variables::unsetlatestValue()
{
    latestValueIsSet_ = false;
}

std::vector<std::string>& PipelineByTemplateDTO_variables::getLimits()
{
    return limits_;
}

void PipelineByTemplateDTO_variables::setLimits(const std::vector<std::string>& value)
{
    limits_ = value;
    limitsIsSet_ = true;
}

bool PipelineByTemplateDTO_variables::limitsIsSet() const
{
    return limitsIsSet_;
}

void PipelineByTemplateDTO_variables::unsetlimits()
{
    limitsIsSet_ = false;
}

}
}
}
}
}


