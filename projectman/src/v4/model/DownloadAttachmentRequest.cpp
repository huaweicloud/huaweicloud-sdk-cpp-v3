

#include "huaweicloud/projectman/v4/model/DownloadAttachmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DownloadAttachmentRequest::DownloadAttachmentRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    attachmentId_ = "";
    attachmentIdIsSet_ = false;
}

DownloadAttachmentRequest::~DownloadAttachmentRequest() = default;

void DownloadAttachmentRequest::validate()
{
}

web::json::value DownloadAttachmentRequest::toJson() const
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
bool DownloadAttachmentRequest::fromJson(const web::json::value& val)
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


std::string DownloadAttachmentRequest::getProjectId() const
{
    return projectId_;
}

void DownloadAttachmentRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DownloadAttachmentRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DownloadAttachmentRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DownloadAttachmentRequest::getIssueId() const
{
    return issueId_;
}

void DownloadAttachmentRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool DownloadAttachmentRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void DownloadAttachmentRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string DownloadAttachmentRequest::getAttachmentId() const
{
    return attachmentId_;
}

void DownloadAttachmentRequest::setAttachmentId(const std::string& value)
{
    attachmentId_ = value;
    attachmentIdIsSet_ = true;
}

bool DownloadAttachmentRequest::attachmentIdIsSet() const
{
    return attachmentIdIsSet_;
}

void DownloadAttachmentRequest::unsetattachmentId()
{
    attachmentIdIsSet_ = false;
}

}
}
}
}
}


