

#include "huaweicloud/cbr/v1/model/ResourceCreate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ResourceCreate::ResourceCreate()
{
    extraInfoIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ResourceCreate::~ResourceCreate() = default;

void ResourceCreate::validate()
{
}

web::json::value ResourceCreate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(extraInfoIsSet_) {
        val[utility::conversions::to_string_t("extra_info")] = ModelBase::toJson(extraInfo_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ResourceCreate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("extra_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_info"));
        if(!fieldValue.is_null())
        {
            ResourceExtraInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


ResourceExtraInfo ResourceCreate::getExtraInfo() const
{
    return extraInfo_;
}

void ResourceCreate::setExtraInfo(const ResourceExtraInfo& value)
{
    extraInfo_ = value;
    extraInfoIsSet_ = true;
}

bool ResourceCreate::extraInfoIsSet() const
{
    return extraInfoIsSet_;
}

void ResourceCreate::unsetextraInfo()
{
    extraInfoIsSet_ = false;
}

std::string ResourceCreate::getId() const
{
    return id_;
}

void ResourceCreate::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ResourceCreate::idIsSet() const
{
    return idIsSet_;
}

void ResourceCreate::unsetid()
{
    idIsSet_ = false;
}

std::string ResourceCreate::getType() const
{
    return type_;
}

void ResourceCreate::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ResourceCreate::typeIsSet() const
{
    return typeIsSet_;
}

void ResourceCreate::unsettype()
{
    typeIsSet_ = false;
}

std::string ResourceCreate::getName() const
{
    return name_;
}

void ResourceCreate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ResourceCreate::nameIsSet() const
{
    return nameIsSet_;
}

void ResourceCreate::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


