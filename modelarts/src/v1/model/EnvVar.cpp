

#include "huaweicloud/modelarts/v1/model/EnvVar.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




EnvVar::EnvVar()
{
    label_ = "";
    labelIsSet_ = false;
    des_ = "";
    desIsSet_ = false;
    envName_ = "";
    envNameIsSet_ = false;
    envType_ = "";
    envTypeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    modifiable_ = false;
    modifiableIsSet_ = false;
    displayable_ = false;
    displayableIsSet_ = false;
    usedStepsIsSet_ = false;
}

EnvVar::~EnvVar() = default;

void EnvVar::validate()
{
}

web::json::value EnvVar::toJson() const
{
    web::json::value val = web::json::value::object();

    if(labelIsSet_) {
        val[utility::conversions::to_string_t("label")] = ModelBase::toJson(label_);
    }
    if(desIsSet_) {
        val[utility::conversions::to_string_t("des")] = ModelBase::toJson(des_);
    }
    if(envNameIsSet_) {
        val[utility::conversions::to_string_t("env_name")] = ModelBase::toJson(envName_);
    }
    if(envTypeIsSet_) {
        val[utility::conversions::to_string_t("env_type")] = ModelBase::toJson(envType_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(modifiableIsSet_) {
        val[utility::conversions::to_string_t("modifiable")] = ModelBase::toJson(modifiable_);
    }
    if(displayableIsSet_) {
        val[utility::conversions::to_string_t("displayable")] = ModelBase::toJson(displayable_);
    }
    if(usedStepsIsSet_) {
        val[utility::conversions::to_string_t("used_steps")] = ModelBase::toJson(usedSteps_);
    }

    return val;
}
bool EnvVar::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("label"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("des"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("des"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("env_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("env_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("env_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("env_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("modifiable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modifiable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("displayable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("displayable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayable(refVal);
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
    return ok;
}


std::string EnvVar::getLabel() const
{
    return label_;
}

void EnvVar::setLabel(const std::string& value)
{
    label_ = value;
    labelIsSet_ = true;
}

bool EnvVar::labelIsSet() const
{
    return labelIsSet_;
}

void EnvVar::unsetlabel()
{
    labelIsSet_ = false;
}

std::string EnvVar::getDes() const
{
    return des_;
}

void EnvVar::setDes(const std::string& value)
{
    des_ = value;
    desIsSet_ = true;
}

bool EnvVar::desIsSet() const
{
    return desIsSet_;
}

void EnvVar::unsetdes()
{
    desIsSet_ = false;
}

std::string EnvVar::getEnvName() const
{
    return envName_;
}

void EnvVar::setEnvName(const std::string& value)
{
    envName_ = value;
    envNameIsSet_ = true;
}

bool EnvVar::envNameIsSet() const
{
    return envNameIsSet_;
}

void EnvVar::unsetenvName()
{
    envNameIsSet_ = false;
}

std::string EnvVar::getEnvType() const
{
    return envType_;
}

void EnvVar::setEnvType(const std::string& value)
{
    envType_ = value;
    envTypeIsSet_ = true;
}

bool EnvVar::envTypeIsSet() const
{
    return envTypeIsSet_;
}

void EnvVar::unsetenvType()
{
    envTypeIsSet_ = false;
}

std::string EnvVar::getValue() const
{
    return value_;
}

void EnvVar::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool EnvVar::valueIsSet() const
{
    return valueIsSet_;
}

void EnvVar::unsetvalue()
{
    valueIsSet_ = false;
}

bool EnvVar::isModifiable() const
{
    return modifiable_;
}

void EnvVar::setModifiable(bool value)
{
    modifiable_ = value;
    modifiableIsSet_ = true;
}

bool EnvVar::modifiableIsSet() const
{
    return modifiableIsSet_;
}

void EnvVar::unsetmodifiable()
{
    modifiableIsSet_ = false;
}

bool EnvVar::isDisplayable() const
{
    return displayable_;
}

void EnvVar::setDisplayable(bool value)
{
    displayable_ = value;
    displayableIsSet_ = true;
}

bool EnvVar::displayableIsSet() const
{
    return displayableIsSet_;
}

void EnvVar::unsetdisplayable()
{
    displayableIsSet_ = false;
}

std::vector<std::string>& EnvVar::getUsedSteps()
{
    return usedSteps_;
}

void EnvVar::setUsedSteps(const std::vector<std::string>& value)
{
    usedSteps_ = value;
    usedStepsIsSet_ = true;
}

bool EnvVar::usedStepsIsSet() const
{
    return usedStepsIsSet_;
}

void EnvVar::unsetusedSteps()
{
    usedStepsIsSet_ = false;
}

}
}
}
}
}


