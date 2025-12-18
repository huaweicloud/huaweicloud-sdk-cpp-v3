

#include "huaweicloud/meeting/v1/model/ListMeetingFileResponseDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ListMeetingFileResponseDTO::ListMeetingFileResponseDTO()
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
    userId_ = "";
    userIdIsSet_ = false;
    creationTimestamp_ = 0L;
    creationTimestampIsSet_ = false;
}

ListMeetingFileResponseDTO::~ListMeetingFileResponseDTO() = default;

void ListMeetingFileResponseDTO::validate()
{
}

web::json::value ListMeetingFileResponseDTO::toJson() const
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
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(userId_);
    }
    if(creationTimestampIsSet_) {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(creationTimestamp_);
    }

    return val;
}
bool ListMeetingFileResponseDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("userId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
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


std::string ListMeetingFileResponseDTO::getFileCode() const
{
    return fileCode_;
}

void ListMeetingFileResponseDTO::setFileCode(const std::string& value)
{
    fileCode_ = value;
    fileCodeIsSet_ = true;
}

bool ListMeetingFileResponseDTO::fileCodeIsSet() const
{
    return fileCodeIsSet_;
}

void ListMeetingFileResponseDTO::unsetfileCode()
{
    fileCodeIsSet_ = false;
}

std::string ListMeetingFileResponseDTO::getTopic() const
{
    return topic_;
}

void ListMeetingFileResponseDTO::setTopic(const std::string& value)
{
    topic_ = value;
    topicIsSet_ = true;
}

bool ListMeetingFileResponseDTO::topicIsSet() const
{
    return topicIsSet_;
}

void ListMeetingFileResponseDTO::unsettopic()
{
    topicIsSet_ = false;
}

std::string ListMeetingFileResponseDTO::getFileId() const
{
    return fileId_;
}

void ListMeetingFileResponseDTO::setFileId(const std::string& value)
{
    fileId_ = value;
    fileIdIsSet_ = true;
}

bool ListMeetingFileResponseDTO::fileIdIsSet() const
{
    return fileIdIsSet_;
}

void ListMeetingFileResponseDTO::unsetfileId()
{
    fileIdIsSet_ = false;
}

std::string ListMeetingFileResponseDTO::getFileName() const
{
    return fileName_;
}

void ListMeetingFileResponseDTO::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ListMeetingFileResponseDTO::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ListMeetingFileResponseDTO::unsetfileName()
{
    fileNameIsSet_ = false;
}

int64_t ListMeetingFileResponseDTO::getFileSize() const
{
    return fileSize_;
}

void ListMeetingFileResponseDTO::setFileSize(int64_t value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool ListMeetingFileResponseDTO::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void ListMeetingFileResponseDTO::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string ListMeetingFileResponseDTO::getThumbnailFileId() const
{
    return thumbnailFileId_;
}

void ListMeetingFileResponseDTO::setThumbnailFileId(const std::string& value)
{
    thumbnailFileId_ = value;
    thumbnailFileIdIsSet_ = true;
}

bool ListMeetingFileResponseDTO::thumbnailFileIdIsSet() const
{
    return thumbnailFileIdIsSet_;
}

void ListMeetingFileResponseDTO::unsetthumbnailFileId()
{
    thumbnailFileIdIsSet_ = false;
}

std::string ListMeetingFileResponseDTO::getThumbnailFileName() const
{
    return thumbnailFileName_;
}

void ListMeetingFileResponseDTO::setThumbnailFileName(const std::string& value)
{
    thumbnailFileName_ = value;
    thumbnailFileNameIsSet_ = true;
}

bool ListMeetingFileResponseDTO::thumbnailFileNameIsSet() const
{
    return thumbnailFileNameIsSet_;
}

void ListMeetingFileResponseDTO::unsetthumbnailFileName()
{
    thumbnailFileNameIsSet_ = false;
}

int64_t ListMeetingFileResponseDTO::getThumbnailFileSize() const
{
    return thumbnailFileSize_;
}

void ListMeetingFileResponseDTO::setThumbnailFileSize(int64_t value)
{
    thumbnailFileSize_ = value;
    thumbnailFileSizeIsSet_ = true;
}

bool ListMeetingFileResponseDTO::thumbnailFileSizeIsSet() const
{
    return thumbnailFileSizeIsSet_;
}

void ListMeetingFileResponseDTO::unsetthumbnailFileSize()
{
    thumbnailFileSizeIsSet_ = false;
}

std::string ListMeetingFileResponseDTO::getPdfFileId() const
{
    return pdfFileId_;
}

void ListMeetingFileResponseDTO::setPdfFileId(const std::string& value)
{
    pdfFileId_ = value;
    pdfFileIdIsSet_ = true;
}

bool ListMeetingFileResponseDTO::pdfFileIdIsSet() const
{
    return pdfFileIdIsSet_;
}

void ListMeetingFileResponseDTO::unsetpdfFileId()
{
    pdfFileIdIsSet_ = false;
}

std::string ListMeetingFileResponseDTO::getPdfFileName() const
{
    return pdfFileName_;
}

void ListMeetingFileResponseDTO::setPdfFileName(const std::string& value)
{
    pdfFileName_ = value;
    pdfFileNameIsSet_ = true;
}

bool ListMeetingFileResponseDTO::pdfFileNameIsSet() const
{
    return pdfFileNameIsSet_;
}

void ListMeetingFileResponseDTO::unsetpdfFileName()
{
    pdfFileNameIsSet_ = false;
}

int64_t ListMeetingFileResponseDTO::getPdfFileSize() const
{
    return pdfFileSize_;
}

void ListMeetingFileResponseDTO::setPdfFileSize(int64_t value)
{
    pdfFileSize_ = value;
    pdfFileSizeIsSet_ = true;
}

bool ListMeetingFileResponseDTO::pdfFileSizeIsSet() const
{
    return pdfFileSizeIsSet_;
}

void ListMeetingFileResponseDTO::unsetpdfFileSize()
{
    pdfFileSizeIsSet_ = false;
}

std::string ListMeetingFileResponseDTO::getUserId() const
{
    return userId_;
}

void ListMeetingFileResponseDTO::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ListMeetingFileResponseDTO::userIdIsSet() const
{
    return userIdIsSet_;
}

void ListMeetingFileResponseDTO::unsetuserId()
{
    userIdIsSet_ = false;
}

int64_t ListMeetingFileResponseDTO::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void ListMeetingFileResponseDTO::setCreationTimestamp(int64_t value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool ListMeetingFileResponseDTO::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void ListMeetingFileResponseDTO::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

}
}
}
}
}


