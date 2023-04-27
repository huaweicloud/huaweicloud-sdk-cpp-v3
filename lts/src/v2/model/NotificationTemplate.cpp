

#include "huaweicloud/lts/v2/model/NotificationTemplate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




NotificationTemplate::NotificationTemplate()
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

NotificationTemplate::~NotificationTemplate() = default;

void NotificationTemplate::validate()
{
}

web::json::value NotificationTemplate::toJson() const
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

bool NotificationTemplate::fromJson(const web::json::value& val)
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


std::string NotificationTemplate::getName() const
{
    return name_;
}

void NotificationTemplate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NotificationTemplate::nameIsSet() const
{
    return nameIsSet_;
}

void NotificationTemplate::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& NotificationTemplate::getType()
{
    return type_;
}

void NotificationTemplate::setType(const std::vector<std::string>& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool NotificationTemplate::typeIsSet() const
{
    return typeIsSet_;
}

void NotificationTemplate::unsettype()
{
    typeIsSet_ = false;
}

std::string NotificationTemplate::getDesc() const
{
    return desc_;
}

void NotificationTemplate::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool NotificationTemplate::descIsSet() const
{
    return descIsSet_;
}

void NotificationTemplate::unsetdesc()
{
    descIsSet_ = false;
}

std::string NotificationTemplate::getSource() const
{
    return source_;
}

void NotificationTemplate::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool NotificationTemplate::sourceIsSet() const
{
    return sourceIsSet_;
}

void NotificationTemplate::unsetsource()
{
    sourceIsSet_ = false;
}

std::string NotificationTemplate::getLocale() const
{
    return locale_;
}

void NotificationTemplate::setLocale(const std::string& value)
{
    locale_ = value;
    localeIsSet_ = true;
}

bool NotificationTemplate::localeIsSet() const
{
    return localeIsSet_;
}

void NotificationTemplate::unsetlocale()
{
    localeIsSet_ = false;
}

std::vector<SubTemplate>& NotificationTemplate::getTemplates()
{
    return templates_;
}

void NotificationTemplate::setTemplates(const std::vector<SubTemplate>& value)
{
    templates_ = value;
    templatesIsSet_ = true;
}

bool NotificationTemplate::templatesIsSet() const
{
    return templatesIsSet_;
}

void NotificationTemplate::unsettemplates()
{
    templatesIsSet_ = false;
}

int64_t NotificationTemplate::getCreateTime() const
{
    return createTime_;
}

void NotificationTemplate::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool NotificationTemplate::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void NotificationTemplate::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t NotificationTemplate::getModifyTime() const
{
    return modifyTime_;
}

void NotificationTemplate::setModifyTime(int64_t value)
{
    modifyTime_ = value;
    modifyTimeIsSet_ = true;
}

bool NotificationTemplate::modifyTimeIsSet() const
{
    return modifyTimeIsSet_;
}

void NotificationTemplate::unsetmodifyTime()
{
    modifyTimeIsSet_ = false;
}

std::string NotificationTemplate::getProjectId() const
{
    return projectId_;
}

void NotificationTemplate::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool NotificationTemplate::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void NotificationTemplate::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


