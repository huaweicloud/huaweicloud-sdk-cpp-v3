

#include "huaweicloud/lts/v2/model/ShowNotificationTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowNotificationTemplateResponse::ShowNotificationTemplateResponse()
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
    createTime_ = 0L;
    createTimeIsSet_ = false;
    modifyTime_ = 0L;
    modifyTimeIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowNotificationTemplateResponse::~ShowNotificationTemplateResponse() = default;

void ShowNotificationTemplateResponse::validate()
{
}

web::json::value ShowNotificationTemplateResponse::toJson() const
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
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(modifyTimeIsSet_) {
        val[utility::conversions::to_string_t("modify_time")] = ModelBase::toJson(modifyTime_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowNotificationTemplateResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modify_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modify_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifyTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    return ok;
}


std::string ShowNotificationTemplateResponse::getName() const
{
    return name_;
}

void ShowNotificationTemplateResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowNotificationTemplateResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowNotificationTemplateResponse::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& ShowNotificationTemplateResponse::getType()
{
    return type_;
}

void ShowNotificationTemplateResponse::setType(const std::vector<std::string>& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowNotificationTemplateResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowNotificationTemplateResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowNotificationTemplateResponse::getDesc() const
{
    return desc_;
}

void ShowNotificationTemplateResponse::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool ShowNotificationTemplateResponse::descIsSet() const
{
    return descIsSet_;
}

void ShowNotificationTemplateResponse::unsetdesc()
{
    descIsSet_ = false;
}

std::string ShowNotificationTemplateResponse::getSource() const
{
    return source_;
}

void ShowNotificationTemplateResponse::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool ShowNotificationTemplateResponse::sourceIsSet() const
{
    return sourceIsSet_;
}

void ShowNotificationTemplateResponse::unsetsource()
{
    sourceIsSet_ = false;
}

std::string ShowNotificationTemplateResponse::getLocale() const
{
    return locale_;
}

void ShowNotificationTemplateResponse::setLocale(const std::string& value)
{
    locale_ = value;
    localeIsSet_ = true;
}

bool ShowNotificationTemplateResponse::localeIsSet() const
{
    return localeIsSet_;
}

void ShowNotificationTemplateResponse::unsetlocale()
{
    localeIsSet_ = false;
}

std::vector<SubTemplate>& ShowNotificationTemplateResponse::getTemplates()
{
    return templates_;
}

void ShowNotificationTemplateResponse::setTemplates(const std::vector<SubTemplate>& value)
{
    templates_ = value;
    templatesIsSet_ = true;
}

bool ShowNotificationTemplateResponse::templatesIsSet() const
{
    return templatesIsSet_;
}

void ShowNotificationTemplateResponse::unsettemplates()
{
    templatesIsSet_ = false;
}

int64_t ShowNotificationTemplateResponse::getCreateTime() const
{
    return createTime_;
}

void ShowNotificationTemplateResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowNotificationTemplateResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowNotificationTemplateResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t ShowNotificationTemplateResponse::getModifyTime() const
{
    return modifyTime_;
}

void ShowNotificationTemplateResponse::setModifyTime(int64_t value)
{
    modifyTime_ = value;
    modifyTimeIsSet_ = true;
}

bool ShowNotificationTemplateResponse::modifyTimeIsSet() const
{
    return modifyTimeIsSet_;
}

void ShowNotificationTemplateResponse::unsetmodifyTime()
{
    modifyTimeIsSet_ = false;
}

std::string ShowNotificationTemplateResponse::getProjectId() const
{
    return projectId_;
}

void ShowNotificationTemplateResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowNotificationTemplateResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowNotificationTemplateResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


