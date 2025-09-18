

#include "huaweicloud/ga/v1/model/UpdateHealthCheckOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateHealthCheckOption::UpdateHealthCheckOption()
{
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

UpdateHealthCheckOption::~UpdateHealthCheckOption() = default;

void UpdateHealthCheckOption::validate()
{
}

web::json::value UpdateHealthCheckOption::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool UpdateHealthCheckOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


HealthCheckProtocol UpdateHealthCheckOption::getProtocol() const
{
    return protocol_;
}

void UpdateHealthCheckOption::setProtocol(const HealthCheckProtocol& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool UpdateHealthCheckOption::protocolIsSet() const
{
    return protocolIsSet_;
}

void UpdateHealthCheckOption::unsetprotocol()
{
    protocolIsSet_ = false;
}

int32_t UpdateHealthCheckOption::getPort() const
{
    return port_;
}

void UpdateHealthCheckOption::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool UpdateHealthCheckOption::portIsSet() const
{
    return portIsSet_;
}

void UpdateHealthCheckOption::unsetport()
{
    portIsSet_ = false;
}

int32_t UpdateHealthCheckOption::getInterval() const
{
    return interval_;
}

void UpdateHealthCheckOption::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool UpdateHealthCheckOption::intervalIsSet() const
{
    return intervalIsSet_;
}

void UpdateHealthCheckOption::unsetinterval()
{
    intervalIsSet_ = false;
}

int32_t UpdateHealthCheckOption::getTimeout() const
{
    return timeout_;
}

void UpdateHealthCheckOption::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool UpdateHealthCheckOption::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void UpdateHealthCheckOption::unsettimeout()
{
    timeoutIsSet_ = false;
}

int32_t UpdateHealthCheckOption::getMaxRetries() const
{
    return maxRetries_;
}

void UpdateHealthCheckOption::setMaxRetries(int32_t value)
{
    maxRetries_ = value;
    maxRetriesIsSet_ = true;
}

bool UpdateHealthCheckOption::maxRetriesIsSet() const
{
    return maxRetriesIsSet_;
}

void UpdateHealthCheckOption::unsetmaxRetries()
{
    maxRetriesIsSet_ = false;
}

bool UpdateHealthCheckOption::isEnabled() const
{
    return enabled_;
}

void UpdateHealthCheckOption::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool UpdateHealthCheckOption::enabledIsSet() const
{
    return enabledIsSet_;
}

void UpdateHealthCheckOption::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


