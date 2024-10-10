

#include "huaweicloud/drs/v5/model/BackupInfoResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BackupInfoResp::BackupInfoResp()
{
    fileSource_ = "";
    fileSourceIsSet_ = false;
    bucketName_ = "";
    bucketNameIsSet_ = false;
    fileInfoIsSet_ = false;
}

BackupInfoResp::~BackupInfoResp() = default;

void BackupInfoResp::validate()
{
}

web::json::value BackupInfoResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileSourceIsSet_) {
        val[utility::conversions::to_string_t("file_source")] = ModelBase::toJson(fileSource_);
    }
    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }
    if(fileInfoIsSet_) {
        val[utility::conversions::to_string_t("file_info")] = ModelBase::toJson(fileInfo_);
    }

    return val;
}
bool BackupInfoResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_info"));
        if(!fieldValue.is_null())
        {
            std::vector<BackupFileResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileInfo(refVal);
        }
    }
    return ok;
}


std::string BackupInfoResp::getFileSource() const
{
    return fileSource_;
}

void BackupInfoResp::setFileSource(const std::string& value)
{
    fileSource_ = value;
    fileSourceIsSet_ = true;
}

bool BackupInfoResp::fileSourceIsSet() const
{
    return fileSourceIsSet_;
}

void BackupInfoResp::unsetfileSource()
{
    fileSourceIsSet_ = false;
}

std::string BackupInfoResp::getBucketName() const
{
    return bucketName_;
}

void BackupInfoResp::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool BackupInfoResp::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void BackupInfoResp::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::vector<BackupFileResp>& BackupInfoResp::getFileInfo()
{
    return fileInfo_;
}

void BackupInfoResp::setFileInfo(const std::vector<BackupFileResp>& value)
{
    fileInfo_ = value;
    fileInfoIsSet_ = true;
}

bool BackupInfoResp::fileInfoIsSet() const
{
    return fileInfoIsSet_;
}

void BackupInfoResp::unsetfileInfo()
{
    fileInfoIsSet_ = false;
}

}
}
}
}
}


