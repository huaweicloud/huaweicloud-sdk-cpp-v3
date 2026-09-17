

#include "huaweicloud/projectman/v4/model/ShowTenantIssueListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowTenantIssueListRequest::ShowTenantIssueListRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueType_ = "";
    issueTypeIsSet_ = false;
    bodyIsSet_ = false;
}

ShowTenantIssueListRequest::~ShowTenantIssueListRequest() = default;

void ShowTenantIssueListRequest::validate()
{
}

web::json::value ShowTenantIssueListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueTypeIsSet_) {
        val[utility::conversions::to_string_t("issue_type")] = ModelBase::toJson(issueType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowTenantIssueListRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("issue_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            QueryVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowTenantIssueListRequest::getProjectId() const
{
    return projectId_;
}

void ShowTenantIssueListRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTenantIssueListRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTenantIssueListRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowTenantIssueListRequest::getIssueType() const
{
    return issueType_;
}

void ShowTenantIssueListRequest::setIssueType(const std::string& value)
{
    issueType_ = value;
    issueTypeIsSet_ = true;
}

bool ShowTenantIssueListRequest::issueTypeIsSet() const
{
    return issueTypeIsSet_;
}

void ShowTenantIssueListRequest::unsetissueType()
{
    issueTypeIsSet_ = false;
}

QueryVO ShowTenantIssueListRequest::getBody() const
{
    return body_;
}

void ShowTenantIssueListRequest::setBody(const QueryVO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowTenantIssueListRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowTenantIssueListRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


