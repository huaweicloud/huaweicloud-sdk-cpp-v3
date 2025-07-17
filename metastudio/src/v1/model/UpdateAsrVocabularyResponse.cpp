

#include "huaweicloud/metastudio/v1/model/UpdateAsrVocabularyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateAsrVocabularyResponse::UpdateAsrVocabularyResponse()
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

UpdateAsrVocabularyResponse::~UpdateAsrVocabularyResponse() = default;

void UpdateAsrVocabularyResponse::validate()
{
}

web::json::value UpdateAsrVocabularyResponse::toJson() const
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
bool UpdateAsrVocabularyResponse::fromJson(const web::json::value& val)
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


std::string UpdateAsrVocabularyResponse::getAsrVocabularyId() const
{
    return asrVocabularyId_;
}

void UpdateAsrVocabularyResponse::setAsrVocabularyId(const std::string& value)
{
    asrVocabularyId_ = value;
    asrVocabularyIdIsSet_ = true;
}

bool UpdateAsrVocabularyResponse::asrVocabularyIdIsSet() const
{
    return asrVocabularyIdIsSet_;
}

void UpdateAsrVocabularyResponse::unsetasrVocabularyId()
{
    asrVocabularyIdIsSet_ = false;
}

AsrVocabularyTypeEnum UpdateAsrVocabularyResponse::getVocabularyType() const
{
    return vocabularyType_;
}

void UpdateAsrVocabularyResponse::setVocabularyType(const AsrVocabularyTypeEnum& value)
{
    vocabularyType_ = value;
    vocabularyTypeIsSet_ = true;
}

bool UpdateAsrVocabularyResponse::vocabularyTypeIsSet() const
{
    return vocabularyTypeIsSet_;
}

void UpdateAsrVocabularyResponse::unsetvocabularyType()
{
    vocabularyTypeIsSet_ = false;
}

std::string UpdateAsrVocabularyResponse::getName() const
{
    return name_;
}

void UpdateAsrVocabularyResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateAsrVocabularyResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateAsrVocabularyResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateAsrVocabularyResponse::getContent() const
{
    return content_;
}

void UpdateAsrVocabularyResponse::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool UpdateAsrVocabularyResponse::contentIsSet() const
{
    return contentIsSet_;
}

void UpdateAsrVocabularyResponse::unsetcontent()
{
    contentIsSet_ = false;
}

LanguageEnum UpdateAsrVocabularyResponse::getLanguage() const
{
    return language_;
}

void UpdateAsrVocabularyResponse::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool UpdateAsrVocabularyResponse::languageIsSet() const
{
    return languageIsSet_;
}

void UpdateAsrVocabularyResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string UpdateAsrVocabularyResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateAsrVocabularyResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateAsrVocabularyResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateAsrVocabularyResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UpdateAsrVocabularyResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateAsrVocabularyResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateAsrVocabularyResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateAsrVocabularyResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string UpdateAsrVocabularyResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateAsrVocabularyResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateAsrVocabularyResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateAsrVocabularyResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


