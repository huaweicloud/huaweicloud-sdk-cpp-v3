

#include "huaweicloud/codeartsartifact/v2/model/DomainIPWhiteListModel.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




DomainIPWhiteListModel::DomainIPWhiteListModel()
{
    id_ = 0L;
    idIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    created_ = 0L;
    createdIsSet_ = false;
    updated_ = 0L;
    updatedIsSet_ = false;
}

DomainIPWhiteListModel::~DomainIPWhiteListModel() = default;

void DomainIPWhiteListModel::validate()
{
}

web::json::value DomainIPWhiteListModel::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }

    return val;
}
bool DomainIPWhiteListModel::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdated(refVal);
        }
    }
    return ok;
}


int64_t DomainIPWhiteListModel::getId() const
{
    return id_;
}

void DomainIPWhiteListModel::setId(int64_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DomainIPWhiteListModel::idIsSet() const
{
    return idIsSet_;
}

void DomainIPWhiteListModel::unsetid()
{
    idIsSet_ = false;
}

std::string DomainIPWhiteListModel::getDomainId() const
{
    return domainId_;
}

void DomainIPWhiteListModel::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool DomainIPWhiteListModel::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void DomainIPWhiteListModel::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string DomainIPWhiteListModel::getRegion() const
{
    return region_;
}

void DomainIPWhiteListModel::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool DomainIPWhiteListModel::regionIsSet() const
{
    return regionIsSet_;
}

void DomainIPWhiteListModel::unsetregion()
{
    regionIsSet_ = false;
}

std::string DomainIPWhiteListModel::getType() const
{
    return type_;
}

void DomainIPWhiteListModel::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DomainIPWhiteListModel::typeIsSet() const
{
    return typeIsSet_;
}

void DomainIPWhiteListModel::unsettype()
{
    typeIsSet_ = false;
}

std::string DomainIPWhiteListModel::getValue() const
{
    return value_;
}

void DomainIPWhiteListModel::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool DomainIPWhiteListModel::valueIsSet() const
{
    return valueIsSet_;
}

void DomainIPWhiteListModel::unsetvalue()
{
    valueIsSet_ = false;
}

int64_t DomainIPWhiteListModel::getCreated() const
{
    return created_;
}

void DomainIPWhiteListModel::setCreated(int64_t value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool DomainIPWhiteListModel::createdIsSet() const
{
    return createdIsSet_;
}

void DomainIPWhiteListModel::unsetcreated()
{
    createdIsSet_ = false;
}

int64_t DomainIPWhiteListModel::getUpdated() const
{
    return updated_;
}

void DomainIPWhiteListModel::setUpdated(int64_t value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool DomainIPWhiteListModel::updatedIsSet() const
{
    return updatedIsSet_;
}

void DomainIPWhiteListModel::unsetupdated()
{
    updatedIsSet_ = false;
}

}
}
}
}
}


