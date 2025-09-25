

#include "huaweicloud/codeartspipeline/v2/model/ShowPipelineLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPipelineLogRequest::ShowPipelineLogRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineRunId_ = "";
    pipelineRunIdIsSet_ = false;
    jobRunId_ = "";
    jobRunIdIsSet_ = false;
    stepRunId_ = "";
    stepRunIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowPipelineLogRequest::~ShowPipelineLogRequest() = default;

void ShowPipelineLogRequest::validate()
{
}

web::json::value ShowPipelineLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(pipelineRunIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_run_id")] = ModelBase::toJson(pipelineRunId_);
    }
    if(jobRunIdIsSet_) {
        val[utility::conversions::to_string_t("job_run_id")] = ModelBase::toJson(jobRunId_);
    }
    if(stepRunIdIsSet_) {
        val[utility::conversions::to_string_t("step_run_id")] = ModelBase::toJson(stepRunId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowPipelineLogRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline_run_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_run_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineRunId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_run_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_run_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobRunId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_run_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_run_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepRunId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            LogQuery refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowPipelineLogRequest::getProjectId() const
{
    return projectId_;
}

void ShowPipelineLogRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowPipelineLogRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowPipelineLogRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowPipelineLogRequest::getPipelineId() const
{
    return pipelineId_;
}

void ShowPipelineLogRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool ShowPipelineLogRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void ShowPipelineLogRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string ShowPipelineLogRequest::getPipelineRunId() const
{
    return pipelineRunId_;
}

void ShowPipelineLogRequest::setPipelineRunId(const std::string& value)
{
    pipelineRunId_ = value;
    pipelineRunIdIsSet_ = true;
}

bool ShowPipelineLogRequest::pipelineRunIdIsSet() const
{
    return pipelineRunIdIsSet_;
}

void ShowPipelineLogRequest::unsetpipelineRunId()
{
    pipelineRunIdIsSet_ = false;
}

std::string ShowPipelineLogRequest::getJobRunId() const
{
    return jobRunId_;
}

void ShowPipelineLogRequest::setJobRunId(const std::string& value)
{
    jobRunId_ = value;
    jobRunIdIsSet_ = true;
}

bool ShowPipelineLogRequest::jobRunIdIsSet() const
{
    return jobRunIdIsSet_;
}

void ShowPipelineLogRequest::unsetjobRunId()
{
    jobRunIdIsSet_ = false;
}

std::string ShowPipelineLogRequest::getStepRunId() const
{
    return stepRunId_;
}

void ShowPipelineLogRequest::setStepRunId(const std::string& value)
{
    stepRunId_ = value;
    stepRunIdIsSet_ = true;
}

bool ShowPipelineLogRequest::stepRunIdIsSet() const
{
    return stepRunIdIsSet_;
}

void ShowPipelineLogRequest::unsetstepRunId()
{
    stepRunIdIsSet_ = false;
}

LogQuery ShowPipelineLogRequest::getBody() const
{
    return body_;
}

void ShowPipelineLogRequest::setBody(const LogQuery& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowPipelineLogRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowPipelineLogRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


