

#include "huaweicloud/projectman/v4/model/DeleteAttachmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteAttachmentRequest::DeleteAttachmentRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    attachmentId_ = "";
    attachmentIdIsSet_ = false;
}

DeleteAttachmentRequest::~DeleteAttachmentRequest() = default;

void DeleteAttachmentRequest::validate()
{
}

web::json::value DeleteAttachmentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(attachmentIdIsSet_) {
        val[utility::conversions::to_string_t("attachment_id")] = ModelBase::toJson(attachmentId_);
    }

    return val;
}
bool DeleteAttachmentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("attachment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachmentId(refVal);
        }
    }
    return ok;
}


std::string DeleteAttachmentRequest::getProjectId() const
{
    return projectId_;
}

void DeleteAttachmentRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteAttachmentRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteAttachmentRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteAttachmentRequest::getIssueId() const
{
    return issueId_;
}

void DeleteAttachmentRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool DeleteAttachmentRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void DeleteAttachmentRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string DeleteAttachmentRequest::getAttachmentId() const
{
    return attachmentId_;
}

void DeleteAttachmentRequest::setAttachmentId(const std::string& value)
{
    attachmentId_ = value;
    attachmentIdIsSet_ = true;
}

bool DeleteAttachmentRequest::attachmentIdIsSet() const
{
    return attachmentIdIsSet_;
}

void DeleteAttachmentRequest::unsetattachmentId()
{
    attachmentIdIsSet_ = false;
}

}
}
}
}
}


