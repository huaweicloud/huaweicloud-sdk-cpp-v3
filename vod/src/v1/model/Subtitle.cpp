

#include "huaweicloud/vod/v1/model/Subtitle.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




Subtitle::Subtitle()
{
    id_ = 0;
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    md5_ = "";
    md5IsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

Subtitle::~Subtitle() = default;

void Subtitle::validate()
{
}

web::json::value Subtitle::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(md5IsSet_) {
        val[utility::conversions::to_string_t("md5")] = ModelBase::toJson(md5_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool Subtitle::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("md5"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("md5"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMd5(refVal);
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


int32_t Subtitle::getId() const
{
    return id_;
}

void Subtitle::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Subtitle::idIsSet() const
{
    return idIsSet_;
}

void Subtitle::unsetid()
{
    idIsSet_ = false;
}

std::string Subtitle::getType() const
{
    return type_;
}

void Subtitle::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Subtitle::typeIsSet() const
{
    return typeIsSet_;
}

void Subtitle::unsettype()
{
    typeIsSet_ = false;
}

std::string Subtitle::getLanguage() const
{
    return language_;
}

void Subtitle::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool Subtitle::languageIsSet() const
{
    return languageIsSet_;
}

void Subtitle::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string Subtitle::getMd5() const
{
    return md5_;
}

void Subtitle::setMd5(const std::string& value)
{
    md5_ = value;
    md5IsSet_ = true;
}

bool Subtitle::md5IsSet() const
{
    return md5IsSet_;
}

void Subtitle::unsetmd5()
{
    md5IsSet_ = false;
}

std::string Subtitle::getDescription() const
{
    return description_;
}

void Subtitle::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Subtitle::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Subtitle::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


