

#include "huaweicloud/projectman/v4/model/ShowIssueDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIssueDetailRequest::ShowIssueDetailRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    issueType_ = "";
    issueTypeIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

ShowIssueDetailRequest::~ShowIssueDetailRequest() = default;

void ShowIssueDetailRequest::validate()
{
}

web::json::value ShowIssueDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(issueTypeIsSet_) {
        val[utility::conversions::to_string_t("issue_type")] = ModelBase::toJson(issueType_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool ShowIssueDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("issue_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    return ok;
}


std::string ShowIssueDetailRequest::getProjectId() const
{
    return projectId_;
}

void ShowIssueDetailRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowIssueDetailRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowIssueDetailRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowIssueDetailRequest::getIssueId() const
{
    return issueId_;
}

void ShowIssueDetailRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool ShowIssueDetailRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void ShowIssueDetailRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string ShowIssueDetailRequest::getIssueType() const
{
    return issueType_;
}

void ShowIssueDetailRequest::setIssueType(const std::string& value)
{
    issueType_ = value;
    issueTypeIsSet_ = true;
}

bool ShowIssueDetailRequest::issueTypeIsSet() const
{
    return issueTypeIsSet_;
}

void ShowIssueDetailRequest::unsetissueType()
{
    issueTypeIsSet_ = false;
}

std::string ShowIssueDetailRequest::getDomainId() const
{
    return domainId_;
}

void ShowIssueDetailRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowIssueDetailRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowIssueDetailRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


