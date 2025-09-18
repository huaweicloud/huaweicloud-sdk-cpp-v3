

#include "huaweicloud/ga/v1/model/AcceleratorDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




AcceleratorDetail::AcceleratorDetail()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    statusIsSet_ = false;
    ipSetsIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    flavorId_ = "";
    flavorIdIsSet_ = false;
    frozenInfoIsSet_ = false;
    tagsIsSet_ = false;
}

AcceleratorDetail::~AcceleratorDetail() = default;

void AcceleratorDetail::validate()
{
}

web::json::value AcceleratorDetail::toJson() const
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
    if(ipSetsIsSet_) {
        val[utility::conversions::to_string_t("ip_sets")] = ModelBase::toJson(ipSets_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }
    if(frozenInfoIsSet_) {
        val[utility::conversions::to_string_t("frozen_info")] = ModelBase::toJson(frozenInfo_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool AcceleratorDetail::fromJson(const web::json::value& val)
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
            ConfigStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_sets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_sets"));
        if(!fieldValue.is_null())
        {
            std::vector<AccelerateIp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpSets(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frozen_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frozen_info"));
        if(!fieldValue.is_null())
        {
            FrozenInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrozenInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string AcceleratorDetail::getId() const
{
    return id_;
}

void AcceleratorDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AcceleratorDetail::idIsSet() const
{
    return idIsSet_;
}

void AcceleratorDetail::unsetid()
{
    idIsSet_ = false;
}

std::string AcceleratorDetail::getName() const
{
    return name_;
}

void AcceleratorDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AcceleratorDetail::nameIsSet() const
{
    return nameIsSet_;
}

void AcceleratorDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string AcceleratorDetail::getDescription() const
{
    return description_;
}

void AcceleratorDetail::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AcceleratorDetail::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AcceleratorDetail::unsetdescription()
{
    descriptionIsSet_ = false;
}

ConfigStatus AcceleratorDetail::getStatus() const
{
    return status_;
}

void AcceleratorDetail::setStatus(const ConfigStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AcceleratorDetail::statusIsSet() const
{
    return statusIsSet_;
}

void AcceleratorDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<AccelerateIp>& AcceleratorDetail::getIpSets()
{
    return ipSets_;
}

void AcceleratorDetail::setIpSets(const std::vector<AccelerateIp>& value)
{
    ipSets_ = value;
    ipSetsIsSet_ = true;
}

bool AcceleratorDetail::ipSetsIsSet() const
{
    return ipSetsIsSet_;
}

void AcceleratorDetail::unsetipSets()
{
    ipSetsIsSet_ = false;
}

utility::datetime AcceleratorDetail::getCreatedAt() const
{
    return createdAt_;
}

void AcceleratorDetail::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool AcceleratorDetail::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void AcceleratorDetail::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime AcceleratorDetail::getUpdatedAt() const
{
    return updatedAt_;
}

void AcceleratorDetail::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool AcceleratorDetail::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void AcceleratorDetail::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string AcceleratorDetail::getDomainId() const
{
    return domainId_;
}

void AcceleratorDetail::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool AcceleratorDetail::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void AcceleratorDetail::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string AcceleratorDetail::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void AcceleratorDetail::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool AcceleratorDetail::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void AcceleratorDetail::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string AcceleratorDetail::getFlavorId() const
{
    return flavorId_;
}

void AcceleratorDetail::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool AcceleratorDetail::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void AcceleratorDetail::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

FrozenInfo AcceleratorDetail::getFrozenInfo() const
{
    return frozenInfo_;
}

void AcceleratorDetail::setFrozenInfo(const FrozenInfo& value)
{
    frozenInfo_ = value;
    frozenInfoIsSet_ = true;
}

bool AcceleratorDetail::frozenInfoIsSet() const
{
    return frozenInfoIsSet_;
}

void AcceleratorDetail::unsetfrozenInfo()
{
    frozenInfoIsSet_ = false;
}

std::vector<ResourceTag>& AcceleratorDetail::getTags()
{
    return tags_;
}

void AcceleratorDetail::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool AcceleratorDetail::tagsIsSet() const
{
    return tagsIsSet_;
}

void AcceleratorDetail::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


