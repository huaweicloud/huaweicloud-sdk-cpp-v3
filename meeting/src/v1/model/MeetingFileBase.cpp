

#include "huaweicloud/meeting/v1/model/MeetingFileBase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




MeetingFileBase::MeetingFileBase()
{
    fileCode_ = "";
    fileCodeIsSet_ = false;
    topic_ = "";
    topicIsSet_ = false;
    fileId_ = "";
    fileIdIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    fileSize_ = 0L;
    fileSizeIsSet_ = false;
    thumbnailFileId_ = "";
    thumbnailFileIdIsSet_ = false;
    thumbnailFileName_ = "";
    thumbnailFileNameIsSet_ = false;
    thumbnailFileSize_ = 0L;
    thumbnailFileSizeIsSet_ = false;
    pdfFileId_ = "";
    pdfFileIdIsSet_ = false;
    pdfFileName_ = "";
    pdfFileNameIsSet_ = false;
    pdfFileSize_ = 0L;
    pdfFileSizeIsSet_ = false;
}

MeetingFileBase::~MeetingFileBase() = default;

void MeetingFileBase::validate()
{
}

web::json::value MeetingFileBase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileCodeIsSet_) {
        val[utility::conversions::to_string_t("fileCode")] = ModelBase::toJson(fileCode_);
    }
    if(topicIsSet_) {
        val[utility::conversions::to_string_t("topic")] = ModelBase::toJson(topic_);
    }
    if(fileIdIsSet_) {
        val[utility::conversions::to_string_t("fileId")] = ModelBase::toJson(fileId_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("fileName")] = ModelBase::toJson(fileName_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("fileSize")] = ModelBase::toJson(fileSize_);
    }
    if(thumbnailFileIdIsSet_) {
        val[utility::conversions::to_string_t("thumbnailFileId")] = ModelBase::toJson(thumbnailFileId_);
    }
    if(thumbnailFileNameIsSet_) {
        val[utility::conversions::to_string_t("thumbnailFileName")] = ModelBase::toJson(thumbnailFileName_);
    }
    if(thumbnailFileSizeIsSet_) {
        val[utility::conversions::to_string_t("thumbnailFileSize")] = ModelBase::toJson(thumbnailFileSize_);
    }
    if(pdfFileIdIsSet_) {
        val[utility::conversions::to_string_t("pdfFileId")] = ModelBase::toJson(pdfFileId_);
    }
    if(pdfFileNameIsSet_) {
        val[utility::conversions::to_string_t("pdfFileName")] = ModelBase::toJson(pdfFileName_);
    }
    if(pdfFileSizeIsSet_) {
        val[utility::conversions::to_string_t("pdfFileSize")] = ModelBase::toJson(pdfFileSize_);
    }

    return val;
}
bool MeetingFileBase::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fileCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fileCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fileId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fileId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fileName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fileName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fileSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fileSize"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thumbnailFileId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnailFileId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailFileId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thumbnailFileName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnailFileName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thumbnailFileSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnailFileSize"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailFileSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pdfFileId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pdfFileId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPdfFileId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pdfFileName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pdfFileName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPdfFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pdfFileSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pdfFileSize"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPdfFileSize(refVal);
        }
    }
    return ok;
}


std::string MeetingFileBase::getFileCode() const
{
    return fileCode_;
}

void MeetingFileBase::setFileCode(const std::string& value)
{
    fileCode_ = value;
    fileCodeIsSet_ = true;
}

bool MeetingFileBase::fileCodeIsSet() const
{
    return fileCodeIsSet_;
}

void MeetingFileBase::unsetfileCode()
{
    fileCodeIsSet_ = false;
}

std::string MeetingFileBase::getTopic() const
{
    return topic_;
}

void MeetingFileBase::setTopic(const std::string& value)
{
    topic_ = value;
    topicIsSet_ = true;
}

bool MeetingFileBase::topicIsSet() const
{
    return topicIsSet_;
}

