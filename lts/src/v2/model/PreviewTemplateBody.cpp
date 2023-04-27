

#include "huaweicloud/lts/v2/model/PreviewTemplateBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




PreviewTemplateBody::PreviewTemplateBody()
{
    templates_ = "";
    templatesIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
}

PreviewTemplateBody::~PreviewTemplateBody() = default;

void PreviewTemplateBody::validate()
{
}

web::json::value PreviewTemplateBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templatesIsSet_) {
        val[utility::conversions::to_string_t("templates")] = ModelBase::toJson(templates_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }

    return val;
}

bool PreviewTemplateBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templates"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplates(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    return ok;
}


std::string PreviewTemplateBody::getTemplates() const
{
    return templates_;
}

void PreviewTemplateBody::setTemplates(const std::string& value)
{
    templates_ = value;
    templatesIsSet_ = true;
}

bool PreviewTemplateBody::templatesIsSet() const
{
    return templatesIsSet_;
}

void PreviewTemplateBody::unsettemplates()
{
    templatesIsSet_ = false;
}

std::string PreviewTemplateBody::getLanguage() const
{
    return language_;
}

void PreviewTemplateBody::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool PreviewTemplateBody::languageIsSet() const
{
    return languageIsSet_;
}

void PreviewTemplateBody::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string PreviewTemplateBody::getSource() const
{
    return source_;
}

void PreviewTemplateBody::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool PreviewTemplateBody::sourceIsSet() const
{
    return sourceIsSet_;
}

void PreviewTemplateBody::unsetsource()
{
    sourceIsSet_ = false;
}

}
}
}
}
}


