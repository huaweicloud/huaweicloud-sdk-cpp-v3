

#include "huaweicloud/codeartspipeline/v2/model/AcceptCheckpointRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




AcceptCheckpointRequest::AcceptCheckpointRequest()
{
    stepRunId_ = "";
    stepRunIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineRunId_ = "";
    pipelineRunIdIsSet_ = false;
}

AcceptCheckpointRequest::~AcceptCheckpointRequest() = default;

void AcceptCheckpointRequest::validate()
{
}

web::json::value AcceptCheckpointRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool AcceptCheckpointRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string AcceptCheckpointRequest::getStepRunId() const
{
    return stepRunId_;
}

void AcceptCheckpointRequest::setStepRunId(const std::string& value)
{
    stepRunId_ = value;
    stepRunIdIsSet_ = true;
}

bool AcceptCheckpointRequest::stepRunIdIsSet() const
{
    return stepRunIdIsSet_;
}

void AcceptCheckpointRequest::unsetstepRunId()
{
    stepRunIdIsSet_ = false;
}

std::string AcceptCheckpointRequest::getProjectId() const
{
    return projectId_;
}

void AcceptCheckpointRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AcceptCheckpointRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AcceptCheckpointRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AcceptCheckpointRequest::getPipelineId() const
{
    return pipelineId_;
}

void AcceptCheckpointRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool AcceptCheckpointRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void AcceptCheckpointRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string AcceptCheckpointRequest::getPipelineRunId() const
{
    return pipelineRunId_;
}

void AcceptCheckpointRequest::setPipelineRunId(const std::string& value)
{
    pipelineRunId_ = value;
    pipelineRunIdIsSet_ = true;
}

bool AcceptCheckpointRequest::pipelineRunIdIsSet() const
{
    return pipelineRunIdIsSet_;
}

void AcceptCheckpointRequest::unsetpipelineRunId()
{
    pipelineRunIdIsSet_ = false;
}

}
}
}
}
}


