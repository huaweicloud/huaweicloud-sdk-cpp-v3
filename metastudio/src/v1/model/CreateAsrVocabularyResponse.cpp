

#include "huaweicloud/metastudio/v1/model/CreateAsrVocabularyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateAsrVocabularyResponse::CreateAsrVocabularyResponse()
{
    asrVocabularyId_ = "";
    asrVocabularyIdIsSet_ = false;
    vocabularyTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    languageIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateAsrVocabularyResponse::~CreateAsrVocabularyResponse() = default;

void CreateAsrVocabularyResponse::validate()
{
}

web::json::value CreateAsrVocabularyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(asrVocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("asr_vocabulary_id")] = ModelBase::toJson(asrVocabularyId_);
    }
    if(vocabularyTypeIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_type")] = ModelBase::toJson(vocabularyType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateAsrVocabularyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asr_vocabulary_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asr_vocabulary_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsrVocabularyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vocabulary_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vocabulary_type"));
        if(!fieldValue.is_null())
        {
            AsrVocabularyTypeEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVocabularyType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            LanguageEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
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


std::string CreateAsrVocabularyResponse::getAsrVocabularyId() const
{
    return asrVocabularyId_;
}

void CreateAsrVocabularyResponse::setAsrVocabularyId(const std::string& value)
{
    asrVocabularyId_ = value;
    asrVocabularyIdIsSet_ = true;
}

bool CreateAsrVocabularyResponse::asrVocabularyIdIsSet() const
{
    return asrVocabularyIdIsSet_;
}

void CreateAsrVocabularyResponse::unsetasrVocabularyId()
{
    asrVocabularyIdIsSet_ = false;
}

AsrVocabularyTypeEnum CreateAsrVocabularyResponse::getVocabularyType() const
{
    return vocabularyType_;
}

void CreateAsrVocabularyResponse::setVocabularyType(const AsrVocabularyTypeEnum& value)
{
    vocabularyType_ = value;
    vocabularyTypeIsSet_ = true;
}

bool CreateAsrVocabularyResponse::vocabularyTypeIsSet() const
{
    return vocabularyTypeIsSet_;
}

void CreateAsrVocabularyResponse::unsetvocabularyType()
{
    vocabularyTypeIsSet_ = false;
}

std::string CreateAsrVocabularyResponse::getName() const
{
    return name_;
}

void CreateAsrVocabularyResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateAsrVocabularyResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateAsrVocabularyResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateAsrVocabularyResponse::getContent() const
{
    return content_;
}

void CreateAsrVocabularyResponse::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool CreateAsrVocabularyResponse::contentIsSet() const
{
    return contentIsSet_;
}

void CreateAsrVocabularyResponse::unsetcontent()
{
    contentIsSet_ = false;
}

LanguageEnum CreateAsrVocabularyResponse::getLanguage() const
{
    return language_;
}

void CreateAsrVocabularyResponse::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CreateAsrVocabularyResponse::languageIsSet() const
{
    return languageIsSet_;
}

void CreateAsrVocabularyResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string CreateAsrVocabularyResponse::getCreateTime() const
{
    return createTime_;
}

void CreateAsrVocabularyResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateAsrVocabularyResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateAsrVocabularyResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateAsrVocabularyResponse::getUpdateTime() const
{
    return updateTime_;
}

void CreateAsrVocabularyResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CreateAsrVocabularyResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CreateAsrVocabularyResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string CreateAsrVocabularyResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateAsrVocabularyResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateAsrVocabularyResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateAsrVocabularyResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


