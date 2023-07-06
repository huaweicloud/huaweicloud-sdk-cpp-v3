

#include "huaweicloud/sis/v1/model/PutUpdateVocabReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




PutUpdateVocabReq::PutUpdateVocabReq()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    contentsIsSet_ = false;
}

PutUpdateVocabReq::~PutUpdateVocabReq() = default;

void PutUpdateVocabReq::validate()
{
}

web::json::value PutUpdateVocabReq::toJson() const
{
    web::json::value val = web::json::value::object();

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

bool PutUpdateVocabReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

std::string PutUpdateVocabReq::getName() const
{
    return name_;
}

void PutUpdateVocabReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PutUpdateVocabReq::nameIsSet() const
{
    return nameIsSet_;
}

void PutUpdateVocabReq::unsetname()
{
    nameIsSet_ = false;
}

std::string PutUpdateVocabReq::getDescription() const
{
    return description_;
}

void PutUpdateVocabReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PutUpdateVocabReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PutUpdateVocabReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PutUpdateVocabReq::getLanguage() const
{
    return language_;
}

void PutUpdateVocabReq::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool PutUpdateVocabReq::languageIsSet() const
{
    return languageIsSet_;
}

void PutUpdateVocabReq::unsetlanguage()
{
    languageIsSet_ = false;
}

std::vector<std::string>& PutUpdateVocabReq::getContents()
{
    return contents_;
}

void PutUpdateVocabReq::setContents(const std::vector<std::string>& value)
{
    contents_ = value;
    contentsIsSet_ = true;
}

bool PutUpdateVocabReq::contentsIsSet() const
{
    return contentsIsSet_;
}

void PutUpdateVocabReq::unsetcontents()
{
    contentsIsSet_ = false;
}

}
}
}
}
}