void MeetingFileBase::unsettopic()
{
    topicIsSet_ = false;
}

std::string MeetingFileBase::getFileId() const
{
    return fileId_;
}

void MeetingFileBase::setFileId(const std::string& value)
{
    fileId_ = value;
    fileIdIsSet_ = true;
}

bool MeetingFileBase::fileIdIsSet() const
{
    return fileIdIsSet_;
}

void MeetingFileBase::unsetfileId()
{
    fileIdIsSet_ = false;
}

std::string MeetingFileBase::getFileName() const
{
    return fileName_;
}

void MeetingFileBase::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool MeetingFileBase::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void MeetingFileBase::unsetfileName()
{
    fileNameIsSet_ = false;
}

int64_t MeetingFileBase::getFileSize() const
{
    return fileSize_;
}

void MeetingFileBase::setFileSize(int64_t value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool MeetingFileBase::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void MeetingFileBase::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string MeetingFileBase::getThumbnailFileId() const
{
    return thumbnailFileId_;
}

void MeetingFileBase::setThumbnailFileId(const std::string& value)
{
    thumbnailFileId_ = value;
    thumbnailFileIdIsSet_ = true;
}

bool MeetingFileBase::thumbnailFileIdIsSet() const
{
    return thumbnailFileIdIsSet_;
}

void MeetingFileBase::unsetthumbnailFileId()
{
    thumbnailFileIdIsSet_ = false;
}

std::string MeetingFileBase::getThumbnailFileName() const
{
    return thumbnailFileName_;
}

void MeetingFileBase::setThumbnailFileName(const std::string& value)
{
    thumbnailFileName_ = value;
    thumbnailFileNameIsSet_ = true;
}

bool MeetingFileBase::thumbnailFileNameIsSet() const
{
    return thumbnailFileNameIsSet_;
}

void MeetingFileBase::unsetthumbnailFileName()
{
    thumbnailFileNameIsSet_ = false;
}

int64_t MeetingFileBase::getThumbnailFileSize() const
{
    return thumbnailFileSize_;
}

void MeetingFileBase::setThumbnailFileSize(int64_t value)
{
    thumbnailFileSize_ = value;
    thumbnailFileSizeIsSet_ = true;
}

bool MeetingFileBase::thumbnailFileSizeIsSet() const
{
    return thumbnailFileSizeIsSet_;
}

void MeetingFileBase::unsetthumbnailFileSize()
{
    thumbnailFileSizeIsSet_ = false;
}

std::string MeetingFileBase::getPdfFileId() const
{
    return pdfFileId_;
}

void MeetingFileBase::setPdfFileId(const std::string& value)
{
    pdfFileId_ = value;
    pdfFileIdIsSet_ = true;
}

bool MeetingFileBase::pdfFileIdIsSet() const
{
    return pdfFileIdIsSet_;
}

void MeetingFileBase::unsetpdfFileId()
{
    pdfFileIdIsSet_ = false;
}

std::string MeetingFileBase::getPdfFileName() const
{
    return pdfFileName_;
}

void MeetingFileBase::setPdfFileName(const std::string& value)
{
    pdfFileName_ = value;
    pdfFileNameIsSet_ = true;
}

bool MeetingFileBase::pdfFileNameIsSet() const
{
    return pdfFileNameIsSet_;
}

void MeetingFileBase::unsetpdfFileName()
{
    pdfFileNameIsSet_ = false;
}

int64_t MeetingFileBase::getPdfFileSize() const
{
    return pdfFileSize_;
}

void MeetingFileBase::setPdfFileSize(int64_t value)
{
    pdfFileSize_ = value;
    pdfFileSizeIsSet_ = true;
}

bool MeetingFileBase::pdfFileSizeIsSet() const
{
    return pdfFileSizeIsSet_;
}

void MeetingFileBase::unsetpdfFileSize()
{
    pdfFileSizeIsSet_ = false;
}

}
}
}
}
}


