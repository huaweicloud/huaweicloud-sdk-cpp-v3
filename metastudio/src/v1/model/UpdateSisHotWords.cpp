

#include "huaweicloud/metastudio/v1/model/UpdateSisHotWords.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateSisHotWords::UpdateSisHotWords()
{
    vocabularyId_ = "";
    vocabularyIdIsSet_ = false;
    sisProjectId_ = "";
    sisProjectIdIsSet_ = false;
    region_ = 0;
    regionIsSet_ = false;
    languageIsSet_ = false;
}

UpdateSisHotWords::~UpdateSisHotWords() = default;

void UpdateSisHotWords::validate()
{
}

web::json::value UpdateSisHotWords::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_id")] = ModelBase::toJson(vocabularyId_);
    }
    if(sisProjectIdIsSet_) {
        val[utility::conversions::to_string_t("sis_project_id")] = ModelBase::toJson(sisProjectId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool UpdateSisHotWords::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sis_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sis_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSisProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
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


std::string UpdateSisHotWords::getVocabularyId() const
{
    return vocabularyId_;
}

void UpdateSisHotWords::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool UpdateSisHotWords::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void UpdateSisHotWords::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

std::string UpdateSisHotWords::getSisProjectId() const
{
    return sisProjectId_;
}

void UpdateSisHotWords::setSisProjectId(const std::string& value)
{
    sisProjectId_ = value;
    sisProjectIdIsSet_ = true;
}

bool UpdateSisHotWords::sisProjectIdIsSet() const
{
    return sisProjectIdIsSet_;
}

void UpdateSisHotWords::unsetsisProjectId()
{
    sisProjectIdIsSet_ = false;
}

int32_t UpdateSisHotWords::getRegion() const
{
    return region_;
}

void UpdateSisHotWords::setRegion(int32_t value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool UpdateSisHotWords::regionIsSet() const
{
    return regionIsSet_;
}

void UpdateSisHotWords::unsetregion()
{
    regionIsSet_ = false;
}

LanguageEnum UpdateSisHotWords::getLanguage() const
{
    return language_;
}

void UpdateSisHotWords::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool UpdateSisHotWords::languageIsSet() const
{
    return languageIsSet_;
}

void UpdateSisHotWords::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


