

#include "huaweicloud/modelarts/v1/model/JobAlgorithmResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobAlgorithmResponse::JobAlgorithmResponse()
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

JobAlgorithmResponse::~JobAlgorithmResponse() = default;

void JobAlgorithmResponse::validate()
{
}

web::json::value JobAlgorithmResponse::toJson() const
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
bool JobAlgorithmResponse::fromJson(const web::json::value& val)
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
            std::vector<Parameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            JobAlgorithmResponse_policies refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            std::vector<InputResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("outputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outputs"));
        if(!fieldValue.is_null())
        {
            std::vector<OutputResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            JobEngineResp refVal;
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
            std::vector<std::map<std::string, std::string>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvironments(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("summary"));
        if(!fieldValue.is_null())
        {
            SummaryResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSummary(refVal);
        }
    }
    return ok;
}


std::string JobAlgorithmResponse::getId() const
{
    return id_;
}

void JobAlgorithmResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobAlgorithmResponse::idIsSet() const
{
    return idIsSet_;
}

void JobAlgorithmResponse::unsetid()
{
    idIsSet_ = false;
}

std::string JobAlgorithmResponse::getName() const
{
    return name_;
}

void JobAlgorithmResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobAlgorithmResponse::nameIsSet() const
{
    return nameIsSet_;
}

void JobAlgorithmResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string JobAlgorithmResponse::getSubscriptionId() const
{
    return subscriptionId_;
}

void JobAlgorithmResponse::setSubscriptionId(const std::string& value)
{
    subscriptionId_ = value;
    subscriptionIdIsSet_ = true;
}

bool JobAlgorithmResponse::subscriptionIdIsSet() const
{
    return subscriptionIdIsSet_;
}

void JobAlgorithmResponse::unsetsubscriptionId()
{
    subscriptionIdIsSet_ = false;
}

std::string JobAlgorithmResponse::getItemVersionId() const
{
    return itemVersionId_;
}

void JobAlgorithmResponse::setItemVersionId(const std::string& value)
{
    itemVersionId_ = value;
    itemVersionIdIsSet_ = true;
}

bool JobAlgorithmResponse::itemVersionIdIsSet() const
{
    return itemVersionIdIsSet_;
}

void JobAlgorithmResponse::unsetitemVersionId()
{
    itemVersionIdIsSet_ = false;
}

std::string JobAlgorithmResponse::getCodeDir() const
{
    return codeDir_;
}

void JobAlgorithmResponse::setCodeDir(const std::string& value)
{
    codeDir_ = value;
    codeDirIsSet_ = true;
}

bool JobAlgorithmResponse::codeDirIsSet() const
{
    return codeDirIsSet_;
}

void JobAlgorithmResponse::unsetcodeDir()
{
    codeDirIsSet_ = false;
}

std::string JobAlgorithmResponse::getBootFile() const
{
    return bootFile_;
}

void JobAlgorithmResponse::setBootFile(const std::string& value)
{
    bootFile_ = value;
    bootFileIsSet_ = true;
}

bool JobAlgorithmResponse::bootFileIsSet() const
{
    return bootFileIsSet_;
}

void JobAlgorithmResponse::unsetbootFile()
{
    bootFileIsSet_ = false;
}

std::string JobAlgorithmResponse::getAutosearchConfigPath() const
{
    return autosearchConfigPath_;
}

void JobAlgorithmResponse::setAutosearchConfigPath(const std::string& value)
{
    autosearchConfigPath_ = value;
    autosearchConfigPathIsSet_ = true;
}

bool JobAlgorithmResponse::autosearchConfigPathIsSet() const
{
    return autosearchConfigPathIsSet_;
}

void JobAlgorithmResponse::unsetautosearchConfigPath()
{
    autosearchConfigPathIsSet_ = false;
}

std::string JobAlgorithmResponse::getAutosearchFrameworkPath() const
{
    return autosearchFrameworkPath_;
}

void JobAlgorithmResponse::setAutosearchFrameworkPath(const std::string& value)
{
    autosearchFrameworkPath_ = value;
    autosearchFrameworkPathIsSet_ = true;
}

bool JobAlgorithmResponse::autosearchFrameworkPathIsSet() const
{
    return autosearchFrameworkPathIsSet_;
}

