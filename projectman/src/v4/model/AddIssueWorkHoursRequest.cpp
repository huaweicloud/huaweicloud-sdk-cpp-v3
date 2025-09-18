

#include "huaweicloud/projectman/v4/model/AddIssueWorkHoursRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AddIssueWorkHoursRequest::AddIssueWorkHoursRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = 0;
    issueIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddIssueWorkHoursRequest::~AddIssueWorkHoursRequest() = default;

void AddIssueWorkHoursRequest::validate()
{
}

web::json::value AddIssueWorkHoursRequest::toJson() const
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
bool AddIssueWorkHoursRequest::fromJson(const web::json::value& val)
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
            AddIssueWorkHoursRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddIssueWorkHoursRequest::getProjectId() const
{
    return projectId_;
}

void AddIssueWorkHoursRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AddIssueWorkHoursRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AddIssueWorkHoursRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t AddIssueWorkHoursRequest::getIssueId() const
{
    return issueId_;
}

void AddIssueWorkHoursRequest::setIssueId(int32_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool AddIssueWorkHoursRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void AddIssueWorkHoursRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

AddIssueWorkHoursRequestBody AddIssueWorkHoursRequest::getBody() const
{
    return body_;
}

void AddIssueWorkHoursRequest::setBody(const AddIssueWorkHoursRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddIssueWorkHoursRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddIssueWorkHoursRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


