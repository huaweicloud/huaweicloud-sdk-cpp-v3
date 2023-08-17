

#include "huaweicloud/codeartsbuild/v3/model/ShowHistoryDetailsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowHistoryDetailsResponse::ShowHistoryDetailsResponse()
{
    jobName_ = "";
    jobNameIsSet_ = false;
    buildNumber_ = 0;
    buildNumberIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    parametersIsSet_ = false;
    buildStepsIsSet_ = false;
}

ShowHistoryDetailsResponse::~ShowHistoryDetailsResponse() = default;

void ShowHistoryDetailsResponse::validate()
{
}

web::json::value ShowHistoryDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(buildNumberIsSet_) {
        val[utility::conversions::to_string_t("build_number")] = ModelBase::toJson(buildNumber_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(buildStepsIsSet_) {
        val[utility::conversions::to_string_t("build_steps")] = ModelBase::toJson(buildSteps_);
    }

    return val;
}

bool ShowHistoryDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("build_steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_steps"));
        if(!fieldValue.is_null())
        {
            std::vector<BuildStep> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildSteps(refVal);
        }
    }
    return ok;
}

std::string ShowHistoryDetailsResponse::getJobName() const
{
    return jobName_;
}

void ShowHistoryDetailsResponse::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool ShowHistoryDetailsResponse::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void ShowHistoryDetailsResponse::unsetjobName()
{
    jobNameIsSet_ = false;
}

int32_t ShowHistoryDetailsResponse::getBuildNumber() const
{
    return buildNumber_;
}

void ShowHistoryDetailsResponse::setBuildNumber(int32_t value)
{
    buildNumber_ = value;
    buildNumberIsSet_ = true;
}

bool ShowHistoryDetailsResponse::buildNumberIsSet() const
{
    return buildNumberIsSet_;
}

void ShowHistoryDetailsResponse::unsetbuildNumber()
{
    buildNumberIsSet_ = false;
}

std::string ShowHistoryDetailsResponse::getProjectId() const
{
    return projectId_;
}

void ShowHistoryDetailsResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowHistoryDetailsResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowHistoryDetailsResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowHistoryDetailsResponse::getProjectName() const
{
    return projectName_;
}

void ShowHistoryDetailsResponse::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ShowHistoryDetailsResponse::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ShowHistoryDetailsResponse::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::map<std::string, std::string>& ShowHistoryDetailsResponse::getParameters()
{
    return parameters_;
}

void ShowHistoryDetailsResponse::setParameters(const std::map<std::string, std::string>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool ShowHistoryDetailsResponse::parametersIsSet() const
{
    return parametersIsSet_;
}

void ShowHistoryDetailsResponse::unsetparameters()
{
    parametersIsSet_ = false;
}

std::vector<BuildStep>& ShowHistoryDetailsResponse::getBuildSteps()
{
    return buildSteps_;
}

void ShowHistoryDetailsResponse::setBuildSteps(const std::vector<BuildStep>& value)
{
    buildSteps_ = value;
    buildStepsIsSet_ = true;
}

bool ShowHistoryDetailsResponse::buildStepsIsSet() const
{
    return buildStepsIsSet_;
}

void ShowHistoryDetailsResponse::unsetbuildSteps()
{
    buildStepsIsSet_ = false;
}

}
}
}
}
}


