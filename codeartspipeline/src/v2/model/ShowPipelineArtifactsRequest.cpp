

#include "huaweicloud/codeartspipeline/v2/model/ShowPipelineArtifactsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPipelineArtifactsRequest::ShowPipelineArtifactsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineRunId_ = "";
    pipelineRunIdIsSet_ = false;
}

ShowPipelineArtifactsRequest::~ShowPipelineArtifactsRequest() = default;

void ShowPipelineArtifactsRequest::validate()
{
}

web::json::value ShowPipelineArtifactsRequest::toJson() const
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

    return val;
}
bool ShowPipelineArtifactsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowPipelineArtifactsRequest::getProjectId() const
{
    return projectId_;
}

void ShowPipelineArtifactsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowPipelineArtifactsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowPipelineArtifactsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowPipelineArtifactsRequest::getPipelineId() const
{
    return pipelineId_;
}

void ShowPipelineArtifactsRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool ShowPipelineArtifactsRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void ShowPipelineArtifactsRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string ShowPipelineArtifactsRequest::getPipelineRunId() const
{
    return pipelineRunId_;
}

void ShowPipelineArtifactsRequest::setPipelineRunId(const std::string& value)
{
    pipelineRunId_ = value;
    pipelineRunIdIsSet_ = true;
}

bool ShowPipelineArtifactsRequest::pipelineRunIdIsSet() const
{
    return pipelineRunIdIsSet_;
}

void ShowPipelineArtifactsRequest::unsetpipelineRunId()
{
    pipelineRunIdIsSet_ = false;
}

}
}
}
}
}


