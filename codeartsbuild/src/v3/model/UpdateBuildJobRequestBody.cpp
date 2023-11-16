

#include "huaweicloud/codeartsbuild/v3/model/UpdateBuildJobRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateBuildJobRequestBody::UpdateBuildJobRequestBody()
{
    arch_ = "";
    archIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    autoUpdateSubModule_ = "";
    autoUpdateSubModuleIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    parametersIsSet_ = false;
    scmsIsSet_ = false;
    stepsIsSet_ = false;
    hostType_ = "";
    hostTypeIsSet_ = false;
    buildConfigType_ = "";
    buildConfigTypeIsSet_ = false;
}

UpdateBuildJobRequestBody::~UpdateBuildJobRequestBody() = default;

void UpdateBuildJobRequestBody::validate()
{
}

web::json::value UpdateBuildJobRequestBody::toJson() const
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
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
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

    return val;
}
bool UpdateBuildJobRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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
            std::vector<UpdateBuildJobParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scms"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateBuildJobScm> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScms(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateBuildJobSteps> refVal;
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
    return ok;
}


std::string UpdateBuildJobRequestBody::getArch() const
{
    return arch_;
}

void UpdateBuildJobRequestBody::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool UpdateBuildJobRequestBody::archIsSet() const
{
    return archIsSet_;
}

void UpdateBuildJobRequestBody::unsetarch()
{
    archIsSet_ = false;
}

std::string UpdateBuildJobRequestBody::getProjectId() const
{
    return projectId_;
}

void UpdateBuildJobRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateBuildJobRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateBuildJobRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateBuildJobRequestBody::getJobName() const
{
    return jobName_;
}

void UpdateBuildJobRequestBody::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool UpdateBuildJobRequestBody::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void UpdateBuildJobRequestBody::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string UpdateBuildJobRequestBody::getJobId() const
{
    return jobId_;
}

void UpdateBuildJobRequestBody::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateBuildJobRequestBody::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateBuildJobRequestBody::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UpdateBuildJobRequestBody::getAutoUpdateSubModule() const
{
    return autoUpdateSubModule_;
}

void UpdateBuildJobRequestBody::setAutoUpdateSubModule(const std::string& value)
{
    autoUpdateSubModule_ = value;
    autoUpdateSubModuleIsSet_ = true;
}

bool UpdateBuildJobRequestBody::autoUpdateSubModuleIsSet() const
{
    return autoUpdateSubModuleIsSet_;
}

void UpdateBuildJobRequestBody::unsetautoUpdateSubModule()
{
    autoUpdateSubModuleIsSet_ = false;
}

std::string UpdateBuildJobRequestBody::getFlavor() const
{
    return flavor_;
}

void UpdateBuildJobRequestBody::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool UpdateBuildJobRequestBody::flavorIsSet() const
{
    return flavorIsSet_;
}

void UpdateBuildJobRequestBody::unsetflavor()
{
    flavorIsSet_ = false;
}

std::vector<UpdateBuildJobParameter>& UpdateBuildJobRequestBody::getParameters()
{
    return parameters_;
}

void UpdateBuildJobRequestBody::setParameters(const std::vector<UpdateBuildJobParameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool UpdateBuildJobRequestBody::parametersIsSet() const
{
    return parametersIsSet_;
}

void UpdateBuildJobRequestBody::unsetparameters()
{
    parametersIsSet_ = false;
}

std::vector<UpdateBuildJobScm>& UpdateBuildJobRequestBody::getScms()
{
    return scms_;
}

void UpdateBuildJobRequestBody::setScms(const std::vector<UpdateBuildJobScm>& value)
{
    scms_ = value;
    scmsIsSet_ = true;
}

bool UpdateBuildJobRequestBody::scmsIsSet() const
{
    return scmsIsSet_;
}

void UpdateBuildJobRequestBody::unsetscms()
{
    scmsIsSet_ = false;
}

std::vector<UpdateBuildJobSteps>& UpdateBuildJobRequestBody::getSteps()
{
    return steps_;
}

void UpdateBuildJobRequestBody::setSteps(const std::vector<UpdateBuildJobSteps>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool UpdateBuildJobRequestBody::stepsIsSet() const
{
    return stepsIsSet_;
}

void UpdateBuildJobRequestBody::unsetsteps()
{
    stepsIsSet_ = false;
}

std::string UpdateBuildJobRequestBody::getHostType() const
{
    return hostType_;
}

void UpdateBuildJobRequestBody::setHostType(const std::string& value)
{
    hostType_ = value;
    hostTypeIsSet_ = true;
}

bool UpdateBuildJobRequestBody::hostTypeIsSet() const
{
    return hostTypeIsSet_;
}

void UpdateBuildJobRequestBody::unsethostType()
{
    hostTypeIsSet_ = false;
}

std::string UpdateBuildJobRequestBody::getBuildConfigType() const
{
    return buildConfigType_;
}

void UpdateBuildJobRequestBody::setBuildConfigType(const std::string& value)
{
    buildConfigType_ = value;
    buildConfigTypeIsSet_ = true;
}

bool UpdateBuildJobRequestBody::buildConfigTypeIsSet() const
{
    return buildConfigTypeIsSet_;
}

void UpdateBuildJobRequestBody::unsetbuildConfigType()
{
    buildConfigTypeIsSet_ = false;
}

}
}
}
}
}


