

#include "huaweicloud/codehub/v4/model/ShowReadmeFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowReadmeFileResponse::ShowReadmeFileResponse()
{
    blobId_ = "";
    blobIdIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    encodingIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ShowReadmeFileResponse::~ShowReadmeFileResponse() = default;

void ShowReadmeFileResponse::validate()
{
}

web::json::value ShowReadmeFileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(blobIdIsSet_) {
        val[utility::conversions::to_string_t("blob_id")] = ModelBase::toJson(blobId_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(encodingIsSet_) {
        val[utility::conversions::to_string_t("encoding")] = ModelBase::toJson(encoding_);
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
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ShowReadmeFileResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("blob_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blob_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("encoding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encoding"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncoding(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
        }
    }
    return ok;
}


std::string ShowReadmeFileResponse::getBlobId() const
{
    return blobId_;
}

void ShowReadmeFileResponse::setBlobId(const std::string& value)
{
    blobId_ = value;
    blobIdIsSet_ = true;
}

bool ShowReadmeFileResponse::blobIdIsSet() const
{
    return blobIdIsSet_;
}

void ShowReadmeFileResponse::unsetblobId()
{
    blobIdIsSet_ = false;
}

std::string ShowReadmeFileResponse::getContent() const
{
    return content_;
}

void ShowReadmeFileResponse::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ShowReadmeFileResponse::contentIsSet() const
{
    return contentIsSet_;
}

void ShowReadmeFileResponse::unsetcontent()
{
    contentIsSet_ = false;
}

Object ShowReadmeFileResponse::getEncoding() const
{
    return encoding_;
}

void ShowReadmeFileResponse::setEncoding(const Object& value)
{
    encoding_ = value;
    encodingIsSet_ = true;
}

bool ShowReadmeFileResponse::encodingIsSet() const
{
    return encodingIsSet_;
}

void ShowReadmeFileResponse::unsetencoding()
{
    encodingIsSet_ = false;
}

std::string ShowReadmeFileResponse::getFileName() const
{
    return fileName_;
}

void ShowReadmeFileResponse::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ShowReadmeFileResponse::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ShowReadmeFileResponse::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string ShowReadmeFileResponse::getFilePath() const
{
    return filePath_;
}

void ShowReadmeFileResponse::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ShowReadmeFileResponse::filePathIsSet() const
{
    return filePathIsSet_;
}

void ShowReadmeFileResponse::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string ShowReadmeFileResponse::getFileType() const
{
    return fileType_;
}

void ShowReadmeFileResponse::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool ShowReadmeFileResponse::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void ShowReadmeFileResponse::unsetfileType()
{
    fileTypeIsSet_ = false;
}

int64_t ShowReadmeFileResponse::getSize() const
{
    return size_;
}

void ShowReadmeFileResponse::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ShowReadmeFileResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ShowReadmeFileResponse::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ShowReadmeFileResponse::getXTotal() const
{
    return xTotal_;
}

void ShowReadmeFileResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ShowReadmeFileResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ShowReadmeFileResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


