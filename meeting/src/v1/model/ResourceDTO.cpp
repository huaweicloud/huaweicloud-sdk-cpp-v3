

#include "huaweicloud/meeting/v1/model/ResourceDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ResourceDTO::ResourceDTO()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    typeId_ = "";
    typeIdIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    expireDate_ = 0L;
    expireDateIsSet_ = false;
}

ResourceDTO::~ResourceDTO() = default;

void ResourceDTO::validate()
{
}

web::json::value ResourceDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(typeIdIsSet_) {
        val[utility::conversions::to_string_t("typeId")] = ModelBase::toJson(typeId_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(expireDateIsSet_) {
        val[utility::conversions::to_string_t("expireDate")] = ModelBase::toJson(expireDate_);
    }

    return val;
}
bool ResourceDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("typeId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("typeId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTypeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
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
    return ok;
}


std::string ResourceDTO::getId() const
{
    return id_;
}

void ResourceDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ResourceDTO::idIsSet() const
{
    return idIsSet_;
}

void ResourceDTO::unsetid()
{
    idIsSet_ = false;
}

std::string ResourceDTO::getType() const
{
    return type_;
}

void ResourceDTO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ResourceDTO::typeIsSet() const
{
    return typeIsSet_;
}

void ResourceDTO::unsettype()
{
    typeIsSet_ = false;
}

std::string ResourceDTO::getTypeId() const
{
    return typeId_;
}

void ResourceDTO::setTypeId(const std::string& value)
{
    typeId_ = value;
    typeIdIsSet_ = true;
}

bool ResourceDTO::typeIdIsSet() const
{
    return typeIdIsSet_;
}

void ResourceDTO::unsettypeId()
{
    typeIdIsSet_ = false;
}

int32_t ResourceDTO::getCount() const
{
    return count_;
}

void ResourceDTO::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ResourceDTO::countIsSet() const
{
    return countIsSet_;
}

void ResourceDTO::unsetcount()
{
    countIsSet_ = false;
}

int64_t ResourceDTO::getExpireDate() const
{
    return expireDate_;
}

void ResourceDTO::setExpireDate(int64_t value)
{
    expireDate_ = value;
    expireDateIsSet_ = true;
}

bool ResourceDTO::expireDateIsSet() const
{
    return expireDateIsSet_;
}

void ResourceDTO::unsetexpireDate()
{
    expireDateIsSet_ = false;
}

}
}
}
}
}


