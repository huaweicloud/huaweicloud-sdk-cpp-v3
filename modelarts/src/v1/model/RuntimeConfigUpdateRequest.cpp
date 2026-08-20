

#include "huaweicloud/modelarts/v1/model/RuntimeConfigUpdateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RuntimeConfigUpdateRequest::RuntimeConfigUpdateRequest()
{
    serviceInvokeIsSet_ = false;
    serviceLimitIsSet_ = false;
    serviceSecretIsSet_ = false;
    serverTaskLimitIsSet_ = false;
}

RuntimeConfigUpdateRequest::~RuntimeConfigUpdateRequest() = default;

void RuntimeConfigUpdateRequest::validate()
{
}

web::json::value RuntimeConfigUpdateRequest::toJson() const
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
bool RuntimeConfigUpdateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_invoke"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_invoke"));
        if(!fieldValue.is_null())
        {
            ServiceInvokeUpdateRequest refVal;
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


ServiceInvokeUpdateRequest RuntimeConfigUpdateRequest::getServiceInvoke() const
{
    return serviceInvoke_;
}

void RuntimeConfigUpdateRequest::setServiceInvoke(const ServiceInvokeUpdateRequest& value)
{
    serviceInvoke_ = value;
    serviceInvokeIsSet_ = true;
}

bool RuntimeConfigUpdateRequest::serviceInvokeIsSet() const
{
    return serviceInvokeIsSet_;
}

void RuntimeConfigUpdateRequest::unsetserviceInvoke()
{
    serviceInvokeIsSet_ = false;
}

ServiceLimit RuntimeConfigUpdateRequest::getServiceLimit() const
{
    return serviceLimit_;
}

void RuntimeConfigUpdateRequest::setServiceLimit(const ServiceLimit& value)
{
    serviceLimit_ = value;
    serviceLimitIsSet_ = true;
}

bool RuntimeConfigUpdateRequest::serviceLimitIsSet() const
{
    return serviceLimitIsSet_;
}

void RuntimeConfigUpdateRequest::unsetserviceLimit()
{
    serviceLimitIsSet_ = false;
}

ServiceSecret RuntimeConfigUpdateRequest::getServiceSecret() const
{
    return serviceSecret_;
}

void RuntimeConfigUpdateRequest::setServiceSecret(const ServiceSecret& value)
{
    serviceSecret_ = value;
    serviceSecretIsSet_ = true;
}

bool RuntimeConfigUpdateRequest::serviceSecretIsSet() const
{
    return serviceSecretIsSet_;
}

void RuntimeConfigUpdateRequest::unsetserviceSecret()
{
    serviceSecretIsSet_ = false;
}

ServerTaskLimit RuntimeConfigUpdateRequest::getServerTaskLimit() const
{
    return serverTaskLimit_;
}

void RuntimeConfigUpdateRequest::setServerTaskLimit(const ServerTaskLimit& value)
{
    serverTaskLimit_ = value;
    serverTaskLimitIsSet_ = true;
}

bool RuntimeConfigUpdateRequest::serverTaskLimitIsSet() const
{
    return serverTaskLimitIsSet_;
}

void RuntimeConfigUpdateRequest::unsetserverTaskLimit()
{
    serverTaskLimitIsSet_ = false;
}

}
}
}
}
}


