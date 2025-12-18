

#include "huaweicloud/meeting/v1/model/ShowMeetingFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowMeetingFileResponse::ShowMeetingFileResponse()
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
    fileUrl_ = "";
    fileUrlIsSet_ = false;
    thumbnailUrl_ = "";
    thumbnailUrlIsSet_ = false;
    pdfUrl_ = "";
    pdfUrlIsSet_ = false;
    creationTimestamp_ = 0L;
    creationTimestampIsSet_ = false;
}

ShowMeetingFileResponse::~ShowMeetingFileResponse() = default;

void ShowMeetingFileResponse::validate()
{
}

web::json::value ShowMeetingFileResponse::toJson() const
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
    if(fileUrlIsSet_) {
        val[utility::conversions::to_string_t("fileUrl")] = ModelBase::toJson(fileUrl_);
    }
    if(thumbnailUrlIsSet_) {
        val[utility::conversions::to_string_t("thumbnailUrl")] = ModelBase::toJson(thumbnailUrl_);
    }
    if(pdfUrlIsSet_) {
        val[utility::conversions::to_string_t("pdfUrl")] = ModelBase::toJson(pdfUrl_);
    }
    if(creationTimestampIsSet_) {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(creationTimestamp_);
    }

    return val;
}
bool ShowMeetingFileResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("fileUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fileUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thumbnailUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnailUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pdfUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pdfUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPdfUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creationTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creationTimestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTimestamp(refVal);
        }
    }
    return ok;
}


std::string ShowMeetingFileResponse::getFileCode() const
{
    return fileCode_;
}

void ShowMeetingFileResponse::setFileCode(const std::string& value)
{
    fileCode_ = value;
    fileCodeIsSet_ = true;
}

bool ShowMeetingFileResponse::fileCodeIsSet() const
{
    return fileCodeIsSet_;
}

void ShowMeetingFileResponse::unsetfileCode()
{
    fileCodeIsSet_ = false;
}

std::string ShowMeetingFileResponse::getTopic() const
{
    return topic_;
}

void ShowMeetingFileResponse::setTopic(const std::string& value)
{
    topic_ = value;
    topicIsSet_ = true;
}

bool ShowMeetingFileResponse::topicIsSet() const
{
    return topicIsSet_;
}

void ShowMeetingFileResponse::unsettopic()
{
    topicIsSet_ = false;
}

std::string ShowMeetingFileResponse::getFileId() const
{
    return fileId_;
}

void ShowMeetingFileResponse::setFileId(const std::string& value)
{
    fileId_ = value;
    fileIdIsSet_ = true;
}

bool ShowMeetingFileResponse::fileIdIsSet() const
{
    return fileIdIsSet_;
}

void ShowMeetingFileResponse::unsetfileId()
{
    fileIdIsSet_ = false;
}

std::string ShowMeetingFileResponse::getFileName() const
{
    return fileName_;
}

void ShowMeetingFileResponse::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ShowMeetingFileResponse::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ShowMeetingFileResponse::unsetfileName()
{
    fileNameIsSet_ = false;
}

int64_t ShowMeetingFileResponse::getFileSize() const
{
    return fileSize_;
}

