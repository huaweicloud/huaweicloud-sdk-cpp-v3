

#include "huaweicloud/projectman/v4/model/UploadIpdImageInIssueRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UploadIpdImageInIssueRequest::UploadIpdImageInIssueRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    bodyIsSet_ = false;
}

UploadIpdImageInIssueRequest::~UploadIpdImageInIssueRequest() = default;

void UploadIpdImageInIssueRequest::validate()
{
}

web::json::value UploadIpdImageInIssueRequest::toJson() const
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
bool UploadIpdImageInIssueRequest::fromJson(const web::json::value& val)
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
            UploadIpdImageInIssueRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UploadIpdImageInIssueRequest::getProjectId() const
{
    return projectId_;
}

void UploadIpdImageInIssueRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UploadIpdImageInIssueRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UploadIpdImageInIssueRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UploadIpdImageInIssueRequest::getIssueId() const
{
    return issueId_;
}

void UploadIpdImageInIssueRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool UploadIpdImageInIssueRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void UploadIpdImageInIssueRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

UploadIpdImageInIssueRequestBody UploadIpdImageInIssueRequest::getBody() const
{
    return body_;
}

void UploadIpdImageInIssueRequest::setBody(const UploadIpdImageInIssueRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadIpdImageInIssueRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadIpdImageInIssueRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


