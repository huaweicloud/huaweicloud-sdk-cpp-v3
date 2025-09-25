

#include "huaweicloud/codehub/v3/model/FilesResponseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




FilesResponseInfo::FilesResponseInfo()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
    encoding_ = "";
    encodingIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
    blobId_ = "";
    blobIdIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
}

FilesResponseInfo::~FilesResponseInfo() = default;

void FilesResponseInfo::validate()
{
}

web::json::value FilesResponseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(encodingIsSet_) {
        val[utility::conversions::to_string_t("encoding")] = ModelBase::toJson(encoding_);
    }
    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }
    if(blobIdIsSet_) {
        val[utility::conversions::to_string_t("blob_id")] = ModelBase::toJson(blobId_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}
bool FilesResponseInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encoding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encoding"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncoding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blob_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blob_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    return ok;
}


std::string FilesResponseInfo::getFileName() const
{
    return fileName_;
}

void FilesResponseInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool FilesResponseInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void FilesResponseInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string FilesResponseInfo::getFilePath() const
{
    return filePath_;
}

void FilesResponseInfo::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool FilesResponseInfo::filePathIsSet() const
{
    return filePathIsSet_;
}

void FilesResponseInfo::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string FilesResponseInfo::getSize() const
{
    return size_;
}

void FilesResponseInfo::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool FilesResponseInfo::sizeIsSet() const
{
    return sizeIsSet_;
}

void FilesResponseInfo::unsetsize()
{
    sizeIsSet_ = false;
}

std::string FilesResponseInfo::getEncoding() const
{
    return encoding_;
}

void FilesResponseInfo::setEncoding(const std::string& value)
{
    encoding_ = value;
    encodingIsSet_ = true;
}

bool FilesResponseInfo::encodingIsSet() const
{
    return encodingIsSet_;
}

void FilesResponseInfo::unsetencoding()
{
    encodingIsSet_ = false;
}

std::string FilesResponseInfo::getRef() const
{
    return ref_;
}

void FilesResponseInfo::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool FilesResponseInfo::refIsSet() const
{
    return refIsSet_;
}

void FilesResponseInfo::unsetref()
{
    refIsSet_ = false;
}

std::string FilesResponseInfo::getBlobId() const
{
    return blobId_;
}

void FilesResponseInfo::setBlobId(const std::string& value)
{
    blobId_ = value;
    blobIdIsSet_ = true;
}

bool FilesResponseInfo::blobIdIsSet() const
{
    return blobIdIsSet_;
}

void FilesResponseInfo::unsetblobId()
{
    blobIdIsSet_ = false;
}

std::string FilesResponseInfo::getFileType() const
{
    return fileType_;
}

void FilesResponseInfo::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool FilesResponseInfo::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void FilesResponseInfo::unsetfileType()
{
    fileTypeIsSet_ = false;
}

std::string FilesResponseInfo::getContent() const
{
    return content_;
}

void FilesResponseInfo::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool FilesResponseInfo::contentIsSet() const
{
    return contentIsSet_;
}

void FilesResponseInfo::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


