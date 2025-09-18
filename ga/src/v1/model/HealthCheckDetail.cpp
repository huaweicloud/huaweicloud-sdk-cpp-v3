

#include "huaweicloud/ga/v1/model/HealthCheckDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




HealthCheckDetail::HealthCheckDetail()
{
    id_ = "";
    idIsSet_ = false;
    endpointGroupId_ = "";
    endpointGroupIdIsSet_ = false;
    protocolIsSet_ = false;
    statusIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
    timeout_ = 0;
    timeoutIsSet_ = false;
    maxRetries_ = 0;
    maxRetriesIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    frozenInfoIsSet_ = false;
}

HealthCheckDetail::~HealthCheckDetail() = default;

void HealthCheckDetail::validate()
{
}

web::json::value HealthCheckDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(endpointGroupIdIsSet_) {
        val[utility::conversions::to_string_t("endpoint_group_id")] = ModelBase::toJson(endpointGroupId_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }
    if(timeoutIsSet_) {
        val[utility::conversions::to_string_t("timeout")] = ModelBase::toJson(timeout_);
    }
    if(maxRetriesIsSet_) {
        val[utility::conversions::to_string_t("max_retries")] = ModelBase::toJson(maxRetries_);
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
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(frozenInfoIsSet_) {
        val[utility::conversions::to_string_t("frozen_info")] = ModelBase::toJson(frozenInfo_);
    }

    return val;
}
bool HealthCheckDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("endpoint_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            HealthCheckProtocol refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_retries"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_retries"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxRetries(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
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


std::string HealthCheckDetail::getId() const
{
    return id_;
}

void HealthCheckDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HealthCheckDetail::idIsSet() const
{
    return idIsSet_;
}

void HealthCheckDetail::unsetid()
{
    idIsSet_ = false;
}

std::string HealthCheckDetail::getEndpointGroupId() const
{
    return endpointGroupId_;
}

void HealthCheckDetail::setEndpointGroupId(const std::string& value)
{
    endpointGroupId_ = value;
    endpointGroupIdIsSet_ = true;
}

bool HealthCheckDetail::endpointGroupIdIsSet() const
{
    return endpointGroupIdIsSet_;
}

void HealthCheckDetail::unsetendpointGroupId()
{
    endpointGroupIdIsSet_ = false;
}

HealthCheckProtocol HealthCheckDetail::getProtocol() const
{
    return protocol_;
}

void HealthCheckDetail::setProtocol(const HealthCheckProtocol& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool HealthCheckDetail::protocolIsSet() const
{
    return protocolIsSet_;
}

void HealthCheckDetail::unsetprotocol()
{
    protocolIsSet_ = false;
}

ConfigStatus HealthCheckDetail::getStatus() const
{
    return status_;
}

void HealthCheckDetail::setStatus(const ConfigStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool HealthCheckDetail::statusIsSet() const
{
    return statusIsSet_;
}

void HealthCheckDetail::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t HealthCheckDetail::getPort() const
{
    return port_;
}

void HealthCheckDetail::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool HealthCheckDetail::portIsSet() const
{
    return portIsSet_;
}

void HealthCheckDetail::unsetport()
{
    portIsSet_ = false;
}

int32_t HealthCheckDetail::getInterval() const
{
    return interval_;
}

void HealthCheckDetail::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool HealthCheckDetail::intervalIsSet() const
{
    return intervalIsSet_;
}

void HealthCheckDetail::unsetinterval()
{
    intervalIsSet_ = false;
}

int32_t HealthCheckDetail::getTimeout() const
{
    return timeout_;
}

void HealthCheckDetail::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool HealthCheckDetail::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void HealthCheckDetail::unsettimeout()
{
    timeoutIsSet_ = false;
}

int32_t HealthCheckDetail::getMaxRetries() const
{
    return maxRetries_;
}

void HealthCheckDetail::setMaxRetries(int32_t value)
{
    maxRetries_ = value;
    maxRetriesIsSet_ = true;
}

bool HealthCheckDetail::maxRetriesIsSet() const
{
    return maxRetriesIsSet_;
}

void HealthCheckDetail::unsetmaxRetries()
{
    maxRetriesIsSet_ = false;
}

utility::datetime HealthCheckDetail::getCreatedAt() const
{
    return createdAt_;
}

void HealthCheckDetail::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool HealthCheckDetail::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void HealthCheckDetail::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime HealthCheckDetail::getUpdatedAt() const
{
    return updatedAt_;
}

void HealthCheckDetail::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool HealthCheckDetail::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void HealthCheckDetail::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string HealthCheckDetail::getDomainId() const
{
    return domainId_;
}

void HealthCheckDetail::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool HealthCheckDetail::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void HealthCheckDetail::unsetdomainId()
{
    domainIdIsSet_ = false;
}

bool HealthCheckDetail::isEnabled() const
{
    return enabled_;
}

void HealthCheckDetail::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool HealthCheckDetail::enabledIsSet() const
{
    return enabledIsSet_;
}

void HealthCheckDetail::unsetenabled()
{
    enabledIsSet_ = false;
}

FrozenInfo HealthCheckDetail::getFrozenInfo() const
{
    return frozenInfo_;
}

void HealthCheckDetail::setFrozenInfo(const FrozenInfo& value)
{
    frozenInfo_ = value;
    frozenInfoIsSet_ = true;
}

bool HealthCheckDetail::frozenInfoIsSet() const
{
    return frozenInfoIsSet_;
}

void HealthCheckDetail::unsetfrozenInfo()
{
    frozenInfoIsSet_ = false;
}

}
}
}
}
}