void JobAlgorithmResponse::unsetautosearchFrameworkPath()
{
    autosearchFrameworkPathIsSet_ = false;
}

std::string JobAlgorithmResponse::getCommand() const
{
    return command_;
}

void JobAlgorithmResponse::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool JobAlgorithmResponse::commandIsSet() const
{
    return commandIsSet_;
}

void JobAlgorithmResponse::unsetcommand()
{
    commandIsSet_ = false;
}

std::vector<Parameter>& JobAlgorithmResponse::getParameters()
{
    return parameters_;
}

void JobAlgorithmResponse::setParameters(const std::vector<Parameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool JobAlgorithmResponse::parametersIsSet() const
{
    return parametersIsSet_;
}

void JobAlgorithmResponse::unsetparameters()
{
    parametersIsSet_ = false;
}

JobAlgorithmResponse_policies JobAlgorithmResponse::getPolicies() const
{
    return policies_;
}

void JobAlgorithmResponse::setPolicies(const JobAlgorithmResponse_policies& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool JobAlgorithmResponse::policiesIsSet() const
{
    return policiesIsSet_;
}

void JobAlgorithmResponse::unsetpolicies()
{
    policiesIsSet_ = false;
}

std::vector<InputResp>& JobAlgorithmResponse::getInputs()
{
    return inputs_;
}

void JobAlgorithmResponse::setInputs(const std::vector<InputResp>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool JobAlgorithmResponse::inputsIsSet() const
{
    return inputsIsSet_;
}

void JobAlgorithmResponse::unsetinputs()
{
    inputsIsSet_ = false;
}

std::vector<OutputResp>& JobAlgorithmResponse::getOutputs()
{
    return outputs_;
}

void JobAlgorithmResponse::setOutputs(const std::vector<OutputResp>& value)
{
    outputs_ = value;
    outputsIsSet_ = true;
}

bool JobAlgorithmResponse::outputsIsSet() const
{
    return outputsIsSet_;
}

void JobAlgorithmResponse::unsetoutputs()
{
    outputsIsSet_ = false;
}

JobEngineResp JobAlgorithmResponse::getEngine() const
{
    return engine_;
}

void JobAlgorithmResponse::setEngine(const JobEngineResp& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool JobAlgorithmResponse::engineIsSet() const
{
    return engineIsSet_;
}

void JobAlgorithmResponse::unsetengine()
{
    engineIsSet_ = false;
}

std::string JobAlgorithmResponse::getLocalCodeDir() const
{
    return localCodeDir_;
}

void JobAlgorithmResponse::setLocalCodeDir(const std::string& value)
{
    localCodeDir_ = value;
    localCodeDirIsSet_ = true;
}

bool JobAlgorithmResponse::localCodeDirIsSet() const
{
    return localCodeDirIsSet_;
}

void JobAlgorithmResponse::unsetlocalCodeDir()
{
    localCodeDirIsSet_ = false;
}

std::string JobAlgorithmResponse::getWorkingDir() const
{
    return workingDir_;
}

void JobAlgorithmResponse::setWorkingDir(const std::string& value)
{
    workingDir_ = value;
    workingDirIsSet_ = true;
}

bool JobAlgorithmResponse::workingDirIsSet() const
{
    return workingDirIsSet_;
}

void JobAlgorithmResponse::unsetworkingDir()
{
    workingDirIsSet_ = false;
}

std::vector<std::map<std::string, std::string>>& JobAlgorithmResponse::getEnvironments()
{
    return environments_;
}

void JobAlgorithmResponse::setEnvironments(const std::vector<std::map<std::string, std::string>>& value)
{
    environments_ = value;
    environmentsIsSet_ = true;
}

bool JobAlgorithmResponse::environmentsIsSet() const
{
    return environmentsIsSet_;
}

void JobAlgorithmResponse::unsetenvironments()
{
    environmentsIsSet_ = false;
}

SummaryResp JobAlgorithmResponse::getSummary() const
{
    return summary_;
}

void JobAlgorithmResponse::setSummary(const SummaryResp& value)
{
    summary_ = value;
    summaryIsSet_ = true;
}

bool JobAlgorithmResponse::summaryIsSet() const
{
    return summaryIsSet_;
}

void JobAlgorithmResponse::unsetsummary()
{
    summaryIsSet_ = false;
}

}
}
}
}
}


