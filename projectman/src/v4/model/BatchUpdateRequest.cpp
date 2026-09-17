

#include "huaweicloud/projectman/v4/model/BatchUpdateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchUpdateRequest::BatchUpdateRequest()
{
    assignedToId_ = "";
    assignedToIdIsSet_ = false;
    issueIds_ = "";
    issueIdsIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

BatchUpdateRequest::~BatchUpdateRequest() = default;

void BatchUpdateRequest::validate()
{
}

web::json::value BatchUpdateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assignedToIdIsSet_) {
        val[utility::conversions::to_string_t("assigned_to_id")] = ModelBase::toJson(assignedToId_);
    }
    if(issueIdsIsSet_) {
        val[utility::conversions::to_string_t("issue_ids")] = ModelBase::toJson(issueIds_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool BatchUpdateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("assigned_to_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_to_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedToId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueIds(refVal);
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


std::string BatchUpdateRequest::getAssignedToId() const
{
    return assignedToId_;
}

void BatchUpdateRequest::setAssignedToId(const std::string& value)
{
    assignedToId_ = value;
    assignedToIdIsSet_ = true;
}

bool BatchUpdateRequest::assignedToIdIsSet() const
{
    return assignedToIdIsSet_;
}

void BatchUpdateRequest::unsetassignedToId()
{
    assignedToIdIsSet_ = false;
}

std::string BatchUpdateRequest::getIssueIds() const
{
    return issueIds_;
}

void BatchUpdateRequest::setIssueIds(const std::string& value)
{
    issueIds_ = value;
    issueIdsIsSet_ = true;
}

bool BatchUpdateRequest::issueIdsIsSet() const
{
    return issueIdsIsSet_;
}

void BatchUpdateRequest::unsetissueIds()
{
    issueIdsIsSet_ = false;
}

std::string BatchUpdateRequest::getProjectId() const
{
    return projectId_;
}

void BatchUpdateRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchUpdateRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchUpdateRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


