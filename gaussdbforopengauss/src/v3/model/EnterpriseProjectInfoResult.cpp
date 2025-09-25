

#include "huaweicloud/gaussdbforopengauss/v3/model/EnterpriseProjectInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




EnterpriseProjectInfoResult::EnterpriseProjectInfoResult()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

EnterpriseProjectInfoResult::~EnterpriseProjectInfoResult() = default;

void EnterpriseProjectInfoResult::validate()
{
}

web::json::value EnterpriseProjectInfoResult::toJson() const
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

    return val;
}
bool EnterpriseProjectInfoResult::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string EnterpriseProjectInfoResult::getId() const
{
    return id_;
}

void EnterpriseProjectInfoResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EnterpriseProjectInfoResult::idIsSet() const
{
    return idIsSet_;
}

void EnterpriseProjectInfoResult::unsetid()
{
    idIsSet_ = false;
}

std::string EnterpriseProjectInfoResult::getName() const
{
    return name_;
}

void EnterpriseProjectInfoResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EnterpriseProjectInfoResult::nameIsSet() const
{
    return nameIsSet_;
}

void EnterpriseProjectInfoResult::unsetname()
{
    nameIsSet_ = false;
}

std::string EnterpriseProjectInfoResult::getDescription() const
{
    return description_;
}

void EnterpriseProjectInfoResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool EnterpriseProjectInfoResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void EnterpriseProjectInfoResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string EnterpriseProjectInfoResult::getStatus() const
{
    return status_;
}

void EnterpriseProjectInfoResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool EnterpriseProjectInfoResult::statusIsSet() const
{
    return statusIsSet_;
}

void EnterpriseProjectInfoResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string EnterpriseProjectInfoResult::getCreatedAt() const
{
    return createdAt_;
}

void EnterpriseProjectInfoResult::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool EnterpriseProjectInfoResult::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void EnterpriseProjectInfoResult::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string EnterpriseProjectInfoResult::getUpdatedAt() const
{
    return updatedAt_;
}

void EnterpriseProjectInfoResult::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool EnterpriseProjectInfoResult::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void EnterpriseProjectInfoResult::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


