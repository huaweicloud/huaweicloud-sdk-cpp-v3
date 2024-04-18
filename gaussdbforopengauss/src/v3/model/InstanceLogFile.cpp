

#include "huaweicloud/gaussdbforopengauss/v3/model/InstanceLogFile.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstanceLogFile::InstanceLogFile()
{
    status_ = "";
    statusIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    fileSize_ = "";
    fileSizeIsSet_ = false;
    fileLink_ = "";
    fileLinkIsSet_ = false;
}

InstanceLogFile::~InstanceLogFile() = default;

void InstanceLogFile::validate()
{
}

web::json::value InstanceLogFile::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }
    if(fileLinkIsSet_) {
        val[utility::conversions::to_string_t("file_link")] = ModelBase::toJson(fileLink_);
    }

    return val;
}
bool InstanceLogFile::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileLink(refVal);
        }
    }
    return ok;
}


std::string InstanceLogFile::getStatus() const
{
    return status_;
}

void InstanceLogFile::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InstanceLogFile::statusIsSet() const
{
    return statusIsSet_;
}

void InstanceLogFile::unsetstatus()
{
    statusIsSet_ = false;
}

std::string InstanceLogFile::getFileName() const
{
    return fileName_;
}

void InstanceLogFile::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool InstanceLogFile::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void InstanceLogFile::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string InstanceLogFile::getStartTime() const
{
    return startTime_;
}

void InstanceLogFile::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool InstanceLogFile::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void InstanceLogFile::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string InstanceLogFile::getEndTime() const
{
    return endTime_;
}

void InstanceLogFile::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool InstanceLogFile::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void InstanceLogFile::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string InstanceLogFile::getFileSize() const
{
    return fileSize_;
}

void InstanceLogFile::setFileSize(const std::string& value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool InstanceLogFile::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void InstanceLogFile::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string InstanceLogFile::getFileLink() const
{
    return fileLink_;
}

void InstanceLogFile::setFileLink(const std::string& value)
{
    fileLink_ = value;
    fileLinkIsSet_ = true;
}

bool InstanceLogFile::fileLinkIsSet() const
{
    return fileLinkIsSet_;
}

void InstanceLogFile::unsetfileLink()
{
    fileLinkIsSet_ = false;
}

}
}
}
}
}


