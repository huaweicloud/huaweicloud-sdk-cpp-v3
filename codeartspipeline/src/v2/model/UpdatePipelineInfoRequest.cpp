

#include "huaweicloud/codeartspipeline/v2/model/UpdatePipelineInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdatePipelineInfoRequest::UpdatePipelineInfoRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePipelineInfoRequest::~UpdatePipelineInfoRequest() = default;

void UpdatePipelineInfoRequest::validate()
{
}

web::json::value UpdatePipelineInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("componentId")] = ModelBase::toJson(componentId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdatePipelineInfoRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("componentId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("componentId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PipelineDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePipelineInfoRequest::getProjectId() const
{
    return projectId_;
}

void UpdatePipelineInfoRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdatePipelineInfoRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdatePipelineInfoRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdatePipelineInfoRequest::getPipelineId() const
{
    return pipelineId_;
}

void UpdatePipelineInfoRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool UpdatePipelineInfoRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void UpdatePipelineInfoRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string UpdatePipelineInfoRequest::getComponentId() const
{
    return componentId_;
}

void UpdatePipelineInfoRequest::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool UpdatePipelineInfoRequest::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void UpdatePipelineInfoRequest::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

PipelineDTO UpdatePipelineInfoRequest::getBody() const
{
    return body_;
}

void UpdatePipelineInfoRequest::setBody(const PipelineDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePipelineInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePipelineInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


