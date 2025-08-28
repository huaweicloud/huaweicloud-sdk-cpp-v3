

#include "huaweicloud/metastudio/v1/model/RecallKnowledgeLibraryInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




RecallKnowledgeLibraryInfo::RecallKnowledgeLibraryInfo()
{
    documentId_ = "";
    documentIdIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    questionAnswerId_ = "";
    questionAnswerIdIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    score_ = 0.0;
    scoreIsSet_ = false;
}

RecallKnowledgeLibraryInfo::~RecallKnowledgeLibraryInfo() = default;

void RecallKnowledgeLibraryInfo::validate()
{
}

web::json::value RecallKnowledgeLibraryInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(documentIdIsSet_) {
        val[utility::conversions::to_string_t("document_id")] = ModelBase::toJson(documentId_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }
    if(questionAnswerIdIsSet_) {
        val[utility::conversions::to_string_t("question_answer_id")] = ModelBase::toJson(questionAnswerId_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }

    return val;
}
bool RecallKnowledgeLibraryInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("question_answer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("question_answer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuestionAnswerId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("score"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScore(refVal);
        }
    }
    return ok;
}


std::string RecallKnowledgeLibraryInfo::getDocumentId() const
{
    return documentId_;
}

void RecallKnowledgeLibraryInfo::setDocumentId(const std::string& value)
{
    documentId_ = value;
    documentIdIsSet_ = true;
}

bool RecallKnowledgeLibraryInfo::documentIdIsSet() const
{
    return documentIdIsSet_;
}

void RecallKnowledgeLibraryInfo::unsetdocumentId()
{
    documentIdIsSet_ = false;
}

std::string RecallKnowledgeLibraryInfo::getFileName() const
{
    return fileName_;
}

void RecallKnowledgeLibraryInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool RecallKnowledgeLibraryInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void RecallKnowledgeLibraryInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string RecallKnowledgeLibraryInfo::getFileType() const
{
    return fileType_;
}

void RecallKnowledgeLibraryInfo::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool RecallKnowledgeLibraryInfo::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void RecallKnowledgeLibraryInfo::unsetfileType()
{
    fileTypeIsSet_ = false;
}

std::string RecallKnowledgeLibraryInfo::getQuestionAnswerId() const
{
    return questionAnswerId_;
}

void RecallKnowledgeLibraryInfo::setQuestionAnswerId(const std::string& value)
{
    questionAnswerId_ = value;
    questionAnswerIdIsSet_ = true;
}

bool RecallKnowledgeLibraryInfo::questionAnswerIdIsSet() const
{
    return questionAnswerIdIsSet_;
}

void RecallKnowledgeLibraryInfo::unsetquestionAnswerId()
{
    questionAnswerIdIsSet_ = false;
}

std::string RecallKnowledgeLibraryInfo::getContent() const
{
    return content_;
}

void RecallKnowledgeLibraryInfo::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool RecallKnowledgeLibraryInfo::contentIsSet() const
{
    return contentIsSet_;
}

void RecallKnowledgeLibraryInfo::unsetcontent()
{
    contentIsSet_ = false;
}

double RecallKnowledgeLibraryInfo::getScore() const
{
    return score_;
}

void RecallKnowledgeLibraryInfo::setScore(double value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool RecallKnowledgeLibraryInfo::scoreIsSet() const
{
    return scoreIsSet_;
}

void RecallKnowledgeLibraryInfo::unsetscore()
{
    scoreIsSet_ = false;
}

}
}
}
}
}


