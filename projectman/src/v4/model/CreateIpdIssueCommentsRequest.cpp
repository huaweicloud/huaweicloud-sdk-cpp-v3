

#include "huaweicloud/projectman/v4/model/CreateIpdIssueCommentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateIpdIssueCommentsRequest::CreateIpdIssueCommentsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateIpdIssueCommentsRequest::~CreateIpdIssueCommentsRequest() = default;

void CreateIpdIssueCommentsRequest::validate()
{
}

web::json::value CreateIpdIssueCommentsRequest::toJson() const
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
bool CreateIpdIssueCommentsRequest::fromJson(const web::json::value& val)
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
            CommentCreateVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateIpdIssueCommentsRequest::getProjectId() const
{
    return projectId_;
}

void CreateIpdIssueCommentsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateIpdIssueCommentsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateIpdIssueCommentsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreateIpdIssueCommentsRequest::getIssueId() const
{
    return issueId_;
}

void CreateIpdIssueCommentsRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool CreateIpdIssueCommentsRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void CreateIpdIssueCommentsRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

CommentCreateVO CreateIpdIssueCommentsRequest::getBody() const
{
    return body_;
}

void CreateIpdIssueCommentsRequest::setBody(const CommentCreateVO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateIpdIssueCommentsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateIpdIssueCommentsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


