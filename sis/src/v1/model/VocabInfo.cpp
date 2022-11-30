

#include "huaweicloud/sis/v1/model/VocabInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




VocabInfo::VocabInfo()
{
    vocabularyId_ = "";
    vocabularyIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

VocabInfo::~VocabInfo() = default;

void VocabInfo::validate()
{
}

web::json::value VocabInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_id")] = ModelBase::toJson(vocabularyId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool VocabInfo::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string VocabInfo::getVocabularyId() const
{
    return vocabularyId_;
}

void VocabInfo::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool VocabInfo::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void VocabInfo::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

std::string VocabInfo::getName() const
{
    return name_;
}

void VocabInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VocabInfo::nameIsSet() const
{
    return nameIsSet_;
}

void VocabInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string VocabInfo::getLanguage() const
{
    return language_;
}

void VocabInfo::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool VocabInfo::languageIsSet() const
{
    return languageIsSet_;
}

void VocabInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string VocabInfo::getDescription() const
{
    return description_;
}

void VocabInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool VocabInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void VocabInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


