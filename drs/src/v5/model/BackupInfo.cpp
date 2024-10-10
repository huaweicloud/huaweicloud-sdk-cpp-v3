

#include "huaweicloud/drs/v5/model/BackupInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BackupInfo::BackupInfo()
{
    fileSource_ = "";
    fileSourceIsSet_ = false;
    bucketName_ = "";
    bucketNameIsSet_ = false;
    filesIsSet_ = false;
}

BackupInfo::~BackupInfo() = default;

void BackupInfo::validate()
{
}

web::json::value BackupInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileSourceIsSet_) {
        val[utility::conversions::to_string_t("file_source")] = ModelBase::toJson(fileSource_);
    }
    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }
    if(filesIsSet_) {
        val[utility::conversions::to_string_t("files")] = ModelBase::toJson(files_);
    }

    return val;
}
bool BackupInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files"));
        if(!fieldValue.is_null())
        {
            std::vector<BackupFileInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFiles(refVal);
        }
    }
    return ok;
}


std::string BackupInfo::getFileSource() const
{
    return fileSource_;
}

void BackupInfo::setFileSource(const std::string& value)
{
    fileSource_ = value;
    fileSourceIsSet_ = true;
}

bool BackupInfo::fileSourceIsSet() const
{
    return fileSourceIsSet_;
}

void BackupInfo::unsetfileSource()
{
    fileSourceIsSet_ = false;
}

std::string BackupInfo::getBucketName() const
{
    return bucketName_;
}

void BackupInfo::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool BackupInfo::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void BackupInfo::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::vector<BackupFileInfo>& BackupInfo::getFiles()
{
    return files_;
}

void BackupInfo::setFiles(const std::vector<BackupFileInfo>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool BackupInfo::filesIsSet() const
{
    return filesIsSet_;
}

void BackupInfo::unsetfiles()
{
    filesIsSet_ = false;
}

}
}
}
}
}


