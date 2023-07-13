

#include "huaweicloud/sis/v1/model/ShowVocabularyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




ShowVocabularyResponse::ShowVocabularyResponse()
{
    vocabularyId_ = "";
    vocabularyIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    contentsIsSet_ = false;
}

ShowVocabularyResponse::~ShowVocabularyResponse() = default;

void ShowVocabularyResponse::validate()
{
}

web::json::value ShowVocabularyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_id")] = ModelBase::toJson(vocabularyId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(contentsIsSet_) {
        val[utility::conversions::to_string_t("contents")] = ModelBase::toJson(contents_);
    }

    return val;
}

bool ShowVocabularyResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("contents"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contents"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContents(refVal);
        }
    }
    return ok;
}

std::string ShowVocabularyResponse::getVocabularyId() const
{
    return vocabularyId_;
}

void ShowVocabularyResponse::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool ShowVocabularyResponse::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void ShowVocabularyResponse::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

std::string ShowVocabularyResponse::getName() const
{
    return name_;
}

void ShowVocabularyResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowVocabularyResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowVocabularyResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowVocabularyResponse::getDescription() const
{
    return description_;
}

void ShowVocabularyResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowVocabularyResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowVocabularyResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowVocabularyResponse::getLanguage() const
{
    return language_;
}

void ShowVocabularyResponse::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ShowVocabularyResponse::languageIsSet() const
{
    return languageIsSet_;
}

void ShowVocabularyResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

std::vector<std::string>& ShowVocabularyResponse::getContents()
{
    return contents_;
}

void ShowVocabularyResponse::setContents(const std::vector<std::string>& value)
{
    contents_ = value;
    contentsIsSet_ = true;
}

bool ShowVocabularyResponse::contentsIsSet() const
{
    return contentsIsSet_;
}

void ShowVocabularyResponse::unsetcontents()
{
    contentsIsSet_ = false;
}

}
}
}
}
}


