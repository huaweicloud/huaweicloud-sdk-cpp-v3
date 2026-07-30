

#include "huaweicloud/modelarts/v1/model/Parameter_i18n_description.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Parameter_i18n_description::Parameter_i18n_description()
{
    language_ = "";
    languageIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

Parameter_i18n_description::~Parameter_i18n_description() = default;

void Parameter_i18n_description::validate()
{
}

web::json::value Parameter_i18n_description::toJson() const
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
bool Parameter_i18n_description::fromJson(const web::json::value& val)
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


std::string Parameter_i18n_description::getLanguage() const
{
    return language_;
}

void Parameter_i18n_description::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool Parameter_i18n_description::languageIsSet() const
{
    return languageIsSet_;
}

void Parameter_i18n_description::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string Parameter_i18n_description::getDescription() const
{
    return description_;
}

void Parameter_i18n_description::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Parameter_i18n_description::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Parameter_i18n_description::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


