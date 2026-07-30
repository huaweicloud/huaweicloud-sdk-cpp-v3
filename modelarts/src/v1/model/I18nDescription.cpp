

#include "huaweicloud/modelarts/v1/model/I18nDescription.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




I18nDescription::I18nDescription()
{
    language_ = "";
    languageIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

I18nDescription::~I18nDescription() = default;

void I18nDescription::validate()
{
}

web::json::value I18nDescription::toJson() const
{
    web::json::value val = web::json::value::object();

    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool I18nDescription::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string I18nDescription::getLanguage() const
{
    return language_;
}

void I18nDescription::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool I18nDescription::languageIsSet() const
{
    return languageIsSet_;
}

void I18nDescription::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string I18nDescription::getDescription() const
{
    return description_;
}

void I18nDescription::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool I18nDescription::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void I18nDescription::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


