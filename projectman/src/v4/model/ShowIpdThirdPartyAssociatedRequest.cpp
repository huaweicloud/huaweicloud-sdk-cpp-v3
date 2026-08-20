

#include "huaweicloud/projectman/v4/model/ShowIpdThirdPartyAssociatedRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIpdThirdPartyAssociatedRequest::ShowIpdThirdPartyAssociatedRequest()
{
    issueId_ = "";
    issueIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowIpdThirdPartyAssociatedRequest::~ShowIpdThirdPartyAssociatedRequest() = default;

void ShowIpdThirdPartyAssociatedRequest::validate()
{
}

web::json::value ShowIpdThirdPartyAssociatedRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowIpdThirdPartyAssociatedRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    return ok;
}


std::string ShowIpdThirdPartyAssociatedRequest::getIssueId() const
{
    return issueId_;
}

void ShowIpdThirdPartyAssociatedRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool ShowIpdThirdPartyAssociatedRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void ShowIpdThirdPartyAssociatedRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string ShowIpdThirdPartyAssociatedRequest::getProjectId() const
{
    return projectId_;
}

void ShowIpdThirdPartyAssociatedRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowIpdThirdPartyAssociatedRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowIpdThirdPartyAssociatedRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


