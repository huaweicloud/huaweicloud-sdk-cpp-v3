

#include "huaweicloud/projectman/v4/model/DeleteIpdImageInIssueRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteIpdImageInIssueRequest::DeleteIpdImageInIssueRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
}

DeleteIpdImageInIssueRequest::~DeleteIpdImageInIssueRequest() = default;

void DeleteIpdImageInIssueRequest::validate()
{
}

web::json::value DeleteIpdImageInIssueRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }

    return val;
}
bool DeleteIpdImageInIssueRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    return ok;
}


std::string DeleteIpdImageInIssueRequest::getProjectId() const
{
    return projectId_;
}

void DeleteIpdImageInIssueRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteIpdImageInIssueRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteIpdImageInIssueRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteIpdImageInIssueRequest::getIssueId() const
{
    return issueId_;
}

void DeleteIpdImageInIssueRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool DeleteIpdImageInIssueRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void DeleteIpdImageInIssueRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string DeleteIpdImageInIssueRequest::getFileName() const
{
    return fileName_;
}

void DeleteIpdImageInIssueRequest::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool DeleteIpdImageInIssueRequest::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void DeleteIpdImageInIssueRequest::unsetfileName()
{
    fileNameIsSet_ = false;
}

}
}
}
}
}


