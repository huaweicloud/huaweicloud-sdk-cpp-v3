

#include "huaweicloud/projectman/v4/model/BatchAssociatedIssue.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchAssociatedIssue::BatchAssociatedIssue()
{
    sourceIssueId_ = 0;
    sourceIssueIdIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    issueId_ = 0;
    issueIdIsSet_ = false;
    projectIsSet_ = false;
    userIsSet_ = false;
    statusIsSet_ = false;
}

BatchAssociatedIssue::~BatchAssociatedIssue() = default;

void BatchAssociatedIssue::validate()
{
}

web::json::value BatchAssociatedIssue::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIssueIdIsSet_) {
        val[utility::conversions::to_string_t("source_issue_id")] = ModelBase::toJson(sourceIssueId_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(projectIsSet_) {
        val[utility::conversions::to_string_t("project")] = ModelBase::toJson(project_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool BatchAssociatedIssue::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_issue_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project"));
        if(!fieldValue.is_null())
        {
            SimpleProject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            SimpleUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            StatusVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


int32_t BatchAssociatedIssue::getSourceIssueId() const
{
    return sourceIssueId_;
}

void BatchAssociatedIssue::setSourceIssueId(int32_t value)
{
    sourceIssueId_ = value;
    sourceIssueIdIsSet_ = true;
}

bool BatchAssociatedIssue::sourceIssueIdIsSet() const
{
    return sourceIssueIdIsSet_;
}

void BatchAssociatedIssue::unsetsourceIssueId()
{
    sourceIssueIdIsSet_ = false;
}

std::string BatchAssociatedIssue::getSubject() const
{
    return subject_;
}

void BatchAssociatedIssue::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool BatchAssociatedIssue::subjectIsSet() const
{
    return subjectIsSet_;
}

void BatchAssociatedIssue::unsetsubject()
{
    subjectIsSet_ = false;
}

int32_t BatchAssociatedIssue::getIssueId() const
{
    return issueId_;
}

void BatchAssociatedIssue::setIssueId(int32_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool BatchAssociatedIssue::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void BatchAssociatedIssue::unsetissueId()
{
    issueIdIsSet_ = false;
}

SimpleProject BatchAssociatedIssue::getProject() const
{
    return project_;
}

void BatchAssociatedIssue::setProject(const SimpleProject& value)
{
    project_ = value;
    projectIsSet_ = true;
}

bool BatchAssociatedIssue::projectIsSet() const
{
    return projectIsSet_;
}

void BatchAssociatedIssue::unsetproject()
{
    projectIsSet_ = false;
}

SimpleUser BatchAssociatedIssue::getUser() const
{
    return user_;
}

void BatchAssociatedIssue::setUser(const SimpleUser& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool BatchAssociatedIssue::userIsSet() const
{
    return userIsSet_;
}

void BatchAssociatedIssue::unsetuser()
{
    userIsSet_ = false;
}

StatusVo BatchAssociatedIssue::getStatus() const
{
    return status_;
}

void BatchAssociatedIssue::setStatus(const StatusVo& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchAssociatedIssue::statusIsSet() const
{
    return statusIsSet_;
}

void BatchAssociatedIssue::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


