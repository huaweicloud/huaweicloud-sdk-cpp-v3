

#include "huaweicloud/vod/v1/model/DeleteSubtitle.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




DeleteSubtitle::DeleteSubtitle()
{
    type_ = "";
    typeIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
}

DeleteSubtitle::~DeleteSubtitle() = default;

void DeleteSubtitle::validate()
{
}

web::json::value DeleteSubtitle::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}

bool DeleteSubtitle::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string DeleteSubtitle::getType() const
{
    return type_;
}

void DeleteSubtitle::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DeleteSubtitle::typeIsSet() const
{
    return typeIsSet_;
}

void DeleteSubtitle::unsettype()
{
    typeIsSet_ = false;
}

std::string DeleteSubtitle::getLanguage() const
{
    return language_;
}

void DeleteSubtitle::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool DeleteSubtitle::languageIsSet() const
{
    return languageIsSet_;
}

void DeleteSubtitle::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


