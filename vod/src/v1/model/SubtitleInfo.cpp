

#include "huaweicloud/vod/v1/model/SubtitleInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




SubtitleInfo::SubtitleInfo()
{
    url_ = "";
    urlIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
}

SubtitleInfo::~SubtitleInfo() = default;

void SubtitleInfo::validate()
{
}

web::json::value SubtitleInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}

bool SubtitleInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
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
    return ok;
}

std::string SubtitleInfo::getUrl() const
{
    return url_;
}

void SubtitleInfo::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool SubtitleInfo::urlIsSet() const
{
    return urlIsSet_;
}

void SubtitleInfo::unseturl()
{
    urlIsSet_ = false;
}

int32_t SubtitleInfo::getId() const
{
    return id_;
}

void SubtitleInfo::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SubtitleInfo::idIsSet() const
{
    return idIsSet_;
}

void SubtitleInfo::unsetid()
{
    idIsSet_ = false;
}

std::string SubtitleInfo::getType() const
{
    return type_;
}

void SubtitleInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SubtitleInfo::typeIsSet() const
{
    return typeIsSet_;
}

void SubtitleInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string SubtitleInfo::getLanguage() const
{
    return language_;
}

void SubtitleInfo::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool SubtitleInfo::languageIsSet() const
{
    return languageIsSet_;
}

void SubtitleInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


