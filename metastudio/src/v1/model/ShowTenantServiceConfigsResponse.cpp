

#include "huaweicloud/metastudio/v1/model/ShowTenantServiceConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTenantServiceConfigsResponse::ShowTenantServiceConfigsResponse()
{
    serviceSharedConfigIsSet_ = false;
    tenantLogConfigIsSet_ = false;
    subAccountControlConfigIsSet_ = false;
    isAiMarkOn_ = false;
    isAiMarkOnIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowTenantServiceConfigsResponse::~ShowTenantServiceConfigsResponse() = default;

void ShowTenantServiceConfigsResponse::validate()
{
}

web::json::value ShowTenantServiceConfigsResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowTenantServiceConfigsResponse::fromJson(const web::json::value& val)
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


ServiceSharedConfig ShowTenantServiceConfigsResponse::getServiceSharedConfig() const
{
    return serviceSharedConfig_;
}

void ShowTenantServiceConfigsResponse::setServiceSharedConfig(const ServiceSharedConfig& value)
{
    serviceSharedConfig_ = value;
    serviceSharedConfigIsSet_ = true;
}

bool ShowTenantServiceConfigsResponse::serviceSharedConfigIsSet() const
{
    return serviceSharedConfigIsSet_;
}

void ShowTenantServiceConfigsResponse::unsetserviceSharedConfig()
{
    serviceSharedConfigIsSet_ = false;
}

TenantLogConfig ShowTenantServiceConfigsResponse::getTenantLogConfig() const
{
    return tenantLogConfig_;
}

void ShowTenantServiceConfigsResponse::setTenantLogConfig(const TenantLogConfig& value)
{
    tenantLogConfig_ = value;
    tenantLogConfigIsSet_ = true;
}

bool ShowTenantServiceConfigsResponse::tenantLogConfigIsSet() const
{
    return tenantLogConfigIsSet_;
}

void ShowTenantServiceConfigsResponse::unsettenantLogConfig()
{
    tenantLogConfigIsSet_ = false;
}

SubAccountControlConfig ShowTenantServiceConfigsResponse::getSubAccountControlConfig() const
{
    return subAccountControlConfig_;
}

void ShowTenantServiceConfigsResponse::setSubAccountControlConfig(const SubAccountControlConfig& value)
{
    subAccountControlConfig_ = value;
    subAccountControlConfigIsSet_ = true;
}

bool ShowTenantServiceConfigsResponse::subAccountControlConfigIsSet() const
{
    return subAccountControlConfigIsSet_;
}

void ShowTenantServiceConfigsResponse::unsetsubAccountControlConfig()
{
    subAccountControlConfigIsSet_ = false;
}

bool ShowTenantServiceConfigsResponse::isIsAiMarkOn() const
{
    return isAiMarkOn_;
}

void ShowTenantServiceConfigsResponse::setIsAiMarkOn(bool value)
{
    isAiMarkOn_ = value;
    isAiMarkOnIsSet_ = true;
}

bool ShowTenantServiceConfigsResponse::isAiMarkOnIsSet() const
{
    return isAiMarkOnIsSet_;
}

void ShowTenantServiceConfigsResponse::unsetisAiMarkOn()
{
    isAiMarkOnIsSet_ = false;
}

std::string ShowTenantServiceConfigsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowTenantServiceConfigsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowTenantServiceConfigsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowTenantServiceConfigsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


