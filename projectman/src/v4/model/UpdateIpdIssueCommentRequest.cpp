

#include "huaweicloud/projectman/v4/model/UpdateIpdIssueCommentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateIpdIssueCommentRequest::UpdateIpdIssueCommentRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    commentId_ = "";
    commentIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateIpdIssueCommentRequest::~UpdateIpdIssueCommentRequest() = default;

void UpdateIpdIssueCommentRequest::validate()
{
}

web::json::value UpdateIpdIssueCommentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(commentIdIsSet_) {
        val[utility::conversions::to_string_t("comment_id")] = ModelBase::toJson(commentId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateIpdIssueCommentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("comment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CommentUpdateVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateIpdIssueCommentRequest::getProjectId() const
{
    return projectId_;
}

void UpdateIpdIssueCommentRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateIpdIssueCommentRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateIpdIssueCommentRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateIpdIssueCommentRequest::getIssueId() const
{
    return issueId_;
}

void UpdateIpdIssueCommentRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool UpdateIpdIssueCommentRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void UpdateIpdIssueCommentRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string UpdateIpdIssueCommentRequest::getCommentId() const
{
    return commentId_;
}

void UpdateIpdIssueCommentRequest::setCommentId(const std::string& value)
{
    commentId_ = value;
    commentIdIsSet_ = true;
}

bool UpdateIpdIssueCommentRequest::commentIdIsSet() const
{
    return commentIdIsSet_;
}

void UpdateIpdIssueCommentRequest::unsetcommentId()
{
    commentIdIsSet_ = false;
}

CommentUpdateVO UpdateIpdIssueCommentRequest::getBody() const
{
    return body_;
}

void UpdateIpdIssueCommentRequest::setBody(const CommentUpdateVO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateIpdIssueCommentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateIpdIssueCommentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


