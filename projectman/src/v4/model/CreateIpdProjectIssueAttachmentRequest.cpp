

#include "huaweicloud/projectman/v4/model/CreateIpdProjectIssueAttachmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateIpdProjectIssueAttachmentRequest::CreateIpdProjectIssueAttachmentRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateIpdProjectIssueAttachmentRequest::~CreateIpdProjectIssueAttachmentRequest() = default;

void CreateIpdProjectIssueAttachmentRequest::validate()
{
}

web::json::value CreateIpdProjectIssueAttachmentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateIpdProjectIssueAttachmentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateIpdProjectIssueAttachmentRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateIpdProjectIssueAttachmentRequest::getProjectId() const
{
    return projectId_;
}

void CreateIpdProjectIssueAttachmentRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateIpdProjectIssueAttachmentRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateIpdProjectIssueAttachmentRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreateIpdProjectIssueAttachmentRequest::getIssueId() const
{
    return issueId_;
}

void CreateIpdProjectIssueAttachmentRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool CreateIpdProjectIssueAttachmentRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void CreateIpdProjectIssueAttachmentRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

CreateIpdProjectIssueAttachmentRequestBody CreateIpdProjectIssueAttachmentRequest::getBody() const
{
    return body_;
}

void CreateIpdProjectIssueAttachmentRequest::setBody(const CreateIpdProjectIssueAttachmentRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateIpdProjectIssueAttachmentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateIpdProjectIssueAttachmentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


