

#include "huaweicloud/modelarts/v1/model/AlgorithmResponse_job_config.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmResponse_job_config::AlgorithmResponse_job_config()
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
    codeTreeIsSet_ = false;
    parametersCustomization_ = false;
    parametersCustomizationIsSet_ = false;
}

AlgorithmResponse_job_config::~AlgorithmResponse_job_config() = default;

void AlgorithmResponse_job_config::validate()
{
}

web::json::value AlgorithmResponse_job_config::toJson() const
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
    if(codeTreeIsSet_) {
        val[utility::conversions::to_string_t("code_tree")] = ModelBase::toJson(codeTree_);
    }
    if(parametersCustomizationIsSet_) {
        val[utility::conversions::to_string_t("parameters_customization")] = ModelBase::toJson(parametersCustomization_);
    }

    return val;
}
bool AlgorithmResponse_job_config::fromJson(const web::json::value& val)
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
            std::vector<Parameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            std::vector<AlgorithmResponse_job_config_inputs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("outputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outputs"));
        if(!fieldValue.is_null())
        {
            std::vector<AlgorithmResponse_job_config_outputs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            AlgorithmResponse_job_config_engine refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_tree"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_tree"));
        if(!fieldValue.is_null())
        {
            CodeTreeNode refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeTree(refVal);
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


std::string AlgorithmResponse_job_config::getCodeDir() const
{
    return codeDir_;
}

void AlgorithmResponse_job_config::setCodeDir(const std::string& value)
{
    codeDir_ = value;
    codeDirIsSet_ = true;
}

bool AlgorithmResponse_job_config::codeDirIsSet() const
{
    return codeDirIsSet_;
}

void AlgorithmResponse_job_config::unsetcodeDir()
{
    codeDirIsSet_ = false;
}

std::string AlgorithmResponse_job_config::getBootFile() const
{
    return bootFile_;
}

void AlgorithmResponse_job_config::setBootFile(const std::string& value)
{
    bootFile_ = value;
    bootFileIsSet_ = true;
}

bool AlgorithmResponse_job_config::bootFileIsSet() const
{
    return bootFileIsSet_;
}

void AlgorithmResponse_job_config::unsetbootFile()
{
    bootFileIsSet_ = false;
}

std::string AlgorithmResponse_job_config::getCommand() const
{
    return command_;
}

void AlgorithmResponse_job_config::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool AlgorithmResponse_job_config::commandIsSet() const
{
    return commandIsSet_;
}

void AlgorithmResponse_job_config::unsetcommand()
{
    commandIsSet_ = false;
}

std::vector<Parameter>& AlgorithmResponse_job_config::getParameters()
{
    return parameters_;
}

void AlgorithmResponse_job_config::setParameters(const std::vector<Parameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool AlgorithmResponse_job_config::parametersIsSet() const
{
    return parametersIsSet_;
}

void AlgorithmResponse_job_config::unsetparameters()
{
    parametersIsSet_ = false;
}

std::vector<AlgorithmResponse_job_config_inputs>& AlgorithmResponse_job_config::getInputs()
{
    return inputs_;
}

void AlgorithmResponse_job_config::setInputs(const std::vector<AlgorithmResponse_job_config_inputs>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool AlgorithmResponse_job_config::inputsIsSet() const
{
    return inputsIsSet_;
}

void AlgorithmResponse_job_config::unsetinputs()
{
    inputsIsSet_ = false;
}

std::vector<AlgorithmResponse_job_config_outputs>& AlgorithmResponse_job_config::getOutputs()
{
    return outputs_;
}

void AlgorithmResponse_job_config::setOutputs(const std::vector<AlgorithmResponse_job_config_outputs>& value)
{
    outputs_ = value;
    outputsIsSet_ = true;
}

bool AlgorithmResponse_job_config::outputsIsSet() const
{
    return outputsIsSet_;
}

void AlgorithmResponse_job_config::unsetoutputs()
{
    outputsIsSet_ = false;
}

AlgorithmResponse_job_config_engine AlgorithmResponse_job_config::getEngine() const
{
    return engine_;
}

void AlgorithmResponse_job_config::setEngine(const AlgorithmResponse_job_config_engine& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool AlgorithmResponse_job_config::engineIsSet() const
{
    return engineIsSet_;
}

void AlgorithmResponse_job_config::unsetengine()
{
    engineIsSet_ = false;
}

CodeTreeNode AlgorithmResponse_job_config::getCodeTree() const
{
    return codeTree_;
}

void AlgorithmResponse_job_config::setCodeTree(const CodeTreeNode& value)
{
    codeTree_ = value;
    codeTreeIsSet_ = true;
}

bool AlgorithmResponse_job_config::codeTreeIsSet() const
{
    return codeTreeIsSet_;
}

void AlgorithmResponse_job_config::unsetcodeTree()
{
    codeTreeIsSet_ = false;
}

bool AlgorithmResponse_job_config::isParametersCustomization() const
{
    return parametersCustomization_;
}

void AlgorithmResponse_job_config::setParametersCustomization(bool value)
{
    parametersCustomization_ = value;
    parametersCustomizationIsSet_ = true;
}

bool AlgorithmResponse_job_config::parametersCustomizationIsSet() const
{
    return parametersCustomizationIsSet_;
}

void AlgorithmResponse_job_config::unsetparametersCustomization()
{
    parametersCustomizationIsSet_ = false;
}

}
}
}
}
}


