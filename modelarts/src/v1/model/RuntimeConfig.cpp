

#include "huaweicloud/modelarts/v1/model/RuntimeConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RuntimeConfig::RuntimeConfig()
{
    serviceInvokeIsSet_ = false;
    serviceLimitIsSet_ = false;
    serviceSecretIsSet_ = false;
    serverTaskLimitIsSet_ = false;
}

RuntimeConfig::~RuntimeConfig() = default;

void RuntimeConfig::validate()
{
}

web::json::value RuntimeConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceInvokeIsSet_) {
        val[utility::conversions::to_string_t("service_invoke")] = ModelBase::toJson(serviceInvoke_);
    }
    if(serviceLimitIsSet_) {
        val[utility::conversions::to_string_t("service_limit")] = ModelBase::toJson(serviceLimit_);
    }
    if(serviceSecretIsSet_) {
        val[utility::conversions::to_string_t("service_secret")] = ModelBase::toJson(serviceSecret_);
    }
    if(serverTaskLimitIsSet_) {
        val[utility::conversions::to_string_t("server_task_limit")] = ModelBase::toJson(serverTaskLimit_);
    }

    return val;
}
bool RuntimeConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_invoke"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_invoke"));
        if(!fieldValue.is_null())
        {
            ServiceInvoke refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceInvoke(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_limit"));
        if(!fieldValue.is_null())
        {
            ServiceLimit refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_secret"));
        if(!fieldValue.is_null())
        {
            ServiceSecret refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceSecret(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_task_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_task_limit"));
        if(!fieldValue.is_null())
        {
            ServerTaskLimit refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerTaskLimit(refVal);
        }
    }
    return ok;
}


ServiceInvoke RuntimeConfig::getServiceInvoke() const
{
    return serviceInvoke_;
}

void RuntimeConfig::setServiceInvoke(const ServiceInvoke& value)
{
    serviceInvoke_ = value;
    serviceInvokeIsSet_ = true;
}

bool RuntimeConfig::serviceInvokeIsSet() const
{
    return serviceInvokeIsSet_;
}

void RuntimeConfig::unsetserviceInvoke()
{
    serviceInvokeIsSet_ = false;
}

ServiceLimit RuntimeConfig::getServiceLimit() const
{
    return serviceLimit_;
}

void RuntimeConfig::setServiceLimit(const ServiceLimit& value)
{
    serviceLimit_ = value;
    serviceLimitIsSet_ = true;
}

bool RuntimeConfig::serviceLimitIsSet() const
{
    return serviceLimitIsSet_;
}

void RuntimeConfig::unsetserviceLimit()
{
    serviceLimitIsSet_ = false;
}

ServiceSecret RuntimeConfig::getServiceSecret() const
{
    return serviceSecret_;
}

void RuntimeConfig::setServiceSecret(const ServiceSecret& value)
{
    serviceSecret_ = value;
    serviceSecretIsSet_ = true;
}

bool RuntimeConfig::serviceSecretIsSet() const
{
    return serviceSecretIsSet_;
}

void RuntimeConfig::unsetserviceSecret()
{
    serviceSecretIsSet_ = false;
}

ServerTaskLimit RuntimeConfig::getServerTaskLimit() const
{
    return serverTaskLimit_;
}

void RuntimeConfig::setServerTaskLimit(const ServerTaskLimit& value)
{
    serverTaskLimit_ = value;
    serverTaskLimitIsSet_ = true;
}

bool RuntimeConfig::serverTaskLimitIsSet() const
{
    return serverTaskLimitIsSet_;
}

void RuntimeConfig::unsetserverTaskLimit()
{
    serverTaskLimitIsSet_ = false;
}

}
}
}
}
}


