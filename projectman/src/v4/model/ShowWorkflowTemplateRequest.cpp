

#include "huaweicloud/projectman/v4/model/ShowWorkflowTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowWorkflowTemplateRequest::ShowWorkflowTemplateRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueCategory_ = "";
    issueCategoryIsSet_ = false;
}

ShowWorkflowTemplateRequest::~ShowWorkflowTemplateRequest() = default;

void ShowWorkflowTemplateRequest::validate()
{
}

web::json::value ShowWorkflowTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueCategoryIsSet_) {
        val[utility::conversions::to_string_t("issue_category")] = ModelBase::toJson(issueCategory_);
    }

    return val;
}
bool ShowWorkflowTemplateRequest::fromJson(const web::json::value& val)
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


std::string ShowWorkflowTemplateRequest::getProjectId() const
{
    return projectId_;
}

void ShowWorkflowTemplateRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowWorkflowTemplateRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowWorkflowTemplateRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowWorkflowTemplateRequest::getIssueCategory() const
{
    return issueCategory_;
}

void ShowWorkflowTemplateRequest::setIssueCategory(const std::string& value)
{
    issueCategory_ = value;
    issueCategoryIsSet_ = true;
}

bool ShowWorkflowTemplateRequest::issueCategoryIsSet() const
{
    return issueCategoryIsSet_;
}

void ShowWorkflowTemplateRequest::unsetissueCategory()
{
    issueCategoryIsSet_ = false;
}

}
}
}
}
}


