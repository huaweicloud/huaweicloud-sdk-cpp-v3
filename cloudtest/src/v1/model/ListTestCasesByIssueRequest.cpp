

#include "huaweicloud/cloudtest/v1/model/ListTestCasesByIssueRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestCasesByIssueRequest::ListTestCasesByIssueRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListTestCasesByIssueRequest::~ListTestCasesByIssueRequest() = default;

void ListTestCasesByIssueRequest::validate()
{
}

web::json::value ListTestCasesByIssueRequest::toJson() const
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
bool ListTestCasesByIssueRequest::fromJson(const web::json::value& val)
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
            QueryTestCasesByIssueInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListTestCasesByIssueRequest::getProjectId() const
{
    return projectId_;
}

void ListTestCasesByIssueRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTestCasesByIssueRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTestCasesByIssueRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListTestCasesByIssueRequest::getIssueId() const
{
    return issueId_;
}

void ListTestCasesByIssueRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool ListTestCasesByIssueRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void ListTestCasesByIssueRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

QueryTestCasesByIssueInfo ListTestCasesByIssueRequest::getBody() const
{
    return body_;
}

void ListTestCasesByIssueRequest::setBody(const QueryTestCasesByIssueInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTestCasesByIssueRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTestCasesByIssueRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


