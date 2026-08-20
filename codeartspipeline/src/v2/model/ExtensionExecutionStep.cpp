

#include "huaweicloud/codeartspipeline/v2/model/ExtensionExecutionStep.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ExtensionExecutionStep::ExtensionExecutionStep()
{
    dslMethod_ = "";
    dslMethodIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    executionMode_ = "";
    executionModeIsSet_ = false;
    parametersIsSet_ = false;
}

ExtensionExecutionStep::~ExtensionExecutionStep() = default;

void ExtensionExecutionStep::validate()
{
}

web::json::value ExtensionExecutionStep::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dslMethodIsSet_) {
        val[utility::conversions::to_string_t("dslMethod")] = ModelBase::toJson(dslMethod_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("displayName")] = ModelBase::toJson(displayName_);
    }
    if(executionModeIsSet_) {
        val[utility::conversions::to_string_t("executionMode")] = ModelBase::toJson(executionMode_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }

    return val;
}
bool ExtensionExecutionStep::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dslMethod"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dslMethod"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDslMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("displayName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("displayName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executionMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executionMode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    return ok;
}


std::string ExtensionExecutionStep::getDslMethod() const
{
    return dslMethod_;
}

void ExtensionExecutionStep::setDslMethod(const std::string& value)
{
    dslMethod_ = value;
    dslMethodIsSet_ = true;
}

bool ExtensionExecutionStep::dslMethodIsSet() const
{
    return dslMethodIsSet_;
}

void ExtensionExecutionStep::unsetdslMethod()
{
    dslMethodIsSet_ = false;
}

std::string ExtensionExecutionStep::getDisplayName() const
{
    return displayName_;
}

void ExtensionExecutionStep::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool ExtensionExecutionStep::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void ExtensionExecutionStep::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string ExtensionExecutionStep::getExecutionMode() const
{
    return executionMode_;
}

void ExtensionExecutionStep::setExecutionMode(const std::string& value)
{
    executionMode_ = value;
    executionModeIsSet_ = true;
}

bool ExtensionExecutionStep::executionModeIsSet() const
{
    return executionModeIsSet_;
}

void ExtensionExecutionStep::unsetexecutionMode()
{
    executionModeIsSet_ = false;
}

std::map<std::string, std::string>& ExtensionExecutionStep::getParameters()
{
    return parameters_;
}

void ExtensionExecutionStep::setParameters(const std::map<std::string, std::string>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool ExtensionExecutionStep::parametersIsSet() const
{
    return parametersIsSet_;
}

void ExtensionExecutionStep::unsetparameters()
{
    parametersIsSet_ = false;
}

}
}
}
}
}


