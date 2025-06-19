

#include "huaweicloud/codeartsbuild/v3/model/CreateBuildJobRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateBuildJobRequestBody::CreateBuildJobRequestBody()
{
    arch_ = "";
    archIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    autoUpdateSubModule_ = "";
    autoUpdateSubModuleIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    parametersIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    timeoutIsSet_ = false;
    scmsIsSet_ = false;
    stepsIsSet_ = false;
    hostType_ = "";
    hostTypeIsSet_ = false;
    buildConfigType_ = "";
    buildConfigTypeIsSet_ = false;
    buildIfCodeUpdated_ = false;
    buildIfCodeUpdatedIsSet_ = false;
    triggersIsSet_ = false;
}

CreateBuildJobRequestBody::~CreateBuildJobRequestBody() = default;

void CreateBuildJobRequestBody::validate()
{
}

web::json::value CreateBuildJobRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(archIsSet_) {
        val[utility::conversions::to_string_t("arch")] = ModelBase::toJson(arch_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(autoUpdateSubModuleIsSet_) {
        val[utility::conversions::to_string_t("auto_update_sub_module")] = ModelBase::toJson(autoUpdateSubModule_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(timeoutIsSet_) {
        val[utility::conversions::to_string_t("timeout")] = ModelBase::toJson(timeout_);
    }
    if(scmsIsSet_) {
        val[utility::conversions::to_string_t("scms")] = ModelBase::toJson(scms_);
    }
    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }
    if(hostTypeIsSet_) {
        val[utility::conversions::to_string_t("host_type")] = ModelBase::toJson(hostType_);
    }
    if(buildConfigTypeIsSet_) {
        val[utility::conversions::to_string_t("build_config_type")] = ModelBase::toJson(buildConfigType_);
    }
    if(buildIfCodeUpdatedIsSet_) {
        val[utility::conversions::to_string_t("build_if_code_updated")] = ModelBase::toJson(buildIfCodeUpdated_);
    }
    if(triggersIsSet_) {
        val[utility::conversions::to_string_t("triggers")] = ModelBase::toJson(triggers_);
    }

    return val;
}
bool CreateBuildJobRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("arch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_update_sub_module"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_update_sub_module"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoUpdateSubModule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateBuildJobParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout"));
        if(!fieldValue.is_null())
        {
            CreateBuildTimeout refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scms"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateBuildJobScm> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScms(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateBuildJobSteps> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_config_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_config_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildConfigType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_if_code_updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_if_code_updated"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildIfCodeUpdated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("triggers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("triggers"));
        if(!fieldValue.is_null())
        {
            std::vector<Trigger> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggers(refVal);
        }
    }
    return ok;
}


std::string CreateBuildJobRequestBody::getArch() const
{
    return arch_;
}

void CreateBuildJobRequestBody::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool CreateBuildJobRequestBody::archIsSet() const
{
    return archIsSet_;
}

void CreateBuildJobRequestBody::unsetarch()
{
    archIsSet_ = false;
}

std::string CreateBuildJobRequestBody::getProjectId() const
{
    return projectId_;
}

void CreateBuildJobRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateBuildJobRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateBuildJobRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreateBuildJobRequestBody::getJobName() const
{
    return jobName_;
}

void CreateBuildJobRequestBody::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool CreateBuildJobRequestBody::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void CreateBuildJobRequestBody::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string CreateBuildJobRequestBody::getAutoUpdateSubModule() const
{
    return autoUpdateSubModule_;
}

void CreateBuildJobRequestBody::setAutoUpdateSubModule(const std::string& value)
{
    autoUpdateSubModule_ = value;
    autoUpdateSubModuleIsSet_ = true;
}

bool CreateBuildJobRequestBody::autoUpdateSubModuleIsSet() const
{
    return autoUpdateSubModuleIsSet_;
}

void CreateBuildJobRequestBody::unsetautoUpdateSubModule()
{
    autoUpdateSubModuleIsSet_ = false;
}

std::string CreateBuildJobRequestBody::getFlavor() const
{
    return flavor_;
}

void CreateBuildJobRequestBody::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool CreateBuildJobRequestBody::flavorIsSet() const
{
    return flavorIsSet_;
}

void CreateBuildJobRequestBody::unsetflavor()
{
    flavorIsSet_ = false;
}

std::vector<CreateBuildJobParameter>& CreateBuildJobRequestBody::getParameters()
{
    return parameters_;
}

void CreateBuildJobRequestBody::setParameters(const std::vector<CreateBuildJobParameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool CreateBuildJobRequestBody::parametersIsSet() const
{
    return parametersIsSet_;
}

void CreateBuildJobRequestBody::unsetparameters()
{
    parametersIsSet_ = false;
}

std::string CreateBuildJobRequestBody::getGroupId() const
{
    return groupId_;
}

void CreateBuildJobRequestBody::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CreateBuildJobRequestBody::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CreateBuildJobRequestBody::unsetgroupId()
{
    groupIdIsSet_ = false;
}

CreateBuildTimeout CreateBuildJobRequestBody::getTimeout() const
{
    return timeout_;
}

void CreateBuildJobRequestBody::setTimeout(const CreateBuildTimeout& value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool CreateBuildJobRequestBody::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void CreateBuildJobRequestBody::unsettimeout()
{
    timeoutIsSet_ = false;
}

std::vector<CreateBuildJobScm>& CreateBuildJobRequestBody::getScms()
{
    return scms_;
}

void CreateBuildJobRequestBody::setScms(const std::vector<CreateBuildJobScm>& value)
{
    scms_ = value;
    scmsIsSet_ = true;
}

bool CreateBuildJobRequestBody::scmsIsSet() const
{
    return scmsIsSet_;
}

void CreateBuildJobRequestBody::unsetscms()
{
    scmsIsSet_ = false;
}

std::vector<CreateBuildJobSteps>& CreateBuildJobRequestBody::getSteps()
{
    return steps_;
}

void CreateBuildJobRequestBody::setSteps(const std::vector<CreateBuildJobSteps>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool CreateBuildJobRequestBody::stepsIsSet() const
{
    return stepsIsSet_;
}

void CreateBuildJobRequestBody::unsetsteps()
{
    stepsIsSet_ = false;
}

std::string CreateBuildJobRequestBody::getHostType() const
{
    return hostType_;
}

void CreateBuildJobRequestBody::setHostType(const std::string& value)
{
    hostType_ = value;
    hostTypeIsSet_ = true;
}

bool CreateBuildJobRequestBody::hostTypeIsSet() const
{
    return hostTypeIsSet_;
}

void CreateBuildJobRequestBody::unsethostType()
{
    hostTypeIsSet_ = false;
}

std::string CreateBuildJobRequestBody::getBuildConfigType() const
{
    return buildConfigType_;
}

void CreateBuildJobRequestBody::setBuildConfigType(const std::string& value)
{
    buildConfigType_ = value;
    buildConfigTypeIsSet_ = true;
}

bool CreateBuildJobRequestBody::buildConfigTypeIsSet() const
{
    return buildConfigTypeIsSet_;
}

void CreateBuildJobRequestBody::unsetbuildConfigType()
{
    buildConfigTypeIsSet_ = false;
}

bool CreateBuildJobRequestBody::isBuildIfCodeUpdated() const
{
    return buildIfCodeUpdated_;
}

void CreateBuildJobRequestBody::setBuildIfCodeUpdated(bool value)
{
    buildIfCodeUpdated_ = value;
    buildIfCodeUpdatedIsSet_ = true;
}

bool CreateBuildJobRequestBody::buildIfCodeUpdatedIsSet() const
{
    return buildIfCodeUpdatedIsSet_;
}

void CreateBuildJobRequestBody::unsetbuildIfCodeUpdated()
{
    buildIfCodeUpdatedIsSet_ = false;
}

std::vector<Trigger>& CreateBuildJobRequestBody::getTriggers()
{
    return triggers_;
}

void CreateBuildJobRequestBody::setTriggers(const std::vector<Trigger>& value)
{
    triggers_ = value;
    triggersIsSet_ = true;
}

bool CreateBuildJobRequestBody::triggersIsSet() const
{
    return triggersIsSet_;
}

void CreateBuildJobRequestBody::unsettriggers()
{
    triggersIsSet_ = false;
}

}
}
}
}
}


