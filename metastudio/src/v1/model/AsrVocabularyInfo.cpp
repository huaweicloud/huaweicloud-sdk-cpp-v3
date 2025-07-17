

#include "huaweicloud/metastudio/v1/model/AsrVocabularyInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AsrVocabularyInfo::AsrVocabularyInfo()
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
}

AsrVocabularyInfo::~AsrVocabularyInfo() = default;

void AsrVocabularyInfo::validate()
{
}

web::json::value AsrVocabularyInfo::toJson() const
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

    return val;
}
bool AsrVocabularyInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string AsrVocabularyInfo::getAsrVocabularyId() const
{
    return asrVocabularyId_;
}

void AsrVocabularyInfo::setAsrVocabularyId(const std::string& value)
{
    asrVocabularyId_ = value;
    asrVocabularyIdIsSet_ = true;
}

bool AsrVocabularyInfo::asrVocabularyIdIsSet() const
{
    return asrVocabularyIdIsSet_;
}

void AsrVocabularyInfo::unsetasrVocabularyId()
{
    asrVocabularyIdIsSet_ = false;
}

AsrVocabularyTypeEnum AsrVocabularyInfo::getVocabularyType() const
{
    return vocabularyType_;
}

void AsrVocabularyInfo::setVocabularyType(const AsrVocabularyTypeEnum& value)
{
    vocabularyType_ = value;
    vocabularyTypeIsSet_ = true;
}

bool AsrVocabularyInfo::vocabularyTypeIsSet() const
{
    return vocabularyTypeIsSet_;
}

void AsrVocabularyInfo::unsetvocabularyType()
{
    vocabularyTypeIsSet_ = false;
}

std::string AsrVocabularyInfo::getName() const
{
    return name_;
}

void AsrVocabularyInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AsrVocabularyInfo::nameIsSet() const
{
    return nameIsSet_;
}

void AsrVocabularyInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string AsrVocabularyInfo::getContent() const
{
    return content_;
}

void AsrVocabularyInfo::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool AsrVocabularyInfo::contentIsSet() const
{
    return contentIsSet_;
}

void AsrVocabularyInfo::unsetcontent()
{
    contentIsSet_ = false;
}

LanguageEnum AsrVocabularyInfo::getLanguage() const
{
    return language_;
}

void AsrVocabularyInfo::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool AsrVocabularyInfo::languageIsSet() const
{
    return languageIsSet_;
}

void AsrVocabularyInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string AsrVocabularyInfo::getCreateTime() const
{
    return createTime_;
}

void AsrVocabularyInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AsrVocabularyInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AsrVocabularyInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string AsrVocabularyInfo::getUpdateTime() const
{
    return updateTime_;
}

void AsrVocabularyInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool AsrVocabularyInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void AsrVocabularyInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


