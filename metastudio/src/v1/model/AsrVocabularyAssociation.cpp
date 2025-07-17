

#include "huaweicloud/metastudio/v1/model/AsrVocabularyAssociation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AsrVocabularyAssociation::AsrVocabularyAssociation()
{
    hotWordsId_ = "";
    hotWordsIdIsSet_ = false;
    vocabularyId_ = "";
    vocabularyIdIsSet_ = false;
    robotId_ = "";
    robotIdIsSet_ = false;
    languageIsSet_ = false;
}

AsrVocabularyAssociation::~AsrVocabularyAssociation() = default;

void AsrVocabularyAssociation::validate()
{
}

web::json::value AsrVocabularyAssociation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hotWordsIdIsSet_) {
        val[utility::conversions::to_string_t("hot_words_id")] = ModelBase::toJson(hotWordsId_);
    }
    if(vocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_id")] = ModelBase::toJson(vocabularyId_);
    }
    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool AsrVocabularyAssociation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hot_words_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hot_words_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotWordsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vocabulary_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vocabulary_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVocabularyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("robot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("robot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRobotId(refVal);
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
    return ok;
}


std::string AsrVocabularyAssociation::getHotWordsId() const
{
    return hotWordsId_;
}

void AsrVocabularyAssociation::setHotWordsId(const std::string& value)
{
    hotWordsId_ = value;
    hotWordsIdIsSet_ = true;
}

bool AsrVocabularyAssociation::hotWordsIdIsSet() const
{
    return hotWordsIdIsSet_;
}

void AsrVocabularyAssociation::unsethotWordsId()
{
    hotWordsIdIsSet_ = false;
}

std::string AsrVocabularyAssociation::getVocabularyId() const
{
    return vocabularyId_;
}

void AsrVocabularyAssociation::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool AsrVocabularyAssociation::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void AsrVocabularyAssociation::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

std::string AsrVocabularyAssociation::getRobotId() const
{
    return robotId_;
}

void AsrVocabularyAssociation::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool AsrVocabularyAssociation::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void AsrVocabularyAssociation::unsetrobotId()
{
    robotIdIsSet_ = false;
}

LanguageEnum AsrVocabularyAssociation::getLanguage() const
{
    return language_;
}

void AsrVocabularyAssociation::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool AsrVocabularyAssociation::languageIsSet() const
{
    return languageIsSet_;
}

void AsrVocabularyAssociation::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


