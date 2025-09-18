

#include "huaweicloud/projectman/v4/model/DownloadIpdIssueAttachmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DownloadIpdIssueAttachmentRequest::DownloadIpdIssueAttachmentRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DownloadIpdIssueAttachmentRequest::~DownloadIpdIssueAttachmentRequest() = default;

void DownloadIpdIssueAttachmentRequest::validate()
{
}

web::json::value DownloadIpdIssueAttachmentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DownloadIpdIssueAttachmentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string DownloadIpdIssueAttachmentRequest::getProjectId() const
{
    return projectId_;
}

void DownloadIpdIssueAttachmentRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DownloadIpdIssueAttachmentRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DownloadIpdIssueAttachmentRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DownloadIpdIssueAttachmentRequest::getId() const
{
    return id_;
}

void DownloadIpdIssueAttachmentRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DownloadIpdIssueAttachmentRequest::idIsSet() const
{
    return idIsSet_;
}

void DownloadIpdIssueAttachmentRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


