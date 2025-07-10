

#include "huaweicloud/metastudio/v1/model/CreateMobvoiHotWords.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateMobvoiHotWords::CreateMobvoiHotWords()
{
    vocabularyId_ = "";
    vocabularyIdIsSet_ = false;
    languageIsSet_ = false;
}

CreateMobvoiHotWords::~CreateMobvoiHotWords() = default;

void CreateMobvoiHotWords::validate()
{
}

web::json::value CreateMobvoiHotWords::toJson() const
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
bool CreateMobvoiHotWords::fromJson(const web::json::value& val)
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


std::string CreateMobvoiHotWords::getVocabularyId() const
{
    return vocabularyId_;
}

void CreateMobvoiHotWords::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool CreateMobvoiHotWords::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void CreateMobvoiHotWords::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

LanguageEnum CreateMobvoiHotWords::getLanguage() const
{
    return language_;
}

void CreateMobvoiHotWords::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CreateMobvoiHotWords::languageIsSet() const
{
    return languageIsSet_;
}

void CreateMobvoiHotWords::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


