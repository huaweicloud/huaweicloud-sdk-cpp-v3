

#include "huaweicloud/cloudtest/v1/model/ResourcePoolVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResourcePoolVo::ResourcePoolVo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    selected_ = "";
    selectedIsSet_ = false;
    activeState_ = "";
    activeStateIsSet_ = false;
}

ResourcePoolVo::~ResourcePoolVo() = default;

void ResourcePoolVo::validate()
{
}

web::json::value ResourcePoolVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(selectedIsSet_) {
        val[utility::conversions::to_string_t("selected")] = ModelBase::toJson(selected_);
    }
    if(activeStateIsSet_) {
        val[utility::conversions::to_string_t("active_state")] = ModelBase::toJson(activeState_);
    }

    return val;
}
bool ResourcePoolVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("selected"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("selected"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelected(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveState(refVal);
        }
    }
    return ok;
}


std::string ResourcePoolVo::getId() const
{
    return id_;
}

void ResourcePoolVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ResourcePoolVo::idIsSet() const
{
    return idIsSet_;
}

void ResourcePoolVo::unsetid()
{
    idIsSet_ = false;
}

std::string ResourcePoolVo::getName() const
{
    return name_;
}

void ResourcePoolVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ResourcePoolVo::nameIsSet() const
{
    return nameIsSet_;
}

void ResourcePoolVo::unsetname()
{
    nameIsSet_ = false;
}

std::string ResourcePoolVo::getType() const
{
    return type_;
}

void ResourcePoolVo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ResourcePoolVo::typeIsSet() const
{
    return typeIsSet_;
}

void ResourcePoolVo::unsettype()
{
    typeIsSet_ = false;
}

std::string ResourcePoolVo::getSelected() const
{
    return selected_;
}

void ResourcePoolVo::setSelected(const std::string& value)
{
    selected_ = value;
    selectedIsSet_ = true;
}

bool ResourcePoolVo::selectedIsSet() const
{
    return selectedIsSet_;
}

void ResourcePoolVo::unsetselected()
{
    selectedIsSet_ = false;
}

std::string ResourcePoolVo::getActiveState() const
{
    return activeState_;
}

void ResourcePoolVo::setActiveState(const std::string& value)
{
    activeState_ = value;
    activeStateIsSet_ = true;
}

bool ResourcePoolVo::activeStateIsSet() const
{
    return activeStateIsSet_;
}

void ResourcePoolVo::unsetactiveState()
{
    activeStateIsSet_ = false;
}

}
}
}
}
}


