

#include "huaweicloud/cbr/v1/model/Resource.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




Resource::Resource()
{
    extraInfoIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

Resource::~Resource() = default;

void Resource::validate()
{
}

web::json::value Resource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(extraInfoIsSet_) {
        val[utility::conversions::to_string_t("extra_info")] = ModelBase::toJson(extraInfo_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool Resource::fromJson(const web::json::value& val)
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
    return ok;
}


ResourceExtraInfo Resource::getExtraInfo() const
{
    return extraInfo_;
}

void Resource::setExtraInfo(const ResourceExtraInfo& value)
{
    extraInfo_ = value;
    extraInfoIsSet_ = true;
}

bool Resource::extraInfoIsSet() const
{
    return extraInfoIsSet_;
}

void Resource::unsetextraInfo()
{
    extraInfoIsSet_ = false;
}

std::string Resource::getId() const
{
    return id_;
}

void Resource::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Resource::idIsSet() const
{
    return idIsSet_;
}

void Resource::unsetid()
{
    idIsSet_ = false;
}

std::string Resource::getName() const
{
    return name_;
}

void Resource::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Resource::nameIsSet() const
{
    return nameIsSet_;
}

void Resource::unsetname()
{
    nameIsSet_ = false;
}

std::string Resource::getType() const
{
    return type_;
}

void Resource::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Resource::typeIsSet() const
{
    return typeIsSet_;
}

void Resource::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


