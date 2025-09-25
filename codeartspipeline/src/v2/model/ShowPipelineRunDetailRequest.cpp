

#include "huaweicloud/codeartspipeline/v2/model/ShowPipelineRunDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPipelineRunDetailRequest::ShowPipelineRunDetailRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineRunId_ = "";
    pipelineRunIdIsSet_ = false;
}

ShowPipelineRunDetailRequest::~ShowPipelineRunDetailRequest() = default;

void ShowPipelineRunDetailRequest::validate()
{
}

web::json::value ShowPipelineRunDetailRequest::toJson() const
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
bool ShowPipelineRunDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowPipelineRunDetailRequest::getProjectId() const
{
    return projectId_;
}

void ShowPipelineRunDetailRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowPipelineRunDetailRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowPipelineRunDetailRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowPipelineRunDetailRequest::getPipelineId() const
{
    return pipelineId_;
}

void ShowPipelineRunDetailRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool ShowPipelineRunDetailRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void ShowPipelineRunDetailRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string ShowPipelineRunDetailRequest::getPipelineRunId() const
{
    return pipelineRunId_;
}

void ShowPipelineRunDetailRequest::setPipelineRunId(const std::string& value)
{
    pipelineRunId_ = value;
    pipelineRunIdIsSet_ = true;
}

bool ShowPipelineRunDetailRequest::pipelineRunIdIsSet() const
{
    return pipelineRunIdIsSet_;
}

void ShowPipelineRunDetailRequest::unsetpipelineRunId()
{
    pipelineRunIdIsSet_ = false;
}

}
}
}
}
}


