

#include "huaweicloud/metastudio/v1/model/LargeFilesCreateReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LargeFilesCreateReq::LargeFilesCreateReq()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    fileSize_ = 0L;
    fileSizeIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    assetFileCategory_ = "";
    assetFileCategoryIsSet_ = false;
    fileMultipartCount_ = 0;
    fileMultipartCountIsSet_ = false;
}

LargeFilesCreateReq::~LargeFilesCreateReq() = default;

void LargeFilesCreateReq::validate()
{
}

web::json::value LargeFilesCreateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
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
    if(fileMultipartCountIsSet_) {
        val[utility::conversions::to_string_t("file_multipart_count")] = ModelBase::toJson(fileMultipartCount_);
    }

    return val;
}
bool LargeFilesCreateReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_multipart_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_multipart_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileMultipartCount(refVal);
        }
    }
    return ok;
}


std::string LargeFilesCreateReq::getFileName() const
{
    return fileName_;
}

void LargeFilesCreateReq::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool LargeFilesCreateReq::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void LargeFilesCreateReq::unsetfileName()
{
    fileNameIsSet_ = false;
}

int64_t LargeFilesCreateReq::getFileSize() const
{
    return fileSize_;
}

void LargeFilesCreateReq::setFileSize(int64_t value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool LargeFilesCreateReq::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void LargeFilesCreateReq::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string LargeFilesCreateReq::getFileType() const
{
    return fileType_;
}

void LargeFilesCreateReq::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool LargeFilesCreateReq::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void LargeFilesCreateReq::unsetfileType()
{
    fileTypeIsSet_ = false;
}

std::string LargeFilesCreateReq::getAssetId() const
{
    return assetId_;
}

void LargeFilesCreateReq::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool LargeFilesCreateReq::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void LargeFilesCreateReq::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string LargeFilesCreateReq::getAssetFileCategory() const
{
    return assetFileCategory_;
}

void LargeFilesCreateReq::setAssetFileCategory(const std::string& value)
{
    assetFileCategory_ = value;
    assetFileCategoryIsSet_ = true;
}

bool LargeFilesCreateReq::assetFileCategoryIsSet() const
{
    return assetFileCategoryIsSet_;
}

void LargeFilesCreateReq::unsetassetFileCategory()
{
    assetFileCategoryIsSet_ = false;
}

int32_t LargeFilesCreateReq::getFileMultipartCount() const
{
    return fileMultipartCount_;
}

void LargeFilesCreateReq::setFileMultipartCount(int32_t value)
{
    fileMultipartCount_ = value;
    fileMultipartCountIsSet_ = true;
}

bool LargeFilesCreateReq::fileMultipartCountIsSet() const
{
    return fileMultipartCountIsSet_;
}

void LargeFilesCreateReq::unsetfileMultipartCount()
{
    fileMultipartCountIsSet_ = false;
}

}
}
}
}
}


