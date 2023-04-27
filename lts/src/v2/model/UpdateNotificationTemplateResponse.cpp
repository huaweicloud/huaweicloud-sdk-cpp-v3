

#include "huaweicloud/lts/v2/model/UpdateNotificationTemplateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateNotificationTemplateResponse::UpdateNotificationTemplateResponse()
{
    name_ = "";
    nameIsSet_ = false;
    typeIsSet_ = false;
    desc_ = "";
    descIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    locale_ = "";
    localeIsSet_ = false;
    templatesIsSet_ = false;
}

UpdateNotificationTemplateResponse::~UpdateNotificationTemplateResponse() = default;

void UpdateNotificationTemplateResponse::validate()
{
}

web::json::value UpdateNotificationTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(descIsSet_) {
        val[utility::conversions::to_string_t("desc")] = ModelBase::toJson(desc_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(localeIsSet_) {
        val[utility::conversions::to_string_t("locale")] = ModelBase::toJson(locale_);
    }
    if(templatesIsSet_) {
        val[utility::conversions::to_string_t("templates")] = ModelBase::toJson(templates_);
    }

    return val;
}

bool UpdateNotificationTemplateResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesc(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("locale"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locale"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocale(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templates"));
        if(!fieldValue.is_null())
        {
            std::vector<SubTemplate> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplates(refVal);
        }
    }
    return ok;
}


std::string UpdateNotificationTemplateResponse::getName() const
{
    return name_;
}

void UpdateNotificationTemplateResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateNotificationTemplateResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateNotificationTemplateResponse::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& UpdateNotificationTemplateResponse::getType()
{
    return type_;
}

void UpdateNotificationTemplateResponse::setType(const std::vector<std::string>& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpdateNotificationTemplateResponse::typeIsSet() const
{
    return typeIsSet_;
}

void UpdateNotificationTemplateResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string UpdateNotificationTemplateResponse::getDesc() const
{
    return desc_;
}

void UpdateNotificationTemplateResponse::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool UpdateNotificationTemplateResponse::descIsSet() const
{
    return descIsSet_;
}

void UpdateNotificationTemplateResponse::unsetdesc()
{
    descIsSet_ = false;
}

std::string UpdateNotificationTemplateResponse::getSource() const
{
    return source_;
}

void UpdateNotificationTemplateResponse::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool UpdateNotificationTemplateResponse::sourceIsSet() const
{
    return sourceIsSet_;
}

void UpdateNotificationTemplateResponse::unsetsource()
{
    sourceIsSet_ = false;
}

std::string UpdateNotificationTemplateResponse::getLocale() const
{
    return locale_;
}

void UpdateNotificationTemplateResponse::setLocale(const std::string& value)
{
    locale_ = value;
    localeIsSet_ = true;
}

bool UpdateNotificationTemplateResponse::localeIsSet() const
{
    return localeIsSet_;
}

void UpdateNotificationTemplateResponse::unsetlocale()
{
    localeIsSet_ = false;
}

std::vector<SubTemplate>& UpdateNotificationTemplateResponse::getTemplates()
{
    return templates_;
}

void UpdateNotificationTemplateResponse::setTemplates(const std::vector<SubTemplate>& value)
{
    templates_ = value;
    templatesIsSet_ = true;
}

bool UpdateNotificationTemplateResponse::templatesIsSet() const
{
    return templatesIsSet_;
}

void UpdateNotificationTemplateResponse::unsettemplates()
{
    templatesIsSet_ = false;
}

}
}
}
}
}


