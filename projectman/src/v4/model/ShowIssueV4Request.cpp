

#include "huaweicloud/projectman/v4/model/ShowIssueV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIssueV4Request::ShowIssueV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = 0;
    issueIdIsSet_ = false;
}

ShowIssueV4Request::~ShowIssueV4Request() = default;

void ShowIssueV4Request::validate()
{
}

web::json::value ShowIssueV4Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }

    return val;
}
bool ShowIssueV4Request::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowIssueV4Request::getProjectId() const
{
    return projectId_;
}

void ShowIssueV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowIssueV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowIssueV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ShowIssueV4Request::getIssueId() const
{
    return issueId_;
}

void ShowIssueV4Request::setIssueId(int32_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool ShowIssueV4Request::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void ShowIssueV4Request::unsetissueId()
{
    issueIdIsSet_ = false;
}

}
}
}
}
}


