

#include "huaweicloud/sis/v1/model/PostCreateVocabReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




PostCreateVocabReq::PostCreateVocabReq()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    contentsIsSet_ = false;
}

PostCreateVocabReq::~PostCreateVocabReq() = default;

void PostCreateVocabReq::validate()
{
}

web::json::value PostCreateVocabReq::toJson() const
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

bool PostCreateVocabReq::fromJson(const web::json::value& val)
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

std::string PostCreateVocabReq::getName() const
{
    return name_;
}

void PostCreateVocabReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PostCreateVocabReq::nameIsSet() const
{
    return nameIsSet_;
}

void PostCreateVocabReq::unsetname()
{
    nameIsSet_ = false;
}

std::string PostCreateVocabReq::getDescription() const
{
    return description_;
}

void PostCreateVocabReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PostCreateVocabReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PostCreateVocabReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PostCreateVocabReq::getLanguage() const
{
    return language_;
}

void PostCreateVocabReq::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool PostCreateVocabReq::languageIsSet() const
{
    return languageIsSet_;
}

void PostCreateVocabReq::unsetlanguage()
{
    languageIsSet_ = false;
}

std::vector<std::string>& PostCreateVocabReq::getContents()
{
    return contents_;
}

void PostCreateVocabReq::setContents(const std::vector<std::string>& value)
{
    contents_ = value;
    contentsIsSet_ = true;
}

bool PostCreateVocabReq::contentsIsSet() const
{
    return contentsIsSet_;
}

void PostCreateVocabReq::unsetcontents()
{
    contentsIsSet_ = false;
}

}
}
}
}
}


