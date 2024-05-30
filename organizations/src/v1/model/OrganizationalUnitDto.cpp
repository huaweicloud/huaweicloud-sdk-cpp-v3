

#include "huaweicloud/organizations/v1/model/OrganizationalUnitDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




OrganizationalUnitDto::OrganizationalUnitDto()
{
    id_ = "";
    idIsSet_ = false;
    urn_ = "";
    urnIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
}

OrganizationalUnitDto::~OrganizationalUnitDto() = default;

void OrganizationalUnitDto::validate()
{
}

web::json::value OrganizationalUnitDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(urnIsSet_) {
        val[utility::conversions::to_string_t("urn")] = ModelBase::toJson(urn_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }

    return val;
}
bool OrganizationalUnitDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    return ok;
}


std::string OrganizationalUnitDto::getId() const
{
    return id_;
}

void OrganizationalUnitDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OrganizationalUnitDto::idIsSet() const
{
    return idIsSet_;
}

void OrganizationalUnitDto::unsetid()
{
    idIsSet_ = false;
}

std::string OrganizationalUnitDto::getUrn() const
{
    return urn_;
}

void OrganizationalUnitDto::setUrn(const std::string& value)
{
    urn_ = value;
    urnIsSet_ = true;
}

bool OrganizationalUnitDto::urnIsSet() const
{
    return urnIsSet_;
}

void OrganizationalUnitDto::unseturn()
{
    urnIsSet_ = false;
}

std::string OrganizationalUnitDto::getName() const
{
    return name_;
}

void OrganizationalUnitDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OrganizationalUnitDto::nameIsSet() const
{
    return nameIsSet_;
}

void OrganizationalUnitDto::unsetname()
{
    nameIsSet_ = false;
}

utility::datetime OrganizationalUnitDto::getCreatedAt() const
{
    return createdAt_;
}

void OrganizationalUnitDto::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool OrganizationalUnitDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void OrganizationalUnitDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}


