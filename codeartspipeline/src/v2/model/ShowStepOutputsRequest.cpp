

#include "huaweicloud/codeartspipeline/v2/model/ShowStepOutputsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowStepOutputsRequest::ShowStepOutputsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineRunId_ = "";
    pipelineRunIdIsSet_ = false;
    stepRunIds_ = "";
    stepRunIdsIsSet_ = false;
}

ShowStepOutputsRequest::~ShowStepOutputsRequest() = default;

void ShowStepOutputsRequest::validate()
{
}

web::json::value ShowStepOutputsRequest::toJson() const
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
    if(stepRunIdsIsSet_) {
        val[utility::conversions::to_string_t("step_run_ids")] = ModelBase::toJson(stepRunIds_);
    }

    return val;
}
bool ShowStepOutputsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("step_run_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_run_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepRunIds(refVal);
        }
    }
    return ok;
}


std::string ShowStepOutputsRequest::getProjectId() const
{
    return projectId_;
}

void ShowStepOutputsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowStepOutputsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowStepOutputsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowStepOutputsRequest::getPipelineId() const
{
    return pipelineId_;
}

void ShowStepOutputsRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool ShowStepOutputsRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void ShowStepOutputsRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string ShowStepOutputsRequest::getPipelineRunId() const
{
    return pipelineRunId_;
}

void ShowStepOutputsRequest::setPipelineRunId(const std::string& value)
{
    pipelineRunId_ = value;
    pipelineRunIdIsSet_ = true;
}

bool ShowStepOutputsRequest::pipelineRunIdIsSet() const
{
    return pipelineRunIdIsSet_;
}

void ShowStepOutputsRequest::unsetpipelineRunId()
{
    pipelineRunIdIsSet_ = false;
}

std::string ShowStepOutputsRequest::getStepRunIds() const
{
    return stepRunIds_;
}

void ShowStepOutputsRequest::setStepRunIds(const std::string& value)
{
    stepRunIds_ = value;
    stepRunIdsIsSet_ = true;
}

bool ShowStepOutputsRequest::stepRunIdsIsSet() const
{
    return stepRunIdsIsSet_;
}

void ShowStepOutputsRequest::unsetstepRunIds()
{
    stepRunIdsIsSet_ = false;
}

}
}
}
}
}


