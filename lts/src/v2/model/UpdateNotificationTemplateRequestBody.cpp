

#include "huaweicloud/lts/v2/model/UpdateNotificationTemplateRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateNotificationTemplateRequestBody::UpdateNotificationTemplateRequestBody()
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

UpdateNotificationTemplateRequestBody::~UpdateNotificationTemplateRequestBody() = default;

void UpdateNotificationTemplateRequestBody::validate()
{
}

web::json::value UpdateNotificationTemplateRequestBody::toJson() const
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
bool UpdateNotificationTemplateRequestBody::fromJson(const web::json::value& val)
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
            std::vector<UpdateSubTemplate> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplates(refVal);
        }
    }
    return ok;
}


std::string UpdateNotificationTemplateRequestBody::getName() const
{
    return name_;
}

void UpdateNotificationTemplateRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateNotificationTemplateRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateNotificationTemplateRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& UpdateNotificationTemplateRequestBody::getType()
{
    return type_;
}

void UpdateNotificationTemplateRequestBody::setType(const std::vector<std::string>& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpdateNotificationTemplateRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void UpdateNotificationTemplateRequestBody::unsettype()
{
    typeIsSet_ = false;
}

std::string UpdateNotificationTemplateRequestBody::getDesc() const
{
    return desc_;
}

void UpdateNotificationTemplateRequestBody::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool UpdateNotificationTemplateRequestBody::descIsSet() const
{
    return descIsSet_;
}

void UpdateNotificationTemplateRequestBody::unsetdesc()
{
    descIsSet_ = false;
}

std::string UpdateNotificationTemplateRequestBody::getSource() const
{
    return source_;
}

void UpdateNotificationTemplateRequestBody::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool UpdateNotificationTemplateRequestBody::sourceIsSet() const
{
    return sourceIsSet_;
}

void UpdateNotificationTemplateRequestBody::unsetsource()
{
    sourceIsSet_ = false;
}

std::string UpdateNotificationTemplateRequestBody::getLocale() const
{
    return locale_;
}

void UpdateNotificationTemplateRequestBody::setLocale(const std::string& value)
{
    locale_ = value;
    localeIsSet_ = true;
}

bool UpdateNotificationTemplateRequestBody::localeIsSet() const
{
    return localeIsSet_;
}

void UpdateNotificationTemplateRequestBody::unsetlocale()
{
    localeIsSet_ = false;
}

std::vector<UpdateSubTemplate>& UpdateNotificationTemplateRequestBody::getTemplates()
{
    return templates_;
}

void UpdateNotificationTemplateRequestBody::setTemplates(const std::vector<UpdateSubTemplate>& value)
{
    templates_ = value;
    templatesIsSet_ = true;
}

bool UpdateNotificationTemplateRequestBody::templatesIsSet() const
{
    return templatesIsSet_;
}

void UpdateNotificationTemplateRequestBody::unsettemplates()
{
    templatesIsSet_ = false;
}

}
}
}
}
}


