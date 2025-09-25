

#include "huaweicloud/codeartspipeline/v2/model/AcceptManualReviewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




AcceptManualReviewRequest::AcceptManualReviewRequest()
{
    jobRunId_ = "";
    jobRunIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineRunId_ = "";
    pipelineRunIdIsSet_ = false;
    stepRunId_ = "";
    stepRunIdIsSet_ = false;
}

AcceptManualReviewRequest::~AcceptManualReviewRequest() = default;

void AcceptManualReviewRequest::validate()
{
}

web::json::value AcceptManualReviewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobRunIdIsSet_) {
        val[utility::conversions::to_string_t("job_run_id")] = ModelBase::toJson(jobRunId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(pipelineRunIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_run_id")] = ModelBase::toJson(pipelineRunId_);
    }
    if(stepRunIdIsSet_) {
        val[utility::conversions::to_string_t("step_run_id")] = ModelBase::toJson(stepRunId_);
    }

    return val;
}
bool AcceptManualReviewRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_run_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_run_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobRunId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("step_run_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_run_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepRunId(refVal);
        }
    }
    return ok;
}


std::string AcceptManualReviewRequest::getJobRunId() const
{
    return jobRunId_;
}

void AcceptManualReviewRequest::setJobRunId(const std::string& value)
{
    jobRunId_ = value;
    jobRunIdIsSet_ = true;
}

bool AcceptManualReviewRequest::jobRunIdIsSet() const
{
    return jobRunIdIsSet_;
}

void AcceptManualReviewRequest::unsetjobRunId()
{
    jobRunIdIsSet_ = false;
}

std::string AcceptManualReviewRequest::getProjectId() const
{
    return projectId_;
}

void AcceptManualReviewRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AcceptManualReviewRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AcceptManualReviewRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AcceptManualReviewRequest::getPipelineId() const
{
    return pipelineId_;
}

void AcceptManualReviewRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool AcceptManualReviewRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void AcceptManualReviewRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string AcceptManualReviewRequest::getPipelineRunId() const
{
    return pipelineRunId_;
}

void AcceptManualReviewRequest::setPipelineRunId(const std::string& value)
{
    pipelineRunId_ = value;
    pipelineRunIdIsSet_ = true;
}

bool AcceptManualReviewRequest::pipelineRunIdIsSet() const
{
    return pipelineRunIdIsSet_;
}

void AcceptManualReviewRequest::unsetpipelineRunId()
{
    pipelineRunIdIsSet_ = false;
}

std::string AcceptManualReviewRequest::getStepRunId() const
{
    return stepRunId_;
}

void AcceptManualReviewRequest::setStepRunId(const std::string& value)
{
    stepRunId_ = value;
    stepRunIdIsSet_ = true;
}

bool AcceptManualReviewRequest::stepRunIdIsSet() const
{
    return stepRunIdIsSet_;
}

void AcceptManualReviewRequest::unsetstepRunId()
{
    stepRunIdIsSet_ = false;
}

}
}
}
}
}


