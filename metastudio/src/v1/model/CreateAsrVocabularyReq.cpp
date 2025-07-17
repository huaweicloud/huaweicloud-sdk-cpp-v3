

#include "huaweicloud/metastudio/v1/model/CreateAsrVocabularyReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateAsrVocabularyReq::CreateAsrVocabularyReq()
{
    vocabularyTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    languageIsSet_ = false;
    mobvoiVocabularyIsSet_ = false;
}

CreateAsrVocabularyReq::~CreateAsrVocabularyReq() = default;

void CreateAsrVocabularyReq::validate()
{
}

web::json::value CreateAsrVocabularyReq::toJson() const
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
bool CreateAsrVocabularyReq::fromJson(const web::json::value& val)
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


AsrVocabularyTypeEnum CreateAsrVocabularyReq::getVocabularyType() const
{
    return vocabularyType_;
}

void CreateAsrVocabularyReq::setVocabularyType(const AsrVocabularyTypeEnum& value)
{
    vocabularyType_ = value;
    vocabularyTypeIsSet_ = true;
}

bool CreateAsrVocabularyReq::vocabularyTypeIsSet() const
{
    return vocabularyTypeIsSet_;
}

void CreateAsrVocabularyReq::unsetvocabularyType()
{
    vocabularyTypeIsSet_ = false;
}

std::string CreateAsrVocabularyReq::getName() const
{
    return name_;
}

void CreateAsrVocabularyReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateAsrVocabularyReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateAsrVocabularyReq::unsetname()
{
    nameIsSet_ = false;
}

LanguageEnum CreateAsrVocabularyReq::getLanguage() const
{
    return language_;
}

void CreateAsrVocabularyReq::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CreateAsrVocabularyReq::languageIsSet() const
{
    return languageIsSet_;
}

void CreateAsrVocabularyReq::unsetlanguage()
{
    languageIsSet_ = false;
}

MobvoiVocabulary CreateAsrVocabularyReq::getMobvoiVocabulary() const
{
    return mobvoiVocabulary_;
}

void CreateAsrVocabularyReq::setMobvoiVocabulary(const MobvoiVocabulary& value)
{
    mobvoiVocabulary_ = value;
    mobvoiVocabularyIsSet_ = true;
}

bool CreateAsrVocabularyReq::mobvoiVocabularyIsSet() const
{
    return mobvoiVocabularyIsSet_;
}

void CreateAsrVocabularyReq::unsetmobvoiVocabulary()
{
    mobvoiVocabularyIsSet_ = false;
}

}
}
}
}
}


