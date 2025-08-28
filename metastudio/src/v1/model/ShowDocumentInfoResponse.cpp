

#include "huaweicloud/metastudio/v1/model/ShowDocumentInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowDocumentInfoResponse::ShowDocumentInfoResponse()
{
    documentId_ = "";
    documentIdIsSet_ = false;
    knowledgeLibraryId_ = "";
    knowledgeLibraryIdIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    fileSize_ = 0L;
    fileSizeIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    splitType_ = 0;
    splitTypeIsSet_ = false;
    chunkSize_ = 0;
    chunkSizeIsSet_ = false;
    chunkType_ = "";
    chunkTypeIsSet_ = false;
    separatorsIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    documentTaskInfoIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowDocumentInfoResponse::~ShowDocumentInfoResponse() = default;

void ShowDocumentInfoResponse::validate()
{
}

web::json::value ShowDocumentInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(documentIdIsSet_) {
        val[utility::conversions::to_string_t("document_id")] = ModelBase::toJson(documentId_);
    }
    if(knowledgeLibraryIdIsSet_) {
        val[utility::conversions::to_string_t("knowledge_library_id")] = ModelBase::toJson(knowledgeLibraryId_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }
    if(splitTypeIsSet_) {
        val[utility::conversions::to_string_t("split_type")] = ModelBase::toJson(splitType_);
    }
    if(chunkSizeIsSet_) {
        val[utility::conversions::to_string_t("chunk_size")] = ModelBase::toJson(chunkSize_);
    }
    if(chunkTypeIsSet_) {
        val[utility::conversions::to_string_t("chunk_type")] = ModelBase::toJson(chunkType_);
    }
    if(separatorsIsSet_) {
        val[utility::conversions::to_string_t("separators")] = ModelBase::toJson(separators_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(documentTaskInfoIsSet_) {
        val[utility::conversions::to_string_t("document_task_info")] = ModelBase::toJson(documentTaskInfo_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowDocumentInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("document_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("document_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocumentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("knowledge_library_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_library_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeLibraryId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("split_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("split_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSplitType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chunk_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chunk_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChunkSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chunk_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chunk_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChunkType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("separators"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("separators"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeparators(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("document_task_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("document_task_info"));
        if(!fieldValue.is_null())
        {
            DocumentTaskInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocumentTaskInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowDocumentInfoResponse::getDocumentId() const
{
    return documentId_;
}

void ShowDocumentInfoResponse::setDocumentId(const std::string& value)
{
    documentId_ = value;
    documentIdIsSet_ = true;
}

bool ShowDocumentInfoResponse::documentIdIsSet() const
{
    return documentIdIsSet_;
}

void ShowDocumentInfoResponse::unsetdocumentId()
{
    documentIdIsSet_ = false;
}

std::string ShowDocumentInfoResponse::getKnowledgeLibraryId() const
{
    return knowledgeLibraryId_;
}

void ShowDocumentInfoResponse::setKnowledgeLibraryId(const std::string& value)
{
    knowledgeLibraryId_ = value;
    knowledgeLibraryIdIsSet_ = true;
}

bool ShowDocumentInfoResponse::knowledgeLibraryIdIsSet() const
{
    return knowledgeLibraryIdIsSet_;
}

void ShowDocumentInfoResponse::unsetknowledgeLibraryId()
{
    knowledgeLibraryIdIsSet_ = false;
}

std::string ShowDocumentInfoResponse::getFileName() const
{
    return fileName_;
}

void ShowDocumentInfoResponse::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ShowDocumentInfoResponse::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ShowDocumentInfoResponse::unsetfileName()
{
    fileNameIsSet_ = false;
}

int64_t ShowDocumentInfoResponse::getFileSize() const
{
    return fileSize_;
}

void ShowDocumentInfoResponse::setFileSize(int64_t value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool ShowDocumentInfoResponse::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void ShowDocumentInfoResponse::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string ShowDocumentInfoResponse::getFileType() const
{
    return fileType_;
}

void ShowDocumentInfoResponse::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool ShowDocumentInfoResponse::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void ShowDocumentInfoResponse::unsetfileType()
{
    fileTypeIsSet_ = false;
}

int32_t ShowDocumentInfoResponse::getSplitType() const
{
    return splitType_;
}

void ShowDocumentInfoResponse::setSplitType(int32_t value)
{
    splitType_ = value;
    splitTypeIsSet_ = true;
}

bool ShowDocumentInfoResponse::splitTypeIsSet() const
{
    return splitTypeIsSet_;
}

void ShowDocumentInfoResponse::unsetsplitType()
{
    splitTypeIsSet_ = false;
}

int32_t ShowDocumentInfoResponse::getChunkSize() const
{
    return chunkSize_;
}

void ShowDocumentInfoResponse::setChunkSize(int32_t value)
{
    chunkSize_ = value;
    chunkSizeIsSet_ = true;
}

bool ShowDocumentInfoResponse::chunkSizeIsSet() const
{
    return chunkSizeIsSet_;
}

void ShowDocumentInfoResponse::unsetchunkSize()
{
    chunkSizeIsSet_ = false;
}

std::string ShowDocumentInfoResponse::getChunkType() const
{
    return chunkType_;
}

void ShowDocumentInfoResponse::setChunkType(const std::string& value)
{
    chunkType_ = value;
    chunkTypeIsSet_ = true;
}

bool ShowDocumentInfoResponse::chunkTypeIsSet() const
{
    return chunkTypeIsSet_;
}

void ShowDocumentInfoResponse::unsetchunkType()
{
    chunkTypeIsSet_ = false;
}

std::vector<std::string>& ShowDocumentInfoResponse::getSeparators()
{
    return separators_;
}

void ShowDocumentInfoResponse::setSeparators(const std::vector<std::string>& value)
{
    separators_ = value;
    separatorsIsSet_ = true;
}

bool ShowDocumentInfoResponse::separatorsIsSet() const
{
    return separatorsIsSet_;
}

void ShowDocumentInfoResponse::unsetseparators()
{
    separatorsIsSet_ = false;
}

std::string ShowDocumentInfoResponse::getCreateTime() const
{
    return createTime_;
}

void ShowDocumentInfoResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowDocumentInfoResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowDocumentInfoResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowDocumentInfoResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowDocumentInfoResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowDocumentInfoResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowDocumentInfoResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

DocumentTaskInfo ShowDocumentInfoResponse::getDocumentTaskInfo() const
{
    return documentTaskInfo_;
}

void ShowDocumentInfoResponse::setDocumentTaskInfo(const DocumentTaskInfo& value)
{
    documentTaskInfo_ = value;
    documentTaskInfoIsSet_ = true;
}

bool ShowDocumentInfoResponse::documentTaskInfoIsSet() const
{
    return documentTaskInfoIsSet_;
}

void ShowDocumentInfoResponse::unsetdocumentTaskInfo()
{
    documentTaskInfoIsSet_ = false;
}

std::string ShowDocumentInfoResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowDocumentInfoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowDocumentInfoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowDocumentInfoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