void ShowMeetingFileResponse::setFileSize(int64_t value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool ShowMeetingFileResponse::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void ShowMeetingFileResponse::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string ShowMeetingFileResponse::getThumbnailFileId() const
{
    return thumbnailFileId_;
}

void ShowMeetingFileResponse::setThumbnailFileId(const std::string& value)
{
    thumbnailFileId_ = value;
    thumbnailFileIdIsSet_ = true;
}

bool ShowMeetingFileResponse::thumbnailFileIdIsSet() const
{
    return thumbnailFileIdIsSet_;
}

void ShowMeetingFileResponse::unsetthumbnailFileId()
{
    thumbnailFileIdIsSet_ = false;
}

std::string ShowMeetingFileResponse::getThumbnailFileName() const
{
    return thumbnailFileName_;
}

void ShowMeetingFileResponse::setThumbnailFileName(const std::string& value)
{
    thumbnailFileName_ = value;
    thumbnailFileNameIsSet_ = true;
}

bool ShowMeetingFileResponse::thumbnailFileNameIsSet() const
{
    return thumbnailFileNameIsSet_;
}

void ShowMeetingFileResponse::unsetthumbnailFileName()
{
    thumbnailFileNameIsSet_ = false;
}

int64_t ShowMeetingFileResponse::getThumbnailFileSize() const
{
    return thumbnailFileSize_;
}

void ShowMeetingFileResponse::setThumbnailFileSize(int64_t value)
{
    thumbnailFileSize_ = value;
    thumbnailFileSizeIsSet_ = true;
}

bool ShowMeetingFileResponse::thumbnailFileSizeIsSet() const
{
    return thumbnailFileSizeIsSet_;
}

void ShowMeetingFileResponse::unsetthumbnailFileSize()
{
    thumbnailFileSizeIsSet_ = false;
}

std::string ShowMeetingFileResponse::getPdfFileId() const
{
    return pdfFileId_;
}

void ShowMeetingFileResponse::setPdfFileId(const std::string& value)
{
    pdfFileId_ = value;
    pdfFileIdIsSet_ = true;
}

bool ShowMeetingFileResponse::pdfFileIdIsSet() const
{
    return pdfFileIdIsSet_;
}

void ShowMeetingFileResponse::unsetpdfFileId()
{
    pdfFileIdIsSet_ = false;
}

std::string ShowMeetingFileResponse::getPdfFileName() const
{
    return pdfFileName_;
}

void ShowMeetingFileResponse::setPdfFileName(const std::string& value)
{
    pdfFileName_ = value;
    pdfFileNameIsSet_ = true;
}

bool ShowMeetingFileResponse::pdfFileNameIsSet() const
{
    return pdfFileNameIsSet_;
}

void ShowMeetingFileResponse::unsetpdfFileName()
{
    pdfFileNameIsSet_ = false;
}

int64_t ShowMeetingFileResponse::getPdfFileSize() const
{
    return pdfFileSize_;
}

void ShowMeetingFileResponse::setPdfFileSize(int64_t value)
{
    pdfFileSize_ = value;
    pdfFileSizeIsSet_ = true;
}

bool ShowMeetingFileResponse::pdfFileSizeIsSet() const
{
    return pdfFileSizeIsSet_;
}

void ShowMeetingFileResponse::unsetpdfFileSize()
{
    pdfFileSizeIsSet_ = false;
}

std::string ShowMeetingFileResponse::getFileUrl() const
{
    return fileUrl_;
}

void ShowMeetingFileResponse::setFileUrl(const std::string& value)
{
    fileUrl_ = value;
    fileUrlIsSet_ = true;
}

bool ShowMeetingFileResponse::fileUrlIsSet() const
{
    return fileUrlIsSet_;
}

void ShowMeetingFileResponse::unsetfileUrl()
{
    fileUrlIsSet_ = false;
}

std::string ShowMeetingFileResponse::getThumbnailUrl() const
{
    return thumbnailUrl_;
}

void ShowMeetingFileResponse::setThumbnailUrl(const std::string& value)
{
    thumbnailUrl_ = value;
    thumbnailUrlIsSet_ = true;
}

bool ShowMeetingFileResponse::thumbnailUrlIsSet() const
{
    return thumbnailUrlIsSet_;
}

void ShowMeetingFileResponse::unsetthumbnailUrl()
{
    thumbnailUrlIsSet_ = false;
}

std::string ShowMeetingFileResponse::getPdfUrl() const
{
    return pdfUrl_;
}

void ShowMeetingFileResponse::setPdfUrl(const std::string& value)
{
    pdfUrl_ = value;
    pdfUrlIsSet_ = true;
}

bool ShowMeetingFileResponse::pdfUrlIsSet() const
{
    return pdfUrlIsSet_;
}

void ShowMeetingFileResponse::unsetpdfUrl()
{
    pdfUrlIsSet_ = false;
}

int64_t ShowMeetingFileResponse::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void ShowMeetingFileResponse::setCreationTimestamp(int64_t value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool ShowMeetingFileResponse::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void ShowMeetingFileResponse::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

}
}
}
}
}


