

#include "huaweicloud/projectman/v4/model/AssociateIssuesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AssociateIssuesRequest::AssociateIssuesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    dstDomainId_ = "";
    dstDomainIdIsSet_ = false;
    bodyIsSet_ = false;
}

AssociateIssuesRequest::~AssociateIssuesRequest() = default;

void AssociateIssuesRequest::validate()
{
}

web::json::value AssociateIssuesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(dstDomainIdIsSet_) {
        val[utility::conversions::to_string_t("dst_domain_id")] = ModelBase::toJson(dstDomainId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AssociateIssuesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("dst_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IssueAssociateVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AssociateIssuesRequest::getProjectId() const
{
    return projectId_;
}

void AssociateIssuesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AssociateIssuesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AssociateIssuesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AssociateIssuesRequest::getIssueId() const
{
    return issueId_;
}

void AssociateIssuesRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool AssociateIssuesRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void AssociateIssuesRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string AssociateIssuesRequest::getDstDomainId() const
{
    return dstDomainId_;
}

void AssociateIssuesRequest::setDstDomainId(const std::string& value)
{
    dstDomainId_ = value;
    dstDomainIdIsSet_ = true;
}

bool AssociateIssuesRequest::dstDomainIdIsSet() const
{
    return dstDomainIdIsSet_;
}

void AssociateIssuesRequest::unsetdstDomainId()
{
    dstDomainIdIsSet_ = false;
}

IssueAssociateVO AssociateIssuesRequest::getBody() const
{
    return body_;
}

void AssociateIssuesRequest::setBody(const IssueAssociateVO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateIssuesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateIssuesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


