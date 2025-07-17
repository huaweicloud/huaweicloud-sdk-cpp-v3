

#include "huaweicloud/metastudio/v1/model/UpdateAsrVocabularyReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateAsrVocabularyReq::UpdateAsrVocabularyReq()
{
    vocabularyTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    languageIsSet_ = false;
    mobvoiVocabularyIsSet_ = false;
}

UpdateAsrVocabularyReq::~UpdateAsrVocabularyReq() = default;

void UpdateAsrVocabularyReq::validate()
{
}

web::json::value UpdateAsrVocabularyReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vocabularyTypeIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_type")] = ModelBase::toJson(vocabularyType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(mobvoiVocabularyIsSet_) {
        val[utility::conversions::to_string_t("mobvoi_vocabulary")] = ModelBase::toJson(mobvoiVocabulary_);
    }

    return val;
}
bool UpdateAsrVocabularyReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            LanguageEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mobvoi_vocabulary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mobvoi_vocabulary"));
        if(!fieldValue.is_null())
        {
            MobvoiVocabulary refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMobvoiVocabulary(refVal);
        }
    }
    return ok;
}


AsrVocabularyTypeEnum UpdateAsrVocabularyReq::getVocabularyType() const
{
    return vocabularyType_;
}

void UpdateAsrVocabularyReq::setVocabularyType(const AsrVocabularyTypeEnum& value)
{
    vocabularyType_ = value;
    vocabularyTypeIsSet_ = true;
}

bool UpdateAsrVocabularyReq::vocabularyTypeIsSet() const
{
    return vocabularyTypeIsSet_;
}

void UpdateAsrVocabularyReq::unsetvocabularyType()
{
    vocabularyTypeIsSet_ = false;
}

std::string UpdateAsrVocabularyReq::getName() const
{
    return name_;
}

void UpdateAsrVocabularyReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateAsrVocabularyReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateAsrVocabularyReq::unsetname()
{
    nameIsSet_ = false;
}

LanguageEnum UpdateAsrVocabularyReq::getLanguage() const
{
    return language_;
}

void UpdateAsrVocabularyReq::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool UpdateAsrVocabularyReq::languageIsSet() const
{
    return languageIsSet_;
}

void UpdateAsrVocabularyReq::unsetlanguage()
{
    languageIsSet_ = false;
}

MobvoiVocabulary UpdateAsrVocabularyReq::getMobvoiVocabulary() const
{
    return mobvoiVocabulary_;
}

void UpdateAsrVocabularyReq::setMobvoiVocabulary(const MobvoiVocabulary& value)
{
    mobvoiVocabulary_ = value;
    mobvoiVocabularyIsSet_ = true;
}

bool UpdateAsrVocabularyReq::mobvoiVocabularyIsSet() const
{
    return mobvoiVocabularyIsSet_;
}

void UpdateAsrVocabularyReq::unsetmobvoiVocabulary()
{
    mobvoiVocabularyIsSet_ = false;
}

}
}
}
}
}


