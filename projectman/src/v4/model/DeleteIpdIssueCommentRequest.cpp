

#include "huaweicloud/projectman/v4/model/DeleteIpdIssueCommentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteIpdIssueCommentRequest::DeleteIpdIssueCommentRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    commentId_ = "";
    commentIdIsSet_ = false;
}

DeleteIpdIssueCommentRequest::~DeleteIpdIssueCommentRequest() = default;

void DeleteIpdIssueCommentRequest::validate()
{
}

web::json::value DeleteIpdIssueCommentRequest::toJson() const
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

    return val;
}
bool DeleteIpdIssueCommentRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteIpdIssueCommentRequest::getProjectId() const
{
    return projectId_;
}

void DeleteIpdIssueCommentRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteIpdIssueCommentRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteIpdIssueCommentRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteIpdIssueCommentRequest::getIssueId() const
{
    return issueId_;
}

void DeleteIpdIssueCommentRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool DeleteIpdIssueCommentRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void DeleteIpdIssueCommentRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string DeleteIpdIssueCommentRequest::getCommentId() const
{
    return commentId_;
}

void DeleteIpdIssueCommentRequest::setCommentId(const std::string& value)
{
    commentId_ = value;
    commentIdIsSet_ = true;
}

bool DeleteIpdIssueCommentRequest::commentIdIsSet() const
{
    return commentIdIsSet_;
}

void DeleteIpdIssueCommentRequest::unsetcommentId()
{
    commentIdIsSet_ = false;
}

}
}
}
}
}


