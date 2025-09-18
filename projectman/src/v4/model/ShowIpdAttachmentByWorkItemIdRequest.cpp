

#include "huaweicloud/projectman/v4/model/ShowIpdAttachmentByWorkItemIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIpdAttachmentByWorkItemIdRequest::ShowIpdAttachmentByWorkItemIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    sourceProjectId_ = "";
    sourceProjectIdIsSet_ = false;
}

ShowIpdAttachmentByWorkItemIdRequest::~ShowIpdAttachmentByWorkItemIdRequest() = default;

void ShowIpdAttachmentByWorkItemIdRequest::validate()
{
}

web::json::value ShowIpdAttachmentByWorkItemIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(sourceProjectIdIsSet_) {
        val[utility::conversions::to_string_t("source_project_id")] = ModelBase::toJson(sourceProjectId_);
    }

    return val;
}
bool ShowIpdAttachmentByWorkItemIdRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceProjectId(refVal);
        }
    }
    return ok;
}


std::string ShowIpdAttachmentByWorkItemIdRequest::getProjectId() const
{
    return projectId_;
}

void ShowIpdAttachmentByWorkItemIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowIpdAttachmentByWorkItemIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowIpdAttachmentByWorkItemIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowIpdAttachmentByWorkItemIdRequest::getIssueId() const
{
    return issueId_;
}

void ShowIpdAttachmentByWorkItemIdRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool ShowIpdAttachmentByWorkItemIdRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void ShowIpdAttachmentByWorkItemIdRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string ShowIpdAttachmentByWorkItemIdRequest::getSourceProjectId() const
{
    return sourceProjectId_;
}

void ShowIpdAttachmentByWorkItemIdRequest::setSourceProjectId(const std::string& value)
{
    sourceProjectId_ = value;
    sourceProjectIdIsSet_ = true;
}

bool ShowIpdAttachmentByWorkItemIdRequest::sourceProjectIdIsSet() const
{
    return sourceProjectIdIsSet_;
}

void ShowIpdAttachmentByWorkItemIdRequest::unsetsourceProjectId()
{
    sourceProjectIdIsSet_ = false;
}

}
}
}
}
}


