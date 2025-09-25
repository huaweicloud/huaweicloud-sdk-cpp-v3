

#include "huaweicloud/codeartspipeline/v2/model/RetryPipelineRunRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RetryPipelineRunRequest::RetryPipelineRunRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineRunId_ = "";
    pipelineRunIdIsSet_ = false;
}

RetryPipelineRunRequest::~RetryPipelineRunRequest() = default;

void RetryPipelineRunRequest::validate()
{
}

web::json::value RetryPipelineRunRequest::toJson() const
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
bool RetryPipelineRunRequest::fromJson(const web::json::value& val)
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


std::string RetryPipelineRunRequest::getProjectId() const
{
    return projectId_;
}

void RetryPipelineRunRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RetryPipelineRunRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RetryPipelineRunRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string RetryPipelineRunRequest::getPipelineId() const
{
    return pipelineId_;
}

void RetryPipelineRunRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool RetryPipelineRunRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void RetryPipelineRunRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string RetryPipelineRunRequest::getPipelineRunId() const
{
    return pipelineRunId_;
}

void RetryPipelineRunRequest::setPipelineRunId(const std::string& value)
{
    pipelineRunId_ = value;
    pipelineRunIdIsSet_ = true;
}

bool RetryPipelineRunRequest::pipelineRunIdIsSet() const
{
    return pipelineRunIdIsSet_;
}

void RetryPipelineRunRequest::unsetpipelineRunId()
{
    pipelineRunIdIsSet_ = false;
}

}
}
}
}
}


