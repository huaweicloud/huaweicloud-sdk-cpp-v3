

#include "huaweicloud/projectman/v4/model/ShowIpdWorkItemFlowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIpdWorkItemFlowRequest::ShowIpdWorkItemFlowRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    issueCategory_ = "";
    issueCategoryIsSet_ = false;
}

ShowIpdWorkItemFlowRequest::~ShowIpdWorkItemFlowRequest() = default;

void ShowIpdWorkItemFlowRequest::validate()
{
}

web::json::value ShowIpdWorkItemFlowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(issueCategoryIsSet_) {
        val[utility::conversions::to_string_t("issue_category")] = ModelBase::toJson(issueCategory_);
    }

    return val;
}
bool ShowIpdWorkItemFlowRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("issue_category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueCategory(refVal);
        }
    }
    return ok;
}


std::string ShowIpdWorkItemFlowRequest::getProjectId() const
{
    return projectId_;
}

void ShowIpdWorkItemFlowRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowIpdWorkItemFlowRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowIpdWorkItemFlowRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowIpdWorkItemFlowRequest::getIssueId() const
{
    return issueId_;
}

void ShowIpdWorkItemFlowRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool ShowIpdWorkItemFlowRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void ShowIpdWorkItemFlowRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string ShowIpdWorkItemFlowRequest::getIssueCategory() const
{
    return issueCategory_;
}

void ShowIpdWorkItemFlowRequest::setIssueCategory(const std::string& value)
{
    issueCategory_ = value;
    issueCategoryIsSet_ = true;
}

bool ShowIpdWorkItemFlowRequest::issueCategoryIsSet() const
{
    return issueCategoryIsSet_;
}

void ShowIpdWorkItemFlowRequest::unsetissueCategory()
{
    issueCategoryIsSet_ = false;
}

}
}
}
}
}


