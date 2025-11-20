

#include "huaweicloud/metastudio/v1/model/UpdateTenantServiceConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateTenantServiceConfigsResponse::UpdateTenantServiceConfigsResponse()
{
    serviceSharedConfigIsSet_ = false;
    tenantLogConfigIsSet_ = false;
    subAccountControlConfigIsSet_ = false;
    isAiMarkOn_ = false;
    isAiMarkOnIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateTenantServiceConfigsResponse::~UpdateTenantServiceConfigsResponse() = default;

void UpdateTenantServiceConfigsResponse::validate()
{
}

web::json::value UpdateTenantServiceConfigsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceSharedConfigIsSet_) {
        val[utility::conversions::to_string_t("service_shared_config")] = ModelBase::toJson(serviceSharedConfig_);
    }
    if(tenantLogConfigIsSet_) {
        val[utility::conversions::to_string_t("tenant_log_config")] = ModelBase::toJson(tenantLogConfig_);
    }
    if(subAccountControlConfigIsSet_) {
        val[utility::conversions::to_string_t("sub_account_control_config")] = ModelBase::toJson(subAccountControlConfig_);
    }
    if(isAiMarkOnIsSet_) {
        val[utility::conversions::to_string_t("is_ai_mark_on")] = ModelBase::toJson(isAiMarkOn_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateTenantServiceConfigsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_shared_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_shared_config"));
        if(!fieldValue.is_null())
        {
            ServiceSharedConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceSharedConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_log_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_log_config"));
        if(!fieldValue.is_null())
        {
            TenantLogConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantLogConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_account_control_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_account_control_config"));
        if(!fieldValue.is_null())
        {
            SubAccountControlConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubAccountControlConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_ai_mark_on"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_ai_mark_on"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAiMarkOn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


ServiceSharedConfig UpdateTenantServiceConfigsResponse::getServiceSharedConfig() const
{
    return serviceSharedConfig_;
}

void UpdateTenantServiceConfigsResponse::setServiceSharedConfig(const ServiceSharedConfig& value)
{
    serviceSharedConfig_ = value;
    serviceSharedConfigIsSet_ = true;
}

bool UpdateTenantServiceConfigsResponse::serviceSharedConfigIsSet() const
{
    return serviceSharedConfigIsSet_;
}

void UpdateTenantServiceConfigsResponse::unsetserviceSharedConfig()
{
    serviceSharedConfigIsSet_ = false;
}

TenantLogConfig UpdateTenantServiceConfigsResponse::getTenantLogConfig() const
{
    return tenantLogConfig_;
}

void UpdateTenantServiceConfigsResponse::setTenantLogConfig(const TenantLogConfig& value)
{
    tenantLogConfig_ = value;
    tenantLogConfigIsSet_ = true;
}

bool UpdateTenantServiceConfigsResponse::tenantLogConfigIsSet() const
{
    return tenantLogConfigIsSet_;
}

void UpdateTenantServiceConfigsResponse::unsettenantLogConfig()
{
    tenantLogConfigIsSet_ = false;
}

SubAccountControlConfig UpdateTenantServiceConfigsResponse::getSubAccountControlConfig() const
{
    return subAccountControlConfig_;
}

void UpdateTenantServiceConfigsResponse::setSubAccountControlConfig(const SubAccountControlConfig& value)
{
    subAccountControlConfig_ = value;
    subAccountControlConfigIsSet_ = true;
}

bool UpdateTenantServiceConfigsResponse::subAccountControlConfigIsSet() const
{
    return subAccountControlConfigIsSet_;
}

void UpdateTenantServiceConfigsResponse::unsetsubAccountControlConfig()
{
    subAccountControlConfigIsSet_ = false;
}

bool UpdateTenantServiceConfigsResponse::isIsAiMarkOn() const
{
    return isAiMarkOn_;
}

void UpdateTenantServiceConfigsResponse::setIsAiMarkOn(bool value)
{
    isAiMarkOn_ = value;
    isAiMarkOnIsSet_ = true;
}

bool UpdateTenantServiceConfigsResponse::isAiMarkOnIsSet() const
{
    return isAiMarkOnIsSet_;
}

void UpdateTenantServiceConfigsResponse::unsetisAiMarkOn()
{
    isAiMarkOnIsSet_ = false;
}

std::string UpdateTenantServiceConfigsResponse::getTenantId() const
{
    return tenantId_;
}

void UpdateTenantServiceConfigsResponse::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool UpdateTenantServiceConfigsResponse::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void UpdateTenantServiceConfigsResponse::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string UpdateTenantServiceConfigsResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateTenantServiceConfigsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateTenantServiceConfigsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateTenantServiceConfigsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


