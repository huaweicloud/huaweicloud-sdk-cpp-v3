

#include "huaweicloud/projectman/v4/model/UploadAttachmentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UploadAttachmentsRequest::UploadAttachmentsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    bodyIsSet_ = false;
}

UploadAttachmentsRequest::~UploadAttachmentsRequest() = default;

void UploadAttachmentsRequest::validate()
{
}

web::json::value UploadAttachmentsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UploadAttachmentsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UploadAttachmentsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UploadAttachmentsRequest::getProjectId() const
{
    return projectId_;
}

void UploadAttachmentsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UploadAttachmentsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UploadAttachmentsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UploadAttachmentsRequest::getIssueId() const
{
    return issueId_;
}

void UploadAttachmentsRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool UploadAttachmentsRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void UploadAttachmentsRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

UploadAttachmentsRequestBody UploadAttachmentsRequest::getBody() const
{
    return body_;
}

void UploadAttachmentsRequest::setBody(const UploadAttachmentsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadAttachmentsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadAttachmentsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


