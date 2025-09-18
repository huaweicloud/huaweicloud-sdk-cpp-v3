

#include "huaweicloud/projectman/v4/model/ShowIssueConfigFieldsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIssueConfigFieldsRequest::ShowIssueConfigFieldsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueCategory_ = "";
    issueCategoryIsSet_ = false;
}

ShowIssueConfigFieldsRequest::~ShowIssueConfigFieldsRequest() = default;

void ShowIssueConfigFieldsRequest::validate()
{
}

web::json::value ShowIssueConfigFieldsRequest::toJson() const
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
bool ShowIssueConfigFieldsRequest::fromJson(const web::json::value& val)
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


std::string ShowIssueConfigFieldsRequest::getProjectId() const
{
    return projectId_;
}

void ShowIssueConfigFieldsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowIssueConfigFieldsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowIssueConfigFieldsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowIssueConfigFieldsRequest::getIssueCategory() const
{
    return issueCategory_;
}

void ShowIssueConfigFieldsRequest::setIssueCategory(const std::string& value)
{
    issueCategory_ = value;
    issueCategoryIsSet_ = true;
}

bool ShowIssueConfigFieldsRequest::issueCategoryIsSet() const
{
    return issueCategoryIsSet_;
}

void ShowIssueConfigFieldsRequest::unsetissueCategory()
{
    issueCategoryIsSet_ = false;
}

}
}
}
}
}


