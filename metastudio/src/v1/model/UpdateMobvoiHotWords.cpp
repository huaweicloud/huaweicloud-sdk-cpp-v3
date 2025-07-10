

#include "huaweicloud/metastudio/v1/model/UpdateMobvoiHotWords.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateMobvoiHotWords::UpdateMobvoiHotWords()
{
    vocabularyId_ = "";
    vocabularyIdIsSet_ = false;
    languageIsSet_ = false;
}

UpdateMobvoiHotWords::~UpdateMobvoiHotWords() = default;

void UpdateMobvoiHotWords::validate()
{
}

web::json::value UpdateMobvoiHotWords::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_id")] = ModelBase::toJson(vocabularyId_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool UpdateMobvoiHotWords::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vocabulary_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vocabulary_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVocabularyId(refVal);
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


std::string UpdateMobvoiHotWords::getVocabularyId() const
{
    return vocabularyId_;
}

void UpdateMobvoiHotWords::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool UpdateMobvoiHotWords::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void UpdateMobvoiHotWords::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

LanguageEnum UpdateMobvoiHotWords::getLanguage() const
{
    return language_;
}

void UpdateMobvoiHotWords::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool UpdateMobvoiHotWords::languageIsSet() const
{
    return languageIsSet_;
}

void UpdateMobvoiHotWords::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


