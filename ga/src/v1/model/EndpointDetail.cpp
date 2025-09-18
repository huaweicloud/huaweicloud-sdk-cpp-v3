

#include "huaweicloud/ga/v1/model/EndpointDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




EndpointDetail::EndpointDetail()
{
    id_ = "";
    idIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    endpointGroupId_ = "";
    endpointGroupIdIsSet_ = false;
    resourceTypeIsSet_ = false;
    statusIsSet_ = false;
    weight_ = 0;
    weightIsSet_ = false;
    healthState_ = "";
    healthStateIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    frozenInfoIsSet_ = false;
}

EndpointDetail::~EndpointDetail() = default;

void EndpointDetail::validate()
{
}

web::json::value EndpointDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(endpointGroupIdIsSet_) {
        val[utility::conversions::to_string_t("endpoint_group_id")] = ModelBase::toJson(endpointGroupId_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }
    if(healthStateIsSet_) {
        val[utility::conversions::to_string_t("health_state")] = ModelBase::toJson(healthState_);
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
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(frozenInfoIsSet_) {
        val[utility::conversions::to_string_t("frozen_info")] = ModelBase::toJson(frozenInfo_);
    }

    return val;
}
bool EndpointDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoint_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            EndpointType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("health_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("health_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHealthState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
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
    return ok;
}


std::string EndpointDetail::getId() const
{
    return id_;
}

void EndpointDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EndpointDetail::idIsSet() const
{
    return idIsSet_;
}

void EndpointDetail::unsetid()
{
    idIsSet_ = false;
}

std::string EndpointDetail::getResourceId() const
{
    return resourceId_;
}

void EndpointDetail::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool EndpointDetail::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void EndpointDetail::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string EndpointDetail::getEndpointGroupId() const
{
    return endpointGroupId_;
}

void EndpointDetail::setEndpointGroupId(const std::string& value)
{
    endpointGroupId_ = value;
    endpointGroupIdIsSet_ = true;
}

bool EndpointDetail::endpointGroupIdIsSet() const
{
    return endpointGroupIdIsSet_;
}

void EndpointDetail::unsetendpointGroupId()
{
    endpointGroupIdIsSet_ = false;
}

EndpointType EndpointDetail::getResourceType() const
{
    return resourceType_;
}

void EndpointDetail::setResourceType(const EndpointType& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool EndpointDetail::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void EndpointDetail::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

ConfigStatus EndpointDetail::getStatus() const
{
    return status_;
}

void EndpointDetail::setStatus(const ConfigStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool EndpointDetail::statusIsSet() const
{
    return statusIsSet_;
}

void EndpointDetail::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t EndpointDetail::getWeight() const
{
    return weight_;
}

void EndpointDetail::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool EndpointDetail::weightIsSet() const
{
    return weightIsSet_;
}

void EndpointDetail::unsetweight()
{
    weightIsSet_ = false;
}

std::string EndpointDetail::getHealthState() const
{
    return healthState_;
}

void EndpointDetail::setHealthState(const std::string& value)
{
    healthState_ = value;
    healthStateIsSet_ = true;
}

bool EndpointDetail::healthStateIsSet() const
{
    return healthStateIsSet_;
}

void EndpointDetail::unsethealthState()
{
    healthStateIsSet_ = false;
}

utility::datetime EndpointDetail::getCreatedAt() const
{
    return createdAt_;
}

void EndpointDetail::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool EndpointDetail::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void EndpointDetail::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime EndpointDetail::getUpdatedAt() const
{
    return updatedAt_;
}

void EndpointDetail::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool EndpointDetail::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void EndpointDetail::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string EndpointDetail::getDomainId() const
{
    return domainId_;
}

void EndpointDetail::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool EndpointDetail::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void EndpointDetail::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string EndpointDetail::getIpAddress() const
{
    return ipAddress_;
}

void EndpointDetail::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool EndpointDetail::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void EndpointDetail::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

FrozenInfo EndpointDetail::getFrozenInfo() const
{
    return frozenInfo_;
}

void EndpointDetail::setFrozenInfo(const FrozenInfo& value)
{
    frozenInfo_ = value;
    frozenInfoIsSet_ = true;
}

bool EndpointDetail::frozenInfoIsSet() const
{
    return frozenInfoIsSet_;
}

void EndpointDetail::unsetfrozenInfo()
{
    frozenInfoIsSet_ = false;
}

}
}
}
}
}


