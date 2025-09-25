

#include "huaweicloud/codeartspipeline/v2/model/RejectManualReviewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RejectManualReviewRequest::RejectManualReviewRequest()
{
    jobRunId_ = "";
    jobRunIdIsSet_ = false;
    stepRunId_ = "";
    stepRunIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineRunId_ = "";
    pipelineRunIdIsSet_ = false;
}

RejectManualReviewRequest::~RejectManualReviewRequest() = default;

void RejectManualReviewRequest::validate()
{
}

web::json::value RejectManualReviewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobRunIdIsSet_) {
        val[utility::conversions::to_string_t("job_run_id")] = ModelBase::toJson(jobRunId_);
    }
    if(stepRunIdIsSet_) {
        val[utility::conversions::to_string_t("step_run_id")] = ModelBase::toJson(stepRunId_);
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

    return val;
}
bool RejectManualReviewRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("step_run_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_run_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepRunId(refVal);
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
    return ok;
}


std::string RejectManualReviewRequest::getJobRunId() const
{
    return jobRunId_;
}

void RejectManualReviewRequest::setJobRunId(const std::string& value)
{
    jobRunId_ = value;
    jobRunIdIsSet_ = true;
}

bool RejectManualReviewRequest::jobRunIdIsSet() const
{
    return jobRunIdIsSet_;
}

void RejectManualReviewRequest::unsetjobRunId()
{
    jobRunIdIsSet_ = false;
}

std::string RejectManualReviewRequest::getStepRunId() const
{
    return stepRunId_;
}

void RejectManualReviewRequest::setStepRunId(const std::string& value)
{
    stepRunId_ = value;
    stepRunIdIsSet_ = true;
}

bool RejectManualReviewRequest::stepRunIdIsSet() const
{
    return stepRunIdIsSet_;
}

void RejectManualReviewRequest::unsetstepRunId()
{
    stepRunIdIsSet_ = false;
}

std::string RejectManualReviewRequest::getProjectId() const
{
    return projectId_;
}

void RejectManualReviewRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RejectManualReviewRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RejectManualReviewRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string RejectManualReviewRequest::getPipelineId() const
{
    return pipelineId_;
}

void RejectManualReviewRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool RejectManualReviewRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void RejectManualReviewRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string RejectManualReviewRequest::getPipelineRunId() const
{
    return pipelineRunId_;
}

void RejectManualReviewRequest::setPipelineRunId(const std::string& value)
{
    pipelineRunId_ = value;
    pipelineRunIdIsSet_ = true;
}

bool RejectManualReviewRequest::pipelineRunIdIsSet() const
{
    return pipelineRunIdIsSet_;
}

void RejectManualReviewRequest::unsetpipelineRunId()
{
    pipelineRunIdIsSet_ = false;
}

}
}
}
}
}


