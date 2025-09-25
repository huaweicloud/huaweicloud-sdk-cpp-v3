

#include "huaweicloud/codeartspipeline/v2/model/StopPipelineRunRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




StopPipelineRunRequest::StopPipelineRunRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineRunId_ = "";
    pipelineRunIdIsSet_ = false;
}

StopPipelineRunRequest::~StopPipelineRunRequest() = default;

void StopPipelineRunRequest::validate()
{
}

web::json::value StopPipelineRunRequest::toJson() const
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
bool StopPipelineRunRequest::fromJson(const web::json::value& val)
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


std::string StopPipelineRunRequest::getProjectId() const
{
    return projectId_;
}

void StopPipelineRunRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool StopPipelineRunRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void StopPipelineRunRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string StopPipelineRunRequest::getPipelineId() const
{
    return pipelineId_;
}

void StopPipelineRunRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool StopPipelineRunRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void StopPipelineRunRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string StopPipelineRunRequest::getPipelineRunId() const
{
    return pipelineRunId_;
}

void StopPipelineRunRequest::setPipelineRunId(const std::string& value)
{
    pipelineRunId_ = value;
    pipelineRunIdIsSet_ = true;
}

bool StopPipelineRunRequest::pipelineRunIdIsSet() const
{
    return pipelineRunIdIsSet_;
}

void StopPipelineRunRequest::unsetpipelineRunId()
{
    pipelineRunIdIsSet_ = false;
}

}
}
}
}
}


