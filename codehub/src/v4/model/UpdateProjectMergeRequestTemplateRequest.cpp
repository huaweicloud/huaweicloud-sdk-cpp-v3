

#include "huaweicloud/codehub/v4/model/UpdateProjectMergeRequestTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateProjectMergeRequestTemplateRequest::UpdateProjectMergeRequestTemplateRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    templateId_ = 0;
    templateIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProjectMergeRequestTemplateRequest::~UpdateProjectMergeRequestTemplateRequest() = default;

void UpdateProjectMergeRequestTemplateRequest::validate()
{
}

web::json::value UpdateProjectMergeRequestTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateProjectMergeRequestTemplateRequest::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateMergeRequestTemplateDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProjectMergeRequestTemplateRequest::getProjectId() const
{
    return projectId_;
}

void UpdateProjectMergeRequestTemplateRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateProjectMergeRequestTemplateRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateProjectMergeRequestTemplateRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t UpdateProjectMergeRequestTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void UpdateProjectMergeRequestTemplateRequest::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool UpdateProjectMergeRequestTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void UpdateProjectMergeRequestTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

CreateMergeRequestTemplateDto UpdateProjectMergeRequestTemplateRequest::getBody() const
{
    return body_;
}

void UpdateProjectMergeRequestTemplateRequest::setBody(const CreateMergeRequestTemplateDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProjectMergeRequestTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProjectMergeRequestTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


