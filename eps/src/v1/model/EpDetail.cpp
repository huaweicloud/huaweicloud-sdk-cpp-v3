

#include "huaweicloud/eps/v1/model/EpDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




EpDetail::EpDetail()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

EpDetail::~EpDetail() = default;

void EpDetail::validate()
{
}

web::json::value EpDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool EpDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
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


std::string EpDetail::getId() const
{
    return id_;
}

void EpDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EpDetail::idIsSet() const
{
    return idIsSet_;
}

void EpDetail::unsetid()
{
    idIsSet_ = false;
}

std::string EpDetail::getName() const
{
    return name_;
}

void EpDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EpDetail::nameIsSet() const
{
    return nameIsSet_;
}

void EpDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string EpDetail::getDescription() const
{
    return description_;
}

void EpDetail::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool EpDetail::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void EpDetail::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t EpDetail::getStatus() const
{
    return status_;
}

void EpDetail::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool EpDetail::statusIsSet() const
{
    return statusIsSet_;
}

void EpDetail::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime EpDetail::getCreatedAt() const
{
    return createdAt_;
}

void EpDetail::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool EpDetail::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void EpDetail::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime EpDetail::getUpdatedAt() const
{
    return updatedAt_;
}

void EpDetail::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool EpDetail::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void EpDetail::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string EpDetail::getType() const
{
    return type_;
}

void EpDetail::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool EpDetail::typeIsSet() const
{
    return typeIsSet_;
}

void EpDetail::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


