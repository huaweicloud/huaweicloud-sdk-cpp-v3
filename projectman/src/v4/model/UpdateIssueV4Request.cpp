

#include "huaweicloud/projectman/v4/model/UpdateIssueV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateIssueV4Request::UpdateIssueV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = 0;
    issueIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateIssueV4Request::~UpdateIssueV4Request() = default;

void UpdateIssueV4Request::validate()
{
}

web::json::value UpdateIssueV4Request::toJson() const
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
bool UpdateIssueV4Request::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IssueRequestV4 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateIssueV4Request::getProjectId() const
{
    return projectId_;
}

void UpdateIssueV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateIssueV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateIssueV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t UpdateIssueV4Request::getIssueId() const
{
    return issueId_;
}

void UpdateIssueV4Request::setIssueId(int32_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool UpdateIssueV4Request::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void UpdateIssueV4Request::unsetissueId()
{
    issueIdIsSet_ = false;
}

IssueRequestV4 UpdateIssueV4Request::getBody() const
{
    return body_;
}

void UpdateIssueV4Request::setBody(const IssueRequestV4& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateIssueV4Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateIssueV4Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


