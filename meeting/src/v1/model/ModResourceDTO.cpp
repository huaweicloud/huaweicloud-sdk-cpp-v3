

#include "huaweicloud/meeting/v1/model/ModResourceDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ModResourceDTO::ModResourceDTO()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    expireDate_ = 0L;
    expireDateIsSet_ = false;
    isDisabled_ = false;
    isDisabledIsSet_ = false;
}

ModResourceDTO::~ModResourceDTO() = default;

void ModResourceDTO::validate()
{
}

web::json::value ModResourceDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(expireDateIsSet_) {
        val[utility::conversions::to_string_t("expireDate")] = ModelBase::toJson(expireDate_);
    }
    if(isDisabledIsSet_) {
        val[utility::conversions::to_string_t("isDisabled")] = ModelBase::toJson(isDisabled_);
    }

    return val;
}
bool ModResourceDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expireDate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expireDate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isDisabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isDisabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDisabled(refVal);
        }
    }
    return ok;
}


std::string ModResourceDTO::getId() const
{
    return id_;
}

void ModResourceDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ModResourceDTO::idIsSet() const
{
    return idIsSet_;
}

void ModResourceDTO::unsetid()
{
    idIsSet_ = false;
}

std::string ModResourceDTO::getType() const
{
    return type_;
}

void ModResourceDTO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ModResourceDTO::typeIsSet() const
{
    return typeIsSet_;
}

void ModResourceDTO::unsettype()
{
    typeIsSet_ = false;
}

int64_t ModResourceDTO::getExpireDate() const
{
    return expireDate_;
}

void ModResourceDTO::setExpireDate(int64_t value)
{
    expireDate_ = value;
    expireDateIsSet_ = true;
}

bool ModResourceDTO::expireDateIsSet() const
{
    return expireDateIsSet_;
}

void ModResourceDTO::unsetexpireDate()
{
    expireDateIsSet_ = false;
}

bool ModResourceDTO::isIsDisabled() const
{
    return isDisabled_;
}

void ModResourceDTO::setIsDisabled(bool value)
{
    isDisabled_ = value;
    isDisabledIsSet_ = true;
}

bool ModResourceDTO::isDisabledIsSet() const
{
    return isDisabledIsSet_;
}

void ModResourceDTO::unsetisDisabled()
{
    isDisabledIsSet_ = false;
}

}
}
}
}
}


