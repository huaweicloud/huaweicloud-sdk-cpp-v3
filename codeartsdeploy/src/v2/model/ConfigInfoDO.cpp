

#include "huaweicloud/codeartsdeploy/v2/model/ConfigInfoDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ConfigInfoDO::ConfigInfoDO()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    staticStatus_ = 0;
    staticStatusIsSet_ = false;
    limitsIsSet_ = false;
}

ConfigInfoDO::~ConfigInfoDO() = default;

void ConfigInfoDO::validate()
{
}

web::json::value ConfigInfoDO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(staticStatusIsSet_) {
        val[utility::conversions::to_string_t("static_status")] = ModelBase::toJson(staticStatus_);
    }
    if(limitsIsSet_) {
        val[utility::conversions::to_string_t("limits")] = ModelBase::toJson(limits_);
    }

    return val;
}
bool ConfigInfoDO::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("static_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("static_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStaticStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limits"));
        if(!fieldValue.is_null())
        {
            std::vector<ParamTypeLimits> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimits(refVal);
        }
    }
    return ok;
}


std::string ConfigInfoDO::getName() const
{
    return name_;
}

void ConfigInfoDO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ConfigInfoDO::nameIsSet() const
{
    return nameIsSet_;
}

void ConfigInfoDO::unsetname()
{
    nameIsSet_ = false;
}

std::string ConfigInfoDO::getType() const
{
    return type_;
}

void ConfigInfoDO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ConfigInfoDO::typeIsSet() const
{
    return typeIsSet_;
}

void ConfigInfoDO::unsettype()
{
    typeIsSet_ = false;
}

std::string ConfigInfoDO::getDescription() const
{
    return description_;
}

void ConfigInfoDO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ConfigInfoDO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ConfigInfoDO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ConfigInfoDO::getValue() const
{
    return value_;
}

void ConfigInfoDO::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ConfigInfoDO::valueIsSet() const
{
    return valueIsSet_;
}

void ConfigInfoDO::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ConfigInfoDO::getTaskId() const
{
    return taskId_;
}

void ConfigInfoDO::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ConfigInfoDO::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ConfigInfoDO::unsettaskId()
{
    taskIdIsSet_ = false;
}

int32_t ConfigInfoDO::getStaticStatus() const
{
    return staticStatus_;
}

void ConfigInfoDO::setStaticStatus(int32_t value)
{
    staticStatus_ = value;
    staticStatusIsSet_ = true;
}

bool ConfigInfoDO::staticStatusIsSet() const
{
    return staticStatusIsSet_;
}

void ConfigInfoDO::unsetstaticStatus()
{
    staticStatusIsSet_ = false;
}

std::vector<ParamTypeLimits>& ConfigInfoDO::getLimits()
{
    return limits_;
}

void ConfigInfoDO::setLimits(const std::vector<ParamTypeLimits>& value)
{
    limits_ = value;
    limitsIsSet_ = true;
}

bool ConfigInfoDO::limitsIsSet() const
{
    return limitsIsSet_;
}

void ConfigInfoDO::unsetlimits()
{
    limitsIsSet_ = false;
}

}
}
}
}
}


