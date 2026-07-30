

#include "huaweicloud/modelarts/v1/model/Task_algorithm.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Task_algorithm::Task_algorithm()
{
    jobConfigIsSet_ = false;
    codeDir_ = "";
    codeDirIsSet_ = false;
    bootFile_ = "";
    bootFileIsSet_ = false;
    engineIsSet_ = false;
    inputsIsSet_ = false;
    outputsIsSet_ = false;
    localCodeDir_ = "";
    localCodeDirIsSet_ = false;
    workingDir_ = "";
    workingDirIsSet_ = false;
    environmentsIsSet_ = false;
}

Task_algorithm::~Task_algorithm() = default;

void Task_algorithm::validate()
{
}

web::json::value Task_algorithm::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobConfigIsSet_) {
        val[utility::conversions::to_string_t("job_config")] = ModelBase::toJson(jobConfig_);
    }
    if(codeDirIsSet_) {
        val[utility::conversions::to_string_t("code_dir")] = ModelBase::toJson(codeDir_);
    }
    if(bootFileIsSet_) {
        val[utility::conversions::to_string_t("boot_file")] = ModelBase::toJson(bootFile_);
    }
    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }
    if(inputsIsSet_) {
        val[utility::conversions::to_string_t("inputs")] = ModelBase::toJson(inputs_);
    }
    if(outputsIsSet_) {
        val[utility::conversions::to_string_t("outputs")] = ModelBase::toJson(outputs_);
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
bool Task_algorithm::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_config"));
        if(!fieldValue.is_null())
        {
            Task_algorithm_job_config refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobConfig(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            Task_algorithm_engine refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            std::vector<Task_algorithm_inputs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("outputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outputs"));
        if(!fieldValue.is_null())
        {
            std::vector<Task_algorithm_outputs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputs(refVal);
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


Task_algorithm_job_config Task_algorithm::getJobConfig() const
{
    return jobConfig_;
}

void Task_algorithm::setJobConfig(const Task_algorithm_job_config& value)
{
    jobConfig_ = value;
    jobConfigIsSet_ = true;
}

bool Task_algorithm::jobConfigIsSet() const
{
    return jobConfigIsSet_;
}

void Task_algorithm::unsetjobConfig()
{
    jobConfigIsSet_ = false;
}

std::string Task_algorithm::getCodeDir() const
{
    return codeDir_;
}

void Task_algorithm::setCodeDir(const std::string& value)
{
    codeDir_ = value;
    codeDirIsSet_ = true;
}

bool Task_algorithm::codeDirIsSet() const
{
    return codeDirIsSet_;
}

void Task_algorithm::unsetcodeDir()
{
    codeDirIsSet_ = false;
}

std::string Task_algorithm::getBootFile() const
{
    return bootFile_;
}

void Task_algorithm::setBootFile(const std::string& value)
{
    bootFile_ = value;
    bootFileIsSet_ = true;
}

bool Task_algorithm::bootFileIsSet() const
{
    return bootFileIsSet_;
}

void Task_algorithm::unsetbootFile()
{
    bootFileIsSet_ = false;
}

Task_algorithm_engine Task_algorithm::getEngine() const
{
    return engine_;
}

void Task_algorithm::setEngine(const Task_algorithm_engine& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool Task_algorithm::engineIsSet() const
{
    return engineIsSet_;
}

void Task_algorithm::unsetengine()
{
    engineIsSet_ = false;
}

std::vector<Task_algorithm_inputs>& Task_algorithm::getInputs()
{
    return inputs_;
}

void Task_algorithm::setInputs(const std::vector<Task_algorithm_inputs>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool Task_algorithm::inputsIsSet() const
{
    return inputsIsSet_;
}

void Task_algorithm::unsetinputs()
{
    inputsIsSet_ = false;
}

std::vector<Task_algorithm_outputs>& Task_algorithm::getOutputs()
{
    return outputs_;
}

void Task_algorithm::setOutputs(const std::vector<Task_algorithm_outputs>& value)
{
    outputs_ = value;
    outputsIsSet_ = true;
}

bool Task_algorithm::outputsIsSet() const
{
    return outputsIsSet_;
}

void Task_algorithm::unsetoutputs()
{
    outputsIsSet_ = false;
}

std::string Task_algorithm::getLocalCodeDir() const
{
    return localCodeDir_;
}

void Task_algorithm::setLocalCodeDir(const std::string& value)
{
    localCodeDir_ = value;
    localCodeDirIsSet_ = true;
}

bool Task_algorithm::localCodeDirIsSet() const
{
    return localCodeDirIsSet_;
}

void Task_algorithm::unsetlocalCodeDir()
{
    localCodeDirIsSet_ = false;
}

std::string Task_algorithm::getWorkingDir() const
{
    return workingDir_;
}

void Task_algorithm::setWorkingDir(const std::string& value)
{
    workingDir_ = value;
    workingDirIsSet_ = true;
}

bool Task_algorithm::workingDirIsSet() const
{
    return workingDirIsSet_;
}

void Task_algorithm::unsetworkingDir()
{
    workingDirIsSet_ = false;
}

std::map<std::string, std::string>& Task_algorithm::getEnvironments()
{
    return environments_;
}

void Task_algorithm::setEnvironments(const std::map<std::string, std::string>& value)
{
    environments_ = value;
    environmentsIsSet_ = true;
}

bool Task_algorithm::environmentsIsSet() const
{
    return environmentsIsSet_;
}

void Task_algorithm::unsetenvironments()
{
    environmentsIsSet_ = false;
}

}
}
}
}
}


