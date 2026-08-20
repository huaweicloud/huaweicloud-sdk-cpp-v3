

#include "huaweicloud/projectman/v4/model/ListIssueSprintSnapshotsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssueSprintSnapshotsRequest::ListIssueSprintSnapshotsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
}

ListIssueSprintSnapshotsRequest::~ListIssueSprintSnapshotsRequest() = default;

void ListIssueSprintSnapshotsRequest::validate()
{
}

web::json::value ListIssueSprintSnapshotsRequest::toJson() const
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
bool ListIssueSprintSnapshotsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListIssueSprintSnapshotsRequest::getProjectId() const
{
    return projectId_;
}

void ListIssueSprintSnapshotsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListIssueSprintSnapshotsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListIssueSprintSnapshotsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListIssueSprintSnapshotsRequest::getIssueId() const
{
    return issueId_;
}

void ListIssueSprintSnapshotsRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool ListIssueSprintSnapshotsRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void ListIssueSprintSnapshotsRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

}
}
}
}
}


