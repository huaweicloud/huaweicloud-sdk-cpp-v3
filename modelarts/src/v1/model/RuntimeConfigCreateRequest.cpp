

#include "huaweicloud/modelarts/v1/model/RuntimeConfigCreateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RuntimeConfigCreateRequest::RuntimeConfigCreateRequest()
{
    serviceInvokeIsSet_ = false;
    serviceLimitIsSet_ = false;
    serviceSecretIsSet_ = false;
    serverTaskLimitIsSet_ = false;
}

RuntimeConfigCreateRequest::~RuntimeConfigCreateRequest() = default;

void RuntimeConfigCreateRequest::validate()
{
}

web::json::value RuntimeConfigCreateRequest::toJson() const
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
bool RuntimeConfigCreateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_invoke"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_invoke"));
        if(!fieldValue.is_null())
        {
            ServiceInvokeCreateRequest refVal;
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


ServiceInvokeCreateRequest RuntimeConfigCreateRequest::getServiceInvoke() const
{
    return serviceInvoke_;
}

void RuntimeConfigCreateRequest::setServiceInvoke(const ServiceInvokeCreateRequest& value)
{
    serviceInvoke_ = value;
    serviceInvokeIsSet_ = true;
}

bool RuntimeConfigCreateRequest::serviceInvokeIsSet() const
{
    return serviceInvokeIsSet_;
}

void RuntimeConfigCreateRequest::unsetserviceInvoke()
{
    serviceInvokeIsSet_ = false;
}

ServiceLimit RuntimeConfigCreateRequest::getServiceLimit() const
{
    return serviceLimit_;
}

void RuntimeConfigCreateRequest::setServiceLimit(const ServiceLimit& value)
{
    serviceLimit_ = value;
    serviceLimitIsSet_ = true;
}

bool RuntimeConfigCreateRequest::serviceLimitIsSet() const
{
    return serviceLimitIsSet_;
}

void RuntimeConfigCreateRequest::unsetserviceLimit()
{
    serviceLimitIsSet_ = false;
}

ServiceSecret RuntimeConfigCreateRequest::getServiceSecret() const
{
    return serviceSecret_;
}

void RuntimeConfigCreateRequest::setServiceSecret(const ServiceSecret& value)
{
    serviceSecret_ = value;
    serviceSecretIsSet_ = true;
}

bool RuntimeConfigCreateRequest::serviceSecretIsSet() const
{
    return serviceSecretIsSet_;
}

void RuntimeConfigCreateRequest::unsetserviceSecret()
{
    serviceSecretIsSet_ = false;
}

ServerTaskLimit RuntimeConfigCreateRequest::getServerTaskLimit() const
{
    return serverTaskLimit_;
}

void RuntimeConfigCreateRequest::setServerTaskLimit(const ServerTaskLimit& value)
{
    serverTaskLimit_ = value;
    serverTaskLimitIsSet_ = true;
}

bool RuntimeConfigCreateRequest::serverTaskLimitIsSet() const
{
    return serverTaskLimitIsSet_;
}

void RuntimeConfigCreateRequest::unsetserverTaskLimit()
{
    serverTaskLimitIsSet_ = false;
}

}
}
}
}
}


