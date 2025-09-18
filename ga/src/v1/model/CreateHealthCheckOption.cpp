

#include "huaweicloud/ga/v1/model/CreateHealthCheckOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateHealthCheckOption::CreateHealthCheckOption()
{
    endpointGroupId_ = "";
    endpointGroupIdIsSet_ = false;
    protocolIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
    timeout_ = 0;
    timeoutIsSet_ = false;
    maxRetries_ = 0;
    maxRetriesIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
}

CreateHealthCheckOption::~CreateHealthCheckOption() = default;

void CreateHealthCheckOption::validate()
{
}

web::json::value CreateHealthCheckOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointGroupIdIsSet_) {
        val[utility::conversions::to_string_t("endpoint_group_id")] = ModelBase::toJson(endpointGroupId_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
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
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}
bool CreateHealthCheckOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    return ok;
}


std::string CreateHealthCheckOption::getEndpointGroupId() const
{
    return endpointGroupId_;
}

void CreateHealthCheckOption::setEndpointGroupId(const std::string& value)
{
    endpointGroupId_ = value;
    endpointGroupIdIsSet_ = true;
}

bool CreateHealthCheckOption::endpointGroupIdIsSet() const
{
    return endpointGroupIdIsSet_;
}

void CreateHealthCheckOption::unsetendpointGroupId()
{
    endpointGroupIdIsSet_ = false;
}

HealthCheckProtocol CreateHealthCheckOption::getProtocol() const
{
    return protocol_;
}

void CreateHealthCheckOption::setProtocol(const HealthCheckProtocol& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool CreateHealthCheckOption::protocolIsSet() const
{
    return protocolIsSet_;
}

void CreateHealthCheckOption::unsetprotocol()
{
    protocolIsSet_ = false;
}

int32_t CreateHealthCheckOption::getPort() const
{
    return port_;
}

void CreateHealthCheckOption::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool CreateHealthCheckOption::portIsSet() const
{
    return portIsSet_;
}

void CreateHealthCheckOption::unsetport()
{
    portIsSet_ = false;
}

int32_t CreateHealthCheckOption::getInterval() const
{
    return interval_;
}

void CreateHealthCheckOption::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool CreateHealthCheckOption::intervalIsSet() const
{
    return intervalIsSet_;
}

void CreateHealthCheckOption::unsetinterval()
{
    intervalIsSet_ = false;
}

int32_t CreateHealthCheckOption::getTimeout() const
{
    return timeout_;
}

void CreateHealthCheckOption::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool CreateHealthCheckOption::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void CreateHealthCheckOption::unsettimeout()
{
    timeoutIsSet_ = false;
}

int32_t CreateHealthCheckOption::getMaxRetries() const
{
    return maxRetries_;
}

void CreateHealthCheckOption::setMaxRetries(int32_t value)
{
    maxRetries_ = value;
    maxRetriesIsSet_ = true;
}

bool CreateHealthCheckOption::maxRetriesIsSet() const
{
    return maxRetriesIsSet_;
}

void CreateHealthCheckOption::unsetmaxRetries()
{
    maxRetriesIsSet_ = false;
}

bool CreateHealthCheckOption::isEnabled() const
{
    return enabled_;
}

void CreateHealthCheckOption::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool CreateHealthCheckOption::enabledIsSet() const
{
    return enabledIsSet_;
}

void CreateHealthCheckOption::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


