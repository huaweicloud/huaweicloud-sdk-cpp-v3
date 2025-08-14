

#include "huaweicloud/iotda/v5/model/BatchTaskFile.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




BatchTaskFile::BatchTaskFile()
{
    fileId_ = "";
    fileIdIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    uploadTime_ = "";
    uploadTimeIsSet_ = false;
}

BatchTaskFile::~BatchTaskFile() = default;

void BatchTaskFile::validate()
{
}

web::json::value BatchTaskFile::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileIdIsSet_) {
        val[utility::conversions::to_string_t("file_id")] = ModelBase::toJson(fileId_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(uploadTimeIsSet_) {
        val[utility::conversions::to_string_t("upload_time")] = ModelBase::toJson(uploadTime_);
    }

    return val;
}
bool BatchTaskFile::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("upload_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upload_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUploadTime(refVal);
        }
    }
    return ok;
}


std::string BatchTaskFile::getFileId() const
{
    return fileId_;
}

void BatchTaskFile::setFileId(const std::string& value)
{
    fileId_ = value;
    fileIdIsSet_ = true;
}

bool BatchTaskFile::fileIdIsSet() const
{
    return fileIdIsSet_;
}

void BatchTaskFile::unsetfileId()
{
    fileIdIsSet_ = false;
}

std::string BatchTaskFile::getFileName() const
{
    return fileName_;
}

void BatchTaskFile::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool BatchTaskFile::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void BatchTaskFile::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string BatchTaskFile::getUploadTime() const
{
    return uploadTime_;
}

void BatchTaskFile::setUploadTime(const std::string& value)
{
    uploadTime_ = value;
    uploadTimeIsSet_ = true;
}

bool BatchTaskFile::uploadTimeIsSet() const
{
    return uploadTimeIsSet_;
}

void BatchTaskFile::unsetuploadTime()
{
    uploadTimeIsSet_ = false;
}

}
}
}
}
}


