

#include "huaweicloud/metastudio/v1/model/FilesCreateReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




FilesCreateReq::FilesCreateReq()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    fileMd5_ = "";
    fileMd5IsSet_ = false;
    fileSize_ = 0L;
    fileSizeIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    assetFileCategory_ = "";
    assetFileCategoryIsSet_ = false;
}

FilesCreateReq::~FilesCreateReq() = default;

void FilesCreateReq::validate()
{
}

web::json::value FilesCreateReq::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(assetFileCategoryIsSet_) {
        val[utility::conversions::to_string_t("asset_file_category")] = ModelBase::toJson(assetFileCategory_);
    }

    return val;
}
bool FilesCreateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
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
    return ok;
}


std::string FilesCreateReq::getFileName() const
{
    return fileName_;
}

void FilesCreateReq::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool FilesCreateReq::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void FilesCreateReq::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string FilesCreateReq::getFileMd5() const
{
    return fileMd5_;
}

void FilesCreateReq::setFileMd5(const std::string& value)
{
    fileMd5_ = value;
    fileMd5IsSet_ = true;
}

bool FilesCreateReq::fileMd5IsSet() const
{
    return fileMd5IsSet_;
}

void FilesCreateReq::unsetfileMd5()
{
    fileMd5IsSet_ = false;
}

int64_t FilesCreateReq::getFileSize() const
{
    return fileSize_;
}

void FilesCreateReq::setFileSize(int64_t value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool FilesCreateReq::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void FilesCreateReq::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string FilesCreateReq::getFileType() const
{
    return fileType_;
}

void FilesCreateReq::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool FilesCreateReq::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void FilesCreateReq::unsetfileType()
{
    fileTypeIsSet_ = false;
}

std::string FilesCreateReq::getAssetId() const
{
    return assetId_;
}

void FilesCreateReq::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool FilesCreateReq::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void FilesCreateReq::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string FilesCreateReq::getAssetFileCategory() const
{
    return assetFileCategory_;
}

void FilesCreateReq::setAssetFileCategory(const std::string& value)
{
    assetFileCategory_ = value;
    assetFileCategoryIsSet_ = true;
}

bool FilesCreateReq::assetFileCategoryIsSet() const
{
    return assetFileCategoryIsSet_;
}

void FilesCreateReq::unsetassetFileCategory()
{
    assetFileCategoryIsSet_ = false;
}

}
}
}
}
}


