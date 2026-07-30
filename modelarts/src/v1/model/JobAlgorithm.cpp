

#include "huaweicloud/modelarts/v1/model/JobAlgorithm.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobAlgorithm::JobAlgorithm()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    subscriptionId_ = "";
    subscriptionIdIsSet_ = false;
    itemVersionId_ = "";
    itemVersionIdIsSet_ = false;
    codeDir_ = "";
    codeDirIsSet_ = false;
    bootFile_ = "";
    bootFileIsSet_ = false;
    autosearchConfigPath_ = "";
    autosearchConfigPathIsSet_ = false;
    autosearchFrameworkPath_ = "";
    autosearchFrameworkPathIsSet_ = false;
    command_ = "";
    commandIsSet_ = false;
    parametersIsSet_ = false;
    policiesIsSet_ = false;
    inputsIsSet_ = false;
    outputsIsSet_ = false;
    engineIsSet_ = false;
    localCodeDir_ = "";
    localCodeDirIsSet_ = false;
    workingDir_ = "";
    workingDirIsSet_ = false;
    environmentsIsSet_ = false;
    summaryIsSet_ = false;
}

JobAlgorithm::~JobAlgorithm() = default;

void JobAlgorithm::validate()
{
}

web::json::value JobAlgorithm::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(subscriptionIdIsSet_) {
        val[utility::conversions::to_string_t("subscription_id")] = ModelBase::toJson(subscriptionId_);
    }
    if(itemVersionIdIsSet_) {
        val[utility::conversions::to_string_t("item_version_id")] = ModelBase::toJson(itemVersionId_);
    }
    if(codeDirIsSet_) {
        val[utility::conversions::to_string_t("code_dir")] = ModelBase::toJson(codeDir_);
    }
    if(bootFileIsSet_) {
        val[utility::conversions::to_string_t("boot_file")] = ModelBase::toJson(bootFile_);
    }
    if(autosearchConfigPathIsSet_) {
        val[utility::conversions::to_string_t("autosearch_config_path")] = ModelBase::toJson(autosearchConfigPath_);
    }
    if(autosearchFrameworkPathIsSet_) {
        val[utility::conversions::to_string_t("autosearch_framework_path")] = ModelBase::toJson(autosearchFrameworkPath_);
    }
    if(commandIsSet_) {
        val[utility::conversions::to_string_t("command")] = ModelBase::toJson(command_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(policiesIsSet_) {
        val[utility::conversions::to_string_t("policies")] = ModelBase::toJson(policies_);
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
    if(summaryIsSet_) {
        val[utility::conversions::to_string_t("summary")] = ModelBase::toJson(summary_);
    }

    return val;
}
bool JobAlgorithm::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subscription_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("item_version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item_version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemVersionId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("autosearch_config_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("autosearch_config_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutosearchConfigPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("autosearch_framework_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("autosearch_framework_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutosearchFrameworkPath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            JobPolicies refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            std::vector<Input> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("outputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outputs"));
        if(!fieldValue.is_null())
        {
            std::vector<Output> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            JobEngine refVal;
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
    if(val.has_field(utility::conversions::to_string_t("summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("summary"));
        if(!fieldValue.is_null())
        {
            Summary refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSummary(refVal);
        }
    }
    return ok;
}


std::string JobAlgorithm::getId() const
{
    return id_;
}

void JobAlgorithm::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobAlgorithm::idIsSet() const
{
    return idIsSet_;
}

void JobAlgorithm::unsetid()
{
    idIsSet_ = false;
}

std::string JobAlgorithm::getName() const
{
    return name_;
}

void JobAlgorithm::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobAlgorithm::nameIsSet() const
{
    return nameIsSet_;
}

void JobAlgorithm::unsetname()
{
    nameIsSet_ = false;
}

std::string JobAlgorithm::getSubscriptionId() const
{
    return subscriptionId_;
}

void JobAlgorithm::setSubscriptionId(const std::string& value)
{
    subscriptionId_ = value;
    subscriptionIdIsSet_ = true;
}

bool JobAlgorithm::subscriptionIdIsSet() const
{
    return subscriptionIdIsSet_;
}

void JobAlgorithm::unsetsubscriptionId()
{
    subscriptionIdIsSet_ = false;
}

std::string JobAlgorithm::getItemVersionId() const
{
    return itemVersionId_;
}

void JobAlgorithm::setItemVersionId(const std::string& value)
{
    itemVersionId_ = value;
    itemVersionIdIsSet_ = true;
}

bool JobAlgorithm::itemVersionIdIsSet() const
{
    return itemVersionIdIsSet_;
}

void JobAlgorithm::unsetitemVersionId()
{
    itemVersionIdIsSet_ = false;
}

std::string JobAlgorithm::getCodeDir() const
{
    return codeDir_;
}

void JobAlgorithm::setCodeDir(const std::string& value)
{
    codeDir_ = value;
    codeDirIsSet_ = true;
}

bool JobAlgorithm::codeDirIsSet() const
{
    return codeDirIsSet_;
}

void JobAlgorithm::unsetcodeDir()
{
    codeDirIsSet_ = false;
}

std::string JobAlgorithm::getBootFile() const
{
    return bootFile_;
}

void JobAlgorithm::setBootFile(const std::string& value)
{
    bootFile_ = value;
    bootFileIsSet_ = true;
}

bool JobAlgorithm::bootFileIsSet() const
{
    return bootFileIsSet_;
}

void JobAlgorithm::unsetbootFile()
{
    bootFileIsSet_ = false;
}

std::string JobAlgorithm::getAutosearchConfigPath() const
{
    return autosearchConfigPath_;
}

void JobAlgorithm::setAutosearchConfigPath(const std::string& value)
{
    autosearchConfigPath_ = value;
    autosearchConfigPathIsSet_ = true;
}

bool JobAlgorithm::autosearchConfigPathIsSet() const
{
    return autosearchConfigPathIsSet_;
}

void JobAlgorithm::unsetautosearchConfigPath()
{
    autosearchConfigPathIsSet_ = false;
}

std::string JobAlgorithm::getAutosearchFrameworkPath() const
{
    return autosearchFrameworkPath_;
}

void JobAlgorithm::setAutosearchFrameworkPath(const std::string& value)
{
    autosearchFrameworkPath_ = value;
    autosearchFrameworkPathIsSet_ = true;
}

bool JobAlgorithm::autosearchFrameworkPathIsSet() const
{
    return autosearchFrameworkPathIsSet_;
}

void JobAlgorithm::unsetautosearchFrameworkPath()
{
    autosearchFrameworkPathIsSet_ = false;
}

std::string JobAlgorithm::getCommand() const
{
    return command_;
}

void JobAlgorithm::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool JobAlgorithm::commandIsSet() const
{
    return commandIsSet_;
}

void JobAlgorithm::unsetcommand()
{
    commandIsSet_ = false;
}

std::vector<Parameters>& JobAlgorithm::getParameters()
{
    return parameters_;
}

void JobAlgorithm::setParameters(const std::vector<Parameters>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool JobAlgorithm::parametersIsSet() const
{
    return parametersIsSet_;
}

void JobAlgorithm::unsetparameters()
{
    parametersIsSet_ = false;
}

JobPolicies JobAlgorithm::getPolicies() const
{
    return policies_;
}

void JobAlgorithm::setPolicies(const JobPolicies& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool JobAlgorithm::policiesIsSet() const
{
    return policiesIsSet_;
}

void JobAlgorithm::unsetpolicies()
{
    policiesIsSet_ = false;
}

std::vector<Input>& JobAlgorithm::getInputs()
{
    return inputs_;
}

void JobAlgorithm::setInputs(const std::vector<Input>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool JobAlgorithm::inputsIsSet() const
{
    return inputsIsSet_;
}

void JobAlgorithm::unsetinputs()
{
    inputsIsSet_ = false;
}

std::vector<Output>& JobAlgorithm::getOutputs()
{
    return outputs_;
}

void JobAlgorithm::setOutputs(const std::vector<Output>& value)
{
    outputs_ = value;
    outputsIsSet_ = true;
}

bool JobAlgorithm::outputsIsSet() const
{
    return outputsIsSet_;
}

void JobAlgorithm::unsetoutputs()
{
    outputsIsSet_ = false;
}

JobEngine JobAlgorithm::getEngine() const
{
    return engine_;
}

void JobAlgorithm::setEngine(const JobEngine& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool JobAlgorithm::engineIsSet() const
{
    return engineIsSet_;
}

void JobAlgorithm::unsetengine()
{
    engineIsSet_ = false;
}

std::string JobAlgorithm::getLocalCodeDir() const
{
    return localCodeDir_;
}

void JobAlgorithm::setLocalCodeDir(const std::string& value)
{
    localCodeDir_ = value;
    localCodeDirIsSet_ = true;
}

bool JobAlgorithm::localCodeDirIsSet() const
{
    return localCodeDirIsSet_;
}

void JobAlgorithm::unsetlocalCodeDir()
{
    localCodeDirIsSet_ = false;
}

std::string JobAlgorithm::getWorkingDir() const
{
    return workingDir_;
}

void JobAlgorithm::setWorkingDir(const std::string& value)
{
    workingDir_ = value;
    workingDirIsSet_ = true;
}

bool JobAlgorithm::workingDirIsSet() const
{
    return workingDirIsSet_;
}

void JobAlgorithm::unsetworkingDir()
{
    workingDirIsSet_ = false;
}

std::map<std::string, std::string>& JobAlgorithm::getEnvironments()
{
    return environments_;
}

void JobAlgorithm::setEnvironments(const std::map<std::string, std::string>& value)
{
    environments_ = value;
    environmentsIsSet_ = true;
}

bool JobAlgorithm::environmentsIsSet() const
{
    return environmentsIsSet_;
}

void JobAlgorithm::unsetenvironments()
{
    environmentsIsSet_ = false;
}

Summary JobAlgorithm::getSummary() const
{
    return summary_;
}

void JobAlgorithm::setSummary(const Summary& value)
{
    summary_ = value;
    summaryIsSet_ = true;
}

bool JobAlgorithm::summaryIsSet() const
{
    return summaryIsSet_;
}

void JobAlgorithm::unsetsummary()
{
    summaryIsSet_ = false;
}

}
}
}
}
}


