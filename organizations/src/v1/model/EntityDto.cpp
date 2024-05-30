

#include "huaweicloud/organizations/v1/model/EntityDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




EntityDto::EntityDto()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

EntityDto::~EntityDto() = default;

void EntityDto::validate()
{
}

web::json::value EntityDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool EntityDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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


std::string EntityDto::getName() const
{
    return name_;
}

void EntityDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EntityDto::nameIsSet() const
{
    return nameIsSet_;
}

void EntityDto::unsetname()
{
    nameIsSet_ = false;
}

std::string EntityDto::getId() const
{
    return id_;
}

void EntityDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EntityDto::idIsSet() const
{
    return idIsSet_;
}

void EntityDto::unsetid()
{
    idIsSet_ = false;
}

std::string EntityDto::getType() const
{
    return type_;
}

void EntityDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool EntityDto::typeIsSet() const
{
    return typeIsSet_;
}

void EntityDto::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


