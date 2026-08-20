

#include "huaweicloud/projectman/v4/model/ListIpdReviewFormsByIssueIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIpdReviewFormsByIssueIdRequest::ListIpdReviewFormsByIssueIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
}

ListIpdReviewFormsByIssueIdRequest::~ListIpdReviewFormsByIssueIdRequest() = default;

void ListIpdReviewFormsByIssueIdRequest::validate()
{
}

web::json::value ListIpdReviewFormsByIssueIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }

    return val;
}
bool ListIpdReviewFormsByIssueIdRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListIpdReviewFormsByIssueIdRequest::getProjectId() const
{
    return projectId_;
}

void ListIpdReviewFormsByIssueIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListIpdReviewFormsByIssueIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListIpdReviewFormsByIssueIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListIpdReviewFormsByIssueIdRequest::getIssueId() const
{
    return issueId_;
}

void ListIpdReviewFormsByIssueIdRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool ListIpdReviewFormsByIssueIdRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void ListIpdReviewFormsByIssueIdRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

}
}
}
}
}


