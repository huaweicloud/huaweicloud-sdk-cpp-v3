

#include "huaweicloud/metastudio/v1/model/AssetFileInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AssetFileInfo::AssetFileInfo()
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
    blockReasonCode_ = "";
    blockReasonCodeIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    fileExtraMetaIsSet_ = false;
}

AssetFileInfo::~AssetFileInfo() = default;

void AssetFileInfo::validate()
{
}

web::json::value AssetFileInfo::toJson() const
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
    if(blockReasonCodeIsSet_) {
        val[utility::conversions::to_string_t("block_reason_code")] = ModelBase::toJson(blockReasonCode_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(fileExtraMetaIsSet_) {
        val[utility::conversions::to_string_t("file_extra_meta")] = ModelBase::toJson(fileExtraMeta_);
    }

    return val;
}
bool AssetFileInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("block_reason_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_reason_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockReasonCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_extra_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_extra_meta"));
        if(!fieldValue.is_null())
        {
            FileExtraMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileExtraMeta(refVal);
        }
    }
    return ok;
}


std::string AssetFileInfo::getFileId() const
{
    return fileId_;
}

void AssetFileInfo::setFileId(const std::string& value)
{
    fileId_ = value;
    fileIdIsSet_ = true;
}

bool AssetFileInfo::fileIdIsSet() const
{
    return fileIdIsSet_;
}

void AssetFileInfo::unsetfileId()
{
    fileIdIsSet_ = false;
}

std::string AssetFileInfo::getFileName() const
{
    return fileName_;
}

void AssetFileInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool AssetFileInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void AssetFileInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string AssetFileInfo::getFileMd5() const
{
    return fileMd5_;
}

void AssetFileInfo::setFileMd5(const std::string& value)
{
    fileMd5_ = value;
    fileMd5IsSet_ = true;
}

bool AssetFileInfo::fileMd5IsSet() const
{
    return fileMd5IsSet_;
}

void AssetFileInfo::unsetfileMd5()
{
    fileMd5IsSet_ = false;
}

int64_t AssetFileInfo::getFileSize() const
{
    return fileSize_;
}

void AssetFileInfo::setFileSize(int64_t value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool AssetFileInfo::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void AssetFileInfo::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string AssetFileInfo::getFileType() const
{
    return fileType_;
}

void AssetFileInfo::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool AssetFileInfo::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void AssetFileInfo::unsetfileType()
{
    fileTypeIsSet_ = false;
}

std::string AssetFileInfo::getAssetFileCategory() const
{
    return assetFileCategory_;
}

void AssetFileInfo::setAssetFileCategory(const std::string& value)
{
    assetFileCategory_ = value;
    assetFileCategoryIsSet_ = true;
}

bool AssetFileInfo::assetFileCategoryIsSet() const
{
    return assetFileCategoryIsSet_;
}

void AssetFileInfo::unsetassetFileCategory()
{
    assetFileCategoryIsSet_ = false;
}

std::string AssetFileInfo::getDownloadUrl() const
{
    return downloadUrl_;
}

void AssetFileInfo::setDownloadUrl(const std::string& value)
{
    downloadUrl_ = value;
    downloadUrlIsSet_ = true;
}

bool AssetFileInfo::downloadUrlIsSet() const
{
    return downloadUrlIsSet_;
}

void AssetFileInfo::unsetdownloadUrl()
{
    downloadUrlIsSet_ = false;
}

std::string AssetFileInfo::getState() const
{
    return state_;
}

void AssetFileInfo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool AssetFileInfo::stateIsSet() const
{
    return stateIsSet_;
}

void AssetFileInfo::unsetstate()
{
    stateIsSet_ = false;
}

std::string AssetFileInfo::getBlockReasonCode() const
{
    return blockReasonCode_;
}

void AssetFileInfo::setBlockReasonCode(const std::string& value)
{
    blockReasonCode_ = value;
    blockReasonCodeIsSet_ = true;
}

bool AssetFileInfo::blockReasonCodeIsSet() const
{
    return blockReasonCodeIsSet_;
}

void AssetFileInfo::unsetblockReasonCode()
{
    blockReasonCodeIsSet_ = false;
}

std::string AssetFileInfo::getReason() const
{
    return reason_;
}

void AssetFileInfo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool AssetFileInfo::reasonIsSet() const
{
    return reasonIsSet_;
}

void AssetFileInfo::unsetreason()
{
    reasonIsSet_ = false;
}

FileExtraMeta AssetFileInfo::getFileExtraMeta() const
{
    return fileExtraMeta_;
}

void AssetFileInfo::setFileExtraMeta(const FileExtraMeta& value)
{
    fileExtraMeta_ = value;
    fileExtraMetaIsSet_ = true;
}

bool AssetFileInfo::fileExtraMetaIsSet() const
{
    return fileExtraMetaIsSet_;
}

void AssetFileInfo::unsetfileExtraMeta()
{
    fileExtraMetaIsSet_ = false;
}

}
}
}
}
}


