

#include "huaweicloud/codeartspipeline/v2/model/CreatePipelineNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreatePipelineNewRequest::CreatePipelineNewRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePipelineNewRequest::~CreatePipelineNewRequest() = default;

void CreatePipelineNewRequest::validate()
{
}

web::json::value CreatePipelineNewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreatePipelineNewRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("component_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_id"));
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


std::string CreatePipelineNewRequest::getProjectId() const
{
    return projectId_;
}

void CreatePipelineNewRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreatePipelineNewRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreatePipelineNewRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreatePipelineNewRequest::getComponentId() const
{
    return componentId_;
}

void CreatePipelineNewRequest::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool CreatePipelineNewRequest::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void CreatePipelineNewRequest::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

PipelineDTO CreatePipelineNewRequest::getBody() const
{
    return body_;
}

void CreatePipelineNewRequest::setBody(const PipelineDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePipelineNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePipelineNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


