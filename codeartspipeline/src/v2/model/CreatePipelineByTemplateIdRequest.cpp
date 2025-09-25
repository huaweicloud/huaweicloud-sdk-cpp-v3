

#include "huaweicloud/codeartspipeline/v2/model/CreatePipelineByTemplateIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreatePipelineByTemplateIdRequest::CreatePipelineByTemplateIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePipelineByTemplateIdRequest::~CreatePipelineByTemplateIdRequest() = default;

void CreatePipelineByTemplateIdRequest::validate()
{
}

web::json::value CreatePipelineByTemplateIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreatePipelineByTemplateIdRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
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
            PipelineByTemplateDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePipelineByTemplateIdRequest::getProjectId() const
{
    return projectId_;
}

void CreatePipelineByTemplateIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreatePipelineByTemplateIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreatePipelineByTemplateIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreatePipelineByTemplateIdRequest::getTemplateId() const
{
    return templateId_;
}

void CreatePipelineByTemplateIdRequest::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool CreatePipelineByTemplateIdRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void CreatePipelineByTemplateIdRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string CreatePipelineByTemplateIdRequest::getComponentId() const
{
    return componentId_;
}

void CreatePipelineByTemplateIdRequest::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool CreatePipelineByTemplateIdRequest::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void CreatePipelineByTemplateIdRequest::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

PipelineByTemplateDTO CreatePipelineByTemplateIdRequest::getBody() const
{
    return body_;
}

void CreatePipelineByTemplateIdRequest::setBody(const PipelineByTemplateDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePipelineByTemplateIdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePipelineByTemplateIdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


