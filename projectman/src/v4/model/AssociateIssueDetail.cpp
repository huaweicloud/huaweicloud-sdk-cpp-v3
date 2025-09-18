

#include "huaweicloud/projectman/v4/model/AssociateIssueDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AssociateIssueDetail::AssociateIssueDetail()
{
    subject_ = "";
    subjectIsSet_ = false;
    issueId_ = 0;
    issueIdIsSet_ = false;
    projectIsSet_ = false;
    userIsSet_ = false;
    statusIsSet_ = false;
}

AssociateIssueDetail::~AssociateIssueDetail() = default;

void AssociateIssueDetail::validate()
{
}

web::json::value AssociateIssueDetail::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool AssociateIssueDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string AssociateIssueDetail::getSubject() const
{
    return subject_;
}

void AssociateIssueDetail::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool AssociateIssueDetail::subjectIsSet() const
{
    return subjectIsSet_;
}

void AssociateIssueDetail::unsetsubject()
{
    subjectIsSet_ = false;
}

int32_t AssociateIssueDetail::getIssueId() const
{
    return issueId_;
}

void AssociateIssueDetail::setIssueId(int32_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool AssociateIssueDetail::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void AssociateIssueDetail::unsetissueId()
{
    issueIdIsSet_ = false;
}

SimpleProject AssociateIssueDetail::getProject() const
{
    return project_;
}

void AssociateIssueDetail::setProject(const SimpleProject& value)
{
    project_ = value;
    projectIsSet_ = true;
}

bool AssociateIssueDetail::projectIsSet() const
{
    return projectIsSet_;
}

void AssociateIssueDetail::unsetproject()
{
    projectIsSet_ = false;
}

SimpleUser AssociateIssueDetail::getUser() const
{
    return user_;
}

void AssociateIssueDetail::setUser(const SimpleUser& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool AssociateIssueDetail::userIsSet() const
{
    return userIsSet_;
}

void AssociateIssueDetail::unsetuser()
{
    userIsSet_ = false;
}

StatusVo AssociateIssueDetail::getStatus() const
{
    return status_;
}

void AssociateIssueDetail::setStatus(const StatusVo& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AssociateIssueDetail::statusIsSet() const
{
    return statusIsSet_;
}

void AssociateIssueDetail::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


