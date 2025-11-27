

#include "huaweicloud/ga/v1/model/ByoipPool.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ByoipPool::ByoipPool()
{
    id_ = "";
    idIsSet_ = false;
    cidr_ = "";
    cidrIsSet_ = false;
    ipType_ = "";
    ipTypeIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    areaIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

ByoipPool::~ByoipPool() = default;

void ByoipPool::validate()
{
}

web::json::value ByoipPool::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(ipTypeIsSet_) {
        val[utility::conversions::to_string_t("ip_type")] = ModelBase::toJson(ipType_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(areaIsSet_) {
        val[utility::conversions::to_string_t("area")] = ModelBase::toJson(area_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool ByoipPool::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpType(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("area"));
        if(!fieldValue.is_null())
        {
            Area refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArea(refVal);
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
    return ok;
}


std::string ByoipPool::getId() const
{
    return id_;
}

void ByoipPool::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ByoipPool::idIsSet() const
{
    return idIsSet_;
}

void ByoipPool::unsetid()
{
    idIsSet_ = false;
}

std::string ByoipPool::getCidr() const
{
    return cidr_;
}

void ByoipPool::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool ByoipPool::cidrIsSet() const
{
    return cidrIsSet_;
}

void ByoipPool::unsetcidr()
{
    cidrIsSet_ = false;
}

std::string ByoipPool::getIpType() const
{
    return ipType_;
}

void ByoipPool::setIpType(const std::string& value)
{
    ipType_ = value;
    ipTypeIsSet_ = true;
}

bool ByoipPool::ipTypeIsSet() const
{
    return ipTypeIsSet_;
}

void ByoipPool::unsetipType()
{
    ipTypeIsSet_ = false;
}

utility::datetime ByoipPool::getCreatedAt() const
{
    return createdAt_;
}

void ByoipPool::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ByoipPool::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ByoipPool::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ByoipPool::getUpdatedAt() const
{
    return updatedAt_;
}

void ByoipPool::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ByoipPool::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ByoipPool::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

Area ByoipPool::getArea() const
{
    return area_;
}

void ByoipPool::setArea(const Area& value)
{
    area_ = value;
    areaIsSet_ = true;
}

bool ByoipPool::areaIsSet() const
{
    return areaIsSet_;
}

void ByoipPool::unsetarea()
{
    areaIsSet_ = false;
}

std::string ByoipPool::getDomainId() const
{
    return domainId_;
}

void ByoipPool::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ByoipPool::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ByoipPool::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


