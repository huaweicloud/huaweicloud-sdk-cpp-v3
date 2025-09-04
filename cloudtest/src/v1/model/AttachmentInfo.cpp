

#include "huaweicloud/cloudtest/v1/model/AttachmentInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AttachmentInfo::AttachmentInfo()
{
    docId_ = "";
    docIdIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    storeFileName_ = "";
    storeFileNameIsSet_ = false;
    relatedType_ = "";
    relatedTypeIsSet_ = false;
    fileSize_ = 0;
    fileSizeIsSet_ = false;
}

AttachmentInfo::~AttachmentInfo() = default;

void AttachmentInfo::validate()
{
}

web::json::value AttachmentInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(docIdIsSet_) {
        val[utility::conversions::to_string_t("doc_id")] = ModelBase::toJson(docId_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }
    if(storeFileNameIsSet_) {
        val[utility::conversions::to_string_t("store_file_name")] = ModelBase::toJson(storeFileName_);
    }
    if(relatedTypeIsSet_) {
        val[utility::conversions::to_string_t("related_type")] = ModelBase::toJson(relatedType_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }

    return val;
}
bool AttachmentInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("doc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("doc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("store_file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("store_file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStoreFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("related_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSize(refVal);
        }
    }
    return ok;
}


std::string AttachmentInfo::getDocId() const
{
    return docId_;
}

void AttachmentInfo::setDocId(const std::string& value)
{
    docId_ = value;
    docIdIsSet_ = true;
}

bool AttachmentInfo::docIdIsSet() const
{
    return docIdIsSet_;
}

void AttachmentInfo::unsetdocId()
{
    docIdIsSet_ = false;
}

std::string AttachmentInfo::getFileName() const
{
    return fileName_;
}

void AttachmentInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool AttachmentInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void AttachmentInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string AttachmentInfo::getFilePath() const
{
    return filePath_;
}

void AttachmentInfo::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool AttachmentInfo::filePathIsSet() const
{
    return filePathIsSet_;
}

void AttachmentInfo::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string AttachmentInfo::getFileType() const
{
    return fileType_;
}

void AttachmentInfo::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool AttachmentInfo::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void AttachmentInfo::unsetfileType()
{
    fileTypeIsSet_ = false;
}

std::string AttachmentInfo::getStoreFileName() const
{
    return storeFileName_;
}

void AttachmentInfo::setStoreFileName(const std::string& value)
{
    storeFileName_ = value;
    storeFileNameIsSet_ = true;
}

bool AttachmentInfo::storeFileNameIsSet() const
{
    return storeFileNameIsSet_;
}

void AttachmentInfo::unsetstoreFileName()
{
    storeFileNameIsSet_ = false;
}

std::string AttachmentInfo::getRelatedType() const
{
    return relatedType_;
}

void AttachmentInfo::setRelatedType(const std::string& value)
{
    relatedType_ = value;
    relatedTypeIsSet_ = true;
}

bool AttachmentInfo::relatedTypeIsSet() const
{
    return relatedTypeIsSet_;
}

void AttachmentInfo::unsetrelatedType()
{
    relatedTypeIsSet_ = false;
}

int32_t AttachmentInfo::getFileSize() const
{
    return fileSize_;
}

void AttachmentInfo::setFileSize(int32_t value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool AttachmentInfo::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void AttachmentInfo::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

}
}
}
}
}


