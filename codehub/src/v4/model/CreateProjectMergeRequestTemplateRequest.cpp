

#include "huaweicloud/codehub/v4/model/CreateProjectMergeRequestTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateProjectMergeRequestTemplateRequest::CreateProjectMergeRequestTemplateRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateProjectMergeRequestTemplateRequest::~CreateProjectMergeRequestTemplateRequest() = default;

void CreateProjectMergeRequestTemplateRequest::validate()
{
}

web::json::value CreateProjectMergeRequestTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateProjectMergeRequestTemplateRequest::fromJson(const web::json::value& val)
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


std::string CreateProjectMergeRequestTemplateRequest::getProjectId() const
{
    return projectId_;
}

void CreateProjectMergeRequestTemplateRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateProjectMergeRequestTemplateRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateProjectMergeRequestTemplateRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CreateMergeRequestTemplateDto CreateProjectMergeRequestTemplateRequest::getBody() const
{
    return body_;
}

void CreateProjectMergeRequestTemplateRequest::setBody(const CreateMergeRequestTemplateDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateProjectMergeRequestTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateProjectMergeRequestTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


