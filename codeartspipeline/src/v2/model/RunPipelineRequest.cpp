

#include "huaweicloud/codeartspipeline/v2/model/RunPipelineRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RunPipelineRequest::RunPipelineRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    bodyIsSet_ = false;
}

RunPipelineRequest::~RunPipelineRequest() = default;

void RunPipelineRequest::validate()
{
}

web::json::value RunPipelineRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RunPipelineRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RunPipelineDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RunPipelineRequest::getProjectId() const
{
    return projectId_;
}

void RunPipelineRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RunPipelineRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RunPipelineRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string RunPipelineRequest::getPipelineId() const
{
    return pipelineId_;
}

void RunPipelineRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool RunPipelineRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void RunPipelineRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

RunPipelineDTO RunPipelineRequest::getBody() const
{
    return body_;
}

void RunPipelineRequest::setBody(const RunPipelineDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RunPipelineRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RunPipelineRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


