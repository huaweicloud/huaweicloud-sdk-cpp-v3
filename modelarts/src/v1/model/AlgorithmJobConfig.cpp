

#include "huaweicloud/modelarts/v1/model/AlgorithmJobConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmJobConfig::AlgorithmJobConfig()
{
    codeDir_ = "";
    codeDirIsSet_ = false;
    bootFile_ = "";
    bootFileIsSet_ = false;
    command_ = "";
    commandIsSet_ = false;
    parametersIsSet_ = false;
    inputsIsSet_ = false;
    outputsIsSet_ = false;
    engineIsSet_ = false;
    parametersCustomization_ = false;
    parametersCustomizationIsSet_ = false;
}

AlgorithmJobConfig::~AlgorithmJobConfig() = default;

void AlgorithmJobConfig::validate()
{
}

web::json::value AlgorithmJobConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeDirIsSet_) {
        val[utility::conversions::to_string_t("code_dir")] = ModelBase::toJson(codeDir_);
    }
    if(bootFileIsSet_) {
        val[utility::conversions::to_string_t("boot_file")] = ModelBase::toJson(bootFile_);
    }
    if(commandIsSet_) {
        val[utility::conversions::to_string_t("command")] = ModelBase::toJson(command_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(inputsIsSet_) {
        val[utility::conversions::to_string_t("inputs")] = ModelBase::toJson(inputs_);
    }
    if(outputsIsSet_) {
        val[utility::conversions::to_string_t("outputs")] = ModelBase::toJson(outputs_);
    }
    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }
    if(parametersCustomizationIsSet_) {
        val[utility::conversions::to_string_t("parameters_customization")] = ModelBase::toJson(parametersCustomization_);
    }

    return val;
}
bool AlgorithmJobConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("boot_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("boot_file"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBootFile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("command"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommand(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<Parameters> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            std::vector<AlgorithmCreateInput> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("outputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outputs"));
        if(!fieldValue.is_null())
        {
            std::vector<AlgorithmCreateOutput> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            AlgorithmCreateEngine refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters_customization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters_customization"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParametersCustomization(refVal);
        }
    }
    return ok;
}


std::string AlgorithmJobConfig::getCodeDir() const
{
    return codeDir_;
}

void AlgorithmJobConfig::setCodeDir(const std::string& value)
{
    codeDir_ = value;
    codeDirIsSet_ = true;
}

bool AlgorithmJobConfig::codeDirIsSet() const
{
    return codeDirIsSet_;
}

void AlgorithmJobConfig::unsetcodeDir()
{
    codeDirIsSet_ = false;
}

std::string AlgorithmJobConfig::getBootFile() const
{
    return bootFile_;
}

void AlgorithmJobConfig::setBootFile(const std::string& value)
{
    bootFile_ = value;
    bootFileIsSet_ = true;
}

bool AlgorithmJobConfig::bootFileIsSet() const
{
    return bootFileIsSet_;
}

void AlgorithmJobConfig::unsetbootFile()
{
    bootFileIsSet_ = false;
}

std::string AlgorithmJobConfig::getCommand() const
{
    return command_;
}

void AlgorithmJobConfig::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool AlgorithmJobConfig::commandIsSet() const
{
    return commandIsSet_;
}

void AlgorithmJobConfig::unsetcommand()
{
    commandIsSet_ = false;
}

std::vector<Parameters>& AlgorithmJobConfig::getParameters()
{
    return parameters_;
}

void AlgorithmJobConfig::setParameters(const std::vector<Parameters>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool AlgorithmJobConfig::parametersIsSet() const
{
    return parametersIsSet_;
}

void AlgorithmJobConfig::unsetparameters()
{
    parametersIsSet_ = false;
}

std::vector<AlgorithmCreateInput>& AlgorithmJobConfig::getInputs()
{
    return inputs_;
}

void AlgorithmJobConfig::setInputs(const std::vector<AlgorithmCreateInput>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool AlgorithmJobConfig::inputsIsSet() const
{
    return inputsIsSet_;
}

void AlgorithmJobConfig::unsetinputs()
{
    inputsIsSet_ = false;
}

std::vector<AlgorithmCreateOutput>& AlgorithmJobConfig::getOutputs()
{
    return outputs_;
}

void AlgorithmJobConfig::setOutputs(const std::vector<AlgorithmCreateOutput>& value)
{
    outputs_ = value;
    outputsIsSet_ = true;
}

bool AlgorithmJobConfig::outputsIsSet() const
{
    return outputsIsSet_;
}

void AlgorithmJobConfig::unsetoutputs()
{
    outputsIsSet_ = false;
}

AlgorithmCreateEngine AlgorithmJobConfig::getEngine() const
{
    return engine_;
}

void AlgorithmJobConfig::setEngine(const AlgorithmCreateEngine& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool AlgorithmJobConfig::engineIsSet() const
{
    return engineIsSet_;
}

void AlgorithmJobConfig::unsetengine()
{
    engineIsSet_ = false;
}

bool AlgorithmJobConfig::isParametersCustomization() const
{
    return parametersCustomization_;
}

void AlgorithmJobConfig::setParametersCustomization(bool value)
{
    parametersCustomization_ = value;
    parametersCustomizationIsSet_ = true;
}

bool AlgorithmJobConfig::parametersCustomizationIsSet() const
{
    return parametersCustomizationIsSet_;
}

void AlgorithmJobConfig::unsetparametersCustomization()
{
    parametersCustomizationIsSet_ = false;
}

}
}
}
}
}


