

#include "huaweicloud/lts/v2/model/CreateNotificationTemplateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateNotificationTemplateResponse::CreateNotificationTemplateResponse()
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

CreateNotificationTemplateResponse::~CreateNotificationTemplateResponse() = default;

void CreateNotificationTemplateResponse::validate()
{
}

web::json::value CreateNotificationTemplateResponse::toJson() const
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

bool CreateNotificationTemplateResponse::fromJson(const web::json::value& val)
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

std::string CreateNotificationTemplateResponse::getName() const
{
    return name_;
}

void CreateNotificationTemplateResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateNotificationTemplateResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateNotificationTemplateResponse::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& CreateNotificationTemplateResponse::getType()
{
    return type_;
}

void CreateNotificationTemplateResponse::setType(const std::vector<std::string>& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateNotificationTemplateResponse::typeIsSet() const
{
    return typeIsSet_;
}

void CreateNotificationTemplateResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateNotificationTemplateResponse::getDesc() const
{
    return desc_;
}

void CreateNotificationTemplateResponse::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool CreateNotificationTemplateResponse::descIsSet() const
{
    return descIsSet_;
}

void CreateNotificationTemplateResponse::unsetdesc()
{
    descIsSet_ = false;
}

std::string CreateNotificationTemplateResponse::getSource() const
{
    return source_;
}

void CreateNotificationTemplateResponse::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool CreateNotificationTemplateResponse::sourceIsSet() const
{
    return sourceIsSet_;
}

void CreateNotificationTemplateResponse::unsetsource()
{
    sourceIsSet_ = false;
}

std::string CreateNotificationTemplateResponse::getLocale() const
{
    return locale_;
}

void CreateNotificationTemplateResponse::setLocale(const std::string& value)
{
    locale_ = value;
    localeIsSet_ = true;
}

bool CreateNotificationTemplateResponse::localeIsSet() const
{
    return localeIsSet_;
}

void CreateNotificationTemplateResponse::unsetlocale()
{
    localeIsSet_ = false;
}

std::vector<SubTemplate>& CreateNotificationTemplateResponse::getTemplates()
{
    return templates_;
}

void CreateNotificationTemplateResponse::setTemplates(const std::vector<SubTemplate>& value)
{
    templates_ = value;
    templatesIsSet_ = true;
}

bool CreateNotificationTemplateResponse::templatesIsSet() const
{
    return templatesIsSet_;
}

void CreateNotificationTemplateResponse::unsettemplates()
{
    templatesIsSet_ = false;
}

}
}
}
}
}


