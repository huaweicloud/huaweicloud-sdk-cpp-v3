

#include "huaweicloud/metastudio/v1/model/ShowAsrVocabularyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowAsrVocabularyResponse::ShowAsrVocabularyResponse()
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

ShowAsrVocabularyResponse::~ShowAsrVocabularyResponse() = default;

void ShowAsrVocabularyResponse::validate()
{
}

web::json::value ShowAsrVocabularyResponse::toJson() const
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
bool ShowAsrVocabularyResponse::fromJson(const web::json::value& val)
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


std::string ShowAsrVocabularyResponse::getAsrVocabularyId() const
{
    return asrVocabularyId_;
}

void ShowAsrVocabularyResponse::setAsrVocabularyId(const std::string& value)
{
    asrVocabularyId_ = value;
    asrVocabularyIdIsSet_ = true;
}

bool ShowAsrVocabularyResponse::asrVocabularyIdIsSet() const
{
    return asrVocabularyIdIsSet_;
}

void ShowAsrVocabularyResponse::unsetasrVocabularyId()
{
    asrVocabularyIdIsSet_ = false;
}

AsrVocabularyTypeEnum ShowAsrVocabularyResponse::getVocabularyType() const
{
    return vocabularyType_;
}

void ShowAsrVocabularyResponse::setVocabularyType(const AsrVocabularyTypeEnum& value)
{
    vocabularyType_ = value;
    vocabularyTypeIsSet_ = true;
}

bool ShowAsrVocabularyResponse::vocabularyTypeIsSet() const
{
    return vocabularyTypeIsSet_;
}

void ShowAsrVocabularyResponse::unsetvocabularyType()
{
    vocabularyTypeIsSet_ = false;
}

std::string ShowAsrVocabularyResponse::getName() const
{
    return name_;
}

void ShowAsrVocabularyResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowAsrVocabularyResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowAsrVocabularyResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowAsrVocabularyResponse::getContent() const
{
    return content_;
}

void ShowAsrVocabularyResponse::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ShowAsrVocabularyResponse::contentIsSet() const
{
    return contentIsSet_;
}

void ShowAsrVocabularyResponse::unsetcontent()
{
    contentIsSet_ = false;
}

LanguageEnum ShowAsrVocabularyResponse::getLanguage() const
{
    return language_;
}

void ShowAsrVocabularyResponse::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ShowAsrVocabularyResponse::languageIsSet() const
{
    return languageIsSet_;
}

void ShowAsrVocabularyResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string ShowAsrVocabularyResponse::getCreateTime() const
{
    return createTime_;
}

void ShowAsrVocabularyResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowAsrVocabularyResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowAsrVocabularyResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowAsrVocabularyResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowAsrVocabularyResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowAsrVocabularyResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowAsrVocabularyResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowAsrVocabularyResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowAsrVocabularyResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowAsrVocabularyResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowAsrVocabularyResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


