

#include "huaweicloud/metastudio/v1/model/TtscAssetFileInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TtscAssetFileInfo::TtscAssetFileInfo()
{
    fileId_ = "";
    fileIdIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    fileMd5_ = "";
    fileMd5IsSet_ = false;
    fileSize_ = 0L;
    fileSizeIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    assetFileCategory_ = "";
    assetFileCategoryIsSet_ = false;
    downloadUrl_ = "";
    downloadUrlIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
}

TtscAssetFileInfo::~TtscAssetFileInfo() = default;

void TtscAssetFileInfo::validate()
{
}

web::json::value TtscAssetFileInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileIdIsSet_) {
        val[utility::conversions::to_string_t("file_id")] = ModelBase::toJson(fileId_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(fileMd5IsSet_) {
        val[utility::conversions::to_string_t("file_md5")] = ModelBase::toJson(fileMd5_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }
    if(assetFileCategoryIsSet_) {
        val[utility::conversions::to_string_t("asset_file_category")] = ModelBase::toJson(assetFileCategory_);
    }
    if(downloadUrlIsSet_) {
        val[utility::conversions::to_string_t("download_url")] = ModelBase::toJson(downloadUrl_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }

    return val;
}
bool TtscAssetFileInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_md5"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_md5"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileMd5(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("asset_file_category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_file_category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetFileCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    return ok;
}


std::string TtscAssetFileInfo::getFileId() const
{
    return fileId_;
}

void TtscAssetFileInfo::setFileId(const std::string& value)
{
    fileId_ = value;
    fileIdIsSet_ = true;
}

bool TtscAssetFileInfo::fileIdIsSet() const
{
    return fileIdIsSet_;
}

void TtscAssetFileInfo::unsetfileId()
{
    fileIdIsSet_ = false;
}

std::string TtscAssetFileInfo::getFileName() const
{
    return fileName_;
}

void TtscAssetFileInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool TtscAssetFileInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void TtscAssetFileInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string TtscAssetFileInfo::getFileMd5() const
{
    return fileMd5_;
}

void TtscAssetFileInfo::setFileMd5(const std::string& value)
{
    fileMd5_ = value;
    fileMd5IsSet_ = true;
}

bool TtscAssetFileInfo::fileMd5IsSet() const
{
    return fileMd5IsSet_;
}

void TtscAssetFileInfo::unsetfileMd5()
{
    fileMd5IsSet_ = false;
}

int64_t TtscAssetFileInfo::getFileSize() const
{
    return fileSize_;
}

void TtscAssetFileInfo::setFileSize(int64_t value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool TtscAssetFileInfo::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void TtscAssetFileInfo::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string TtscAssetFileInfo::getFileType() const
{
    return fileType_;
}

void TtscAssetFileInfo::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool TtscAssetFileInfo::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void TtscAssetFileInfo::unsetfileType()
{
    fileTypeIsSet_ = false;
}

std::string TtscAssetFileInfo::getAssetFileCategory() const
{
    return assetFileCategory_;
}

void TtscAssetFileInfo::setAssetFileCategory(const std::string& value)
{
    assetFileCategory_ = value;
    assetFileCategoryIsSet_ = true;
}

bool TtscAssetFileInfo::assetFileCategoryIsSet() const
{
    return assetFileCategoryIsSet_;
}

void TtscAssetFileInfo::unsetassetFileCategory()
{
    assetFileCategoryIsSet_ = false;
}

std::string TtscAssetFileInfo::getDownloadUrl() const
{
    return downloadUrl_;
}

void TtscAssetFileInfo::setDownloadUrl(const std::string& value)
{
    downloadUrl_ = value;
    downloadUrlIsSet_ = true;
}

bool TtscAssetFileInfo::downloadUrlIsSet() const
{
    return downloadUrlIsSet_;
}

void TtscAssetFileInfo::unsetdownloadUrl()
{
    downloadUrlIsSet_ = false;
}

std::string TtscAssetFileInfo::getState() const
{
    return state_;
}

void TtscAssetFileInfo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool TtscAssetFileInfo::stateIsSet() const
{
    return stateIsSet_;
}

void TtscAssetFileInfo::unsetstate()
{
    stateIsSet_ = false;
}

std::string TtscAssetFileInfo::getReason() const
{
    return reason_;
}

void TtscAssetFileInfo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool TtscAssetFileInfo::reasonIsSet() const
{
    return reasonIsSet_;
}

void TtscAssetFileInfo::unsetreason()
{
    reasonIsSet_ = false;
}

}
}
}
}
}


