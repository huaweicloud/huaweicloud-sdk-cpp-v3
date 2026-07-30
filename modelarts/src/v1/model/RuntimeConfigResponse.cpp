

#include "huaweicloud/modelarts/v1/model/RuntimeConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RuntimeConfigResponse::RuntimeConfigResponse()
{
    serviceInvokeIsSet_ = false;
    serviceLimitIsSet_ = false;
    serviceSecretIsSet_ = false;
    serverTaskLimitIsSet_ = false;
}

RuntimeConfigResponse::~RuntimeConfigResponse() = default;

void RuntimeConfigResponse::validate()
{
}

web::json::value RuntimeConfigResponse::toJson() const
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
bool RuntimeConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_invoke"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_invoke"));
        if(!fieldValue.is_null())
        {
            ServiceInvokeResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceInvoke(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_limit"));
        if(!fieldValue.is_null())
        {
            ServiceLimitResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_secret"));
        if(!fieldValue.is_null())
        {
            ServiceSecretResponse refVal;
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


ServiceInvokeResponse RuntimeConfigResponse::getServiceInvoke() const
{
    return serviceInvoke_;
}

void RuntimeConfigResponse::setServiceInvoke(const ServiceInvokeResponse& value)
{
    serviceInvoke_ = value;
    serviceInvokeIsSet_ = true;
}

bool RuntimeConfigResponse::serviceInvokeIsSet() const
{
    return serviceInvokeIsSet_;
}

void RuntimeConfigResponse::unsetserviceInvoke()
{
    serviceInvokeIsSet_ = false;
}

ServiceLimitResponse RuntimeConfigResponse::getServiceLimit() const
{
    return serviceLimit_;
}

void RuntimeConfigResponse::setServiceLimit(const ServiceLimitResponse& value)
{
    serviceLimit_ = value;
    serviceLimitIsSet_ = true;
}

bool RuntimeConfigResponse::serviceLimitIsSet() const
{
    return serviceLimitIsSet_;
}

void RuntimeConfigResponse::unsetserviceLimit()
{
    serviceLimitIsSet_ = false;
}

ServiceSecretResponse RuntimeConfigResponse::getServiceSecret() const
{
    return serviceSecret_;
}

void RuntimeConfigResponse::setServiceSecret(const ServiceSecretResponse& value)
{
    serviceSecret_ = value;
    serviceSecretIsSet_ = true;
}

bool RuntimeConfigResponse::serviceSecretIsSet() const
{
    return serviceSecretIsSet_;
}

void RuntimeConfigResponse::unsetserviceSecret()
{
    serviceSecretIsSet_ = false;
}

ServerTaskLimit RuntimeConfigResponse::getServerTaskLimit() const
{
    return serverTaskLimit_;
}

void RuntimeConfigResponse::setServerTaskLimit(const ServerTaskLimit& value)
{
    serverTaskLimit_ = value;
    serverTaskLimitIsSet_ = true;
}

bool RuntimeConfigResponse::serverTaskLimitIsSet() const
{
    return serverTaskLimitIsSet_;
}

void RuntimeConfigResponse::unsetserverTaskLimit()
{
    serverTaskLimitIsSet_ = false;
}

}
}
}
}
}


