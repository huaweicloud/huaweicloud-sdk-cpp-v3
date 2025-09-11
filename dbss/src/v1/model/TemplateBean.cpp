

#include "huaweicloud/dbss/v1/model/TemplateBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




TemplateBean::TemplateBean()
{
    dbIds_ = "";
    dbIdsIsSet_ = false;
    dbNames_ = "";
    dbNamesIsSet_ = false;
    desc_ = "";
    descIsSet_ = false;
    frequency_ = "";
    frequencyIsSet_ = false;
    group_ = "";
    groupIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

TemplateBean::~TemplateBean() = default;

void TemplateBean::validate()
{
}

web::json::value TemplateBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbIdsIsSet_) {
        val[utility::conversions::to_string_t("db_ids")] = ModelBase::toJson(dbIds_);
    }
    if(dbNamesIsSet_) {
        val[utility::conversions::to_string_t("db_names")] = ModelBase::toJson(dbNames_);
    }
    if(descIsSet_) {
        val[utility::conversions::to_string_t("desc")] = ModelBase::toJson(desc_);
    }
    if(frequencyIsSet_) {
        val[utility::conversions::to_string_t("frequency")] = ModelBase::toJson(frequency_);
    }
    if(groupIsSet_) {
        val[utility::conversions::to_string_t("group")] = ModelBase::toJson(group_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool TemplateBean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_names"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbNames(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("frequency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frequency"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrequency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string TemplateBean::getDbIds() const
{
    return dbIds_;
}

void TemplateBean::setDbIds(const std::string& value)
{
    dbIds_ = value;
    dbIdsIsSet_ = true;
}

bool TemplateBean::dbIdsIsSet() const
{
    return dbIdsIsSet_;
}

void TemplateBean::unsetdbIds()
{
    dbIdsIsSet_ = false;
}

std::string TemplateBean::getDbNames() const
{
    return dbNames_;
}

void TemplateBean::setDbNames(const std::string& value)
{
    dbNames_ = value;
    dbNamesIsSet_ = true;
}

bool TemplateBean::dbNamesIsSet() const
{
    return dbNamesIsSet_;
}

void TemplateBean::unsetdbNames()
{
    dbNamesIsSet_ = false;
}

std::string TemplateBean::getDesc() const
{
    return desc_;
}

void TemplateBean::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool TemplateBean::descIsSet() const
{
    return descIsSet_;
}

void TemplateBean::unsetdesc()
{
    descIsSet_ = false;
}

std::string TemplateBean::getFrequency() const
{
    return frequency_;
}

void TemplateBean::setFrequency(const std::string& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool TemplateBean::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void TemplateBean::unsetfrequency()
{
    frequencyIsSet_ = false;
}

std::string TemplateBean::getGroup() const
{
    return group_;
}

void TemplateBean::setGroup(const std::string& value)
{
    group_ = value;
    groupIsSet_ = true;
}

bool TemplateBean::groupIsSet() const
{
    return groupIsSet_;
}

void TemplateBean::unsetgroup()
{
    groupIsSet_ = false;
}

std::string TemplateBean::getId() const
{
    return id_;
}

void TemplateBean::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TemplateBean::idIsSet() const
{
    return idIsSet_;
}

void TemplateBean::unsetid()
{
    idIsSet_ = false;
}

std::string TemplateBean::getName() const
{
    return name_;
}

void TemplateBean::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TemplateBean::nameIsSet() const
{
    return nameIsSet_;
}

void TemplateBean::unsetname()
{
    nameIsSet_ = false;
}

std::string TemplateBean::getStatus() const
{
    return status_;
}

void TemplateBean::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TemplateBean::statusIsSet() const
{
    return statusIsSet_;
}

void TemplateBean::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TemplateBean::getType() const
{
    return type_;
}

void TemplateBean::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TemplateBean::typeIsSet() const
{
    return typeIsSet_;
}

void TemplateBean::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


