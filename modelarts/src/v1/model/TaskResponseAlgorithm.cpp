

#include "huaweicloud/modelarts/v1/model/TaskResponseAlgorithm.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TaskResponseAlgorithm::TaskResponseAlgorithm()
{
    codeDir_ = "";
    codeDirIsSet_ = false;
    bootFile_ = "";
    bootFileIsSet_ = false;
    inputsIsSet_ = false;
    outputsIsSet_ = false;
    engineIsSet_ = false;
    localCodeDir_ = "";
    localCodeDirIsSet_ = false;
    workingDir_ = "";
    workingDirIsSet_ = false;
    environmentsIsSet_ = false;
}

TaskResponseAlgorithm::~TaskResponseAlgorithm() = default;

void TaskResponseAlgorithm::validate()
{
}

web::json::value TaskResponseAlgorithm::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeDirIsSet_) {
        val[utility::conversions::to_string_t("code_dir")] = ModelBase::toJson(codeDir_);
    }
    if(bootFileIsSet_) {
        val[utility::conversions::to_string_t("boot_file")] = ModelBase::toJson(bootFile_);
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
    if(localCodeDirIsSet_) {
        val[utility::conversions::to_string_t("local_code_dir")] = ModelBase::toJson(localCodeDir_);
    }
    if(workingDirIsSet_) {
        val[utility::conversions::to_string_t("working_dir")] = ModelBase::toJson(workingDir_);
    }
    if(environmentsIsSet_) {
        val[utility::conversions::to_string_t("environments")] = ModelBase::toJson(environments_);
    }

    return val;
}
bool TaskResponseAlgorithm::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            AlgorithmInput refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("outputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outputs"));
        if(!fieldValue.is_null())
        {
            AlgorithmOutput refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            AlgorithmEngine refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("local_code_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("local_code_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalCodeDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("working_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("working_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkingDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("environments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environments"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvironments(refVal);
        }
    }
    return ok;
}


std::string TaskResponseAlgorithm::getCodeDir() const
{
    return codeDir_;
}

void TaskResponseAlgorithm::setCodeDir(const std::string& value)
{
    codeDir_ = value;
    codeDirIsSet_ = true;
}

bool TaskResponseAlgorithm::codeDirIsSet() const
{
    return codeDirIsSet_;
}

void TaskResponseAlgorithm::unsetcodeDir()
{
    codeDirIsSet_ = false;
}

std::string TaskResponseAlgorithm::getBootFile() const
{
    return bootFile_;
}

void TaskResponseAlgorithm::setBootFile(const std::string& value)
{
    bootFile_ = value;
    bootFileIsSet_ = true;
}

bool TaskResponseAlgorithm::bootFileIsSet() const
{
    return bootFileIsSet_;
}

void TaskResponseAlgorithm::unsetbootFile()
{
    bootFileIsSet_ = false;
}

AlgorithmInput TaskResponseAlgorithm::getInputs() const
{
    return inputs_;
}

void TaskResponseAlgorithm::setInputs(const AlgorithmInput& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool TaskResponseAlgorithm::inputsIsSet() const
{
    return inputsIsSet_;
}

void TaskResponseAlgorithm::unsetinputs()
{
    inputsIsSet_ = false;
}

AlgorithmOutput TaskResponseAlgorithm::getOutputs() const
{
    return outputs_;
}

void TaskResponseAlgorithm::setOutputs(const AlgorithmOutput& value)
{
    outputs_ = value;
    outputsIsSet_ = true;
}

bool TaskResponseAlgorithm::outputsIsSet() const
{
    return outputsIsSet_;
}

void TaskResponseAlgorithm::unsetoutputs()
{
    outputsIsSet_ = false;
}

AlgorithmEngine TaskResponseAlgorithm::getEngine() const
{
    return engine_;
}

void TaskResponseAlgorithm::setEngine(const AlgorithmEngine& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool TaskResponseAlgorithm::engineIsSet() const
{
    return engineIsSet_;
}

void TaskResponseAlgorithm::unsetengine()
{
    engineIsSet_ = false;
}

std::string TaskResponseAlgorithm::getLocalCodeDir() const
{
    return localCodeDir_;
}

void TaskResponseAlgorithm::setLocalCodeDir(const std::string& value)
{
    localCodeDir_ = value;
    localCodeDirIsSet_ = true;
}

bool TaskResponseAlgorithm::localCodeDirIsSet() const
{
    return localCodeDirIsSet_;
}

void TaskResponseAlgorithm::unsetlocalCodeDir()
{
    localCodeDirIsSet_ = false;
}

std::string TaskResponseAlgorithm::getWorkingDir() const
{
    return workingDir_;
}

void TaskResponseAlgorithm::setWorkingDir(const std::string& value)
{
    workingDir_ = value;
    workingDirIsSet_ = true;
}

bool TaskResponseAlgorithm::workingDirIsSet() const
{
    return workingDirIsSet_;
}

void TaskResponseAlgorithm::unsetworkingDir()
{
    workingDirIsSet_ = false;
}

std::map<std::string, std::string>& TaskResponseAlgorithm::getEnvironments()
{
    return environments_;
}

void TaskResponseAlgorithm::setEnvironments(const std::map<std::string, std::string>& value)
{
    environments_ = value;
    environmentsIsSet_ = true;
}

bool TaskResponseAlgorithm::environmentsIsSet() const
{
    return environmentsIsSet_;
}

void TaskResponseAlgorithm::unsetenvironments()
{
    environmentsIsSet_ = false;
}

}
}
}
}
}


