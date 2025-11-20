

#include "huaweicloud/lts/v2/model/CreateNotificationTemplateResBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateNotificationTemplateResBody::CreateNotificationTemplateResBody()
{
    name_ = "";
    nameIsSet_ = false;
    typeIsSet_ = false;
    desc_ = "";
    descIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    templatesIsSet_ = false;
    locale_ = "";
    localeIsSet_ = false;
}

CreateNotificationTemplateResBody::~CreateNotificationTemplateResBody() = default;

void CreateNotificationTemplateResBody::validate()
{
}

web::json::value CreateNotificationTemplateResBody::toJson() const
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
    if(templatesIsSet_) {
        val[utility::conversions::to_string_t("templates")] = ModelBase::toJson(templates_);
    }
    if(localeIsSet_) {
        val[utility::conversions::to_string_t("locale")] = ModelBase::toJson(locale_);
    }

    return val;
}
bool CreateNotificationTemplateResBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templates"));
        if(!fieldValue.is_null())
        {
            std::vector<SubTemplateResBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplates(refVal);
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
    return ok;
}


std::string CreateNotificationTemplateResBody::getName() const
{
    return name_;
}

void CreateNotificationTemplateResBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateNotificationTemplateResBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateNotificationTemplateResBody::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& CreateNotificationTemplateResBody::getType()
{
    return type_;
}

void CreateNotificationTemplateResBody::setType(const std::vector<std::string>& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateNotificationTemplateResBody::typeIsSet() const
{
    return typeIsSet_;
}

void CreateNotificationTemplateResBody::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateNotificationTemplateResBody::getDesc() const
{
    return desc_;
}

void CreateNotificationTemplateResBody::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool CreateNotificationTemplateResBody::descIsSet() const
{
    return descIsSet_;
}

void CreateNotificationTemplateResBody::unsetdesc()
{
    descIsSet_ = false;
}

std::string CreateNotificationTemplateResBody::getSource() const
{
    return source_;
}

void CreateNotificationTemplateResBody::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool CreateNotificationTemplateResBody::sourceIsSet() const
{
    return sourceIsSet_;
}

void CreateNotificationTemplateResBody::unsetsource()
{
    sourceIsSet_ = false;
}

std::vector<SubTemplateResBody>& CreateNotificationTemplateResBody::getTemplates()
{
    return templates_;
}

void CreateNotificationTemplateResBody::setTemplates(const std::vector<SubTemplateResBody>& value)
{
    templates_ = value;
    templatesIsSet_ = true;
}

bool CreateNotificationTemplateResBody::templatesIsSet() const
{
    return templatesIsSet_;
}

void CreateNotificationTemplateResBody::unsettemplates()
{
    templatesIsSet_ = false;
}

std::string CreateNotificationTemplateResBody::getLocale() const
{
    return locale_;
}

void CreateNotificationTemplateResBody::setLocale(const std::string& value)
{
    locale_ = value;
    localeIsSet_ = true;
}

bool CreateNotificationTemplateResBody::localeIsSet() const
{
    return localeIsSet_;
}

void CreateNotificationTemplateResBody::unsetlocale()
{
    localeIsSet_ = false;
}

}
}
}
}
}


