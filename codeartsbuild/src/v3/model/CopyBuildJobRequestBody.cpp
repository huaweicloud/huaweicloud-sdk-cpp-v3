

#include "huaweicloud/codeartsbuild/v3/model/CopyBuildJobRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CopyBuildJobRequestBody::CopyBuildJobRequestBody()
{
    arch_ = "";
    archIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    copyJobId_ = "";
    copyJobIdIsSet_ = false;
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
    triggersIsSet_ = false;
}

CopyBuildJobRequestBody::~CopyBuildJobRequestBody() = default;

void CopyBuildJobRequestBody::validate()
{
}

web::json::value CopyBuildJobRequestBody::toJson() const
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
    if(copyJobIdIsSet_) {
        val[utility::conversions::to_string_t("copy_job_id")] = ModelBase::toJson(copyJobId_);
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
    if(triggersIsSet_) {
        val[utility::conversions::to_string_t("triggers")] = ModelBase::toJson(triggers_);
    }

    return val;
}
bool CopyBuildJobRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("copy_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("copy_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCopyJobId(refVal);
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


std::string CopyBuildJobRequestBody::getArch() const
{
    return arch_;
}

void CopyBuildJobRequestBody::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool CopyBuildJobRequestBody::archIsSet() const
{
    return archIsSet_;
}

void CopyBuildJobRequestBody::unsetarch()
{
    archIsSet_ = false;
}

std::string CopyBuildJobRequestBody::getProjectId() const
{
    return projectId_;
}

void CopyBuildJobRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CopyBuildJobRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CopyBuildJobRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CopyBuildJobRequestBody::getJobName() const
{
    return jobName_;
}

void CopyBuildJobRequestBody::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool CopyBuildJobRequestBody::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void CopyBuildJobRequestBody::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string CopyBuildJobRequestBody::getCopyJobId() const
{
    return copyJobId_;
}

void CopyBuildJobRequestBody::setCopyJobId(const std::string& value)
{
    copyJobId_ = value;
    copyJobIdIsSet_ = true;
}

bool CopyBuildJobRequestBody::copyJobIdIsSet() const
{
    return copyJobIdIsSet_;
}

void CopyBuildJobRequestBody::unsetcopyJobId()
{
    copyJobIdIsSet_ = false;
}

std::string CopyBuildJobRequestBody::getAutoUpdateSubModule() const
{
    return autoUpdateSubModule_;
}

void CopyBuildJobRequestBody::setAutoUpdateSubModule(const std::string& value)
{
    autoUpdateSubModule_ = value;
    autoUpdateSubModuleIsSet_ = true;
}

bool CopyBuildJobRequestBody::autoUpdateSubModuleIsSet() const
{
    return autoUpdateSubModuleIsSet_;
}

void CopyBuildJobRequestBody::unsetautoUpdateSubModule()
{
    autoUpdateSubModuleIsSet_ = false;
}

std::string CopyBuildJobRequestBody::getFlavor() const
{
    return flavor_;
}

void CopyBuildJobRequestBody::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool CopyBuildJobRequestBody::flavorIsSet() const
{
    return flavorIsSet_;
}

void CopyBuildJobRequestBody::unsetflavor()
{
    flavorIsSet_ = false;
}

std::vector<CreateBuildJobParameter>& CopyBuildJobRequestBody::getParameters()
{
    return parameters_;
}

void CopyBuildJobRequestBody::setParameters(const std::vector<CreateBuildJobParameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool CopyBuildJobRequestBody::parametersIsSet() const
{
    return parametersIsSet_;
}

void CopyBuildJobRequestBody::unsetparameters()
{
    parametersIsSet_ = false;
}

std::vector<CreateBuildJobScm>& CopyBuildJobRequestBody::getScms()
{
    return scms_;
}

void CopyBuildJobRequestBody::setScms(const std::vector<CreateBuildJobScm>& value)
{
    scms_ = value;
    scmsIsSet_ = true;
}

bool CopyBuildJobRequestBody::scmsIsSet() const
{
    return scmsIsSet_;
}

void CopyBuildJobRequestBody::unsetscms()
{
    scmsIsSet_ = false;
}

std::vector<CreateBuildJobSteps>& CopyBuildJobRequestBody::getSteps()
{
    return steps_;
}

void CopyBuildJobRequestBody::setSteps(const std::vector<CreateBuildJobSteps>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool CopyBuildJobRequestBody::stepsIsSet() const
{
    return stepsIsSet_;
}

void CopyBuildJobRequestBody::unsetsteps()
{
    stepsIsSet_ = false;
}

std::string CopyBuildJobRequestBody::getHostType() const
{
    return hostType_;
}

void CopyBuildJobRequestBody::setHostType(const std::string& value)
{
    hostType_ = value;
    hostTypeIsSet_ = true;
}

bool CopyBuildJobRequestBody::hostTypeIsSet() const
{
    return hostTypeIsSet_;
}

void CopyBuildJobRequestBody::unsethostType()
{
    hostTypeIsSet_ = false;
}

std::string CopyBuildJobRequestBody::getBuildConfigType() const
{
    return buildConfigType_;
}

void CopyBuildJobRequestBody::setBuildConfigType(const std::string& value)
{
    buildConfigType_ = value;
    buildConfigTypeIsSet_ = true;
}

bool CopyBuildJobRequestBody::buildConfigTypeIsSet() const
{
    return buildConfigTypeIsSet_;
}

void CopyBuildJobRequestBody::unsetbuildConfigType()
{
    buildConfigTypeIsSet_ = false;
}

std::vector<Trigger>& CopyBuildJobRequestBody::getTriggers()
{
    return triggers_;
}

void CopyBuildJobRequestBody::setTriggers(const std::vector<Trigger>& value)
{
    triggers_ = value;
    triggersIsSet_ = true;
}

bool CopyBuildJobRequestBody::triggersIsSet() const
{
    return triggersIsSet_;
}

void CopyBuildJobRequestBody::unsettriggers()
{
    triggersIsSet_ = false;
}

}
}
}
}
}


