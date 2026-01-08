

#include "huaweicloud/cloudtest/v1/model/DownloadStepImageNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DownloadStepImageNewRequest::DownloadStepImageNewRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    parent_ = "";
    parentIsSet_ = false;
    sub_ = "";
    subIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
}

DownloadStepImageNewRequest::~DownloadStepImageNewRequest() = default;

void DownloadStepImageNewRequest::validate()
{
}

web::json::value DownloadStepImageNewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(parentIsSet_) {
        val[utility::conversions::to_string_t("parent")] = ModelBase::toJson(parent_);
    }
    if(subIsSet_) {
        val[utility::conversions::to_string_t("sub")] = ModelBase::toJson(sub_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }

    return val;
}
bool DownloadStepImageNewRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("parent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSub(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
        }
    }
    return ok;
}


std::string DownloadStepImageNewRequest::getProjectId() const
{
    return projectId_;
}

void DownloadStepImageNewRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DownloadStepImageNewRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DownloadStepImageNewRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DownloadStepImageNewRequest::getParent() const
{
    return parent_;
}

void DownloadStepImageNewRequest::setParent(const std::string& value)
{
    parent_ = value;
    parentIsSet_ = true;
}

bool DownloadStepImageNewRequest::parentIsSet() const
{
    return parentIsSet_;
}

void DownloadStepImageNewRequest::unsetparent()
{
    parentIsSet_ = false;
}

std::string DownloadStepImageNewRequest::getSub() const
{
    return sub_;
}

void DownloadStepImageNewRequest::setSub(const std::string& value)
{
    sub_ = value;
    subIsSet_ = true;
}

bool DownloadStepImageNewRequest::subIsSet() const
{
    return subIsSet_;
}

void DownloadStepImageNewRequest::unsetsub()
{
    subIsSet_ = false;
}

std::string DownloadStepImageNewRequest::getFileName() const
{
    return fileName_;
}

void DownloadStepImageNewRequest::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool DownloadStepImageNewRequest::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void DownloadStepImageNewRequest::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string DownloadStepImageNewRequest::getFileType() const
{
    return fileType_;
}

void DownloadStepImageNewRequest::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool DownloadStepImageNewRequest::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void DownloadStepImageNewRequest::unsetfileType()
{
    fileTypeIsSet_ = false;
}

}
}
}
}
}


